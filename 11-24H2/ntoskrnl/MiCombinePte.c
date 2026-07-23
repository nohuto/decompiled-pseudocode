/*
 * XREFs of MiCombinePte @ 0x140686200
 * Callers:
 *     <none>
 * Callees:
 *     MiComputeCombineHash @ 0x140335700 (MiComputeCombineHash.c)
 *     MiProcessSuitableForCombining @ 0x1403435EC (MiProcessSuitableForCombining.c)
 *     MiCombineCandidate @ 0x140344930 (MiCombineCandidate.c)
 *     MiComputeHash64 @ 0x14041CBD0 (MiComputeHash64.c)
 *     MiCombineWorkingSetTail @ 0x140686560 (MiCombineWorkingSetTail.c)
 */

__int64 __fastcall MiCombinePte(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 *v7; // r14
  _QWORD *v8; // r9
  __int64 v9; // rbx
  __int64 v10; // r15
  _QWORD *v11; // r8
  __int64 v12; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v15; // r11
  unsigned __int64 v16; // rax
  __int64 v17; // r11

  v5 = *(_QWORD *)(a1 + 32);
  if ( !*(_QWORD *)(v5 + 104) )
  {
    v6 = *(_QWORD **)(a1 + 184);
    v7 = (__int64 *)v6[3];
    v8 = (_QWORD *)*v7;
    if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 || MiProcessSuitableForCombining(v5 - 1024, a2, a3, (__int64)v8) )
    {
      if ( (int)a3 < 1 )
      {
        v9 = *(_QWORD *)a2;
        v10 = (*(_QWORD *)a2 >> 12) & 0xFFFFFFFFFFLL;
        v11 = (_QWORD *)(48 * v10 - 0x220000000000LL);
        if ( (__int64)v11[5] >= 0 )
        {
          v12 = v7[1];
          CurrentThread = KeGetCurrentThread();
          if ( v12 && *(_DWORD *)(v12 + 4) || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
            return 5LL;
          if ( (unsigned int)MiCombineCandidate(v8, 0, v11) )
          {
            ++*(_QWORD *)(v7[13] + 16);
            v15 = (_QWORD *)(v6[4] + 40LL * v6[1]);
            *v15 = 0LL;
            v15[2] = v10;
            if ( (v9 & 0x20) != 0 )
            {
              v16 = MiComputeHash64(a2 << 25 >> 16);
              *(_QWORD *)(v17 + 8) = v16;
              goto LABEL_14;
            }
            if ( (unsigned int)MiComputeCombineHash(v7, v15, 1) )
            {
LABEL_14:
              if ( ++v6[1] == v6[2] )
                return MiCombineWorkingSetTail(a1);
            }
          }
        }
      }
      return 0LL;
    }
  }
  return 4LL;
}

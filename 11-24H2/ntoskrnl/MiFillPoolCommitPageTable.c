/*
 * XREFs of MiFillPoolCommitPageTable @ 0x1402EB2D0
 * Callers:
 *     MiCommitPoolMemory @ 0x1402EB010 (MiCommitPoolMemory.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockPoolCommitWs @ 0x1402E3A94 (MiLockPoolCommitWs.c)
 *     MiLockPoolCommitPageTable @ 0x1402EA640 (MiLockPoolCommitPageTable.c)
 *     MiUnlockPoolCommitWs @ 0x1402EA9E4 (MiUnlockPoolCommitWs.c)
 *     MiAssignNonPagedPoolPte @ 0x1402EB5C0 (MiAssignNonPagedPoolPte.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiDecreaseUsedPtes @ 0x1403A4830 (MiDecreaseUsedPtes.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFillPoolCommitPageTable(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebp
  char v4; // si
  __int64 v5; // r14
  ULONG_PTR v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rdx
  unsigned int *MmInternal; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // zf
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( (*(_BYTE *)(a1 + 100) & 4) == 0 )
  {
    v3 = 0;
    v4 = 0;
    v5 = *(_QWORD *)(a1 + 72);
LABEL_3:
    result = 0x7FFFFFFFF8LL;
    while ( 1 )
    {
      v6 = *(_QWORD *)(a1 + 56);
      if ( !v6 )
        return result;
      v7 = *(_QWORD *)(a1 + 88);
      if ( v7 )
      {
        v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v8 == v7 )
          goto LABEL_7;
        if ( v3 )
        {
          MiDecreaseUsedPtes(v8, v7, v3);
          v3 = 0;
        }
        MiUnlockPageTableInternal(v5, *(_QWORD *)(a1 + 88));
        *(_QWORD *)(a1 + 88) = 0LL;
      }
      if ( !(unsigned int)MiLockPoolCommitPageTable(a1, v6) )
        KeBugCheckEx(0x1Au, 0x530AuLL, v6, 0LL, 0LL);
LABEL_7:
      v9 = *(_QWORD *)v6;
      if ( !*(_QWORD *)v6 )
        goto LABEL_12;
      if ( qword_140E2DB80 )
      {
        if ( (v9 & 0x10) != 0 )
          v9 &= ~0x10uLL;
        else
          v9 &= ~qword_140E2DB80;
      }
      v9 >>= 25;
      if ( v9 == 0x7FFFFFFFFFLL )
        v10 = 0LL;
      else
LABEL_12:
        v10 = 8 * v9 - 0x94000000000LL;
      *(_QWORD *)(a1 + 56) = v10;
      v11 = *(_WORD *)(a1 + 100);
      if ( (v11 & 1) != 0 )
      {
        ++v3;
        *(_QWORD *)v6 = CLFS_LSN_NULL_EXT;
        if ( v9 == 0x7FFFFFFFFFLL )
        {
          MiDecreaseUsedPtes(0x7FFFFFFFFFLL, *(_QWORD *)(a1 + 88), v3);
          v3 = 0;
        }
        goto LABEL_20;
      }
      if ( (v11 & 2) != 0 )
      {
        v12 = 32LL * ((unsigned __int8)v11 >> 3);
        if ( qword_140E2DB80 )
        {
          if ( (qword_140E2DB80 & v12) != 0 )
            v12 |= 0x10uLL;
          else
            v12 |= qword_140E2DB80;
        }
        *(_QWORD *)v6 = v12;
      }
      else if ( !(unsigned int)MiAssignNonPagedPoolPte(a1, (__int64)(v6 << 25) >> 16) )
      {
        goto LABEL_20;
      }
      ++*(_QWORD *)(a1 + 48);
LABEL_20:
      ++v4;
      result = 0x7FFFFFFFF8LL;
      if ( *(_QWORD *)(a1 + 56) && (v4 & 0xF) == 0 && *(_BYTE *)(a1 + 103) < 2u )
      {
        if ( (*(_DWORD *)(v5 + 184) & 0xFu) <= 5
          && ((*(_DWORD *)(v5 + 184) & 0xF) != 1 ? (v13 = (__int64 *)(v5 + 192)) : (v13 = (__int64 *)&unk_140E38740),
              (v14 = *v13, (MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal) == 0LL)
            ? (v16 = 0LL)
            : (v16 = MmInternal[81]),
              v17 = *(unsigned int *)((v16 << 6) + v14),
              (v17 & 0x40000000) != 0)
          || (v18 = KeShouldYieldProcessor() == 0, result = 0x7FFFFFFFF8LL, !v18) )
        {
          if ( v3 )
          {
            MiDecreaseUsedPtes(v17, *(_QWORD *)(a1 + 88), v3);
            v3 = 0;
          }
          MiUnlockPoolCommitWs(a1);
          MiLockPoolCommitWs(a1);
          goto LABEL_3;
        }
      }
    }
  }
  return result;
}

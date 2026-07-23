/*
 * XREFs of MiSimpleAgePte @ 0x14049EAD0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiWalkVaCheckCommon @ 0x140295E20 (MiWalkVaCheckCommon.c)
 *     MiGetVaAge @ 0x140296DE0 (MiGetVaAge.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x140303A64 (MiAcquirePrcbAgeTrimLists.c)
 *     MiAgePteWorker @ 0x1403040A0 (MiAgePteWorker.c)
 */

__int64 __fastcall MiSimpleAgePte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rsi
  _QWORD *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  char VaAge; // r12
  _DWORD *v13; // rcx
  unsigned __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v14 = MI_READ_PTE_LOCK_FREE(a2);
  v7 = (_QWORD *)(48 * ((v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  if ( !(unsigned int)MiWalkVaCheckCommon(v3, (_QWORD *)a2, v7, a3 == 0, &v14) )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 184);
  v10 = (__int64)(a2 << 25) >> 16;
  VaAge = MiGetVaAge(v8, v10);
  if ( (v14 & 0x20) == 0 )
    goto LABEL_3;
  if ( !*(_QWORD *)(v9 + 72) )
    goto LABEL_6;
  if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0 )
  {
    if ( (MiGetPagePrivilege(48 * ((v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL) & 0x41) != 0 )
      goto LABEL_12;
LABEL_6:
    MiAgePteWorker(a1, a2, (__int64)(a2 << 25) >> 16, (unsigned __int64)v7, (int *)v9, 3);
    goto LABEL_3;
  }
  if ( v10 > 0x7FFFFFFEFFFFLL )
    goto LABEL_6;
LABEL_12:
  if ( *(_QWORD *)(v9 + 72) == 1LL )
    MiAcquirePrcbAgeTrimLists(v3, (__int64 **)(v9 + 56));
  v13 = *(_DWORD **)(v9 + 72);
  *(_QWORD *)&v13[2 * (*v13)++ + 2] = v10 & 0xFFFFFFFFFFFFF000uLL;
LABEL_3:
  if ( VaAge )
    return 0LL;
  return ++*(_QWORD *)(v9 + 40) >= *(_QWORD *)(v9 + 48) ? 4 : 0;
}

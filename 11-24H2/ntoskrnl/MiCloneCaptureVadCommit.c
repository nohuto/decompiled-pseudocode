/*
 * XREFs of MiCloneCaptureVadCommit @ 0x1404A4B08
 * Callers:
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14020FF30 (MiGetNextPageTable.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     MiCloneDiscardVadCommit @ 0x140A96358 (MiCloneDiscardVadCommit.c)
 */

__int64 __fastcall MiCloneCaptureVadCommit(__int64 a1)
{
  _QWORD *Pool; // rax
  _QWORD *v3; // rbx
  int v4; // edi
  struct _LIST_ENTRY **p_Blink; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r13
  char v8; // r12
  __int64 NextPageTable; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rbp
  _QWORD *v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  int v17; // [rsp+68h] [rbp+10h] BYREF

  Pool = (_QWORD *)MiAllocatePool(0x40uLL, 0x90uLL, 1666607437);
  v3 = Pool;
  if ( !Pool )
    return 3221225626LL;
  Pool[1] = 0LL;
  *Pool = 0LL;
  v4 = 0;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v6 = 8 * ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v7 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v8 = MiLockWorkingSetExclusive((__int64)p_Blink);
  while ( 1 )
  {
    if ( v6 > v7 || (NextPageTable = MiGetNextPageTable(v6, v7, v8, 4, &v17)) == 0 )
    {
      MiUnlockWorkingSetExclusive((__int64)p_Blink, v8);
      goto LABEL_5;
    }
    v11 = NextPageTable & 0xFFFFFFFFFFFFF000uLL;
    v12 = v3[1];
    v13 = (__int64)((NextPageTable & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16;
    if ( !v12 )
      goto LABEL_10;
    v15 = v3[v12 + 1];
    v16 = v15 & 0x1FFFFF;
    if ( v16 + 1 < v16 || v16 == 0x1FFFFF || (v15 & 0xFFFFFFFFFFE00000uLL) + ((v16 + 1) << 21) != v13 )
      break;
    v3[v12 + 1] = (v15 + 1) ^ (v15 ^ (v15 + 1)) & 0xFFFFFFFFFFE00000uLL;
LABEL_11:
    v6 = v11 + 4096;
  }
  if ( v12 != 16 )
  {
LABEL_10:
    v3[v3[1]++ + 2] = v13;
    goto LABEL_11;
  }
  MiUnlockWorkingSetExclusive((__int64)p_Blink, v8);
  v14 = (_QWORD *)MiAllocatePool(0x40uLL, 0x90uLL, 1666607437);
  if ( v14 )
  {
    v14[1] = 0LL;
    *v14 = v3;
    v3 = v14;
    MiLockWorkingSetExclusive((__int64)p_Blink);
    goto LABEL_10;
  }
  v4 = -1073741670;
LABEL_5:
  *(_QWORD *)(a1 + 8) = v3;
  if ( v4 < 0 )
    MiCloneDiscardVadCommit(a1);
  return (unsigned int)v4;
}

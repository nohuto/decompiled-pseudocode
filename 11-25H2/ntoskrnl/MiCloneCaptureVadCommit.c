/*
 * XREFs of MiCloneCaptureVadCommit @ 0x1404B369C
 * Callers:
 *     MiAllocateChildVads @ 0x140A40978 (MiAllocateChildVads.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiGetNextPageTable @ 0x14037D8BC (MiGetNextPageTable.c)
 *     MiCloneDiscardVadCommit @ 0x140A950C8 (MiCloneDiscardVadCommit.c)
 */

__int64 __fastcall MiCloneCaptureVadCommit(__int64 a1)
{
  _QWORD *Pool; // rax
  _QWORD *v3; // rbx
  int v5; // edi
  struct _LIST_ENTRY **p_Blink; // r15
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r13
  char v9; // r12
  __int64 NextPageTable; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rax
  int v17; // [rsp+68h] [rbp+10h] BYREF

  Pool = (_QWORD *)MiAllocatePool(0x40uLL, 0x90uLL, 1666607437);
  v3 = Pool;
  if ( !Pool )
    return 3221225626LL;
  Pool[1] = 0LL;
  *Pool = 0LL;
  v5 = 0;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v7 = 8 * ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v8 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v9 = MiLockWorkingSetExclusive((__int64)p_Blink);
  while ( v7 <= v8 )
  {
    NextPageTable = MiGetNextPageTable(v7, v8, v9, 4, &v17);
    if ( !NextPageTable )
      break;
    v11 = NextPageTable & 0xFFFFFFFFFFFFF000uLL;
    v12 = v3[1];
    v13 = (__int64)((NextPageTable & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16;
    if ( v12 )
    {
      v14 = v3[v12 + 1];
      v15 = v14 & 0x1FFFFF;
      if ( v15 + 1 >= v15 && v15 != 0x1FFFFF && (v14 & 0xFFFFFFFFFFE00000uLL) + ((v15 + 1) << 21) == v13 )
      {
        v3[v12 + 1] = (v14 + 1) ^ (v14 ^ (v14 + 1)) & 0xFFFFFFFFFFE00000uLL;
        goto LABEL_15;
      }
      if ( v12 == 16 )
      {
        MiUnlockWorkingSetExclusive((__int64)p_Blink, v9);
        v16 = (_QWORD *)MiAllocatePool(0x40uLL, 0x90uLL, 1666607437);
        if ( !v16 )
        {
          v5 = -1073741670;
          goto LABEL_18;
        }
        v16[1] = 0LL;
        *v16 = v3;
        v3 = v16;
        MiLockWorkingSetExclusive((__int64)p_Blink);
      }
    }
    v3[v3[1]++ + 2] = v13;
LABEL_15:
    v7 = v11 + 4096;
  }
  MiUnlockWorkingSetExclusive((__int64)p_Blink, v9);
LABEL_18:
  *(_QWORD *)(a1 + 8) = v3;
  if ( v5 < 0 )
    MiCloneDiscardVadCommit(a1);
  return (unsigned int)v5;
}

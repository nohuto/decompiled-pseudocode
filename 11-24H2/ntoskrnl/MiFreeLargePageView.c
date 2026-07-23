/*
 * XREFs of MiFreeLargePageView @ 0x14099A530
 * Callers:
 *     MiDeletePartialCloneVads @ 0x140800B24 (MiDeletePartialCloneVads.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiReleaseVadEventBlocks @ 0x14099A250 (MiReleaseVadEventBlocks.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403C63D8 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403C6458 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReturnFullProcessCommitment @ 0x1409D8398 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiFreeLargePageView(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  unsigned __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // r14
  int v9; // ebp
  void *v10; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v7 = *(unsigned int *)(a2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 32);
  if ( !v7 )
    goto LABEL_8;
  CurrentThread = KeGetCurrentThread();
  result = -(__int64)v7;
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 1392), -(__int64)v7);
  if ( !a3 || !*(_QWORD *)(a3 + 24) )
  {
    v9 = a4 & 1;
    if ( (a4 & 1) == 0 )
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    result = MiReturnFullProcessCommitment(a1);
    if ( !v9 )
      result = (__int64)UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
LABEL_8:
    if ( !a3 )
      return result;
  }
  v10 = *(void **)(a3 + 24);
  if ( v10 )
  {
    result = ObfDereferenceObjectWithTag(v10, 0x746C6644u);
    *(_QWORD *)(a3 + 24) = 0LL;
  }
  return result;
}

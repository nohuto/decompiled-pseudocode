/*
 * XREFs of CcCoalescingCallBack @ 0x1403A7700
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PsGetNextPartitionUnsafe @ 0x14035E34C (PsGetNextPartitionUnsafe.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403A6590 (CcForEachPrivateVolumeCacheMap.c)
 *     CcCoalescingCallBackHelper @ 0x1403A7800 (CcCoalescingCallBackHelper.c)
 *     CcDereferencePartition @ 0x1403AC770 (CcDereferencePartition.c)
 */

_UNKNOWN **__fastcall CcCoalescingCallBack(int a1)
{
  __int64 v1; // rbx
  char v2; // si
  _QWORD *i; // rcx
  _UNKNOWN **result; // rax
  _QWORD *v5; // rdi
  KIRQL v6; // al
  __int64 v7; // rcx
  char v8; // al
  char v9; // bp
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v10 = a1;
  v2 = 0;
  for ( i = 0LL; ; i = v5 )
  {
    result = PsGetNextPartitionUnsafe(i);
    v5 = result;
    if ( !result )
      break;
    v6 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    v7 = v5[1];
    if ( v7 )
    {
      v1 = v5[1];
      if ( *(_BYTE *)(v7 + 1294) < 2u )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 1296)) <= 1 )
          __fastfail(0xEu);
        v2 = 1;
      }
    }
    KeReleaseSpinLock(&CcGlobalPartitionLock, v6);
    if ( v2 )
    {
      v8 = CcEnablePerVolumeLazyWriter ? CcForEachPrivateVolumeCacheMap(v1) : CcCoalescingCallBackHelper(v1, 0LL, &v10);
      v9 = v8;
      CcDereferencePartition(v1);
      v2 = 0;
      if ( !v9 )
        return (_UNKNOWN **)ObfDereferenceObjectWithTag(v5, 0x6E457350u);
    }
  }
  return result;
}

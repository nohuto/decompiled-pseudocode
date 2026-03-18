/*
 * XREFs of CcCoalescingCallBack @ 0x14043C700
 * Callers:
 *     <none>
 * Callees:
 *     PsGetNextPartitionUnsafe @ 0x140246D98 (PsGetNextPartitionUnsafe.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcDereferencePartition @ 0x1402A7F20 (CcDereferencePartition.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1402CE9E0 (CcForEachPrivateVolumeCacheMap.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     CcCoalescingCallBackHelper @ 0x14043C800 (CcCoalescingCallBackHelper.c)
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
      v8 = CcEnablePerVolumeLazyWriter
         ? CcForEachPrivateVolumeCacheMap(v1, (__int64)CcCoalescingCallBackHelper, (__int64)&v10)
         : CcCoalescingCallBackHelper(v1, 0LL, &v10);
      v9 = v8;
      CcDereferencePartition(v1);
      v2 = 0;
      if ( !v9 )
        return (_UNKNOWN **)ObfDereferenceObjectWithTag(v5, 0x6E457350u);
    }
  }
  return result;
}

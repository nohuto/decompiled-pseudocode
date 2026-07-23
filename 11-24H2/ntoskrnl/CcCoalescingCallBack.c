/*
 * XREFs of CcCoalescingCallBack @ 0x140263B80
 * Callers:
 *     <none>
 * Callees:
 *     PsGetNextPartitionUnsafe @ 0x1402194E8 (PsGetNextPartitionUnsafe.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x140263914 (CcForEachPrivateVolumeCacheMap.c)
 *     CcCoalescingCallBackHelper @ 0x140264D90 (CcCoalescingCallBackHelper.c)
 *     CcDereferencePartition @ 0x140279D10 (CcDereferencePartition.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
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

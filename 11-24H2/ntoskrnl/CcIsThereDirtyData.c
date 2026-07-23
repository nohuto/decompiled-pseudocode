/*
 * XREFs of CcIsThereDirtyData @ 0x14047B410
 * Callers:
 *     <none>
 * Callees:
 *     PsGetNextPartitionUnsafe @ 0x1402194E8 (PsGetNextPartitionUnsafe.c)
 *     CcDereferencePartition @ 0x140279D10 (CcDereferencePartition.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     CcIsThereDirtyDataHelper @ 0x14047B510 (CcIsThereDirtyDataHelper.c)
 */

BOOLEAN __stdcall CcIsThereDirtyData(PVPB Vpb)
{
  __int64 v1; // rdi
  char v2; // si
  _QWORD *v3; // rcx
  _UNKNOWN **NextPartitionUnsafe; // rbp
  KIRQL v5; // al
  _QWORD *v6; // rcx
  KIRQL v7; // dl
  char IsThereDirtyDataHelper; // bl
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  v12 = 0LL;
  v2 = 0;
  *(_QWORD *)&v12 = Vpb;
  v3 = 0LL;
  BYTE8(v12) = 0;
  while ( 1 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(v3);
    if ( !NextPartitionUnsafe )
      return BYTE8(v12);
    v5 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    v6 = NextPartitionUnsafe[1];
    v7 = v5;
    if ( v6 )
    {
      v1 = (__int64)NextPartitionUnsafe[1];
      if ( *((_BYTE *)v6 + 1294) >= 2u )
      {
        _m_prefetchw(v6 + 162);
        v10 = v6[162];
        while ( (unsigned __int64)(v10 + 1) > 1 )
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange64(v6 + 162, v10 + 1, v10);
          if ( v11 == v10 )
            goto LABEL_6;
        }
        if ( v10 )
          __fastfail(0xEu);
        v2 = 0;
      }
      else
      {
        if ( _InterlockedIncrement64(v6 + 162) <= 1 )
          __fastfail(0xEu);
LABEL_6:
        v2 = 1;
      }
    }
    KeReleaseSpinLock(&CcGlobalPartitionLock, v7);
    if ( v2 )
    {
      IsThereDirtyDataHelper = CcIsThereDirtyDataHelper(v1, 0LL, &v12);
      CcDereferencePartition(v1);
      v2 = 0;
      if ( !IsThereDirtyDataHelper )
      {
        ObfDereferenceObjectWithTag(NextPartitionUnsafe, 0x6E457350u);
        return BYTE8(v12);
      }
    }
    v3 = NextPartitionUnsafe;
  }
}

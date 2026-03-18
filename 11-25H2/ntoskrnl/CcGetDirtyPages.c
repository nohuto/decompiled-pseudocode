/*
 * XREFs of CcGetDirtyPages @ 0x14035ED90
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     CcGetDirtyPagesHelper @ 0x1402C56E0 (CcGetDirtyPagesHelper.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PsGetNextPartitionUnsafe @ 0x14035E34C (PsGetNextPartitionUnsafe.c)
 *     CcDereferencePartition @ 0x1403AC770 (CcDereferencePartition.c)
 */

LARGE_INTEGER __stdcall CcGetDirtyPages(
        PVOID LogHandle,
        PDIRTY_PAGE_ROUTINE DirtyPageRoutine,
        PVOID Context1,
        PVOID Context2)
{
  __int64 v4; // rdi
  char v5; // si
  _QWORD *v6; // rcx
  _UNKNOWN **NextPartitionUnsafe; // rbp
  KIRQL v8; // al
  _QWORD *v9; // rcx
  KIRQL v10; // dl
  char DirtyPagesHelper; // bl
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  __int64 v15[4]; // [rsp+20h] [rbp-38h] BYREF
  LARGE_INTEGER v16; // [rsp+40h] [rbp-18h]

  v16.QuadPart = 0LL;
  v4 = 0LL;
  v5 = 0;
  v15[0] = (__int64)LogHandle;
  v6 = 0LL;
  v15[2] = (__int64)Context1;
  v15[3] = (__int64)Context2;
  v15[1] = (__int64)DirtyPageRoutine;
  while ( 1 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(v6);
    if ( !NextPartitionUnsafe )
      return v16;
    v8 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    v9 = NextPartitionUnsafe[1];
    v10 = v8;
    if ( v9 )
    {
      v4 = (__int64)NextPartitionUnsafe[1];
      if ( *((_BYTE *)v9 + 1294) >= 2u )
      {
        _m_prefetchw(v9 + 162);
        v13 = v9[162];
        while ( (unsigned __int64)(v13 + 1) > 1 )
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange64(v9 + 162, v13 + 1, v13);
          if ( v14 == v13 )
            goto LABEL_6;
        }
        if ( v13 )
          __fastfail(0xEu);
        v5 = 0;
      }
      else
      {
        if ( _InterlockedIncrement64(v9 + 162) <= 1 )
          __fastfail(0xEu);
LABEL_6:
        v5 = 1;
      }
    }
    KeReleaseSpinLock(&CcGlobalPartitionLock, v10);
    if ( v5 )
    {
      DirtyPagesHelper = CcGetDirtyPagesHelper(v4, 0LL, v15);
      CcDereferencePartition(v4);
      v5 = 0;
      if ( !DirtyPagesHelper )
      {
        ObfDereferenceObjectWithTag(NextPartitionUnsafe, 0x6E457350u);
        return v16;
      }
    }
    v6 = NextPartitionUnsafe;
  }
}

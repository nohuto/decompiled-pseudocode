/*
 * XREFs of ?ivPreReceiveCallback@CBaseInput@@KAPEAXPEBX@Z @ 0x1C01EE6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00A73C0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CBaseInput::ivPreReceiveCallback(const void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  void *v6; // rcx

  v4 = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 48LL * (int)a1 + 3304);
  CPushLock::AcquireLockShared((CPushLock *)(v4 + 152));
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *(void **)(v4 + 16);
    if ( v6 )
    {
      if ( ObReferenceObjectByPointer(v6, 3u, ExRawInputManagerObjectType, 0) >= 0 )
        v5 = *(_QWORD *)(v4 + 16);
    }
  }
  CPushLock::ReleaseLock((CPushLock *)(v4 + 152));
  return v5;
}

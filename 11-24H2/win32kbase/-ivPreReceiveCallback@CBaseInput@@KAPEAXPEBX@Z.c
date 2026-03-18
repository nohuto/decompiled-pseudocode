/*
 * XREFs of ?ivPreReceiveCallback@CBaseInput@@KAPEAXPEBX@Z @ 0x140217680
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall CBaseInput::ivPreReceiveCallback(const void *a1)
{
  __int64 v1; // rdi
  CPushLock *v2; // rbx
  void *v3; // rcx
  __int64 v4; // rdi

  v1 = *(_QWORD *)(W32GetUserSessionState(a1) + 48LL * (int)a1 + 3144);
  v2 = (CPushLock *)(v1 + 152);
  RIMLockShared(v1 + 152);
  if ( v1
    && (v3 = *(void **)(v1 + 16)) != 0LL
    && ObReferenceObjectByPointer(v3, 3u, ExRawInputManagerObjectType, 0) >= 0 )
  {
    v4 = *(_QWORD *)(v1 + 16);
  }
  else
  {
    v4 = 0LL;
  }
  CPushLock::ReleaseLock(v2);
  return v4;
}

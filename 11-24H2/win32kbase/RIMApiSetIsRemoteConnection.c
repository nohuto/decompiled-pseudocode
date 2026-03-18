/*
 * XREFs of RIMApiSetIsRemoteConnection @ 0x140063C6C
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x140063C00 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     RIMDirectStartStopDeviceRead @ 0x140063CD0 (RIMDirectStartStopDeviceRead.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401972C4 (RIMOnAsyncWorkItemNotification.c)
 *     RIMOpenDev @ 0x1401D2344 (RIMOpenDev.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1401ED2E0 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMApiSetIsRemoteConnection(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  unsigned int v3; // ebx

  if ( *(_DWORD *)(W32GetUserSessionState(a1) + 32) == 1 )
  {
    v3 = 0;
    if ( *(_DWORD *)(W32GetUserSessionState(v1) + 316) || *(_DWORD *)(W32GetUserSessionState(v2) + 356) == 1 )
      return 1;
  }
  else
  {
    return 0;
  }
  return v3;
}

/*
 * XREFs of NtGdiWaitForTextReady @ 0x14021C1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x14005D9E4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

_BOOL8 __fastcall NtGdiWaitForTextReady(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  int v4; // ebx
  ULONG v5; // eax

  v3 = UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(a1, a2, a3);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = RtlNtStatusToDosError(v3);
    EngSetLastError(v5);
  }
  return v4 >= 0;
}

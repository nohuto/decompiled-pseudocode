/*
 * XREFs of WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C000AE0C
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F6650 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EE188 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     GreGetDxSharedSurface @ 0x1C000AE98 (GreGetDxSharedSurface.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C002617C (GetWindowMonitorAdapterLuid.c)
 */

__int64 __fastcall WindowRedirectionBitmapMatchesMonitorAdapter(HWND *a1)
{
  __int64 v2; // [rsp+38h] [rbp-8h] BYREF
  __int64 v3; // [rsp+60h] [rbp+20h] BYREF
  __int64 v4; // [rsp+70h] [rbp+30h]
  __int64 v5; // [rsp+78h] [rbp+38h]

  v5 = 0LL;
  v4 = 0LL;
  LODWORD(v3) = 0;
  GreGetDxSharedSurface(*a1, (__int64)&v3, (__int64)&v2);
  return 1LL;
}

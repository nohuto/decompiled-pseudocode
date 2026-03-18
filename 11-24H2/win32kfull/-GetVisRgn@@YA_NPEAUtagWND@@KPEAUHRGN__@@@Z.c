/*
 * XREFs of ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x14018287C
 * Callers:
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x140049F70 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x140062E78 (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     _GetClientRect @ 0x1400750A0 (_GetClientRect.c)
 *     ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x14018295C (-GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

char __fastcall GetVisRgn(struct tagWND *a1, unsigned int a2, HRGN a3)
{
  char v5; // bl
  const struct tagWND *TopLevelWindow; // rax
  __m128i v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  __int32 v10; // [rsp+38h] [rbp-28h]
  __int32 v11; // [rsp+3Ch] [rbp-24h]
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF

  v5 = 0;
  if ( !(unsigned int)GetWindowRgn(a1, a3, a2) )
  {
    v8 = 0LL;
    GetClientRect((__int64)a1, &v8);
    v10 = v8.m128i_i32[2] - v8.m128i_i32[0];
    v11 = v8.m128i_i32[3] - v8.m128i_i32[1];
    v9 = 0LL;
    SetRectRgnIndirect(a3, &v9);
  }
  v12 = 0LL;
  if ( (unsigned int)GreGetRgnBox(a3, &v12) == 1 )
  {
    TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)a1);
    if ( TopLevelWindow )
      return _GhostWindowFromHungWindow(TopLevelWindow) != 0LL;
  }
  return v5;
}

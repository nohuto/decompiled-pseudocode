/*
 * XREFs of _anonymous_namespace_::xxxNormalizeRect @ 0x14014ACFC
 * Callers:
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140205E28 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x14021FA10 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x140223790 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D93AC (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140026844 (GetMonitorRectForDpi.c)
 *     GetMonitorWorkRectForDpi @ 0x1400269FC (GetMonitorWorkRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140026B70 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x14014AE04 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall anonymous_namespace_::xxxNormalizeRect(
        __int64 a1,
        const struct tagWND *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int16 v10; // bx
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v12; // r9
  unsigned int v13; // eax
  __int16 v15; // [rsp+28h] [rbp-A0h]
  __m128i v16; // [rsp+40h] [rbp-88h] BYREF
  __m128i v17; // [rsp+50h] [rbp-78h] BYREF
  __m128i v18; // [rsp+60h] [rbp-68h] BYREF
  __m128i v19; // [rsp+70h] [rbp-58h] BYREF

  v10 = *(_WORD *)(*(_QWORD *)(a4 + 40) + 60LL);
  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a2);
  GetMonitorWorkRectForDpi(&v16, v12, (WindowCompositedDpiContext >> 8) & 0x1FF);
  v18 = v16;
  v13 = GetWindowCompositedDpiContext(a2);
  GetMonitorRectForDpi(&v17, a4, (v13 >> 8) & 0x1FF);
  v15 = v10;
  v19 = v17;
  anonymous_namespace_::xxxNormalizeRect_0(a1, a2, a3, &v19, &v18, v15, a5, a6);
  return a1;
}

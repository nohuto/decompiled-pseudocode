/*
 * XREFs of ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400F63C8
 * Callers:
 *     ?GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400671BC (-GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?GetWindowCloakStateComponentUIAware@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x140093708 (-GetWindowCloakStateComponentUIAware@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14009A4C4 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1400F5B08 (ValidateHwndIAMComponetUIAware.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400F6DEC (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x14020E3C4 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x140246D90 (NtUserSetWindowCompositionAttribute.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1402AAFFC (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x140063770 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetHost(const struct tagWND *a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v2) )
    return *(struct tagWND **)(v2 + 32);
  else
    return 0LL;
}

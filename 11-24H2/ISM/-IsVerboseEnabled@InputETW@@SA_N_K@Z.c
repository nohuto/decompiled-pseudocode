/*
 * XREFs of ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x1800316D8
 * Callers:
 *     ?DeliverDeviceAttach@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180031450 (-DeliverDeviceAttach@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z @ 0x180031550 (-OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z.c)
 *     ?DeliverDeviceEnumerationCompleted@InputTarget@InputETW@@SAXXZ @ 0x180031800 (-DeliverDeviceEnumerationCompleted@InputTarget@InputETW@@SAXXZ.c)
 *     ?DeliverDeviceRemoval@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x1800318D0 (-DeliverDeviceRemoval@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180031A68 (-OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180031AE0 (-OnDeviceAttach@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x180099714 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?CancelResize@Resize@InputETW@@SAXK@Z @ 0x180150640 (-CancelResize@Resize@InputETW@@SAXK@Z.c)
 *     ?StartManualResize@Resize@InputETW@@SAXKI@Z @ 0x1801523D0 (-StartManualResize@Resize@InputETW@@SAXKI@Z.c)
 *     ?StartResize@Resize@InputETW@@SAXK@Z @ 0x180152698 (-StartResize@Resize@InputETW@@SAXK@Z.c)
 *     ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z @ 0x18019FA54 (-RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800367A8 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18009CF54 (atexit.c)
 */

char __fastcall InputETW::IsVerboseEnabled(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rcx
  WINBOOL v5; // [rsp+38h] [rbp+10h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v6 = 0LL;
  v5 = 0;
  if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    qword_180251768 = 0LL;
    v6 = &qword_180251760;
    qword_180251760 = &RawInputProvidersContinuousTracing::`vftable';
    byte_180251770 = 0;
    dword_180251774 = 0;
    qword_180251778 = (struct _tlgProvider_t *)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180251760, qword_180251778, 0LL);
    InitOnceComplete(&`InputETW::Instance'::`2'::wrapper, 0, &qword_180251760);
  }
  v3 = v6[1];
  if ( *(_DWORD *)v3 > 5u
    && (!a1 || (a1 & *(_QWORD *)(v3 + 16)) != 0 && (a1 & *(_QWORD *)(v3 + 24)) == *(_QWORD *)(v3 + 24)) )
  {
    return 1;
  }
  return v2;
}

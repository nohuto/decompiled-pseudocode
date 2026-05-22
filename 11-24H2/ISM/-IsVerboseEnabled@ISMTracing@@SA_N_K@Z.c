/*
 * XREFs of ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x180013528
 * Callers:
 *     ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x180011D6C (-MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z.c)
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x180012EA0 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?LogInitialMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18007EB0C (-LogInitialMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18008441C (-LogInitialMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCMouseInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18009AB10 (-LogInitialMPCMouseInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C51F0 (-LogInitialMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C534C (-LogInitialMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C54A8 (-LogInitialMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCRawInputReport_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800CFAD4 (-LogMPCRawInputReport_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x1800D2494 (-LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ @ 0x180098ECC (--1Completer@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18009CF54 (atexit.c)
 */

char __fastcall ISMTracing::IsVerboseEnabled(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // cl
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+48h] [rbp+10h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    qword_1802515E0 = 0LL;
    dword_1802515EC = 0;
    v8 = &qword_1802515D8;
    qword_1802515D8 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    v4 = &`ISMTracing::Instance'::`2'::wrapper;
    byte_1802515E8 = 0;
    qword_1802515F0 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v5 = 0;
    wil::details::static_lazy<RawInputProvidersContinuousTracing>::Completer::~Completer(&v4);
  }
  v1 = v8[1];
  if ( *(_DWORD *)v1 <= 5u )
    return 0;
  v2 = 1;
  if ( (*(_BYTE *)(v1 + 16) & 1) == 0 || (*(_QWORD *)(v1 + 24) & 1LL) != *(_QWORD *)(v1 + 24) )
    return 0;
  return v2;
}

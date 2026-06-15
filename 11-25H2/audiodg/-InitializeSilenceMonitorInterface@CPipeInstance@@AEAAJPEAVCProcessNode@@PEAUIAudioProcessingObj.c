/*
 * XREFs of ?InitializeSilenceMonitorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x1400045A4
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140003144 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::InitializeSilenceMonitorInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v5; // ebx
  LPVOID pv; // [rsp+20h] [rbp-50h] BYREF
  __int64 v8; // [rsp+28h] [rbp-48h] BYREF
  int v9; // [rsp+30h] [rbp-40h] BYREF
  GUID v10; // [rsp+34h] [rbp-3Ch]
  _BYTE v11[36]; // [rsp+44h] [rbp-2Ch] BYREF

  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  memset(v11, 0, sizeof(v11));
  pv = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_22150b0d_ab8e_4f85_bd9a_8580e3b290f1,
         &v8) >= 0 )
  {
    v9 = 56;
    v10 = GUID_693badea_1eb1_4013_b799_285f624a55bd;
    mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)this + 24), &pv);
    *(_QWORD *)&v11[4] = pv;
    *(_OWORD *)&v11[12] = *(_OWORD *)((char *)this + 296);
    *(_QWORD *)&v11[28] = AudioDgTelemetryProvider::Provider();
    v5 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))a3->lpVtbl->Initialize)(
           a3,
           56LL,
           &v9);
    if ( v5 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeSilenceMonitorInterface", 0xF25u, v5);
    }
  }
  else
  {
    v5 = 0;
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v5;
}

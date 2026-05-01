/*
 * XREFs of ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x1801D4C50
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180016EEC (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180031F14 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180033268 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180033338 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180033F04 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1801950E4 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?StartActivity@LoadQuirksForPackage@CAppManagerTelemetry@@QEAAXPEBG@Z @ 0x1801D4E7C (-StartActivity@LoadQuirksForPackage@CAppManagerTelemetry@@QEAAXPEBG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::s_LoadQuirksForApp(const unsigned __int16 *a1, struct PER_APPLICATION_DATA *a2)
{
  bool *v4; // rsi
  int IsEnabledForPackage4; // eax
  int v6; // ebx
  unsigned int v7[4]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v8[42]; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+190h] [rbp+90h] BYREF
  char *v10; // [rsp+198h] [rbp+98h]
  int v11; // [rsp+1A0h] [rbp+A0h]
  char *v12; // [rsp+1A8h] [rbp+A8h]
  int v13; // [rsp+1B0h] [rbp+B0h]
  char *v14; // [rsp+1B8h] [rbp+B8h]
  int v15; // [rsp+1C0h] [rbp+C0h]
  char *v16; // [rsp+1C8h] [rbp+C8h]
  int v17; // [rsp+1D0h] [rbp+D0h]
  char *v18; // [rsp+1D8h] [rbp+D8h]
  int v19; // [rsp+1E0h] [rbp+E0h]
  char *v20; // [rsp+1E8h] [rbp+E8h]
  int v21; // [rsp+1F0h] [rbp+F0h]
  char *v22; // [rsp+1F8h] [rbp+F8h]
  int v23; // [rsp+200h] [rbp+100h]
  char *v24; // [rsp+208h] [rbp+108h]
  int v25; // [rsp+210h] [rbp+110h]
  char *v26; // [rsp+218h] [rbp+118h]
  int v27; // [rsp+220h] [rbp+120h]
  char *v28; // [rsp+228h] [rbp+128h]
  int v29; // [rsp+230h] [rbp+130h]
  char *v30; // [rsp+238h] [rbp+138h]
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v8,
    (__int64)"LoadQuirksForPackage");
  v8[0] = &CAppManagerTelemetry::LoadQuirksForPackage::`vftable';
  CAppManagerTelemetry::LoadQuirksForPackage::StartActivity((CAppManagerTelemetry::LoadQuirksForPackage *)v8, a1);
  v9 = 589824;
  v4 = (bool *)a2 + 28;
  v10 = (char *)a2 + 28;
  v11 = 589825;
  v12 = (char *)a2 + 27;
  v13 = 589826;
  v14 = (char *)a2 + 29;
  v15 = 327684;
  v16 = (char *)a2 + 30;
  v17 = 589830;
  v18 = (char *)a2 + 31;
  v19 = 589829;
  v20 = (char *)a2 + 32;
  v21 = 589827;
  v22 = (char *)a2 + 33;
  v23 = 589828;
  v24 = (char *)a2 + 34;
  v25 = 589832;
  v26 = (char *)a2 + 35;
  v27 = 589840;
  v28 = (char *)a2 + 36;
  v29 = 589841;
  v30 = (char *)a2 + 37;
  IsEnabledForPackage4 = QuirkIsEnabledForPackage4(0LL, a1, 0LL, &v9, 11);
  v6 = IsEnabledForPackage4;
  if ( IsEnabledForPackage4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2026,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)IsEnabledForPackage4);
  if ( byte_1808C73C8 )
  {
    v7[0] = 0;
    if ( SHRegGetDWORD(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\ApplicationView",
           L"DisableWin8AppCompatBehavior",
           v7) < 0 )
      byte_1808C73C8 = 0;
    else
      *v4 = v7[0] != 0;
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v8, v6);
  v8[0] = &CAppManagerTelemetry::LoadQuirksForPackage::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v8);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v8);
}

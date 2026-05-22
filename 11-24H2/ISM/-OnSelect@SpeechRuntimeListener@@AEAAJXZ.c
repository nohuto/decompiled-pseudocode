/*
 * XREFs of ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x1800D2534
 * Callers:
 *     ?OnMessageCallbackStatic@SpeechRuntimeListener@@CAJPEAXPEBXH@Z @ 0x1800D24F0 (-OnMessageCallbackStatic@SpeechRuntimeListener@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x1800328D0 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z @ 0x1800CFEB0 (-QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z.c)
 *     ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x1800D2494 (-LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z.c)
 */

__int64 __fastcall SpeechRuntimeListener::OnSelect(SpeechRuntimeListener *this)
{
  const WCHAR *v2; // rcx
  int v3; // r9d
  int v4; // eax
  MPCRawInputProvider *v5; // rcx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-BE8h]
  int v9[4]; // [rsp+30h] [rbp-BD8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-BC8h]
  int v11; // [rsp+48h] [rbp-BC0h]
  int v12; // [rsp+9F8h] [rbp-210h]
  __int64 v13; // [rsp+A00h] [rbp-208h]
  int v14; // [rsp+A0Ch] [rbp-1FCh]
  wil::details::in1diag3 *retaddr; // [rsp+C08h] [rbp+0h]

  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::LogSpeechRuntimeListenerFunct_(v2, L"OnSelect");
  }
  memset_0(v9, 0, 0xBC0uLL);
  v3 = *((_DWORD *)this + 20);
  v11 = 3008;
  v4 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 7, 0x40000, v3, (__int64)v9);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x34,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v4,
      v8);
  v5 = (MPCRawInputProvider *)*((_QWORD *)this + 9);
  v14 = -1;
  v13 = v10;
  v12 = 1;
  v6 = MPCRawInputProvider::QueueInput(v5, (struct LegacyInputInfo *)v9);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v6,
      v8);
  return 0LL;
}

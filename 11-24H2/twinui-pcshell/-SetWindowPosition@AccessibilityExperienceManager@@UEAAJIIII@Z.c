/*
 * XREFs of ?SetWindowPosition@AccessibilityExperienceManager@@UEAAJIIII@Z @ 0x1804902C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$03@@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$03@@666@Z @ 0x18000A58C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@U3@U-$__ea_18000A58C.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     CreationThreadDispatcher::RunAsync__lambda_fa553258777e9fe890f937adf5270d38___ @ 0x18048D5F0 (CreationThreadDispatcher--RunAsync__lambda_fa553258777e9fe890f937adf5270d38___.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18048FB74 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@wil@@QEAA_NXZ @ 0x180491378 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AccessibilityExperienceManager::SetWindowPosition(
        AccessibilityExperienceManager *this,
        int a2,
        int a3,
        int a4,
        unsigned int a5)
{
  __int64 v6; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  const char *v16; // [rsp+78h] [rbp-39h] BYREF
  __int64 v17; // [rsp+80h] [rbp-31h] BYREF
  char *v18; // [rsp+90h] [rbp-21h] BYREF
  int v19; // [rsp+98h] [rbp-19h]
  int v20; // [rsp+9Ch] [rbp-15h]
  int v21; // [rsp+A0h] [rbp-11h]
  unsigned int v22; // [rsp+A4h] [rbp-Dh]
  _DWORD v23[4]; // [rsp+B0h] [rbp-1h] BYREF

  v6 = *((_QWORD *)this + 29);
  v23[0] = a2;
  v23[1] = a4;
  v23[2] = a3;
  v23[3] = a5;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v6 + 64LL))(v6, v23);
    v10 = *((_QWORD *)this + 18);
    v18 = (char *)this - 144;
    v19 = a2;
    v20 = a3;
    v21 = a4;
    v22 = a5;
    CreationThreadDispatcher::RunAsync__lambda_fa553258777e9fe890f937adf5270d38___(v10, (volatile int *)&v18);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2602>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EyeControllerApp_2602>::GetImpl'::`2'::impl) )
  {
    v12 = GazeUITraceLogging::Provider(v11);
    if ( *(_DWORD *)v12 > 5u )
    {
      v16 = "AccessibilityExperienceManager::SetWindowPosition - Triggered";
      v17 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v12,
        (__int64)&unk_180804F7A,
        v13,
        v14,
        (__int64)&v17,
        &v16);
    }
  }
  return 0LL;
}

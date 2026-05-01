/*
 * XREFs of ?LookUpPrintScreenSetting@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1800F1190
 * Callers:
 *     ?RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800F12F8 (-RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     CAsyncCallbackWithLambda__lambda_8264e82e38962921ab228278aca6f8e1___::Invoke @ 0x1803A3530 (CAsyncCallbackWithLambda__lambda_8264e82e38962921ab228278aca6f8e1___--Invoke.c)
 * Callees:
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180025298 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?UnregisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800CF118 (-UnregisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800D09B8 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800E8EDC (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1801950E4 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?RequestHotKeys@CScreenClippingExperienceManager@@AEAAXXZ @ 0x180242890 (-RequestHotKeys@CScreenClippingExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PSKY@@@details@wil@@QEAA_NXZ @ 0x1803A4920 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PSKY@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall CScreenClippingExperienceManager::LookUpPrintScreenSetting(CScreenClippingExperienceManager *this)
{
  const struct _tlgProvider_t *v2; // rax
  int DWORD; // edi
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  const struct _tlgProvider_t *v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r9
  unsigned int v14[4]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v16; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v17; // [rsp+70h] [rbp+30h] BYREF
  int v18; // [rsp+78h] [rbp+38h] BYREF

  v2 = SingleViewExperienceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v2,
      byte_1807F011A,
      0LL);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PSKY>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_PSKY>::GetImpl'::`2'::impl) )
    goto LABEL_10;
  v16 = 0;
  DWORD = SHRegGetDWORD(
            HKEY_LOCAL_MACHINE,
            L"Software\\Policies\\Microsoft\\Windows\\Explorer",
            L"MakePrintScreenKeyYieldable",
            &v16);
  v5 = SingleViewExperienceLogging::Provider(v4);
  if ( *(_DWORD *)v5 > 5u )
  {
    v14[0] = v16;
    v18 = DWORD;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v5,
      byte_1807F00C0,
      0LL,
      v7,
      (__int64)v14,
      (__int64)&v18);
  }
  if ( DWORD < 0 || v16 )
  {
LABEL_10:
    v17 = 0;
    v9 = SHRegGetDWORD(HKEY_CURRENT_USER, L"Control Panel\\Keyboard", L"PrintScreenKeyForSnippingEnabled", &v17);
    v11 = v9;
    if ( v9 != -2147024894 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x36E,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)v9);
    v12 = SingleViewExperienceLogging::Provider(v10);
    if ( *(_DWORD *)v12 > 5u )
    {
      v16 = v17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)v12,
        byte_1807F001B,
        0LL,
        v13,
        (__int64)&v16);
    }
    if ( v17 || v11 == -2147024894 )
      CScreenClippingExperienceManager::RequestHotKeys(this);
    else
      CScreenClippingExperienceManager::UnregisterForHotKeyHandling(this);
  }
  else
  {
    v8 = SingleViewExperienceLogging::Provider(v6);
    if ( *(_DWORD *)v8 > 5u )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        (__int64)v8,
        byte_1807F0057,
        0LL);
  }
}

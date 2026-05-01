/*
 * XREFs of ?StartActivity@ShowAltTab@XamlSwitcherTelemetry@@QEAAXII@Z @ 0x18011AB18
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180118BB0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800342C0 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18011AE3C (-Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18011AF18 (-zInternalStart@-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflect.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowAltTab::StartActivity(
        XamlSwitcherTelemetry::ShowAltTab *this,
        int a2,
        int a3)
{
  const struct _tlgProvider_t *v6; // rax
  const struct _tlgProvider_t *v7; // rbx
  const GUID *v8; // rax
  __int64 v9; // r8
  int v10; // [rsp+38h] [rbp-59h] BYREF
  int v11; // [rsp+3Ch] [rbp-55h] BYREF
  _DWORD v12[2]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v13; // [rsp+48h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-29h] BYREF
  void *v16; // [rsp+78h] [rbp-19h]
  int v17; // [rsp+80h] [rbp-11h]
  int v18; // [rsp+84h] [rbp-Dh]
  __int64 *v19; // [rsp+88h] [rbp-9h]
  __int64 v20; // [rsp+90h] [rbp-1h]
  _DWORD *v21; // [rsp+98h] [rbp+7h]
  __int64 v22; // [rsp+A0h] [rbp+Fh]
  int *v23; // [rsp+A8h] [rbp+17h]
  __int64 v24; // [rsp+B0h] [rbp+1Fh]
  int *v25; // [rsp+B8h] [rbp+27h]
  __int64 v26; // [rsp+C0h] [rbp+2Fh]

  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v6 = XamlSwitcherLogging::Provider();
  v7 = v6;
  if ( *(_DWORD *)v6 > 5u
    && (*((_QWORD *)v6 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v6 + 3) & 0x400000000000LL) == *((_QWORD *)v6 + 3) )
  {
    v10 = a3;
    v11 = a2;
    v13 = 0x2000000LL;
    v12[0] = GetCurrentThreadId();
    v8 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v9 = *((_QWORD *)this + 34);
    v26 = 4LL;
    v24 = 4LL;
    v25 = &v10;
    v22 = 4LL;
    v23 = &v11;
    v20 = 8LL;
    v21 = v12;
    v19 = &v13;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *((_QWORD *)v7 + 1);
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x400000000000LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v16 = &unk_180820B27;
    UserData.Reserved = 2;
    v17 = 91;
    v18 = 1;
    v12[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v7 + 4), &EventDescriptor, (LPCGUID)(v9 + 8), v8, 6u, &UserData);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}

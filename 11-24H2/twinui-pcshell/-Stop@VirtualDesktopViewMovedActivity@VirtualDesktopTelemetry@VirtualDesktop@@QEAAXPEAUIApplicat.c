/*
 * XREFs of ?Stop@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1801799A8
 * Callers:
 *     ?MoveViewToDesktopFromApiInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180554220 (-MoveViewToDesktopFromApiInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtua.c)
 *     ?MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1805542D0 (-MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDeskto.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@6@Z @ 0x18000CE18 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000CE18.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18000DED0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U-$_tlg.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001F62C (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180024F20 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?CensorAppID@VirtualDesktopTelemetry@VirtualDesktop@@CAPEBGPEBG@Z @ 0x1801B2080 (-CensorAppID@VirtualDesktopTelemetry@VirtualDesktop@@CAPEBGPEBG@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  int v5; // eax
  void (__fastcall *v6)(struct IApplicationView *, LPVOID *); // rsi
  int *v7; // rax
  int v8; // ecx
  int *v9; // rdi
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // rsi
  const WCHAR *v12; // rcx
  __int64 v13; // r9
  const struct _tlgProvider_t *v14; // rax
  __int64 v15; // rdi
  const WCHAR *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r9
  int v19; // [rsp+20h] [rbp-110h]
  int v20; // [rsp+B0h] [rbp-80h] BYREF
  DWORD CurrentThreadId; // [rsp+B4h] [rbp-7Ch] BYREF
  int v22; // [rsp+B8h] [rbp-78h] BYREF
  int v23; // [rsp+BCh] [rbp-74h] BYREF
  int v24; // [rsp+C0h] [rbp-70h] BYREF
  int v25; // [rsp+C4h] [rbp-6Ch] BYREF
  __int64 v26; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-58h] BYREF
  LPVOID pv; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-48h]
  __int64 v31; // [rsp+F0h] [rbp-40h]
  const unsigned __int16 *v32; // [rsp+F8h] [rbp-38h] BYREF
  __int128 *v33; // [rsp+100h] [rbp-30h] BYREF
  __int64 v34; // [rsp+108h] [rbp-28h] BYREF
  __int64 v35; // [rsp+110h] [rbp-20h] BYREF
  __int64 v36; // [rsp+118h] [rbp-18h] BYREF
  __int64 v37; // [rsp+120h] [rbp-10h] BYREF
  __int64 v38; // [rsp+128h] [rbp-8h] BYREF
  __int64 v39; // [rsp+130h] [rbp+0h] BYREF
  __int64 v40; // [rsp+138h] [rbp+8h] BYREF
  __int128 v41; // [rsp+140h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+48h]

  v41 = 0LL;
  pv = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, __int128 *))(*(_QWORD *)a3 + 32LL))(a3, &v41);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6F,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v5,
      v19);
  v6 = *(void (__fastcall **)(struct IApplicationView *, LPVOID *))(*(_QWORD *)a2 + 136LL);
  v30 = -1LL;
  v31 = -1LL;
  v6(a2, &pv);
  v7 = (int *)*((_QWORD *)this + 34);
  v8 = v7[18];
  if ( v8 >= 0 || v8 != v7[22] || (v9 = v7 + 20, v7 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v14 = WindowManagementLogging::Provider();
    v15 = (__int64)v14;
    if ( *(_DWORD *)v14 > 5u && tlgKeywordOn((__int64)v14, 0x400000000000LL) )
    {
      v16 = &pvData;
      if ( pv )
        v16 = (const WCHAR *)pv;
      v28 = (__int64)VirtualDesktop::VirtualDesktopTelemetry::CensorAppID(v16);
      v27 = (__int64)&v41;
      CurrentThreadId = GetCurrentThreadId();
      v17 = *((_QWORD *)this + 34);
      v20 = *(_DWORD *)(v17 + 72);
      v26 = 2197815296LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        v15,
        (__int64)&unk_18080FDA6,
        v17 + 8,
        v18,
        (__int64)&v26,
        (__int64)&v20,
        (__int64)&CurrentThreadId,
        (__int64)&v27,
        &v28);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v10 = WindowManagementLogging::Provider();
    v11 = (__int64)v10;
    if ( *(_DWORD *)v10 > 5u && tlgKeywordOn((__int64)v10, 0x400000000000LL) )
    {
      v12 = &pvData;
      if ( pv )
        v12 = (const WCHAR *)pv;
      v32 = VirtualDesktop::VirtualDesktopTelemetry::CensorAppID(v12);
      v33 = &v41;
      v34 = *((_QWORD *)v9 + 15);
      v35 = *((_QWORD *)v9 + 14);
      v22 = v9[26];
      v36 = *((_QWORD *)v9 + 12);
      v37 = *((_QWORD *)v9 + 11);
      v23 = v9[20];
      v38 = *((_QWORD *)v9 + 9);
      v24 = v9[8];
      v39 = *((_QWORD *)v9 + 3);
      v25 = *v9;
      v40 = *((_QWORD *)v9 + 16);
      v20 = v9[16];
      v26 = *((_QWORD *)v9 + 7);
      CurrentThreadId = v9[2];
      v27 = 0x1000000LL;
      v28 = 2197815296LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        v11,
        (__int64)&unk_18080FE21,
        *((_QWORD *)this + 34) + 8LL,
        v13,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&CurrentThreadId,
        &v26,
        (__int64)&v20,
        &v40,
        (__int64)&v25,
        &v39,
        (__int64)&v24,
        &v38,
        (__int64)&v23,
        &v37,
        &v36,
        (__int64)&v22,
        &v35,
        &v34,
        (__int64)&v33,
        &v32);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
  if ( pv )
    CoTaskMemFree(pv);
}

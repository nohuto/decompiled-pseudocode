/*
 * XREFs of ?Stop@VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@_N@Z @ 0x180178ED4
 * Callers:
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180205F60 (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18000D748 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000D748.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18000DFA4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$_ea_18000DFA4.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001F62C (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180024F20 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *this,
        struct IVirtualDesktop *a2)
{
  void (__fastcall *v3)(struct IVirtualDesktop *, __int128 *); // rax
  int *v4; // rax
  int v5; // ecx
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // rdi
  int *v8; // rdi
  const struct _tlgProvider_t *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  DWORD CurrentThreadId; // eax
  __int64 v14; // r8
  int v15; // [rsp+B4h] [rbp-7Ch] BYREF
  DWORD v16; // [rsp+B8h] [rbp-78h] BYREF
  int v17; // [rsp+BCh] [rbp-74h] BYREF
  int v18; // [rsp+C0h] [rbp-70h] BYREF
  int v19; // [rsp+C4h] [rbp-6Ch] BYREF
  int v20; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v21; // [rsp+D0h] [rbp-60h] BYREF
  _QWORD v22[2]; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v26; // [rsp+100h] [rbp-30h] BYREF
  __int64 v27; // [rsp+108h] [rbp-28h] BYREF
  __int64 v28; // [rsp+110h] [rbp-20h] BYREF
  __int64 v29; // [rsp+118h] [rbp-18h] BYREF
  __int64 v30; // [rsp+120h] [rbp-10h] BYREF
  __int128 v31; // [rsp+128h] [rbp-8h] BYREF

  v3 = *(void (__fastcall **)(struct IVirtualDesktop *, __int128 *))(*(_QWORD *)a2 + 32LL);
  v31 = 0LL;
  v3(a2, &v31);
  v4 = (int *)*((_QWORD *)this + 34);
  v5 = v4[18];
  if ( v5 >= 0 || v5 != v4[22] || (v8 = v4 + 20, v4 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v6 = WindowManagementLogging::Provider();
    v7 = (__int64)v6;
    if ( *(_DWORD *)v6 > 5u && tlgKeywordOn((__int64)v6, 0x400000000000LL) )
    {
      v22[0] = &v31;
      CurrentThreadId = GetCurrentThreadId();
      v14 = *((_QWORD *)this + 34);
      v16 = CurrentThreadId;
      v15 = *(_DWORD *)(v14 + 72);
      v21 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>>(
        v7,
        (__int64)&unk_18080EBDE);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v9 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v9 > 5u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
    {
      v12 = *((_QWORD *)this + 34);
      v22[1] = &v31;
      v23 = *((_QWORD *)v8 + 15);
      v24 = *((_QWORD *)v8 + 14);
      v17 = v8[26];
      v25 = *((_QWORD *)v8 + 12);
      v26 = *((_QWORD *)v8 + 11);
      v18 = v8[20];
      v27 = *((_QWORD *)v8 + 9);
      v19 = v8[8];
      v28 = *((_QWORD *)v8 + 3);
      v20 = *v8;
      v29 = *((_QWORD *)v8 + 16);
      v15 = v8[16];
      v30 = *((_QWORD *)v8 + 7);
      v16 = v8[2];
      v21 = 0x1000000LL;
      v22[0] = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>>(
        v10,
        (__int64)&unk_18080EC5E,
        v12 + 8,
        v11,
        (__int64)v22,
        (__int64)&v21,
        (__int64)&v16,
        &v30,
        (__int64)&v15,
        &v29,
        (__int64)&v20,
        &v28,
        (__int64)&v19,
        &v27,
        (__int64)&v18,
        &v26,
        &v25,
        (__int64)&v17,
        &v24,
        &v23);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}

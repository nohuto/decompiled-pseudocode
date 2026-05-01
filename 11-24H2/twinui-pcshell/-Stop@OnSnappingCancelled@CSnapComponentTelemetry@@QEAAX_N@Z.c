/*
 * XREFs of ?Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x18011FB08
 * Callers:
 *     ?OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUDragSizeInfoEventArgs@3456@@Z @ 0x1802703F0 (-OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEven.c)
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x18059F860 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?OnWindowArrangementReset@CShellSnapComponent@@UEAAJXZ @ 0x18059FEA0 (-OnWindowArrangementReset@CShellSnapComponent@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645634@Z @ 0x18000E53C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000E53C.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@434@Z @ 0x1800CC314 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801200AC (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 */

void __fastcall CSnapComponentTelemetry::OnSnappingCancelled::Stop(CSnapComponentTelemetry::OnSnappingCancelled *this)
{
  int *v1; // rax
  int v3; // ecx
  int *v4; // rdi
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  DWORD v9; // eax
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  int v14; // eax
  int v15; // [rsp+B0h] [rbp-80h] BYREF
  int v16; // [rsp+B4h] [rbp-7Ch] BYREF
  int v17; // [rsp+B8h] [rbp-78h] BYREF
  int v18; // [rsp+BCh] [rbp-74h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-70h] BYREF
  _QWORD v20[2]; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v21; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v23; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v26; // [rsp+100h] [rbp-30h] BYREF
  __int64 v27; // [rsp+108h] [rbp-28h] BYREF
  __int64 v28[4]; // [rsp+110h] [rbp-20h] BYREF
  DWORD v29; // [rsp+150h] [rbp+20h] BYREF
  int v30; // [rsp+158h] [rbp+28h] BYREF

  v1 = (int *)*((_QWORD *)this + 34);
  v3 = v1[18];
  if ( v3 >= 0 || v3 != v1[22] || (v4 = v1 + 20, v1 == (int *)-80LL) )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v10 = WindowManagementLogging::Provider();
    v11 = (__int64)v10;
    if ( *(_DWORD *)v10 > 5u && tlgKeywordOn((__int64)v10, 0x400000000000LL) )
    {
      v20[0] = 0x2000000LL;
      CurrentThreadId = GetCurrentThreadId();
      v13 = *((_QWORD *)this + 34);
      v29 = CurrentThreadId;
      v14 = *(_DWORD *)(v13 + 72);
      v19 = 0LL;
      v30 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v11,
        (__int64)&unk_180813575);
    }
  }
  else
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v5 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v5 > 5u && tlgKeywordOn((__int64)v5, 0x400000000000LL) )
    {
      v21 = *((_QWORD *)v4 + 15);
      v8 = *((_QWORD *)this + 34);
      v22 = *((_QWORD *)v4 + 14);
      v9 = v4[26];
      v20[0] = 0LL;
      v29 = v9;
      v23 = *((_QWORD *)v4 + 12);
      v24 = *((_QWORD *)v4 + 11);
      v30 = v4[20];
      v25 = *((_QWORD *)v4 + 9);
      v15 = v4[8];
      v26 = *((_QWORD *)v4 + 3);
      v16 = *v4;
      v27 = *((_QWORD *)v4 + 16);
      v17 = v4[16];
      v28[0] = *((_QWORD *)v4 + 7);
      v18 = v4[2];
      v20[1] = 0x2000000LL;
      v19 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v6,
        (__int64)&unk_18081389B,
        v8 + 8,
        v7,
        (__int64)v20,
        (__int64)&v19,
        (__int64)&v18,
        v28,
        (__int64)&v17,
        &v27,
        (__int64)&v16,
        &v26,
        (__int64)&v15,
        &v25,
        (__int64)&v30,
        &v24,
        &v23,
        (__int64)&v29,
        &v22,
        &v21);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}

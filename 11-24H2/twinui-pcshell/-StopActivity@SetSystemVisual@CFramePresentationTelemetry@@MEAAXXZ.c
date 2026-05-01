/*
 * XREFs of ?StopActivity@SetSystemVisual@CFramePresentationTelemetry@@MEAAXXZ @ 0x1801745E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001F62C (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180024F20 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180032AC4 (-Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180186A30 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180186A30.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall CFramePresentationTelemetry::SetSystemVisual::StopActivity(
        CFramePresentationTelemetry::SetSystemVisual *this)
{
  __int64 v1; // rax
  int v3; // ecx
  __int64 v4; // rdi
  const struct _tlgProvider_t *v5; // rax
  const struct _tlgProvider_t *v6; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // [rsp+ACh] [rbp-7Ch] BYREF
  _DWORD v14[4]; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v15; // [rsp+C0h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v17; // [rsp+D8h] [rbp-50h]
  __int64 v18; // [rsp+E0h] [rbp-48h]
  __int64 v19; // [rsp+E8h] [rbp-40h]
  __int64 v20; // [rsp+F0h] [rbp-38h]
  __int64 v21; // [rsp+F8h] [rbp-30h]
  __int64 v22; // [rsp+100h] [rbp-28h]
  __int64 v23; // [rsp+108h] [rbp-20h]
  __int64 v24; // [rsp+110h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+118h] [rbp-10h] BYREF
  void *v26; // [rsp+128h] [rbp+0h]
  int v27; // [rsp+130h] [rbp+8h]
  int v28; // [rsp+134h] [rbp+Ch]
  __int64 *v29; // [rsp+138h] [rbp+10h]
  int v30; // [rsp+140h] [rbp+18h]
  int v31; // [rsp+144h] [rbp+1Ch]
  int *v32; // [rsp+148h] [rbp+20h]
  int v33; // [rsp+150h] [rbp+28h]
  int v34; // [rsp+154h] [rbp+2Ch]
  _DWORD *v35; // [rsp+158h] [rbp+30h]
  int v36; // [rsp+160h] [rbp+38h]
  int v37; // [rsp+164h] [rbp+3Ch]

  v1 = *((_QWORD *)this + 34);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 < 0 && v3 == *(_DWORD *)(v1 + 88) && (v4 = v1 + 80, v1 != -80) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v9 = CAppManagerLogging::Provider();
    if ( *(_DWORD *)v9 > 5u && tlgKeywordOn((__int64)v9, 0x200000000000LL) )
    {
      v11 = *(_QWORD *)(v4 + 120);
      v12 = *((_QWORD *)this + 34);
      v18 = *(_QWORD *)(v4 + 112);
      v14[1] = *(_DWORD *)(v4 + 104);
      v19 = *(_QWORD *)(v4 + 96);
      v20 = *(_QWORD *)(v4 + 88);
      v14[2] = *(_DWORD *)(v4 + 80);
      v21 = *(_QWORD *)(v4 + 72);
      v14[3] = *(_DWORD *)(v4 + 32);
      v22 = *(_QWORD *)(v4 + 24);
      v23 = *(_QWORD *)(v4 + 128);
      v13 = *(_DWORD *)(v4 + 64);
      v24 = *(_QWORD *)(v4 + 56);
      v14[0] = *(_DWORD *)(v4 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v15 = 0x1000000LL;
      v17 = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v10,
        &unk_1807E3EC8,
        v12 + 8);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v5 = CAppManagerLogging::Provider();
    v6 = v5;
    if ( *(_DWORD *)v5 > 5u
      && (*((_QWORD *)v5 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v5 + 3) & 0x200000000000LL) == *((_QWORD *)v5 + 3) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v8 = *((_QWORD *)this + 34);
      v37 = 0;
      v34 = 0;
      v31 = 0;
      v14[0] = CurrentThreadId;
      v13 = *(_DWORD *)(v8 + 72);
      v15 = 0x1000000LL;
      v35 = v14;
      v32 = &v13;
      v29 = &v15;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v6 + 1);
      v36 = 4;
      v33 = 4;
      v30 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x200000000000LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v26 = &unk_1807E3FFA;
      UserData.Reserved = 2;
      v27 = 68;
      v28 = 1;
      EventWriteTransfer(*((_QWORD *)v6 + 4), &EventDescriptor, (LPCGUID)(v8 + 8), 0LL, 5u, &UserData);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}

/*
 * XREFs of ?Stop@OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x1800EC320
 * Callers:
 *     ?OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x1802739C8 (-OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U1@U_tlgWrapperPtrSize@@U5@U2@U2@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564453AEBU_tlgWrapperPtrSize@@744434@Z @ 0x18000FBF0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000FBF0.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180024F20 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U_tlgWrapperPtrSize@@U3@U2@U2@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@43AEBU_tlgWrapperPtrSize@@544434@Z @ 0x1801D8B88 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@U_tlgWrapperPtrSize@@U3@U2@U2@U.c)
 */

void __fastcall WindowDragInputProviderTelemetry::OnGetArrangementRects::Stop(
        WindowDragInputProviderTelemetry::OnGetArrangementRects *this,
        const struct _WINDOW_ARRANGEMENT_INFO *a2)
{
  int *v2; // rax
  int v5; // ecx
  int *v6; // rsi
  const struct _tlgProvider_t *v7; // rax
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // rcx
  const struct _tlgProvider_t *v11; // rax
  int v12; // esi
  int v13; // ecx
  DWORD CurrentThreadId; // eax
  __int64 v15; // r8
  int v16; // r9d
  int v17; // [rsp+100h] [rbp-80h] BYREF
  DWORD v18; // [rsp+104h] [rbp-7Ch] BYREF
  _DWORD v19[2]; // [rsp+108h] [rbp-78h] BYREF
  int v20; // [rsp+110h] [rbp-70h] BYREF
  int v21; // [rsp+114h] [rbp-6Ch] BYREF
  int v22; // [rsp+118h] [rbp-68h] BYREF
  int v23; // [rsp+11Ch] [rbp-64h] BYREF
  int v24; // [rsp+120h] [rbp-60h] BYREF
  __int64 v25; // [rsp+128h] [rbp-58h] BYREF
  __int64 v26; // [rsp+130h] [rbp-50h] BYREF
  __int64 v27; // [rsp+138h] [rbp-48h] BYREF
  char *v28; // [rsp+140h] [rbp-40h] BYREF
  int v29; // [rsp+148h] [rbp-38h]
  char *v30; // [rsp+150h] [rbp-30h] BYREF
  int v31; // [rsp+158h] [rbp-28h]
  __int64 v32; // [rsp+160h] [rbp-20h]
  __int64 v33; // [rsp+168h] [rbp-18h]
  __int64 v34; // [rsp+170h] [rbp-10h] BYREF
  __int64 v35; // [rsp+178h] [rbp-8h] BYREF
  __int64 v36; // [rsp+180h] [rbp+0h] BYREF
  __int64 v37; // [rsp+188h] [rbp+8h] BYREF
  __int64 v38; // [rsp+190h] [rbp+10h] BYREF
  __int64 v39; // [rsp+198h] [rbp+18h] BYREF
  __int64 v40; // [rsp+1A0h] [rbp+20h] BYREF
  _QWORD v41[3]; // [rsp+1A8h] [rbp+28h] BYREF
  int v42; // [rsp+1D0h] [rbp+50h] BYREF
  int v43; // [rsp+1E0h] [rbp+60h] BYREF
  int v44; // [rsp+1E8h] [rbp+68h] BYREF

  v2 = (int *)*((_QWORD *)this + 34);
  v5 = v2[18];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v11 = WindowManagementLogging::Provider();
    v12 = (int)v11;
    if ( *(_DWORD *)v11 > 5u )
    {
      v42 = *((_DWORD *)a2 + 18);
      v27 = *((_QWORD *)a2 + 8);
      v43 = *((_DWORD *)a2 + 14);
      v44 = *((_DWORD *)a2 + 9);
      v13 = *((_DWORD *)a2 + 4);
      v30 = (char *)a2 + 40;
      v19[0] = v13;
      v28 = (char *)a2 + 20;
      v31 = 16;
      v29 = 16;
      v26 = 0x1000000LL;
      CurrentThreadId = GetCurrentThreadId();
      v15 = *((_QWORD *)this + 34);
      v18 = CurrentThreadId;
      v17 = *(_DWORD *)(v15 + 72);
      v25 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v12,
        (unsigned int)&unk_1808161E5,
        v15 + 8,
        v16,
        (__int64)&v25,
        (__int64)&v17,
        (__int64)&v18,
        (__int64)&v26,
        (__int64)&v28,
        (__int64)&v30,
        (__int64)v19,
        (__int64)&v44,
        (__int64)&v43,
        (__int64)&v27,
        (__int64)&v42);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v7 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v7 > 5u )
    {
      v8 = *((_DWORD *)a2 + 18);
      v9 = *((_QWORD *)this + 34);
      v28 = (char *)a2 + 40;
      v42 = v8;
      v10 = *((_QWORD *)a2 + 8);
      v30 = (char *)a2 + 20;
      v34 = *((_QWORD *)v6 + 6);
      v20 = v6[17];
      v21 = v6[4];
      v35 = *((_QWORD *)v6 + 15);
      v36 = *((_QWORD *)v6 + 14);
      v22 = v6[26];
      v37 = *((_QWORD *)v6 + 12);
      v38 = *((_QWORD *)v6 + 11);
      v23 = v6[20];
      v39 = *((_QWORD *)v6 + 9);
      v24 = v6[8];
      v40 = *((_QWORD *)v6 + 3);
      v17 = *v6;
      v41[0] = *((_QWORD *)v6 + 16);
      v18 = v6[16];
      v25 = *((_QWORD *)v6 + 7);
      v19[0] = v6[2];
      v32 = v10;
      v43 = *((_DWORD *)a2 + 14);
      v44 = *((_DWORD *)a2 + 9);
      v19[1] = *((_DWORD *)a2 + 4);
      v29 = 16;
      v31 = 16;
      v33 = 0x1000000LL;
      v26 = 0x1000000LL;
      v27 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (__int64)v7,
        (__int64)&unk_180815FF2,
        v9 + 8,
        (__int64)v7,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)v19,
        &v25,
        (__int64)&v18,
        v41,
        (__int64)&v17,
        &v40,
        (__int64)&v24,
        &v39,
        (__int64)&v23,
        &v38,
        &v37,
        (__int64)&v22,
        &v36,
        &v35,
        (__int64)&v21,
        (__int64)&v20,
        &v34);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}

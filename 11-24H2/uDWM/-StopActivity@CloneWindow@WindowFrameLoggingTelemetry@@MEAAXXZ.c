/*
 * XREFs of ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180033C00
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180001B78 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180001B78.c)
 *     ?zInternalStop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180033E34 (-zInternalStop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Provider@WindowFrameLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180033FBC (-Provider@WindowFrameLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180034364 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::StopActivity(WindowFrameLoggingTelemetry::CloneWindow *this)
{
  int *v1; // rax
  int v3; // ecx
  const struct _tlgProvider_t *v4; // rax
  int v5; // edi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  int v8; // ecx
  int v9; // r9d
  int *v10; // rdi
  const struct _tlgProvider_t *v11; // r9
  const unsigned __int16 *v12; // rcx
  __int64 v13; // r8
  void *v14; // rax
  int v15; // [rsp+C0h] [rbp-80h] BYREF
  int v16; // [rsp+C4h] [rbp-7Ch] BYREF
  int v17; // [rsp+C8h] [rbp-78h] BYREF
  int v18; // [rsp+CCh] [rbp-74h] BYREF
  const unsigned __int16 *v19; // [rsp+D0h] [rbp-70h] BYREF
  void *v20; // [rsp+D8h] [rbp-68h] BYREF
  const unsigned __int16 *v21; // [rsp+E0h] [rbp-60h] BYREF
  void *v22; // [rsp+E8h] [rbp-58h] BYREF
  const unsigned __int16 *v23; // [rsp+F0h] [rbp-50h] BYREF
  const unsigned __int16 *v24; // [rsp+F8h] [rbp-48h] BYREF
  void *v25; // [rsp+100h] [rbp-40h] BYREF
  const unsigned __int16 *v26; // [rsp+108h] [rbp-38h] BYREF
  const unsigned __int16 *v27; // [rsp+110h] [rbp-30h] BYREF
  __int64 v28; // [rsp+118h] [rbp-28h] BYREF
  _QWORD v29[4]; // [rsp+120h] [rbp-20h] BYREF
  DWORD v30; // [rsp+150h] [rbp+10h] BYREF
  int v31; // [rsp+158h] [rbp+18h] BYREF
  __int64 v32; // [rsp+160h] [rbp+20h] BYREF
  __int64 v33; // [rsp+168h] [rbp+28h] BYREF

  v1 = (int *)*((_QWORD *)this + 34);
  v3 = v1[18];
  if ( v3 >= 0 || v3 != v1[22] || (v10 = v1 + 20, v1 == (int *)-80LL) )
  {
    wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v4 = WindowFrameLogging::Provider();
    v5 = (int)v4;
    if ( *(_DWORD *)v4 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 34);
      v30 = CurrentThreadId;
      v8 = *(_DWORD *)(v7 + 72);
      v32 = 0LL;
      v31 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        (unsigned int)&unk_180111BE9,
        v7 + 8,
        v9,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30);
    }
  }
  else
  {
    wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v11 = WindowFrameLogging::Provider();
    if ( *(_DWORD *)v11 > 5u )
    {
      v12 = (const unsigned __int16 *)*((_QWORD *)v10 + 6);
      v13 = *((_QWORD *)this + 34);
      LODWORD(v32) = v10[26];
      v14 = (void *)*((_QWORD *)v10 + 12);
      v29[0] = 0LL;
      v22 = v14;
      v23 = (const unsigned __int16 *)*((_QWORD *)v10 + 11);
      LODWORD(v33) = v10[20];
      v24 = (const unsigned __int16 *)*((_QWORD *)v10 + 9);
      v15 = v10[8];
      v25 = (void *)*((_QWORD *)v10 + 3);
      v16 = *v10;
      v26 = (const unsigned __int16 *)*((_QWORD *)v10 + 16);
      v17 = v10[16];
      v27 = (const unsigned __int16 *)*((_QWORD *)v10 + 7);
      v18 = v10[2];
      v19 = v12;
      v30 = v10[17];
      v31 = v10[4];
      v20 = (void *)*((_QWORD *)v10 + 15);
      v21 = (const unsigned __int16 *)*((_QWORD *)v10 + 14);
      v28 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v11,
        (int)&unk_180111AA3,
        v13 + 8,
        (__int64)v11,
        (__int64)v29,
        (__int64)&v28,
        (__int64)&v18,
        &v27,
        (__int64)&v17,
        &v26,
        (__int64)&v16,
        &v25,
        (__int64)&v15,
        &v24,
        (__int64)&v33,
        &v23,
        &v22,
        (__int64)&v32,
        &v21,
        &v20,
        (__int64)&v31,
        (__int64)&v30,
        &v19);
    }
  }
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(this);
}

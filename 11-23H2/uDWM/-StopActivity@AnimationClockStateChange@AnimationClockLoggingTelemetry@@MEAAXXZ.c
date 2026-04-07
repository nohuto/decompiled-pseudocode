/*
 * XREFs of ?StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180011580
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180010C88 (-zInternalStop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180010FD0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x180011734 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1800A9168 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800A9168.c)
 */

void __fastcall AnimationClockLoggingTelemetry::AnimationClockStateChange::StopActivity(
        AnimationClockLoggingTelemetry::AnimationClockStateChange *this)
{
  int *v1; // rax
  int v3; // ecx
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r9
  int *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // r9d
  _DWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // [rsp+C0h] [rbp-80h] BYREF
  int v18; // [rsp+C4h] [rbp-7Ch] BYREF
  int v19; // [rsp+C8h] [rbp-78h] BYREF
  int v20; // [rsp+CCh] [rbp-74h] BYREF
  __int64 v21; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v27; // [rsp+100h] [rbp-40h] BYREF
  __int64 v28; // [rsp+108h] [rbp-38h] BYREF
  __int64 v29; // [rsp+110h] [rbp-30h] BYREF
  __int64 v30; // [rsp+118h] [rbp-28h] BYREF
  _QWORD v31[4]; // [rsp+120h] [rbp-20h] BYREF
  DWORD v32; // [rsp+150h] [rbp+10h] BYREF
  int v33; // [rsp+158h] [rbp+18h] BYREF
  __int64 v34; // [rsp+160h] [rbp+20h] BYREF
  __int64 v35; // [rsp+168h] [rbp+28h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 >= 0 || v3 != v1[22] || (v10 = v1 + 20, v1 == (int *)-80LL) )
  {
    wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v5 = *(_DWORD **)(wil::details::static_lazy<AnimationClockLogging>::get(
                        v4,
                        _lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *v5 > 4u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 6);
      v32 = CurrentThreadId;
      v8 = *(_DWORD *)(v7 + 76);
      v34 = 0LL;
      v33 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v5,
        (int)&unk_180125B6B,
        v7 + 8,
        v9,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32);
    }
  }
  else
  {
    wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = wil::details::static_lazy<AnimationClockLogging>::get(
            v11,
            _lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_);
    v14 = *(_DWORD **)(v12 + 8);
    if ( *v14 > 4u )
    {
      v21 = *((_QWORD *)v10 + 6);
      v32 = v10[17];
      v33 = v10[4];
      v22 = *((_QWORD *)v10 + 15);
      v23 = *((_QWORD *)v10 + 14);
      v15 = *((_QWORD *)this + 6);
      LODWORD(v34) = v10[26];
      v16 = *((_QWORD *)v10 + 12);
      v31[0] = 0LL;
      v24 = v16;
      v25 = *((_QWORD *)v10 + 11);
      LODWORD(v35) = v10[20];
      v26 = *((_QWORD *)v10 + 9);
      v17 = v10[8];
      v27 = *((_QWORD *)v10 + 3);
      v18 = *v10;
      v28 = *((_QWORD *)v10 + 16);
      v19 = v10[16];
      v29 = *((_QWORD *)v10 + 7);
      v20 = v10[2];
      v30 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (_DWORD)v14,
        (unsigned int)&unk_180125A17,
        v15 + 8,
        v13,
        (__int64)v31,
        (__int64)&v30,
        (__int64)&v20,
        (__int64)&v29,
        (__int64)&v19,
        (__int64)&v28,
        (__int64)&v18,
        (__int64)&v27,
        (__int64)&v17,
        (__int64)&v26,
        (__int64)&v35,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v34,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v21);
    }
  }
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(this);
}

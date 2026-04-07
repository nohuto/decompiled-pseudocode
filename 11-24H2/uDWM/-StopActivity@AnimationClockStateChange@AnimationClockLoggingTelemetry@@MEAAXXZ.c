/*
 * XREFs of ?StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180034530
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180001B78 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180001B78.c)
 *     ?Provider@AnimationClockLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180032FE0 (-Provider@AnimationClockLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180033890 (-zInternalStop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180034364 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall AnimationClockLoggingTelemetry::AnimationClockStateChange::StopActivity(
        AnimationClockLoggingTelemetry::AnimationClockStateChange *this)
{
  int *v1; // rax
  int v3; // ecx
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // r9
  int *v10; // rdi
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // r9
  const unsigned __int16 *v13; // rcx
  __int64 v14; // r8
  void *v15; // rax
  int v16; // [rsp+C0h] [rbp-80h] BYREF
  int v17; // [rsp+C4h] [rbp-7Ch] BYREF
  int v18; // [rsp+C8h] [rbp-78h] BYREF
  int v19; // [rsp+CCh] [rbp-74h] BYREF
  const unsigned __int16 *v20; // [rsp+D0h] [rbp-70h] BYREF
  void *v21; // [rsp+D8h] [rbp-68h] BYREF
  const unsigned __int16 *v22; // [rsp+E0h] [rbp-60h] BYREF
  void *v23; // [rsp+E8h] [rbp-58h] BYREF
  const unsigned __int16 *v24; // [rsp+F0h] [rbp-50h] BYREF
  const unsigned __int16 *v25; // [rsp+F8h] [rbp-48h] BYREF
  void *v26; // [rsp+100h] [rbp-40h] BYREF
  const unsigned __int16 *v27; // [rsp+108h] [rbp-38h] BYREF
  const unsigned __int16 *v28; // [rsp+110h] [rbp-30h] BYREF
  __int64 v29; // [rsp+118h] [rbp-28h] BYREF
  _QWORD v30[4]; // [rsp+120h] [rbp-20h] BYREF
  DWORD v31; // [rsp+150h] [rbp+10h] BYREF
  int v32; // [rsp+158h] [rbp+18h] BYREF
  __int64 v33; // [rsp+160h] [rbp+20h] BYREF
  int v34; // [rsp+168h] [rbp+28h] BYREF

  v1 = (int *)*((_QWORD *)this + 34);
  v3 = v1[18];
  if ( v3 >= 0 || v3 != v1[22] || (v10 = v1 + 20, v1 == (int *)-80LL) )
  {
    wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v5 = AnimationClockLogging::Provider(v4);
    if ( *(_DWORD *)v5 > 4u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 34);
      v31 = CurrentThreadId;
      v8 = *(_DWORD *)(v7 + 72);
      v33 = 0LL;
      v32 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v5,
        byte_18011020B,
        v7 + 8,
        v9,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31);
    }
  }
  else
  {
    wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = AnimationClockLogging::Provider(v11);
    if ( *(_DWORD *)v12 > 4u )
    {
      v13 = (const unsigned __int16 *)*((_QWORD *)v10 + 6);
      v14 = *((_QWORD *)this + 34);
      LODWORD(v33) = v10[26];
      v15 = (void *)*((_QWORD *)v10 + 12);
      v30[0] = 0LL;
      v23 = v15;
      v24 = (const unsigned __int16 *)*((_QWORD *)v10 + 11);
      v34 = v10[20];
      v25 = (const unsigned __int16 *)*((_QWORD *)v10 + 9);
      v16 = v10[8];
      v26 = (void *)*((_QWORD *)v10 + 3);
      v17 = *v10;
      v27 = (const unsigned __int16 *)*((_QWORD *)v10 + 16);
      v18 = v10[16];
      v28 = (const unsigned __int16 *)*((_QWORD *)v10 + 7);
      v19 = v10[2];
      v20 = v13;
      v31 = v10[17];
      v32 = v10[4];
      v21 = (void *)*((_QWORD *)v10 + 15);
      v22 = (const unsigned __int16 *)*((_QWORD *)v10 + 14);
      v29 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v12,
        (int)&unk_1801100B7,
        v14 + 8,
        (__int64)v12,
        (__int64)v30,
        (__int64)&v29,
        (__int64)&v19,
        &v28,
        (__int64)&v18,
        &v27,
        (__int64)&v17,
        &v26,
        (__int64)&v16,
        &v25,
        (__int64)&v34,
        &v24,
        &v23,
        (__int64)&v33,
        &v22,
        &v21,
        (__int64)&v32,
        (__int64)&v31,
        &v20);
    }
  }
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(this);
}

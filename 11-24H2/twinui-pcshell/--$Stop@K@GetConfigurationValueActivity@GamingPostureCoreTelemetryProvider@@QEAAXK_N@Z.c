/*
 * XREFs of ??$Stop@K@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXK_N@Z @ 0x180339814
 * Callers:
 *     _anonymous_namespace_::GetConfigurationValue_unsigned_long_ @ 0x180338AB8 (_anonymous_namespace_--GetConfigurationValue_unsigned_long_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564454AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180002780 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180002780.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180003130 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$00@@@-$_tl.c)
 *     ?Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180331DFC (-Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803387D0 (-zInternalStop@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAA.c)
 */

void __fastcall GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::Stop<unsigned long>(__int64 a1)
{
  int *v1; // rax
  int v3; // ecx
  int *v4; // rdi
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  const struct _tlgProvider_t *v11; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  int v14; // ecx
  int v15; // [rsp+D0h] [rbp-80h] BYREF
  DWORD v16; // [rsp+D4h] [rbp-7Ch] BYREF
  int v17; // [rsp+D8h] [rbp-78h] BYREF
  int v18; // [rsp+DCh] [rbp-74h] BYREF
  int v19; // [rsp+E0h] [rbp-70h] BYREF
  int v20; // [rsp+E4h] [rbp-6Ch] BYREF
  int v21; // [rsp+E8h] [rbp-68h] BYREF
  int v22; // [rsp+ECh] [rbp-64h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+100h] [rbp-50h] BYREF
  __int64 v26; // [rsp+108h] [rbp-48h] BYREF
  __int64 v27; // [rsp+110h] [rbp-40h] BYREF
  __int64 v28; // [rsp+118h] [rbp-38h] BYREF
  __int64 v29; // [rsp+120h] [rbp-30h] BYREF
  __int64 v30; // [rsp+128h] [rbp-28h] BYREF
  __int64 v31; // [rsp+130h] [rbp-20h] BYREF
  __int64 v32; // [rsp+138h] [rbp-18h] BYREF
  __int64 v33; // [rsp+140h] [rbp-10h] BYREF

  v1 = *(int **)(a1 + 272);
  v3 = v1[18];
  if ( v3 >= 0 || v3 != v1[22] || (v4 = v1 + 20, v1 == (int *)-80LL) )
  {
    wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v11 = GamingPostureCoreTelemetryProvider::Provider(v10);
    if ( *(_DWORD *)v11 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v13 = *(_QWORD *)(a1 + 272);
      v16 = CurrentThreadId;
      v14 = *(_DWORD *)(v13 + 72);
      v23 = 0LL;
      v15 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (__int64)v11,
        (__int64)&unk_1807E6FA3);
    }
  }
  else
  {
    wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v6 = GamingPostureCoreTelemetryProvider::Provider(v5);
    if ( *(_DWORD *)v6 > 5u )
    {
      v26 = *((_QWORD *)v4 + 14);
      v7 = *((_QWORD *)v4 + 6);
      v19 = v4[26];
      v27 = *((_QWORD *)v4 + 12);
      v8 = *((_QWORD *)v4 + 11);
      v23 = 0LL;
      v9 = *(_QWORD *)(a1 + 272);
      v28 = v8;
      v20 = v4[20];
      v29 = *((_QWORD *)v4 + 9);
      v21 = v4[8];
      v30 = *((_QWORD *)v4 + 3);
      v22 = *v4;
      v31 = *((_QWORD *)v4 + 16);
      v15 = v4[16];
      v32 = *((_QWORD *)v4 + 7);
      v16 = v4[2];
      v24 = v7;
      v17 = v4[17];
      v18 = v4[4];
      v25 = *((_QWORD *)v4 + 15);
      v33 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (__int64)v6,
        (__int64)&unk_1807E6E35,
        v9 + 8,
        (__int64)v6,
        (__int64)&v23,
        (__int64)&v33,
        (__int64)&v16,
        &v32,
        (__int64)&v15,
        &v31,
        (__int64)&v22,
        &v30,
        (__int64)&v21,
        &v29,
        (__int64)&v20,
        &v28,
        &v27,
        (__int64)&v19,
        &v26,
        &v25,
        (__int64)&v18,
        (__int64)&v17,
        &v24);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}

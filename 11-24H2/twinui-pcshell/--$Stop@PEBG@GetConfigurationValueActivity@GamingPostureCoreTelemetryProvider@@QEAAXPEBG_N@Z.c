/*
 * XREFs of ??$Stop@PEBG@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG_N@Z @ 0x180339AA4
 * Callers:
 *     _anonymous_namespace_::GetConfigurationValue_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____ @ 0x180338CF0 (_anonymous_namespace_--GetConfigurationValue_std--basic_string_unsigned_short_std--char_traits_u.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U4@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564456AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180002AC4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180002AC4.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800031D0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U-$_tlgWrapperByV.c)
 *     ?Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180331DFC (-Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803387D0 (-zInternalStop@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAA.c)
 */

void __fastcall GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::Stop<unsigned short const *>(
        __int64 a1,
        __int64 a2)
{
  int *v2; // rax
  int v5; // ecx
  int *v6; // rdi
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  const struct _tlgProvider_t *v14; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // r9
  int v19; // [rsp+D0h] [rbp-80h] BYREF
  int v20; // [rsp+D4h] [rbp-7Ch] BYREF
  int v21; // [rsp+D8h] [rbp-78h] BYREF
  int v22; // [rsp+DCh] [rbp-74h] BYREF
  int v23; // [rsp+E0h] [rbp-70h] BYREF
  int v24; // [rsp+E4h] [rbp-6Ch] BYREF
  int v25; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v28; // [rsp+100h] [rbp-50h] BYREF
  __int64 v29; // [rsp+108h] [rbp-48h] BYREF
  __int64 v30; // [rsp+110h] [rbp-40h] BYREF
  __int64 v31; // [rsp+118h] [rbp-38h] BYREF
  __int64 v32; // [rsp+120h] [rbp-30h] BYREF
  __int64 v33; // [rsp+128h] [rbp-28h] BYREF
  __int64 v34; // [rsp+130h] [rbp-20h] BYREF
  __int64 v35; // [rsp+138h] [rbp-18h] BYREF
  __int64 v36; // [rsp+140h] [rbp-10h] BYREF
  __int64 v37; // [rsp+148h] [rbp-8h] BYREF
  DWORD v38; // [rsp+188h] [rbp+38h] BYREF

  v2 = *(int **)(a1 + 272);
  v5 = v2[18];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v14 = GamingPostureCoreTelemetryProvider::Provider(v13);
    if ( *(_DWORD *)v14 > 5u )
    {
      v27 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v16 = *(_QWORD *)(a1 + 272);
      v38 = CurrentThreadId;
      v17 = *(_DWORD *)(v16 + 72);
      v26 = 0LL;
      v19 = v17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
        (__int64)v14,
        (__int64)&unk_1807E6C53,
        v16 + 8,
        v18,
        (__int64)&v26,
        (__int64)&v19,
        (__int64)&v38,
        &v27);
    }
  }
  else
  {
    wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v8 = GamingPostureCoreTelemetryProvider::Provider(v7);
    if ( *(_DWORD *)v8 > 5u )
    {
      v31 = *((_QWORD *)v6 + 14);
      v9 = *((_QWORD *)v6 + 6);
      v21 = v6[26];
      v32 = *((_QWORD *)v6 + 12);
      v10 = *((_QWORD *)v6 + 11);
      v27 = 0LL;
      v11 = *(_QWORD *)(a1 + 272);
      v33 = v10;
      v22 = v6[20];
      v34 = *((_QWORD *)v6 + 9);
      v23 = v6[8];
      v35 = *((_QWORD *)v6 + 3);
      v24 = *v6;
      v36 = *((_QWORD *)v6 + 16);
      v25 = v6[16];
      v37 = *((_QWORD *)v6 + 7);
      v19 = v6[2];
      v29 = v9;
      v38 = v6[17];
      v20 = v6[4];
      v12 = *((_QWORD *)v6 + 15);
      v28 = a2;
      v30 = v12;
      v26 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
        (__int64)v8,
        (__int64)&unk_1807E6CC7,
        v11 + 8,
        (__int64)v8,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v19,
        &v37,
        (__int64)&v25,
        &v36,
        (__int64)&v24,
        &v35,
        (__int64)&v23,
        &v34,
        (__int64)&v22,
        &v33,
        &v32,
        (__int64)&v21,
        &v31,
        &v30,
        (__int64)&v20,
        (__int64)&v38,
        &v29,
        &v28);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}

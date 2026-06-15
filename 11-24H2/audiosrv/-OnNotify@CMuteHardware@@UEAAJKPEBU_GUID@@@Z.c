/*
 * XREFs of ?OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z @ 0x18007D6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180003AA8 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ?GetMuteValue@CMuteHardware@@QEAAJPEAH@Z @ 0x18006FFDC (-GetMuteValue@CMuteHardware@@QEAAJPEAH@Z.c)
 *     WPP_SF_q_guid_ @ 0x1800C35B0 (WPP_SF_q_guid_.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMuteHardware::OnNotify(CMuteHardware *this, unsigned int a2, const struct _GUID *a3)
{
  int *v6; // rsi
  int v7; // ebp
  _DWORD *v8; // rcx
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  const WCHAR *v15; // [rsp+40h] [rbp-28h] BYREF
  int v16[2]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v18; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+88h] [rbp+20h] BYREF

  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      20,
      (unsigned int)&WPP_7f672c8107043d7bc81576871ecf25df_Traceguids,
      (_DWORD)this,
      (__int64)a3);
  }
  if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)((char *)this + 68) && *(_QWORD *)a3->Data4 == *(_QWORD *)((char *)this + 76) )
    return 0LL;
  v6 = (int *)((char *)this + 24);
  v7 = *((_DWORD *)this + 6);
  CMuteHardware::GetMuteValue(this, (int *)this + 6);
  if ( !a2
    && EVENTCONTEXT_HARDWARE_INITIATED == *(_QWORD *)&a3->Data1
    && *(_QWORD *)a3->Data4 == 0x2ADE9700B0F38CBDLL
    && v7 != *v6 )
  {
    v8 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v8 > 4u && tlgKeywordOn((__int64)v8, 0x400000000000LL) )
    {
      v18 = *v6;
      v15 = (const WCHAR *)*((_QWORD *)this + 5);
      *(_QWORD *)v16 = *((_QWORD *)this + 4);
      v19 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        (int)&unk_1801AD044,
        v10,
        v11,
        (const WCHAR **)v16,
        &v15,
        (__int64)&v19,
        (__int64)&v18);
    }
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 2) + 24LL))(
          *((_QWORD *)this + 2),
          a2,
          a3);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30F,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}

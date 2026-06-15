/*
 * XREFs of ?OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z @ 0x1800FBD50
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180003A24 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800271A0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180027E54 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180043528 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x18009E07C (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x1800FBAA8 (-AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 *     ?DeleteRegistryEntry@EffectPackConfigurationManager@@CAXU_GUID@@@Z @ 0x1800FBC48 (-DeleteRegistryEntry@EffectPackConfigurationManager@@CAXU_GUID@@@Z.c)
 *     ?RemoveEffectPackConfigurationFromList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x1800FC080 (-RemoveEffectPackConfigurationFromList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 *     ?SkipVoiceClarityEffectPack@EffectPackConfigurationManager@@AEAA_NU_GUID@@@Z @ 0x1800FC528 (-SkipVoiceClarityEffectPack@EffectPackConfigurationManager@@AEAA_NU_GUID@@@Z.c)
 */

__int64 __fastcall EffectPackConfigurationManager::OnMediaNotification(
        EffectPackConfigurationManager *this,
        struct MEDIA_NOTIFICATION_BLOCK *a2)
{
  const char *v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  int v7; // ebx
  EffectPackConfigurationManager *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  struct CSerialWorkQueue *v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  struct CSerialWorkQueue *SerialWorkQueue; // rbx
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // rdx
  const char *v19; // [rsp+28h] [rbp-41h]
  __int64 v20; // [rsp+30h] [rbp-39h] BYREF
  __int64 (__fastcall **v21)(); // [rsp+38h] [rbp-31h] BYREF
  __int64 v22; // [rsp+40h] [rbp-29h]
  __int128 v23; // [rsp+48h] [rbp-21h]
  __int64 (__fastcall ***v24)(); // [rsp+70h] [rbp+7h]
  _BYTE v25[24]; // [rsp+80h] [rbp+17h] BYREF
  __int128 v26; // [rsp+A0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( !a2 )
  {
    v3 = "NULL Media Notification Block";
    v4 = 21LL;
LABEL_3:
    v5 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v4,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
      (const char *)0x80070057LL,
      (__int64)v3,
      v19);
    return v5;
  }
  if ( *(_DWORD *)a2 < 0x18u )
  {
    v3 = "Invalid Media Notification Block size";
    v4 = 22LL;
    goto LABEL_3;
  }
  if ( *((_DWORD *)a2 + 1) != 0x400000 )
  {
    v3 = "Incorrect Media Notification Block";
    v4 = 23LL;
    goto LABEL_3;
  }
  v7 = *((_DWORD *)a2 + 6);
  v26 = *(_OWORD *)((char *)a2 + 28);
  v8 = (EffectPackConfigurationManager *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v8 > 4u && tlgKeywordOn((__int64)v8, 2048LL) )
  {
    LODWORD(v20) = v7;
    *(_QWORD *)v25 = &v26;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      (int)v8,
      (int)&unk_1801ACF91,
      v9,
      v10,
      v25,
      (__int64)&v20);
  }
  *(_OWORD *)v25 = v26;
  if ( v7 == 2 )
  {
    EffectPackConfigurationManager::RemoveEffectPackConfigurationFromList(this, (struct _GUID *)v25);
    wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
      &v20,
      (__int64)this);
    SerialWorkQueue = GetSerialWorkQueue();
    wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
      v25,
      v20);
    v16 = *(_QWORD *)v25;
    *(_QWORD *)v25 = 0LL;
    v21 = off_18017D490;
    v22 = v16;
    v24 = &v21;
    *(_OWORD *)&v25[8] = v26;
    v23 = v26;
    v17 = CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, (__int64 *)&v21);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        68LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
        (const char *)(unsigned int)v17);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
    *(_OWORD *)v25 = v26;
    EffectPackConfigurationManager::DeleteRegistryEntry((struct _GUID *)v25, v18);
LABEL_22:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
    return 0LL;
  }
  if ( !EffectPackConfigurationManager::SkipVoiceClarityEffectPack(v8, (struct _GUID *)v25) )
  {
    *(_OWORD *)v25 = v26;
    v11 = EffectPackConfigurationManager::AddEffectPackConfigurationToList(this, (struct _GUID *)v25);
    v5 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
        (const char *)(unsigned int)v11);
      return v5;
    }
    wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
      &v20,
      (__int64)this);
    v12 = GetSerialWorkQueue();
    wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
      v25,
      v20);
    v13 = *(_QWORD *)v25;
    *(_QWORD *)v25 = 0LL;
    v21 = off_18017D4F0;
    v22 = v13;
    v24 = &v21;
    *(_OWORD *)&v25[8] = v26;
    v23 = v26;
    v14 = CSerialWorkQueue::QueueWorkItem((__int64)v12, (__int64 *)&v21);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        56LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
        (const char *)(unsigned int)v14);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
    goto LABEL_22;
  }
  return 0LL;
}

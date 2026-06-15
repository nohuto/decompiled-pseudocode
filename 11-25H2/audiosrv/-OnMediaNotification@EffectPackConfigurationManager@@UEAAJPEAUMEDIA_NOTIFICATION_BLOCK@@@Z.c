/*
 * XREFs of ?OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z @ 0x1800F8CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180003910 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001CAB0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x18001DF28 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18004F238 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800A1B1C (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x1800F8A04 (-AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 *     ?DeleteRegistryEntry@EffectPackConfigurationManager@@CAXU_GUID@@@Z @ 0x1800F8BA4 (-DeleteRegistryEntry@EffectPackConfigurationManager@@CAXU_GUID@@@Z.c)
 *     ?RemoveEffectPackConfigurationFromList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x1800F8FC0 (-RemoveEffectPackConfigurationFromList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 */

__int64 __fastcall EffectPackConfigurationManager::OnMediaNotification(
        EffectPackConfigurationManager *this,
        struct MEDIA_NOTIFICATION_BLOCK *a2)
{
  const char *v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  int v7; // ebx
  _DWORD *v8; // rcx
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  struct CSerialWorkQueue *v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  struct CSerialWorkQueue *SerialWorkQueue; // rbx
  __int64 v17; // rcx
  int v18; // eax
  unsigned __int64 v19; // rdx
  const char *v20; // [rsp+28h] [rbp-41h]
  __int64 v21; // [rsp+30h] [rbp-39h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+38h] [rbp-31h] BYREF
  __int64 v23; // [rsp+40h] [rbp-29h]
  __int128 v24; // [rsp+48h] [rbp-21h]
  __int64 (__fastcall ***v25)(); // [rsp+70h] [rbp+7h]
  _BYTE v26[24]; // [rsp+80h] [rbp+17h] BYREF
  __int128 v27; // [rsp+A0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( !a2 )
  {
    v3 = "NULL Media Notification Block";
    v4 = 20LL;
LABEL_3:
    v5 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v4,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
      (const char *)0x80070057LL,
      (__int64)v3,
      v20);
    return v5;
  }
  if ( *(_DWORD *)a2 < 0x18u )
  {
    v3 = "Invalid Media Notification Block size";
    v4 = 21LL;
    goto LABEL_3;
  }
  if ( *((_DWORD *)a2 + 1) != 0x400000 )
  {
    v3 = "Incorrect Media Notification Block";
    v4 = 22LL;
    goto LABEL_3;
  }
  v7 = *((_DWORD *)a2 + 6);
  v27 = *(_OWORD *)((char *)a2 + 28);
  v8 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v8 > 4u && tlgKeywordOn((__int64)v8, 2048LL) )
  {
    LODWORD(v21) = v7;
    *(_QWORD *)v26 = &v27;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      v9,
      (int)&unk_1801A2321,
      v10,
      v11,
      v26,
      (__int64)&v21);
  }
  *(_OWORD *)v26 = v27;
  if ( v7 == 2 )
  {
    EffectPackConfigurationManager::RemoveEffectPackConfigurationFromList(this, (struct _GUID *)v26);
    wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
      &v21,
      (__int64)this);
    SerialWorkQueue = GetSerialWorkQueue();
    wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
      v26,
      v21);
    v17 = *(_QWORD *)v26;
    *(_QWORD *)v26 = 0LL;
    v22 = off_180173318;
    v23 = v17;
    v25 = &v22;
    *(_OWORD *)&v26[8] = v27;
    v24 = v27;
    v18 = CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, (__int64 *)&v22);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        64LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
        (const char *)(unsigned int)v18);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v26);
    *(_OWORD *)v26 = v27;
    EffectPackConfigurationManager::DeleteRegistryEntry((struct _GUID *)v26, v19);
  }
  else
  {
    v12 = EffectPackConfigurationManager::AddEffectPackConfigurationToList(this, (struct _GUID *)v26);
    v5 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
        (const char *)(unsigned int)v12);
      return v5;
    }
    wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
      &v21,
      (__int64)this);
    v13 = GetSerialWorkQueue();
    wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
      v26,
      v21);
    v14 = *(_QWORD *)v26;
    *(_QWORD *)v26 = 0LL;
    v22 = off_180173378;
    v23 = v14;
    v25 = &v22;
    *(_OWORD *)&v26[8] = v27;
    v24 = v27;
    v15 = CSerialWorkQueue::QueueWorkItem((__int64)v13, (__int64 *)&v22);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        52LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
        (const char *)(unsigned int)v15);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v26);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
  return 0LL;
}

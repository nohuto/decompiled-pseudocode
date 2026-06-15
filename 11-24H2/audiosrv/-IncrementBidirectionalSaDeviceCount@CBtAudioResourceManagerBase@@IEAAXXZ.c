/*
 * XREFs of ?IncrementBidirectionalSaDeviceCount@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800DEE10
 * Callers:
 *     ?OnSaDeviceCreation@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z @ 0x1800DF320 (-OnSaDeviceCreation@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3@Z @ 0x18000266C (--$Write@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800108DC (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ?NotifyBidirectionalModeChanged@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800DF10C (-NotifyBidirectionalModeChanged@CBtAudioResourceManagerBase@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CBtAudioResourceManagerBase::IncrementBidirectionalSaDeviceCount(CBtAudioResourceManagerBase *this)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  _DWORD *v3; // rcx
  int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r9
  const WCHAR *v7; // [rsp+40h] [rbp+8h] BYREF
  const WCHAR *v8; // [rsp+48h] [rbp+10h] BYREF
  char *v9; // [rsp+50h] [rbp+18h]

  v2 = (CBtAudioResourceManagerBase *)((char *)this + 520);
  v9 = (char *)this + 520;
  std::_Mutex_base::lock((CBtAudioResourceManagerBase *)((char *)this + 520));
  if ( ++*((_DWORD *)this + 138) == 1 )
  {
    v3 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v3 > 4u && tlgKeywordOn((__int64)v3, 0x4000LL) )
    {
      v7 = (const WCHAR *)*((_QWORD *)this + 8);
      v8 = (const WCHAR *)*((_QWORD *)this + 7);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v4,
        (int)&unk_1801AB3E1,
        v5,
        v6,
        &v8,
        &v7);
    }
    CBtAudioResourceManagerBase::NotifyBidirectionalModeChanged(this);
  }
  _Mtx_unlock(v2);
}

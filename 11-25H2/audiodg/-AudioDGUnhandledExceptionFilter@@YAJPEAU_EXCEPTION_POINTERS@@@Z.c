/*
 * XREFs of ?AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x14006EDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140002028 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x14002B750 (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSys.c)
 *     ?TrackAPOFailureUnhandled@CSystemAudioDeviceSharedBase@@QEAAXM@Z @ 0x140074740 (-TrackAPOFailureUnhandled@CSystemAudioDeviceSharedBase@@QEAAXM@Z.c)
 */

__int64 __fastcall AudioDGUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  int v1; // ebx
  unsigned int v2; // edi
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char *ValueAt; // rax
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v1 = dword_1400C47D8;
  v2 = 0;
  if ( dword_1400C47D8 )
  {
    v3 = AudioDgTelemetryProvider::Provider((__int64)ExceptionInfo);
    if ( *(_DWORD *)v3 > 2u )
    {
      v9 = v1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (int)v3,
        (int)&unk_1400B09DB,
        v5,
        v6,
        (__int64)&v9);
    }
    if ( v1 )
    {
      do
      {
        ValueAt = ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::GetValueAt(
                    v4,
                    v2);
        CSystemAudioDeviceSharedBase::TrackAPOFailureUnhandled(*(CSystemAudioDeviceSharedBase **)ValueAt, (float)v1);
        ++v2;
      }
      while ( v2 < v1 );
    }
  }
  return 0LL;
}

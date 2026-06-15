/*
 * XREFs of ?GetExtendedProperties@CAPOWrapperSrv@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x140063B00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14003F5D4 (--0-$CComQIPtr@UIAudioProcessingObjectInternal@@$1-_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetExtendedProperties(CAPOWrapperSrv *this, enum EXTENDED_APO_FLAGS *a2)
{
  const struct _tlgProvider_t *v4; // rax
  unsigned int v5; // ebx
  __int64 v7[2]; // [rsp+20h] [rbp-118h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-108h] BYREF

  v4 = AudioDgTelemetryProvider::Provider((__int64)this);
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    v4,
    "SrvSystemEffect_GetExtendedProperties",
    (const char *const)this + 116);
  ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
    v7,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 9));
  if ( v7[0] )
    v5 = (*(__int64 (__fastcall **)(__int64, enum EXTENDED_APO_FLAGS *))(*(_QWORD *)v7[0] + 24LL))(v7[0], a2);
  else
    v5 = -2147467262;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v7);
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v5;
}

/*
 * XREFs of ?GetDesiredReferenceStreamPropertiesRemote@CAPOWrapperSrv@@UEAAJPEAW4APO_REFERENCE_STREAM_PROPERTIES@@@Z @ 0x140063AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComQIPtr@UIApoAcousticEchoCancellation2@@$1?_GUID_f235855f_f06d_45b3_a63f_ee4b71509dc2@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140041694 (--0-$CComQIPtr@UIApoAcousticEchoCancellation2@@$1-_GUID_f235855f_f06d_45b3_a63f_ee4b71509dc2@@3U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetDesiredReferenceStreamPropertiesRemote(
        CAPOWrapperSrv *this,
        enum APO_REFERENCE_STREAM_PROPERTIES *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  ATL::CComQIPtr<IApoAcousticEchoCancellation2,&__s_GUID const _GUID_f235855f_f06d_45b3_a63f_ee4b71509dc2>::CComQIPtr<IApoAcousticEchoCancellation2,&__s_GUID const _GUID_f235855f_f06d_45b3_a63f_ee4b71509dc2>(
    &v5,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 12));
  if ( v5 )
    v3 = (*(__int64 (__fastcall **)(__int64, enum APO_REFERENCE_STREAM_PROPERTIES *))(*(_QWORD *)v5 + 24LL))(v5, a2);
  else
    v3 = -2147467262;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v5);
  return v3;
}

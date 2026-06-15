/*
 * XREFs of ?GetFormatRepresentationRemote@CAPOWrapperSrv@@UEAAJIPEAPEAG@Z @ 0x140063CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComQIPtr@UIAudioSystemEffectsCustomFormats@@$1?_GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14003FA9C (--0-$CComQIPtr@UIAudioSystemEffectsCustomFormats@@$1-_GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetFormatRepresentationRemote(
        CAPOWrapperSrv *this,
        unsigned int a2,
        unsigned __int16 **a3)
{
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  ATL::CComQIPtr<IAudioSystemEffectsCustomFormats,&__s_GUID const _GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097>::CComQIPtr<IAudioSystemEffectsCustomFormats,&__s_GUID const _GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097>(
    &v7,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 12));
  if ( v7 )
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int16 **))(*(_QWORD *)v7 + 40LL))(v7, a2, a3);
  else
    v5 = -2147467262;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v7);
  return v5;
}

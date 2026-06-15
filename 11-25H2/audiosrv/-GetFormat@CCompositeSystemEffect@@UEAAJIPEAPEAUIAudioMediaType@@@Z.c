/*
 * XREFs of ?GetFormat@CCompositeSystemEffect@@UEAAJIPEAPEAUIAudioMediaType@@@Z @ 0x180141AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18006C8EC (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     ??$com_query_to_nothrow@UIAudioSystemEffectsCustomFormats@@AEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@wil@@YAJAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@PEAPEAUIAudioSystemEffectsCustomFormats@@@Z @ 0x1801414E4 (--$com_query_to_nothrow@UIAudioSystemEffectsCustomFormats@@AEAV-$ComPtr@UIAudioProcessingObject@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCompositeSystemEffect::GetFormat(
        CCompositeSystemEffect *this,
        unsigned int a2,
        struct IAudioMediaType **a3)
{
  int v5; // edx
  _QWORD *v6; // rax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v5 = *((_DWORD *)this + 22);
  if ( v5 )
  {
    v9 = 0LL;
    v6 = (_QWORD *)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                     (__int64)this + 80,
                     v5 - 1);
    wil::com_query_to_nothrow<IAudioSystemEffectsCustomFormats,Microsoft::WRL::ComPtr<IAudioProcessingObject> &>(
      v6,
      (__int64)&v9);
    if ( v9 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioMediaType **))(*(_QWORD *)v9 + 32LL))(v9, a2, a3);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
      return v7;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
  }
  return 0LL;
}

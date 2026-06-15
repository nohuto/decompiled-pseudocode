/*
 * XREFs of ?CheckForPreferredFormat@EffectPack@@QEAAJPEAUIAudioProcessingObject@@PEAUIAudioMediaType@@PEAPEAU3@@Z @ 0x18012AE2C
 * Callers:
 *     ?DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x1800497EC (-DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?DeriveOverridingMixFormatInternal@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x1800875E0 (-DeriveOverridingMixFormatInternal@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A43C4 (--1-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EffectPack::CheckForPreferredFormat(
        EffectPack *this,
        struct IAudioProcessingObject *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  int v7; // eax
  _QWORD *v8; // rbx
  bool v9; // zf
  __int64 v10; // rax
  __int64 (__fastcall *v11)(_QWORD *, struct IAudioMediaType *, struct IAudioMediaType **); // rdi
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(_QWORD *, struct IAudioMediaType *, struct IAudioMediaType **); // rdi
  struct IAudioMediaType *v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IAudioMediaType *v19; // [rsp+48h] [rbp+28h] BYREF
  _QWORD *v20; // [rsp+58h] [rbp+38h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    v20 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD **))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3,
           &v20) >= 0
      && v20 )
    {
      v19 = 0LL;
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 198) + 56LL))(*((_QWORD *)this + 198));
      v8 = v20;
      v9 = v7 == 0;
      v10 = *v20;
      if ( v9 )
      {
        v11 = *(__int64 (__fastcall **)(_QWORD *, struct IAudioMediaType *, struct IAudioMediaType **))(v10 + 24);
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v19);
        v12 = v11(v8, a3, &v19);
        v13 = v12;
        if ( v12 < 0 )
        {
          v14 = 7936LL;
LABEL_9:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v14,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v12);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
          wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&v20);
          return v13;
        }
      }
      else
      {
        v15 = *(__int64 (__fastcall **)(_QWORD *, struct IAudioMediaType *, struct IAudioMediaType **))(v10 + 32);
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v19);
        v12 = v15(v8, a3, &v19);
        v13 = v12;
        if ( v12 < 0 )
        {
          v14 = 7940LL;
          goto LABEL_9;
        }
      }
      v17 = v19;
      v19 = 0LL;
      *a4 = v17;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
    }
    wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&v20);
  }
  return 0LL;
}

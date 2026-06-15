/*
 * XREFs of ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x18002DAC8
 * Callers:
 *     ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x18010D180 (-ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_ae578691215ccdc9894b78260bb740f3__void_::_Do_call @ 0x18010DE80 (std--_Func_impl_no_alloc__lambda_ae578691215ccdc9894b78260bb740f3__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180052470 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_S @ 0x1800C17A4 (WPP_SF_S.c)
 *     WPP_SF_Sdg @ 0x1800C4534 (WPP_SF_Sdg.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CVolumeSoftware::PersistVolumeState(CVolumeSoftware *this)
{
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  int v3; // eax
  __int64 v4; // rax
  int v5; // eax
  __int64 i; // rdi
  float *v7; // rax
  __int64 v8; // rax
  __m128 v9; // xmm0
  int v10; // [rsp+20h] [rbp-30h]
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  float *v12; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF
  __int64 *v15; // [rsp+88h] [rbp+38h] BYREF

  if ( _InterlockedExchange((volatile __int32 *)this + 75, 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_39683fa90ec33421f15b53210ac19d77_Traceguids);
    }
    v15 = 0LL;
    lpVtbl = g_DeviceEnumerator->lpVtbl;
    v15 = 0LL;
    v3 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64 **))lpVtbl->GetDevice)(
           g_DeviceEnumerator,
           *((_QWORD *)this + 7),
           &v15);
    if ( v3 >= 0 )
    {
      v14 = 0LL;
      v4 = *v15;
      v14 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v4 + 32))(v15, 1LL, &v14);
      if ( v5 >= 0 )
      {
        *(_OWORD *)pvar = 0LL;
        v12 = 0LL;
        LOWORD(pvar[0]) = 65;
        LODWORD(pvar[1]) = 4 * *((_DWORD *)this + 29);
        v12 = (float *)CoTaskMemAlloc(LODWORD(pvar[1]));
        if ( v12 )
        {
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 29); i = (unsigned int)(i + 1) )
          {
            v7 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                            (char *)this + 80,
                            (unsigned int)i);
            v12[i] = fmaxf(fminf(v7[1], v7[3]), v7[2]);
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              v8 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                     (char *)this + 80,
                     (unsigned int)i);
              v9 = (__m128)*(unsigned int *)(v8 + 4);
              v9.m128_f32[0] = fmaxf(fminf(v9.m128_f32[0], *(float *)(v8 + 12)), *(float *)(v8 + 8));
              WPP_SF_Sdg(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                42,
                (unsigned int)&WPP_39683fa90ec33421f15b53210ac19d77_Traceguids,
                *((_QWORD *)this + 7),
                i,
                *(_OWORD *)&_mm_cvtps_pd(v9));
            }
          }
          (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v14 + 48LL))(
            v14,
            &PKEY_APO_MasterVolumeLevel,
            pvar);
        }
        PropVariantClear(pvar);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x6BE,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
          (const char *)(unsigned int)v5,
          v10);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6BB,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)(unsigned int)v3,
        v10);
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64 *))(*v15 + 16))(v15);
  }
}

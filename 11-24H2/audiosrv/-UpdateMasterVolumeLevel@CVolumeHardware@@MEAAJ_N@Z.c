/*
 * XREFs of ?UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJ_N@Z @ 0x1801156B0
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180048740 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18006DB00 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     WPP_SF_Pg @ 0x180115A30 (WPP_SF_Pg.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeHardware::UpdateMasterVolumeLevel(CVolumeHardware *this)
{
  float *v2; // rbx
  unsigned int v3; // edi
  float *v4; // rcx
  unsigned __int64 i; // rdi
  float *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  void *Block; // [rsp+40h] [rbp+8h] BYREF

  Block = 0LL;
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&Block, *((unsigned int *)this + 29));
  v2 = (float *)Block;
  if ( Block )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 11); ++i )
    {
      v6 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, i);
      v2[i] = fmaxf(fminf(v6[1], v6[3]), v6[2]);
      if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
        && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Pg(*((_QWORD *)WPP_GLOBAL_Control + 2), v7, v8, i, v2[i]);
      }
    }
    v3 = (*(__int64 (__fastcall **)(_QWORD, float *, _QWORD, char *))(**((_QWORD **)this + 32) + 64LL))(
           *((_QWORD *)this + 32),
           v2,
           *((unsigned int *)this + 29),
           (char *)this + 264);
    v4 = v2;
  }
  else
  {
    v3 = -2147024882;
    v4 = 0LL;
  }
  free(v4);
  return v3;
}

/*
 * XREFs of ?InternalInsertValue@HidChannelValueInfo@@AEAAXI_KPEAE@Z @ 0x1800653CC
 * Callers:
 *     ?InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z @ 0x180065024 (-InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x180065050 (-CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceR.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z @ 0x18006536C (-InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJE_KPEAE@Z @ 0x18006539C (-InsertValue@HidChannelValueInfo@@QEAAJE_KPEAE@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55768834@@@details@wil@@QEAA_NXZ @ 0x1800EDFFC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55768834@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall HidChannelValueInfo::InternalInsertValue(
        HidChannelValueInfo *this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int8 *a4)
{
  __int64 v5; // rbx
  unsigned __int8 *v6; // rsi
  unsigned __int8 v7; // bp

  if ( *((unsigned int *)this + 12) < a3 )
  {
    v5 = (unsigned __int64)a2 << *((_DWORD *)this + 11);
    v6 = &a4[*((unsigned int *)this + 14) + 1];
    *v6 = v5;
    v7 = 1;
    if ( *((_DWORD *)this + 10) > 1u )
    {
      do
      {
        ++v6;
        v5 >>= 8;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_55768834>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55768834>::GetImpl'::`2'::impl);
        *v6 |= v5;
        ++v7;
      }
      while ( (unsigned int)v7 < *((_DWORD *)this + 10) );
    }
  }
}

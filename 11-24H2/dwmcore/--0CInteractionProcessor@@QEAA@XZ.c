/*
 * XREFs of ??0CInteractionProcessor@@QEAA@XZ @ 0x180191C90
 * Callers:
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x180191B94 (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x18019472C (-Initialize@CManipulationContext@@QEAAJ_NK@Z.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??0?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAA@W4InputType@@@Z @ 0x180191E90 (--0-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4FlagsEn.c)
 *     ??0?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAA@W4InputType@@@Z @ 0x180191F24 (--0-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4FlagsEnum@Dw.c)
 *     ??0?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAA@W4InputType@@@Z @ 0x180191FB8 (--0-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Flags.c)
 *     ??0?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAA@W4InputType@@@Z @ 0x18019204C (--0-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4FlagsEnum@.c)
 *     InitializeInteractionStateInfo @ 0x1801920E0 (InitializeInteractionStateInfo.c)
 *     ??0TemporaryConfiguration@@QEAA@XZ @ 0x1802061E0 (--0TemporaryConfiguration@@QEAA@XZ.c)
 */

CInteractionProcessor *__fastcall CInteractionProcessor::CInteractionProcessor(CInteractionProcessor *this)
{
  __int64 v2; // rcx
  CDirtyRegionAnnotation *v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rsi
  CDirtyRegionAnnotation *v6; // rdi

  CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>();
  CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(v2 + 160);
  CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>((char *)this + 320);
  CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>((char *)this + 480);
  v3 = (CInteractionProcessor *)((char *)this + 1272);
  *((_DWORD *)this + 160) = 0;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  v4 = 3LL;
  *((_DWORD *)this + 170) = 0;
  v5 = 3LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_DWORD *)this + 178) = 0;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_DWORD *)this + 186) = 0;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_DWORD *)this + 194) = 0;
  *((_DWORD *)this + 226) = 0;
  *((_DWORD *)this + 243) = 0;
  *((_DWORD *)this + 260) = 0;
  *((_DWORD *)this + 277) = 0;
  *((_DWORD *)this + 294) = 0;
  *((_DWORD *)this + 311) = 0;
  *((_BYTE *)this + 1264) &= 0xF0u;
  *((_DWORD *)this + 317) = 0;
  do
  {
    --v5;
    if ( TemporaryConfiguration::TemporaryConfiguration == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v3);
    else
      TemporaryConfiguration::TemporaryConfiguration(v3);
    v3 = (CDirtyRegionAnnotation *)((char *)v3 + 12);
  }
  while ( v5 );
  v6 = (CInteractionProcessor *)((char *)this + 1308);
  do
  {
    --v4;
    if ( TemporaryConfiguration::TemporaryConfiguration == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v6);
    else
      TemporaryConfiguration::TemporaryConfiguration(v6);
    v6 = (CDirtyRegionAnnotation *)((char *)v6 + 12);
  }
  while ( v4 );
  InitializeInteractionStateInfo((char *)this + 784);
  return this;
}

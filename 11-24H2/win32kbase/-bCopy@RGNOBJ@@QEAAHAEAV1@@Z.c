/*
 * XREFs of ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140025B10
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1400262A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14002BA00 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x14003D278 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x140174F70 (EngUpdateDeviceSurface.c)
 *     RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___ @ 0x1401C0F70 (RGNCOREOBJ--iCombine_RGNOBJ__RGNOBJ--iCombine_--_2_--_lambda_1___.c)
 * Callees:
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140026664 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14002689C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x14002AF10 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1400673D0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z @ 0x1400DD83C (-bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z.c)
 *     Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledDeviceUsageNoInline @ 0x1401B60C8 (Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RegionCore_bCopy@Win32kRS@@YA_NPEAVREGION_CORE@@PEBV2@@Z @ 0x1401C1340 (-RegionCore_bCopy@Win32kRS@@YA_NPEAVREGION_CORE@@PEBV2@@Z.c)
 */

_BOOL8 __fastcall RGNOBJ::bCopy(RGNOBJ *this, struct RGNOBJ *a2)
{
  __int64 v3; // r8
  _QWORD *v4; // r9
  __int64 v6; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+20h] BYREF
  __int64 v8; // [rsp+58h] [rbp+28h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = *(_QWORD **)this;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    return Win32kRS::RegionCore_bCopy(
             (Win32kRS *)((unsigned __int64)(v4 + 3) & -(__int64)(v4 != 0LL)),
             (struct REGION_CORE *)((v3 + 24) & -(__int64)(v3 != 0)),
             (const struct REGION_CORE *)-v3);
  v8 = (v3 + 24) & -(__int64)(v3 != 0);
  LODWORD(v7) = 0;
  v6 = (unsigned __int64)(v4 + 3) & -(__int64)(v4 != 0LL);
  if ( RGNCOREOBJ::bIsResizeRequiredBeforeCopyingRegion(
         (RGNCOREOBJ *)&v6,
         (const struct RGNCOREOBJ *)&v8,
         (unsigned int *)&v7) )
  {
    if ( (unsigned int)Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledDeviceUsageNoInline()
      && **(_QWORD **)this )
    {
      return 0LL;
    }
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v7, v7);
    if ( !v7 )
    {
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v7);
      return 0LL;
    }
    RGNOBJ::vSwap(this, (struct RGNOBJ *)&v7);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v7);
  }
  v7 = (*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL);
  RGNCOREOBJ::vCopy((RGNCOREOBJ *)&v7, (const struct RGNCOREOBJ *)&v8);
  return 1LL;
}

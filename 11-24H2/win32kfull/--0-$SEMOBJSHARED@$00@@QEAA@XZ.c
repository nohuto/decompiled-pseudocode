/*
 * XREFs of ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140028C4C
 * Callers:
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1400CE3D8 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?GrepCreateDIBitmapComp@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1401B8D54 (-GrepCreateDIBitmapComp@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1401BD800 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     NtGdiGetMonitorID @ 0x1401D2400 (NtGdiGetMonitorID.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x14025C8E0 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreRealizePalette @ 0x140266580 (GreRealizePalette.c)
 *     ?GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z @ 0x14030F080 (-GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z.c)
 *     GreCreateHalftonePalette @ 0x14030F3CC (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x14030F700 (GreGetSystemPaletteEntries.c)
 *     NtGdiUpdateColors @ 0x14030F8B0 (NtGdiUpdateColors.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x140310FB4 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x140320C58 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x1403211FC (-SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x1403212B0 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     GreHLsurfSetPresentFlags @ 0x140321CA0 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x140321DA4 (GreHLsurfSetUpdateId.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x14032460C (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1403249A0 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     GreDxDwmShutdown @ 0x1403255B4 (GreDxDwmShutdown.c)
 * Callees:
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

Gre::Base *__fastcall SEMOBJSHARED<1>::SEMOBJSHARED<1>(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax

  v2 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(a1, v2);
  return a1;
}

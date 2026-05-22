/*
 * XREFs of ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x18003BAA4
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180031770 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ??$AttachObject@VBamoResizeControllerClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoResizeControllerClientProxy@@@Z @ 0x18003A3CC (--$AttachObject@VBamoResizeControllerClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PE.c)
 *     ??$AttachObject@VBamoInputDelegationInputObjectProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoInputDelegationInputObjectProxy@@@Z @ 0x180056CA8 (--$AttachObject@VBamoInputDelegationInputObjectProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy.c)
 *     ??$AttachObject@VBamoWindowsMessageDeliveryProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoWindowsMessageDeliveryProxy@@@Z @ 0x18005703C (--$AttachObject@VBamoWindowsMessageDeliveryProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PE.c)
 *     ??$AttachObject@VBamoEdgyNotificationSourceClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoEdgyNotificationSourceClientProxy@@@Z @ 0x18005C1B4 (--$AttachObject@VBamoEdgyNotificationSourceClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementPro.c)
 *     ??$AttachObject@VBamoAnimationTargetClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoAnimationTargetClientProxy@@@Z @ 0x18005CAF8 (--$AttachObject@VBamoAnimationTargetClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEA.c)
 *     ??$AttachObject@VBamoDragManagerClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoDragManagerClientProxy@@@Z @ 0x18005FFAC (--$AttachObject@VBamoDragManagerClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBam.c)
 *     ?GetRelativePoint@InputSite@@QEAA?AV?$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z @ 0x18009032C (-GetRelativePoint@InputSite@@QEAA-AV-$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z.c)
 *     ?GetWorkspaceRelativeCoordinates@InjectionRawInputProvider@@AEAA?AUtagPOINT@@U2@PEAVInputInjectionClientProxy@@@Z @ 0x1800DEFD8 (-GetWorkspaceRelativeCoordinates@InjectionRawInputProvider@@AEAA-AUtagPOINT@@U2@PEAVInputInjecti.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800F3870 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?GetTransformFromRootToSite@PointerManipulationHelper@@SA?AUtagINPUT_TRANSFORM@@PEAVInputSite@@@Z @ 0x180199464 (-GetTransformFromRootToSite@PointerManipulationHelper@@SA-AUtagINPUT_TRANSFORM@@PEAVInputSite@@@.c)
 * Callees:
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18005D854 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x180062564 (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 *     ?value@?$optional@UtagINPUT_TRANSFORM@@@std@@QEGAAAEAUtagINPUT_TRANSFORM@@XZ @ 0x18009BF18 (-value@-$optional@UtagINPUT_TRANSFORM@@@std@@QEGAAAEAUtagINPUT_TRANSFORM@@XZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_OWORD *__fastcall LegacyInputSinkData::GetTransform(__int64 a1, _OWORD *a2)
{
  struct IInputSiteHierarchyManager *InputSiteHierarchyManager; // rax
  void *WeakInputSinkHandle; // rax
  bool v6; // zf
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  _OWORD *result; // rax
  _OWORD v13[4]; // [rsp+20h] [rbp-29h] BYREF
  _OWORD v14[3]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v15; // [rsp+90h] [rbp+47h]

  InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
  (*(void (__fastcall **)(struct IInputSiteHierarchyManager *))(*(_QWORD *)InputSiteHierarchyManager + 40LL))(InputSiteHierarchyManager);
  if ( !*(_BYTE *)(a1 + 424) )
  {
    memset(v14, 0, sizeof(v14));
    v15 = 0LL;
    memset_0(v13, 0, sizeof(v13));
    WeakInputSinkHandle = LegacyInputSinkData::GetWeakInputSinkHandle((LegacyInputSinkData *)a1);
    NtQueryCompositionInputQueueAndTransform(WeakInputSinkHandle, 1LL, v14, v13);
    v6 = *(_BYTE *)(a1 + 424) == 0;
    v7 = v13[1];
    *(_OWORD *)(a1 + 360) = v13[0];
    v8 = v13[2];
    *(_OWORD *)(a1 + 376) = v7;
    v9 = v13[3];
    *(_OWORD *)(a1 + 392) = v8;
    *(_OWORD *)(a1 + 408) = v9;
    if ( v6 )
      *(_BYTE *)(a1 + 424) = 1;
  }
  v10 = (_OWORD *)std::optional<tagINPUT_TRANSFORM>::value(a1 + 360);
  *a2 = *v10;
  a2[1] = v10[1];
  a2[2] = v10[2];
  v11 = v10[3];
  result = a2;
  a2[3] = v11;
  return result;
}

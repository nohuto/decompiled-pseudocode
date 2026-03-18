/*
 * XREFs of ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C005B180
 * Callers:
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C003537C (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C0035498 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     hdevEnumerateDisplayOnly @ 0x1C00355C0 (hdevEnumerateDisplayOnly.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C0044560 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     hdcOpenDCW @ 0x1C005ADC0 (hdcOpenDCW.c)
 *     DrvDestroyMDEV @ 0x1C00A09A8 (DrvDestroyMDEV.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00A9B3C (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C00C32F8 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00C6D84 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDynamicModeChange @ 0x1C00C75B0 (bDynamicModeChange.c)
 *     ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C015E420 (-MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C015E4B0 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0160AF8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0160E5C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C0161E24 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     EngDeleteDriverObj @ 0x1C016B160 (EngDeleteDriverObj.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C016D490 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 * Callees:
 *     ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C00C29F0 (-RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00C68C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C016BBC8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BC80 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C016EC54 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall PDEVOBJ::vUnreferencePdev(struct PDEV **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  struct _ERESOURCE *v5; // rdi
  __int64 v6; // rdi
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  struct PDEV *v10; // rdi
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v11; // rbp
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v12; // rcx
  bool v13; // zf
  int v14; // edi
  __int64 v15; // rbp
  __int64 v16; // rcx
  int v17; // r8d
  struct _ERESOURCE *v18; // rcx
  struct PDEV *v19; // rax
  struct PDEV *v20; // [rsp+30h] [rbp-18h] BYREF
  int v21; // [rsp+38h] [rbp-10h]
  int v22; // [rsp+3Ch] [rbp-Ch]

  v4 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  v5 = *(struct _ERESOURCE **)(v4 + 8);
  if ( v5 )
  {
    PsEnterPriorityRegion(v3, v2);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
  }
  v6 = *(_QWORD *)(v4 + 8);
  v8 = *(_QWORD *)(SGDGetSessionState(v3) + 24);
  if ( *(_DWORD *)(v8 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(v8, v7, v9, v6, 16, (__int64)L"GreBaseGlobals.hsemDriverMgmt");
  v10 = *this;
  v11 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)*this + 440);
  v12 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(SGDGetSessionState(v8) + 24);
  if ( v11 )
  {
    v12 = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)*((_QWORD *)v12 + 1007);
    if ( v12 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v12, v11, 0);
  }
  v13 = (*((_DWORD *)v10 + 2))-- == 1;
  v14 = *((_DWORD *)v10 + 2);
  if ( v13 )
    RemovePDEVFromList((struct PDEV **)(v4 + 6080), *this);
  v15 = *(_QWORD *)(v4 + 8);
  v16 = *(_QWORD *)(SGDGetSessionState(v12) + 24);
  if ( *(_DWORD *)(v16 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v16,
      (unsigned int)&LockRelease,
      v17,
      v15,
      (__int64)L"GreBaseGlobals.hsemDriverMgmt");
  v18 = *(struct _ERESOURCE **)(v4 + 8);
  if ( v18 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v18);
    PsLeavePriorityRegion();
  }
  if ( !v14 )
  {
    v19 = *this;
    v22 = 0;
    v20 = v19;
    v21 = 1;
    vUnreferencePdevWorker((struct tagUNREFDATA *)&v20);
  }
}

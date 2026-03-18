/*
 * XREFs of ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940
 * Callers:
 *     HmgSetOwner @ 0x14002DC20 (HmgSetOwner.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x140037E58 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x140038680 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140038F80 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgFreeObjectAttr @ 0x140039540 (HmgFreeObjectAttr.c)
 *     HmgAllocateObjectAttr @ 0x1400397B0 (HmgAllocateObjectAttr.c)
 *     GreIncNonRBLockCount @ 0x140039A40 (GreIncNonRBLockCount.c)
 *     GreDecNonRBLockCount @ 0x14003AFE0 (GreDecNonRBLockCount.c)
 *     bConstructGET @ 0x140064F80 (bConstructGET.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140066420 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreCreateSemaphoreInternal @ 0x14007B2F8 (GreCreateSemaphoreInternal.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x1400B7AD0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x1400B8230 (-Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ.c)
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_KPEAT_LARGE_INTEGER@@@Z @ 0x14010A1F0 (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_KPEAT_LARGE_INTEGER@@@Z.c)
 *     ?vSetIncludeSprites@SURFACE@@SAXXZ @ 0x14013A070 (-vSetIncludeSprites@SURFACE@@SAXXZ.c)
 *     ?vClearIncludeSprites@SURFACE@@SAXXZ @ 0x14013BFC0 (-vClearIncludeSprites@SURFACE@@SAXXZ.c)
 *     ?bIncludeSprites@SURFACE@@SAHXZ @ 0x140149290 (-bIncludeSprites@SURFACE@@SAHXZ.c)
 *     EngUpdateDeviceSurface @ 0x140174F70 (EngUpdateDeviceSurface.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x14019AF2C (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 *     ?hSetupFast@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z @ 0x1401C1F94 (-hSetupFast@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z.c)
 *     HmgAllocFast @ 0x1401C21B0 (HmgAllocFast.c)
 *     HmgFreeDcAttrFastOpt @ 0x1401C4EA0 (HmgFreeDcAttrFastOpt.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

struct _GRETHREAD *__fastcall GreGetCurrentThread(__int64 a1)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v2; // rdx
  __int64 v3; // r8

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1);
  v2 = 0LL;
  if ( CurrentThreadNonPaged )
    v3 = *CurrentThreadNonPaged;
  else
    v3 = 0LL;
  if ( v3 )
    return (struct _GRETHREAD *)(v3 + 8);
  return (struct _GRETHREAD *)v2;
}

/*
 * XREFs of ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x140025A90
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x140010520 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1400259B0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x140025C20 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     GreCombineRgn @ 0x140025D30 (GreCombineRgn.c)
 *     GreExtCreateRegion @ 0x140066D70 (GreExtCreateRegion.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x140068C60 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1400EF910 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     GreIntersectVisRect @ 0x140179B90 (GreIntersectVisRect.c)
 * Callees:
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x14002AF10 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     ?RegionCore_vCopy@Win32kRS@@YAXPEAVREGION_CORE@@PEBV2@@Z @ 0x1400CE774 (-RegionCore_vCopy@Win32kRS@@YAXPEAVREGION_CORE@@PEBV2@@Z.c)
 */

void __fastcall RGNOBJ::vCopy(RGNOBJ *this, struct RGNOBJ *a2, const struct REGION_CORE *a3)
{
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF
  __int64 v4; // [rsp+48h] [rbp+20h] BYREF

  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    Win32kRS::RegionCore_vCopy(
      (Win32kRS *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)),
      (struct REGION_CORE *)((*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL)),
      a3);
  }
  else
  {
    v4 = (*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL);
    v3 = (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL);
    RGNCOREOBJ::vCopy((RGNCOREOBJ *)&v4, (const struct RGNCOREOBJ *)&v3);
  }
}

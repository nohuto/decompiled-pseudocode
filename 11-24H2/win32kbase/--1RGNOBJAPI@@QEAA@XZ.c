/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x14002D0C0
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14000F604 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x140010520 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCombineRgn @ 0x140025D30 (GreCombineRgn.c)
 *     GreGetRgnBox @ 0x14002B0D0 (GreGetRgnBox.c)
 *     GrePtInRegion @ 0x14002B1F0 (GrePtInRegion.c)
 *     NtGdiDeleteObjectApp @ 0x14002B3A0 (NtGdiDeleteObjectApp.c)
 *     GreGetRegionData @ 0x14002B770 (GreGetRegionData.c)
 *     GreOffsetRgn @ 0x14002C0D0 (GreOffsetRgn.c)
 *     bDeleteRegion @ 0x14002C420 (bDeleteRegion.c)
 *     GreSetRectRgn @ 0x14002C480 (GreSetRectRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14002C870 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x14002CCB0 (SetRectRgnIndirect.c)
 *     GreEqualRgn @ 0x140066030 (GreEqualRgn.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     GreRectInRegion @ 0x1400D1D60 (GreRectInRegion.c)
 *     GreIsValidRegion @ 0x14012F4C0 (GreIsValidRegion.c)
 *     GreCopyVisRgn @ 0x140179AC0 (GreCopyVisRgn.c)
 *     InitializeGre @ 0x1402E6D50 (InitializeGre.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14002A1F0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?ReportOverflow@OBJECT@@QEAAXK@Z @ 0x1401C1EE0 (-ReportOverflow@OBJECT@@QEAAXK@Z.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rax
  __int64 v4; // rcx
  char **v5; // rdx

  if ( !*((_DWORD *)this + 12) )
    RGNOBJ::UpdateUserRgn(this);
  v2 = *(volatile signed __int32 **)this;
  if ( *(_QWORD *)this )
  {
    _InterlockedDecrement(v2 + 3);
    if ( *((_WORD *)v2 + 6) == 0xFFFF )
      OBJECT::ReportOverflow((OBJECT *)v2, 3u);
  }
  v3 = (char *)this + 8;
  if ( this != (RGNOBJAPI *)-8LL )
  {
    v4 = *(_QWORD *)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = (char **)*((_QWORD *)this + 2), *v5 != v3) )
      __fastfail(3u);
    *v5 = (char *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    *((_QWORD *)this + 2) = (char *)this + 8;
    *(_QWORD *)v3 = v3;
  }
}

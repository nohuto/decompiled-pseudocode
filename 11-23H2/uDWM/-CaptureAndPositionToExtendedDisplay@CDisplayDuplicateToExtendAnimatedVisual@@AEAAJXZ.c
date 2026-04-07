/*
 * XREFs of ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B96A8
 * Callers:
 *     ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B9FF0 (-StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18005AF50 (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7168 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?ClipIntersection@CDisplayAnimatedVisual@@KA?AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTATION@@@Z @ 0x1800B7890 (-ClipIntersection@CDisplayAnimatedVisual@@KA-AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTAT.c)
 *     ?GetRotationAngle@CDWMDisplay@@QEBAHXZ @ 0x1800B9910 (-GetRotationAngle@CDWMDisplay@@QEBAHXZ.c)
 *     ?TransposeRectAroundCenter@@YA?AUtagRECT@@AEBU1@@Z @ 0x1800BA2CC (-TransposeRectAroundCenter@@YA-AUtagRECT@@AEBU1@@Z.c)
 *     ?SetCenter@CVisual@@QEAAXNN@Z @ 0x180105508 (-SetCenter@CVisual@@QEAAXNN@Z.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x1801057CC (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::CaptureAndPositionToExtendedDisplay(
        CDisplayDuplicateToExtendAnimatedVisual *this)
{
  __int64 v2; // rdx
  int v3; // esi
  __int64 v4; // rax
  CDWMDisplaySet *v5; // rcx
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rbx
  const struct CDWMDisplay *v7; // r14
  UINT32 v8; // eax
  UINT32 v9; // edx
  UINT32 v10; // ecx
  struct tagRECT *v11; // rax
  __int64 v12; // rbx
  enum DXGI_MODE_ROTATION v13; // edx
  int RotationAngle; // esi
  struct D2D_RECT_U v15; // xmm0
  char *v16; // rbx
  __int64 v17; // rcx
  unsigned __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT v20; // [rsp+38h] [rbp-48h] BYREF
  struct D2D_RECT_U v21; // [rsp+48h] [rbp-38h] BYREF
  struct D2D_RECT_U v22; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT v23; // [rsp+68h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 56) )
  {
    v19 = 0LL;
    GetDesktopID(1LL, &v19);
    v2 = *((_QWORD *)this + 55);
    v3 = 0;
    v4 = *((_QWORD *)this + 56);
    v5 = (CDWMDisplaySet *)*((_QWORD *)this + 40);
    v23 = *(struct tagRECT *)(v2 + 56);
    v21 = *(struct D2D_RECT_U *)(v4 + 56);
    MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(v5, (const struct CDWMDisplay *)v2);
    v7 = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(
           *((CDWMDisplaySet **)this + 40),
           *((const struct CDWMDisplay **)this + 56));
    if ( v7 )
    {
      if ( MatchedPhysicalDisplayNoRef )
      {
        v8 = *((_DWORD *)MatchedPhysicalDisplayNoRef + 13);
        v9 = *((_DWORD *)MatchedPhysicalDisplayNoRef + 11);
        v10 = *((_DWORD *)MatchedPhysicalDisplayNoRef + 12);
        v21.left = *((_DWORD *)MatchedPhysicalDisplayNoRef + 10);
        v21.top = v9;
        v21.right = v10;
        v21.bottom = v8;
        v22.left = v21.left;
        v22.top = v9;
        v22.right = v10;
        v22.bottom = v8;
        v11 = CDisplayAnimatedVisual::ClipIntersection(
                &v20,
                &v22,
                &v21,
                (const struct tagRECT *)((char *)MatchedPhysicalDisplayNoRef + 56),
                (enum DXGI_MODE_ROTATION)*((_DWORD *)MatchedPhysicalDisplayNoRef + 58));
        v12 = *((_QWORD *)this + 56);
        v23 = *v11;
        v13 = *(_DWORD *)(v12 + 232);
        v22 = *(struct D2D_RECT_U *)(v12 + 40);
        v21 = *(struct D2D_RECT_U *)((char *)v7 + 40);
        v21 = (struct D2D_RECT_U)*CDisplayAnimatedVisual::ClipIntersection(
                                    &v20,
                                    &v21,
                                    &v22,
                                    (const struct tagRECT *)(v12 + 56),
                                    v13);
        RotationAngle = CDWMDisplay::GetRotationAngle((CDWMDisplay *)v12);
        v3 = RotationAngle - CDWMDisplay::GetRotationAngle(v7);
        if ( (v3 + 360) % 180 == 90 )
        {
          v15 = (struct D2D_RECT_U)*TransposeRectAroundCenter(&v20, (const struct tagRECT *)&v21);
          *((_BYTE *)this + 536) = 1;
          v21 = v15;
        }
      }
    }
    v16 = (char *)this + 488;
    v17 = *((_QWORD *)this + 61);
    *((_QWORD *)this + 61) = 0LL;
    if ( v17 )
      CBaseObject::Release((CBaseObject *)(v17 + 8));
    CDisplayAnimatedVisual::CaptureAndAddVisual(
      this,
      v19,
      &v23,
      (const struct tagRECT *)&v21,
      (struct CAnimatedTransitionVisual **)this + 61);
    if ( v3 )
    {
      CVisual::SetRotation((CVisual *)(*(_QWORD *)v16 + 8LL), (double)v3);
      CVisual::SetCenter(
        (CVisual *)(*(_QWORD *)v16 + 8LL),
        (double)((signed int)(v21.left + v21.right) / 2),
        (double)((signed int)(v21.top + v21.bottom) / 2));
    }
  }
  return 0LL;
}

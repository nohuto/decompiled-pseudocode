/*
 * XREFs of ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUD2D_POINTANDSIZE_L@@PEAPEAVCCachedVisualImageProxy@@@Z @ 0x1800D0B28
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180061124 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z @ 0x18003EF58 (-Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x18003EF80 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x18008A83C (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z.c)
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x18009AEB4 (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

void __fastcall CSecondaryWindowRepresentation::MakeStatic(
        CSecondaryWindowRepresentation *this,
        char a2,
        LONG *a3,
        struct CCachedVisualImageProxy **a4)
{
  __int64 v4; // rbx
  CWindowSnapshot *v9; // r11
  LONG v10; // r8d
  LONG v11; // edx
  LONG v12; // ecx
  LONG v13; // ecx
  CWindowSnapshot *v14; // r11
  CMILRefCountBase *v15; // rbx
  CMILRefCountBase *v16; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v17; // [rsp+28h] [rbp-30h] BYREF

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    v9 = *(CWindowSnapshot **)(v4 + 480);
    v10 = *a3;
    v11 = a3[1];
    v12 = a3[2];
    v16 = 0LL;
    v17.right = v10 + v12;
    v13 = v11 + a3[3];
    v17.left = v10;
    v17.top = v11;
    v17.bottom = v13;
    if ( a2
      && v9
      && CWindowSnapshot::HasCVIOfCompatibleSize(v9, &v17)
      && (int)CWindowSnapshot::GetCVI(v14, (const struct tagRECT *)(v4 + 48), &v16, (float *)this + 92) >= 0 )
    {
      if ( *a4 )
        CBaseObject::Release(*a4);
      v15 = v16;
      *a4 = v16;
      if ( v15 )
        CMILRefCountBase::AddRef(v15);
      CCachedVisualImageProxy::Snapshot(v15, &v17);
      CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
      CBaseObject::Release(v15);
      *((_BYTE *)this + 161) = 1;
    }
    else
    {
      *((_DWORD *)this + 10) |= 0x200u;
    }
  }
}

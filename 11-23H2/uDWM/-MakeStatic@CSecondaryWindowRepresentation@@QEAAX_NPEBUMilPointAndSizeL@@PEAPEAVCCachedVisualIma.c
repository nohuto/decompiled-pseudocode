/*
 * XREFs of ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCCachedVisualImageProxy@@@Z @ 0x1800D873C
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18000D09C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z @ 0x180054F64 (-Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x18010D324 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z.c)
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x18010D380 (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z.c)
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
  volatile signed __int32 *v15; // rbx
  CBaseObject *v16; // [rsp+20h] [rbp-38h] BYREF
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
      v15 = (volatile signed __int32 *)v16;
      *a4 = v16;
      if ( v15 )
      {
        _InterlockedIncrement(v15 + 2);
        v15 = (volatile signed __int32 *)v16;
      }
      CCachedVisualImageProxy::Snapshot((CCachedVisualImageProxy *)v15, &v17);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 24LL)
                                     + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                        + 24LL));
      CBaseObject::Release((CBaseObject *)v15);
      *((_BYTE *)this + 161) = 1;
    }
    else
    {
      *((_DWORD *)this + 10) |= 0x200u;
    }
  }
}

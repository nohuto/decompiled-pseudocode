/*
 * XREFs of ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z @ 0x180033828
 * Callers:
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180043250 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?Freeze@CCachedVisualImageProxy@@QEAAJXZ @ 0x1800306D8 (-Freeze@CCachedVisualImageProxy@@QEAAJXZ.c)
 *     ?GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA?AW4TLWRootVisualType@@XZ @ 0x180033F28 (-GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA-AW4TLWRootVisualType@@XZ.c)
 *     ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z @ 0x180033F68 (-GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035620 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18004D01C (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18004D7CC (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

struct CCachedVisualImageProxy *__fastcall CSecondaryWindowRepresentation::CreateCVIForAnimation(
        CSecondaryWindowRepresentation *this,
        char a2)
{
  int v2; // eax
  int v5; // eax
  CCachedVisualImageProxy *v6; // rsi
  int v7; // r10d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 RootVisualNoAddRef; // r14
  __int64 v11; // rdi
  __int64 v12; // rdi
  unsigned int TLWRootVisualType; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v17; // rcx
  unsigned int v18; // eax
  CCachedVisualImageProxy *v19; // [rsp+58h] [rbp+7h] BYREF
  _DWORD v20[4]; // [rsp+60h] [rbp+Fh]
  __int128 v21; // [rsp+70h] [rbp+1Fh] BYREF
  _DWORD v22[4]; // [rsp+80h] [rbp+2Fh] BYREF

  v2 = *((_DWORD *)this + 22);
  v19 = 0LL;
  v20[0] = v2;
  v20[1] = *((_DWORD *)this + 24);
  v20[2] = *((_DWORD *)this + 20) - *((_DWORD *)this + 23);
  v20[3] = *((_DWORD *)this + 21) - *((_DWORD *)this + 25);
  v5 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         &v19);
  v6 = v19;
  v7 = v5;
  if ( v5 < 0 )
  {
    v18 = 835;
    goto LABEL_27;
  }
  v8 = 0LL;
  v21 = 0LL;
  do
  {
    *(float *)&v22[v8] = (float)(int)v20[v8];
    ++v8;
  }
  while ( v8 < 4 );
  CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
  v9 = 0LL;
  RootVisualNoAddRef = *((_QWORD *)this + 6);
  v11 = *((_QWORD *)this + 8);
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v17 = *(_QWORD *)(v11 + 480);
      if ( v17 )
      {
        v9 = *(_QWORD *)(v17 + 32);
        goto LABEL_6;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 18) != 3 )
        goto LABEL_6;
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(v11 + 488) + 80LL);
        goto LABEL_6;
      }
    }
  }
  v9 = v11;
LABEL_6:
  v12 = *(_QWORD *)(v9 + 440);
  if ( v12 )
  {
    TLWRootVisualType = CSecondaryWindowRepresentation::GetTLWRootVisualType(this);
    RootVisualNoAddRef = CTopLevelWindow::GetRootVisualNoAddRef(v12, TLWRootVisualType);
  }
  if ( RootVisualNoAddRef )
    v14 = *(_QWORD *)(RootVisualNoAddRef + 16);
  else
    v14 = 0LL;
  if ( v14 )
    v15 = *(_DWORD *)(*(_QWORD *)(v14 + 16) + 24LL);
  else
    v15 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, __int128 *, _DWORD, _DWORD, int, _DWORD, int))(**(_QWORD **)(*((_QWORD *)v6 + 2) + 16LL) + 744LL))(
         *(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)v6 + 2) + 24LL),
         v22,
         &v21,
         0,
         0,
         v15,
         0,
         1);
  if ( v7 >= 0 )
  {
    if ( a2 )
    {
      CCachedVisualImageProxy::Freeze(v6);
      *((_BYTE *)this + 417) = 1;
    }
    else
    {
      *((_BYTE *)this + 417) = 0;
    }
    return v6;
  }
  v18 = 862;
LABEL_27:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v18, 0LL);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    return 0LL;
  }
  return v6;
}

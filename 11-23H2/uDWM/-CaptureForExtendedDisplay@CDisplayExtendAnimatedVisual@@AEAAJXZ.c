/*
 * XREFs of ?CaptureForExtendedDisplay@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BA680
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800BA970 (-OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001DF78 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004DAFC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180055584 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180055AB4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::CaptureForExtendedDisplay(CDisplayExtendAnimatedVisual *this)
{
  const struct tagRECT *v1; // rsi
  int v3; // edx
  int v4; // r15d
  int v5; // ecx
  int v6; // eax
  int v7; // r12d
  int v8; // ecx
  int v9; // eax
  struct CBaseImageProxy ***v10; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  struct CBaseImageProxy **v12; // rcx
  struct CVisual *v13; // rbp
  int v14; // edi
  __int64 v15; // rdx
  CVisual *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int inserted; // eax
  unsigned int v21; // ebx
  int v22; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v24; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+78h] [rbp+10h] BYREF
  int v26; // [rsp+7Ch] [rbp+14h]
  struct CBaseImageProxy *v27; // [rsp+80h] [rbp+18h]

  v1 = (const struct tagRECT *)((char *)this + 512);
  v3 = *((_DWORD *)this + 130) - *((_DWORD *)this + 128);
  v4 = 0;
  v5 = *((_DWORD *)this + 131);
  v6 = v3;
  if ( v3 < 0 )
    v6 = 0;
  v24 = 0LL;
  LODWORD(v27) = v6;
  v7 = 0;
  if ( v3 >= 0 )
    v4 = v3;
  v8 = v5 - *((_DWORD *)this + 129);
  v9 = v8;
  if ( v8 < 0 )
    v9 = 0;
  HIDWORD(v27) = v9;
  if ( v8 >= 0 )
    v7 = v8;
  GetDesktopID(1LL, &v24);
  v10 = (struct CBaseImageProxy ***)((char *)this + 472);
  if ( !*((_QWORD *)this + 59) )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                             v24);
    v12 = *v10;
    v13 = RootVisualForDesktop;
    *v10 = 0LL;
    if ( v12 )
      CBaseObject::Release((CBaseObject *)(v12 + 1));
    v14 = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 59);
    if ( v14 < 0 )
    {
      v15 = 186LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
        (const char *)(unsigned int)v14);
      return (unsigned int)v14;
    }
    v14 = CAnimatedTransitionVisual::SetVisual(*v10, v13, 1, v1);
    if ( v14 < 0 )
    {
      v15 = 190LL;
      goto LABEL_14;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v10, v1);
    v17 = (CVisual *)(*v10 + 1);
    *(struct tagRECT *)(*v10 + 109) = *v1;
    v18 = *((_DWORD *)v17 + 22);
    if ( (v18 & 0x1000) == 0 )
    {
      *((_DWORD *)v17 + 22) = v18 | 0x1000;
      CVisual::PropagateDirtyChildren(v17);
    }
    v19 = (__int64)(*v10 + 1);
    v25 = v4;
    v26 = v7;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 104LL))(v19, &v25);
    (*v10)[119] = v27;
    CVisual::SetInterpolationMode((unsigned int *)*v10 + 2, 1u);
  }
  inserted = VisualCollection::InsertRelative(
               (CDisplayExtendAnimatedVisual *)((char *)this + 32),
               (unsigned __int64)(*v10 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)*v10 >> 64),
               0LL,
               0,
               v22);
  v21 = inserted;
  if ( inserted >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC7,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
    (const char *)(unsigned int)inserted);
  return v21;
}

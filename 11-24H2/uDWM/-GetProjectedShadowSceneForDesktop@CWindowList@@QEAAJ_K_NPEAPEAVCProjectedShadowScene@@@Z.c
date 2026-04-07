/*
 * XREFs of ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x18008B318
 * Callers:
 *     ??1CTopLevelWindow@@EEAA@XZ @ 0x18002D450 (--1CTopLevelWindow@@EEAA@XZ.c)
 *     ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z @ 0x1800EDDD8 (-AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800F3C10 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18000AEF0 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?FindElement@?$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z @ 0x18003318C (-FindElement@-$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z.c)
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x180047D64 (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CProjectedShadowScene@@QEAA@XZ @ 0x1800CACC4 (--0CProjectedShadowScene@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::GetProjectedShadowSceneForDesktop(
        CWindowList *this,
        unsigned __int64 a2,
        char a3,
        struct CProjectedShadowScene **a4)
{
  _QWORD *Element; // rax
  _QWORD *v8; // rsi
  CBaseObject *v10; // rax
  CBaseObject *v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  CMILRefCountBase *v16; // rcx
  int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v19; // [rsp+30h] [rbp+8h] BYREF

  Element = CGenericTableMap<unsigned __int64,CDesktop>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
              a2);
  v8 = Element;
  if ( !Element )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD27,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)0x8002802BLL,
      v17);
    return 2147647531LL;
  }
  if ( !Element[6] && a3 )
  {
    v10 = (CBaseObject *)DefaultHeap::AllocClear(0x48uLL);
    v19 = v10;
    if ( v10 )
      v11 = CProjectedShadowScene::CProjectedShadowScene(v10);
    else
      v11 = 0LL;
    v19 = v11;
    if ( std::operator==<CWindowBorder::CCachedBorderBrush>(&v19) )
    {
      v12 = -2147024882;
      v13 = 2147942414LL;
      v14 = 3372LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)v13,
        v17);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
      return v12;
    }
    v15 = CProjectedShadowScene::Initialize(v11, a2);
    v12 = v15;
    if ( v15 < 0 )
    {
      v13 = (unsigned int)v15;
      v14 = 3373LL;
      goto LABEL_12;
    }
    v8[6] = v11;
    if ( v11 )
      CMILRefCountBase::AddRef(v11);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
  }
  *a4 = (struct CProjectedShadowScene *)v8[6];
  v16 = (CMILRefCountBase *)v8[6];
  if ( v16 )
    CMILRefCountBase::AddRef(v16);
  return 0LL;
}

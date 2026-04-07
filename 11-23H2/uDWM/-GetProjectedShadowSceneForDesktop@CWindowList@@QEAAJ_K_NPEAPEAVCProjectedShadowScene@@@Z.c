/*
 * XREFs of ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x18010A1CC
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180041680 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ??1CTopLevelWindow@@EEAA@XZ @ 0x18004C9C8 (--1CTopLevelWindow@@EEAA@XZ.c)
 *     ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z @ 0x180108C6C (-AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180042444 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800CE898 (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
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
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v18; // [rsp+30h] [rbp+8h] BYREF

  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
              a2);
  v8 = Element;
  if ( !Element )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB3,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)0x8002802BLL);
    return 2147647531LL;
  }
  if ( !Element[6] && a3 )
  {
    v18 = 0LL;
    v10 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            72LL);
    v11 = v10;
    v18 = (CBaseObject *)v10;
    if ( !v10 )
    {
      v18 = 0LL;
      v13 = -2147024882;
      v14 = 2147942414LL;
      v15 = 3000LL;
      goto LABEL_13;
    }
    *(_DWORD *)(v10 + 8) = 1;
    *(_QWORD *)v10 = &CProjectedShadowScene::`vftable';
    *(_QWORD *)(v10 + 40) = 0LL;
    *(_QWORD *)(v10 + 48) = 0LL;
    *(_QWORD *)(v10 + 16) = 0LL;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 32) = 0LL;
    *(_QWORD *)(v10 + 56) = 0LL;
    *(_BYTE *)(v10 + 64) = 0;
    v18 = (CBaseObject *)v10;
    v12 = CProjectedShadowScene::Initialize((CProjectedShadowScene *)v10, a2);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = (unsigned int)v12;
      v15 = 3001LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)v14);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v18);
      return v13;
    }
    v8[6] = v11;
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v18);
  }
  *a4 = (struct CProjectedShadowScene *)v8[6];
  v16 = v8[6];
  if ( v16 )
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
  return 0LL;
}

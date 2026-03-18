/*
 * XREFs of ?ProcessSetSourceVisual@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETSOURCEVISUAL@@@Z @ 0x18013A23C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180109514 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8F0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E910 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x18013A3B0 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualSurface::ProcessSetSourceVisual(
        CVisualSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALSURFACE_SETSOURCEVISUAL *a3)
{
  unsigned int v3; // r9d
  struct CResource *v4; // rbx
  int v6; // r9d
  __int64 v7; // r10
  __int64 v8; // rbx
  __int64 v9; // rcx
  bool (__fastcall *v10)(__int64, int); // rax
  bool v11; // al
  struct CResource *v12; // rdx
  int VisualTree; // ebx
  CVisual *v15; // rbx
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)a3 + 2);
  v4 = 0LL;
  if ( v3 )
  {
    if ( (unsigned int)HANDLE_TABLE::ValidEntry((struct CResourceTable *)((char *)a2 + 16), v3)
      && (v8 = *(_QWORD *)(v7 + 40) + (unsigned int)(*(_DWORD *)(v7 + 24) * v6), (v9 = *(_QWORD *)(v8 + 8)) != 0)
      && ((v10 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v9 + 64LL), v10 != CKeyframeAnimation::IsOfType)
        ? (v10 != CVisual::IsOfType
         ? (v10 != CSharedSection::IsOfType
          ? (v11 = v10(v9, 182))
          : (v11 = CSharedSection::IsOfType(v9, 182)))
         : (v11 = CVisual::IsOfType(v9, 182)))
        : (v11 = CKeyframeAnimation::IsOfType(v9, 182)),
          v11) )
    {
      v4 = *(struct CResource **)(v8 + 8);
    }
    else
    {
      v4 = 0LL;
    }
    *((_BYTE *)this + 205) = 0;
  }
  v12 = (struct CResource *)*((_QWORD *)this + 9);
  if ( v12 == v4 )
    goto LABEL_10;
  CResource::UnRegisterNotifierInternal(this, v12);
  *((_QWORD *)this + 9) = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 10);
  *((_QWORD *)this + 9) = v4;
  if ( !v4 )
    goto LABEL_10;
  VisualTree = CResource::RegisterNotifier(this, v4);
  if ( VisualTree < 0 )
  {
    v16 = 133LL;
    goto LABEL_20;
  }
  v15 = (CVisual *)*((_QWORD *)this + 9);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 10);
  VisualTree = CVisual::GetVisualTree(v15, (struct CVisualTree **)this + 10);
  if ( VisualTree >= 0 )
  {
LABEL_10:
    CResource::NotifyOnChanged(this, 0, 0LL);
    return 0LL;
  }
  v16 = 136LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
    (const char *)(unsigned int)VisualTree);
  return (unsigned int)VisualTree;
}

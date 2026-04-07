/*
 * XREFs of ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18006BEE8
 * Callers:
 *     ?CloneVisualTree@CWindowBorder@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18006BE30 (-CloneVisualTree@CWindowBorder@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180020898 (-InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x1800359D4 (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18006C024 (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowBorder::InitializeVisualTreeClone(__int64 a1, CContainerVisual *a2, __int64 a3)
{
  char v3; // bp
  int v6; // esi
  __int64 v7; // r8
  CMILRefCountBase **v8; // rax
  CMILRefCountBase *v9; // r8
  CBaseObject *v10; // rcx
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v6 = CContainerVisual::InitializeVisualTreeClone(a1, a2, a3);
  if ( v6 < 0 )
  {
    v12 = 615LL;
    goto LABEL_14;
  }
  v7 = *(unsigned int *)(a1 + 300);
  if ( (v3 & 8) != 0 )
    v7 = 1LL;
  v15 = a1 + 284;
  v6 = CWindowBorder::SetBorderParameters(a2, a1 + 256, v7, *(unsigned int *)(a1 + 276));
  if ( v6 < 0 )
  {
    v12 = 630LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v6,
      v15);
    return (unsigned int)v6;
  }
  if ( *(_QWORD *)(a1 + 208) )
  {
    v8 = (CMILRefCountBase **)*((_QWORD *)a2 + 19);
    v9 = *v8;
    if ( *((CMILRefCountBase **)a2 + 26) != *v8 )
    {
      if ( v9 )
        CMILRefCountBase::AddRef(*v8);
      v10 = (CBaseObject *)*((_QWORD *)a2 + 26);
      *((_QWORD *)a2 + 26) = v9;
      if ( v10 )
        CBaseObject::Release(v10);
    }
  }
  if ( !*(_QWORD *)(a1 + 200) )
    return 0LL;
  v13 = CWindowBorder::EnableBorder(a2, 1);
  v14 = v13;
  if ( v13 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x281,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)v13,
    v15);
  return v14;
}

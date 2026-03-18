/*
 * XREFs of ?ProcessSetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETSURFACE@@@Z @ 0x1802A5F94
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800E9B3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?SetSurfaceContentRect@CSceneSurfaceMaterialInput@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A612C (-SetSurfaceContentRect@CSceneSurfaceMaterialInput@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneSurfaceMaterialInput::ProcessSetSurface(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SCENESURFACEMATERIALINPUT_SETSURFACE *a3)
{
  __int64 v3; // rbx
  unsigned int v5; // edx
  struct CResource *ResourceWithoutType; // rsi
  int v10; // eax
  unsigned int v11; // ebp
  struct CResource *v12; // rax
  float v13[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  ResourceWithoutType = 0LL;
  if ( v5 )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v5);
    if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 64LL))(
            ResourceWithoutType,
            190LL)
      && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 64LL))(
            ResourceWithoutType,
            38LL) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\spatialsurfacematerialinput.cpp",
        (const char *)0x88980403LL);
      return 2291663875LL;
    }
  }
  if ( ResourceWithoutType != this[11] )
  {
    v10 = CResource::RegisterNotifier((CResource *)this, ResourceWithoutType);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x65,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\spatialsurfacematerialinput.cpp",
        (const char *)(unsigned int)v10);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\spatialsurfacematerialinput.cpp",
        (const char *)v11);
      return v11;
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
    v12 = *this;
    this[11] = ResourceWithoutType;
    (*((void (__fastcall **)(struct CResource **, _QWORD, struct CResource **))v12 + 10))(this, 0LL, this);
  }
  do
  {
    v13[v3] = (float)*((int *)a3 + v3 + 3);
    ++v3;
  }
  while ( v3 < 4 );
  CSceneSurfaceMaterialInput::SetSurfaceContentRect(this, v13);
  return 0LL;
}

/*
 * XREFs of ?SetWallpaperInternal@CVirtualDesktop@@UEAAJPEAUHSTRING__@@@Z @ 0x180569610
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1801BFA80 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall CVirtualDesktop::SetWallpaperInternal(HSTRING *this, HSTRING a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = Microsoft::WRL::Wrappers::HString::Set(this + 12, &v6);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB4,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}

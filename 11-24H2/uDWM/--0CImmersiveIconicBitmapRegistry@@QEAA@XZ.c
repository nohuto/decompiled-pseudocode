/*
 * XREFs of ??0CImmersiveIconicBitmapRegistry@@QEAA@XZ @ 0x180099E6C
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x18007FA54 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 */

CImmersiveIconicBitmapRegistry *__fastcall CImmersiveIconicBitmapRegistry::CImmersiveIconicBitmapRegistry(
        CImmersiveIconicBitmapRegistry *this)
{
  __int64 v1; // r9
  __int64 v2; // rdx
  int v3; // r8d
  __int64 v4; // rdx
  CImmersiveIconicBitmapRegistry *v5; // r9

  *(_QWORD *)this = &CImmersiveIconicBitmapRegistry::`vftable';
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 16, 0LL, 0);
  DynArrayImpl<0>::DynArrayImpl<0>(v1 + 48, v2, v3);
  *((_QWORD *)v5 + 10) &= v4;
  return v5;
}

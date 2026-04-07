/*
 * XREFs of ??0CIconicBitmapRegistry@@QEAA@XZ @ 0x180070830
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x18007FA54 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 */

CIconicBitmapRegistry *__fastcall CIconicBitmapRegistry::CIconicBitmapRegistry(CIconicBitmapRegistry *this)
{
  __int64 v1; // r9
  __int64 v2; // rdx
  CIconicBitmapRegistry *v3; // r9

  *(_QWORD *)this = &CIconicBitmapRegistry::`vftable';
  CBitmapSourceArray::CBitmapSourceArray((CIconicBitmapRegistry *)((char *)this + 16));
  DynArrayImpl<0>::DynArrayImpl<0>(v1 + 48, 0LL, 0);
  *((_QWORD *)v3 + 12) &= v2;
  return v3;
}

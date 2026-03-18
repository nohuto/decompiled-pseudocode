/*
 * XREFs of ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ @ 0x18005A390
 * Callers:
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x18005A094 (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18005A680 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 * Callees:
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x180195800 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CD2DBitmap::SupportsFastLock(CD2DBitmap *this)
{
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF
  struct IUnknown *v5; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int8 *v6; // [rsp+58h] [rbp+20h] BYREF

  if ( (*((_DWORD *)this + 22) & 0x400000) != 0 )
    return 0;
  if ( !*((_BYTE *)this + 151) )
  {
    v6 = 0LL;
    v4 = 0;
    v3 = 0;
    v5 = 0LL;
    CD2DBitmap::TryFastWarpLock((CD2DBitmap *)((char *)this - 88), &v6, &v4, &v3, &v5);
    if ( v5 )
      ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->Release)(v5);
  }
  return *((_BYTE *)this + 150);
}

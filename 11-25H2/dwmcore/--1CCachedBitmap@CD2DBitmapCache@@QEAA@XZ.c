/*
 * XREFs of ??1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ @ 0x180043A28
 * Callers:
 *     ??R?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@QEBAXPEAVCCachedBitmap@CD2DBitmapCache@@@Z @ 0x180043714 (--R-$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@QEBAXPEAVCCachedBitmap@CD2DBitmapCache.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DBitmapCache::CCachedBitmap::~CCachedBitmap(CD2DBitmapCache::CCachedBitmap *this)
{
  __int64 *v1; // rbx
  __int64 v3; // rcx

  v1 = (__int64 *)((char *)this + 8);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 80LL))(v3, *(_QWORD *)this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v1);
}

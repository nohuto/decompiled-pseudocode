/*
 * XREFs of ?NotifyRemoteOfDirty@CGdiSpriteBitmap@@AEAAXAEBVCRegion@@@Z @ 0x1801FA5D4
 * Callers:
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x180130214 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGdiSpriteBitmap::NotifyRemoteOfDirty(CGdiSpriteBitmap *this, const struct CRegion *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( *((_BYTE *)this + 149) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)g_pComposition + 709) + 24LL);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
      if ( v5 )
        (*(void (__fastcall **)(__int64, unsigned __int64, const struct CRegion *))(*(_QWORD *)v5 + 8LL))(
          v5,
          ((unsigned __int64)this + 120) & -(__int64)(this != 0LL),
          a2);
    }
  }
}

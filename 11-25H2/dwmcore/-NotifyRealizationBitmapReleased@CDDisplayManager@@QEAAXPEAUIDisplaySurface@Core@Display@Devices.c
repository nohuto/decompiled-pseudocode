/*
 * XREFs of ?NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x1801C8390
 * Callers:
 *     ?ReleaseDisplaySurface@CDxHandleBitmapRealization@@IEAAXXZ @ 0x1801C74BC (-ReleaseDisplaySurface@CDxHandleBitmapRealization@@IEAAXXZ.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1801C74F0 (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDisplayManager::NotifyRealizationBitmapReleased(
        CDDisplayManager *this,
        struct Windows::Devices::Display::Core::IDisplaySurface *a2)
{
  __int64 v2; // rdi
  _QWORD *i; // rbx

  v2 = qword_180406BF0;
  for ( i = (_QWORD *)qword_180406BE8; i != (_QWORD *)v2; ++i )
    (**(void (__fastcall ***)(_QWORD, struct Windows::Devices::Display::Core::IDisplaySurface *))*i)(*i, a2);
}

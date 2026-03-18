/*
 * XREFs of ?GetDisplaySurface@CDxHandleBitmapRealization@@UEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x1800FE4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureDisplaySurface@CDxHandleBitmapRealization@@IEAAJXZ @ 0x1800FE55C (-EnsureDisplaySurface@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct Windows::Devices::Display::Core::IDisplaySurface *__fastcall CDxHandleBitmapRealization::GetDisplaySurface(
        CDxHandleBitmapRealization *this,
        unsigned int *a2)
{
  CDxHandleBitmapRealization *v2; // rsi

  v2 = (CDxHandleBitmapRealization *)((char *)this - 344);
  if ( (*(int (__fastcall **)(char *))(*((_QWORD *)this - 43) + 72LL))((char *)this - 344) < 0
    || (int)CDxHandleBitmapRealization::EnsureDisplaySurface(v2) < 0 )
  {
    return 0LL;
  }
  if ( a2 )
    *a2 = *(_DWORD *)(*((_QWORD *)this + 4) + 232LL);
  return (struct Windows::Devices::Display::Core::IDisplaySurface *)*((_QWORD *)this + 5);
}

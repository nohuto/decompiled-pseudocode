/*
 * XREFs of ??0ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x14000DF20
 * Callers:
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x14000C950 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     GreCreatePatternBrushInternal @ 0x14000DD70 (GreCreatePatternBrushInternal.c)
 *     bMigrateSurfaceForConversion @ 0x1400848F4 (bMigrateSurfaceForConversion.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1400F8150 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

ThreadRestrictNewHandlesRegion *__fastcall ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion(
        ThreadRestrictNewHandlesRegion *this)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
  if ( CurrentThreadNonPaged )
    v3 = *CurrentThreadNonPaged;
  else
    v3 = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 1LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 8LL;
  v4 = (v3 + 8) & -(__int64)(v3 != 0);
  *((_BYTE *)this + 80) = 1;
  *(_QWORD *)this = v4;
  *((_QWORD *)this + 5) = (char *)this + 48;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 336);
    if ( v5 )
    {
      if ( *(_BYTE *)(v5 + 80) )
      {
        ++*(_QWORD *)(v5 + 16);
      }
      else
      {
        *(_QWORD *)(v4 + 336) = this;
        *((_QWORD *)this + 1) = v5;
      }
    }
    else
    {
      *(_QWORD *)(v4 + 336) = this;
    }
  }
  return this;
}

/*
 * XREFs of ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1401C256C
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1400CAC90 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x14032066C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 * Callees:
 *     GrepIsWindowGdiScaled @ 0x1400B23A0 (GrepIsWindowGdiScaled.c)
 */

void __fastcall DWMSPRITE::vUpdateDpiScaling(DWMSPRITE *this, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 v4; // di
  unsigned __int64 v5; // rcx
  float v6; // xmm0_4
  __int16 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 96;
  v4 = 96;
  if ( a2 )
  {
    v4 = *a2;
  }
  else
  {
    v5 = *((_QWORD *)this + 5);
    if ( v5 )
    {
      if ( (unsigned int)GrepIsWindowGdiScaled(v5, &v7, a3) )
        v4 = v7;
      else
        v4 = 96;
    }
    else if ( (unsigned int)UserIsCurrentThreadGdiScaled() )
    {
      return;
    }
  }
  if ( v4 == 96 )
  {
    if ( (*((_DWORD *)this + 35) & 0x20) != 0 )
    {
      *((_DWORD *)this + 33) = 0;
      *((_DWORD *)this + 34) = 0;
      *((_DWORD *)this + 35) &= ~0x20u;
    }
  }
  else
  {
    v6 = (float)(unsigned __int16)GreGetScaledLogPixels(v4) / 96.0;
    *((float *)this + 33) = v6;
    *((float *)this + 34) = v6;
    *((_DWORD *)this + 35) |= 0x20u;
  }
}

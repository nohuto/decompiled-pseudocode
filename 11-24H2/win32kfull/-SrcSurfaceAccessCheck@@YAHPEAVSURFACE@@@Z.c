/*
 * XREFs of ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1400C55A0
 * Callers:
 *     NtGdiGetPixel @ 0x1400C51B0 (NtGdiGetPixel.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1400DFAB0 (-bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SrcSurfaceAccessCheck(struct SURFACE *a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // eax

  v2 = 0;
  if ( !*((_DWORD *)a1 + 164) || ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) == *((_DWORD *)a1 + 164) )
  {
    v4 = *((_DWORD *)a1 + 28);
    if ( (v4 & 0x800) != 0 )
    {
      return (unsigned int)UserSurfaceAccessCheck(*((_QWORD *)a1 + 81));
    }
    else
    {
      if ( (v4 & 0x10000000) == 0 )
        return 1;
      return (unsigned int)UserScreenAccessCheck(a1, a2);
    }
  }
  return v2;
}

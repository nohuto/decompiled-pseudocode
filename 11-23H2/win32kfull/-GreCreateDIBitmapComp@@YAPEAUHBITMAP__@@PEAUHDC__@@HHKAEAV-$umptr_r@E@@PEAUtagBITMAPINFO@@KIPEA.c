/*
 * XREFs of ?GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1C02DD32C
 * Callers:
 *     NtGdiCreateDIBitmapInternal @ 0x1C0046DC0 (NtGdiCreateDIBitmapInternal.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C00C0EB0 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0024FB0 (GreCreateCompatibleBitmapInternal.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C24 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C70 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?GreSetDIBitsInternal@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@Z @ 0x1C02DD460 (-GreSetDIBitsInternal@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX.c)
 */

HSURF __fastcall GreCreateDIBitmapComp(
        HDC a1,
        unsigned int a2,
        int a3,
        char a4,
        _QWORD *a5,
        _DWORD *a6,
        unsigned int a7,
        int a8,
        __int64 a9)
{
  int v9; // ebp
  unsigned int v12; // esi
  HSURF CompatibleBitmapInternal; // rax
  HSURF v14; // rdi

  v9 = a7;
  if ( a7 > 2 || a6 && *a6 >= 0x28u && (unsigned int)(a6[4] - 4) <= 1 )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v12 = -a3;
    if ( a3 >= 0 )
      v12 = a3;
    CompatibleBitmapInternal = (HSURF)GreCreateCompatibleBitmapInternal((__int64)a1, a2, v12, 0, 0LL, 0LL);
    v14 = CompatibleBitmapInternal;
    if ( CompatibleBitmapInternal )
    {
      if ( (a4 & 4) == 0
        || !*a5
        || !a6
        || (unsigned int)GreSetDIBitsInternal(a1, CompatibleBitmapInternal, (__int64)a5, (__int64)a6, v9, a8, a9) )
      {
        return v14;
      }
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&a7);
      GreDeleteObject(v14);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&a7);
    }
  }
  return 0LL;
}

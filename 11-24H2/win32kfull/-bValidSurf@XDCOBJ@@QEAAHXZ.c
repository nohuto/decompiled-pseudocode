/*
 * XREFs of ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1400C384C
 * Callers:
 *     ?GrepGetPerBandInfo@@YAKAEAVXDCOBJ@@PEAU_PERBANDINFO@@@Z @ 0x1400C2364 (-GrepGetPerBandInfo@@YAKAEAVXDCOBJ@@PEAU_PERBANDINFO@@@Z.c)
 *     ?GrepDoBanding@@YAHAEAVXDCOBJ@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1400C23E0 (-GrepDoBanding@@YAHAEAVXDCOBJ@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1400C2818 (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400C3880 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ?bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z @ 0x140268328 (-bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x1403050D8 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 *     NtGdiUpdateColors @ 0x14030F8B0 (NtGdiUpdateColors.c)
 *     NtGdiEndPage @ 0x140327D80 (NtGdiEndPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bValidSurf(XDCOBJ *this)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // ecx

  v1 = *(_QWORD *)this;
  result = 0LL;
  if ( *(_QWORD *)this )
  {
    if ( *(_QWORD *)(v1 + 496) )
    {
      v3 = *(_DWORD *)(v1 + 36);
      if ( (v3 & 0x1000) == 0 || (v3 & 0x4000) != 0 )
        return 1LL;
    }
  }
  return result;
}

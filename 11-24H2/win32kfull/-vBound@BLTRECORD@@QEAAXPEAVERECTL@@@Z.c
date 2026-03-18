/*
 * XREFs of ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1401F0518
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x1401EFD2C (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x1403050D8 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z @ 0x1403058F8 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x140305B58 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E7958 (-vOrder@ERECTL@@QEAAXXZ.c)
 */

void __fastcall BLTRECORD::vBound(BLTRECORD *this, struct ERECTL *a2)
{
  *(_DWORD *)a2 = (*((_DWORD *)this + 2 * *((int *)this + 50) + 24) + 15) >> 4;
  *((_DWORD *)a2 + 1) = (*((_DWORD *)this + 2 * *((int *)this + 51) + 25) + 15) >> 4;
  *((_DWORD *)a2 + 2) = (*((_DWORD *)this + 2 * (*((int *)this + 50) ^ 3LL) + 24) + 15) >> 4;
  *((_DWORD *)a2 + 3) = (*((_DWORD *)this + 2 * (*((int *)this + 51) ^ 3LL) + 25) + 15) >> 4;
  ERECTL::vOrder(a2);
}

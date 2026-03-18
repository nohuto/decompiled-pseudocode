/*
 * XREFs of ??0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@_N@Z @ 0x18025451C
 * Callers:
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180206FFC (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18027EBEC (--0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

COverlayContext *__fastcall COverlayContext::COverlayContext(
        COverlayContext *this,
        struct IOverlayMonitorTarget *a2,
        char a3)
{
  COverlayContext *result; // rax

  *(_QWORD *)this = a2;
  *((_DWORD *)this + 2) = 0;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = (char *)this + 112;
  *((_QWORD *)this + 12) = (char *)this + 112;
  *((_QWORD *)this + 13) = (char *)this + 6512;
  *((_QWORD *)this + 814) = (char *)this + 6536;
  *((_QWORD *)this + 815) = (char *)this + 6536;
  *((_QWORD *)this + 816) = (char *)this + 12936;
  *((_QWORD *)this + 1617) = (char *)this + 12960;
  *((_QWORD *)this + 1618) = (char *)this + 12960;
  *((_QWORD *)this + 1619) = (char *)this + 19360;
  *((_QWORD *)this + 2450) = 0LL;
  *((_QWORD *)this + 2451) = 0LL;
  *((_QWORD *)this + 2452) = 0LL;
  *((_QWORD *)this + 2453) = 0LL;
  *((_QWORD *)this + 2454) = 0LL;
  *((_QWORD *)this + 2455) = 0LL;
  *((_QWORD *)this + 2456) = 0LL;
  *((_QWORD *)this + 2457) = 0LL;
  *((_QWORD *)this + 2458) = 0LL;
  *((_QWORD *)this + 2459) = 0LL;
  *((_QWORD *)this + 2460) = 0LL;
  *((_QWORD *)this + 2461) = 0LL;
  *((_OWORD *)this + 1231) = 0LL;
  *((_QWORD *)this + 2464) = 0LL;
  *((_QWORD *)this + 2465) = 0LL;
  result = this;
  *((_QWORD *)this + 2466) = 0LL;
  *((_DWORD *)this + 4934) = 0x1000000;
  *((_WORD *)this + 9870) = 0;
  *((_QWORD *)this + 2468) = 0LL;
  *((_DWORD *)this + 4938) = 0;
  *((_QWORD *)this + 2470) = 0LL;
  *((_BYTE *)this + 19768) = 0;
  *((_BYTE *)this + 19770) = 0;
  *((_WORD *)this + 9886) = 0;
  *((_BYTE *)this + 19779) = 1;
  *((_BYTE *)this + 19781) = a3;
  *((_QWORD *)this + 2473) = 0LL;
  *((_DWORD *)this + 4948) = 0;
  *((_BYTE *)this + 19796) = 0;
  *((_DWORD *)this + 7666) = -1;
  *((_QWORD *)this + 2475) = 0LL;
  *((_DWORD *)this + 4952) = 0;
  return result;
}

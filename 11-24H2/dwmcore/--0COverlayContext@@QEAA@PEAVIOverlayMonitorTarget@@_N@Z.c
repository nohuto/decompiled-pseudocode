/*
 * XREFs of ??0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@_N@Z @ 0x1802683F0
 * Callers:
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801892C0 (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1802743E4 (--0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
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
  *((_QWORD *)this + 13) = (char *)this + 6384;
  *((_QWORD *)this + 798) = (char *)this + 6408;
  *((_QWORD *)this + 799) = (char *)this + 6408;
  *((_QWORD *)this + 800) = (char *)this + 12680;
  *(_QWORD *)((char *)this + 19308) = 0LL;
  *(_QWORD *)((char *)this + 19316) = 0LL;
  *(_QWORD *)((char *)this + 19324) = 0LL;
  *(_QWORD *)((char *)this + 19332) = 0LL;
  *(_QWORD *)((char *)this + 19340) = 0LL;
  *(_QWORD *)((char *)this + 19348) = 0LL;
  *(_QWORD *)((char *)this + 19356) = 0LL;
  *(_QWORD *)((char *)this + 19364) = 0LL;
  *(_QWORD *)((char *)this + 19372) = 0LL;
  *(_QWORD *)((char *)this + 19380) = 0LL;
  *((_DWORD *)this + 4847) = 0;
  *((_QWORD *)this + 1585) = (char *)this + 12704;
  *((_QWORD *)this + 1586) = (char *)this + 12704;
  *((_QWORD *)this + 1587) = (char *)this + 18976;
  *((_QWORD *)this + 2425) = 0LL;
  *((_QWORD *)this + 2426) = 0LL;
  *((_QWORD *)this + 2428) = 0LL;
  *((_QWORD *)this + 2431) = 0LL;
  *((_QWORD *)this + 2432) = 0LL;
  *((_QWORD *)this + 2403) = 0LL;
  *((_QWORD *)this + 2427) = 0LL;
  *((_QWORD *)this + 2429) = 0LL;
  *((_QWORD *)this + 2430) = 0LL;
  *((_QWORD *)this + 2402) = 0LL;
  *(_OWORD *)((char *)this + 19464) = 0LL;
  *((_QWORD *)this + 2435) = 0LL;
  *((_QWORD *)this + 2436) = 0LL;
  result = this;
  *((_QWORD *)this + 2437) = 0LL;
  *((_DWORD *)this + 4876) = 0x1000000;
  *((_WORD *)this + 9754) = 0;
  *((_DWORD *)this + 7570) = -1;
  *((_QWORD *)this + 2439) = 0LL;
  *((_DWORD *)this + 4880) = 0;
  *((_QWORD *)this + 2441) = 0LL;
  *((_QWORD *)this + 2442) = 0LL;
  *((_QWORD *)this + 2443) = 0LL;
  *((_QWORD *)this + 2444) = 0LL;
  *((_QWORD *)this + 2445) = 0LL;
  *((_QWORD *)this + 2446) = 0LL;
  *((_WORD *)this + 9788) = 0;
  *((_BYTE *)this + 19579) = 0;
  *(_WORD *)((char *)this + 19581) = 256;
  *((_BYTE *)this + 19583) = 0;
  *((_BYTE *)this + 19589) = 1;
  *((_BYTE *)this + 19594) = a3;
  *(_QWORD *)((char *)this + 19596) = 0LL;
  *((_DWORD *)this + 4901) = 0;
  *((_BYTE *)this + 19608) = 0;
  *(_QWORD *)((char *)this + 19612) = 0LL;
  *((_DWORD *)this + 4905) = 0;
  return result;
}

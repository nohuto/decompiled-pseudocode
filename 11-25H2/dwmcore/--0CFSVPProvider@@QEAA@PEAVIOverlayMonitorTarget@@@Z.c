/*
 * XREFs of ??0CFSVPProvider@@QEAA@PEAVIOverlayMonitorTarget@@@Z @ 0x1802071F8
 * Callers:
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180206FFC (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18027EBEC (--0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CFSVPProvider *__fastcall CFSVPProvider::CFSVPProvider(CFSVPProvider *this, struct IOverlayMonitorTarget *a2)
{
  CFSVPProvider *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = a2;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_DWORD *)this + 18) = 0;
  result = this;
  *((_BYTE *)this + 76) = 0;
  return result;
}

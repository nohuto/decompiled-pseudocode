/*
 * XREFs of ??0CTargetStats@@QEAA@XZ @ 0x180189550
 * Callers:
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801892C0 (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1802743E4 (--0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

CTargetStats *__fastcall CTargetStats::CTargetStats(CTargetStats *this)
{
  CTargetStats *result; // rax

  *((_DWORD *)this + 10) = 1;
  *((_QWORD *)this + 4) = 0LL;
  memset_0((char *)this + 48, 0, 0x50uLL);
  *((_QWORD *)this + 16) = 0LL;
  result = this;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  return result;
}

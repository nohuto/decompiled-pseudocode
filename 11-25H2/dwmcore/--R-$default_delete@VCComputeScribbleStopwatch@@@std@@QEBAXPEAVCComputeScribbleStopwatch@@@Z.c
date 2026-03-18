/*
 * XREFs of ??R?$default_delete@VCComputeScribbleStopwatch@@@std@@QEBAXPEAVCComputeScribbleStopwatch@@@Z @ 0x1802931D4
 * Callers:
 *     ??1?$out_param_t@V?$unique_ptr@VCComputeScribbleStopwatch@@U?$default_delete@VCComputeScribbleStopwatch@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180293004 (--1-$out_param_t@V-$unique_ptr@VCComputeScribbleStopwatch@@U-$default_delete@VCComputeScribbleSt.c)
 *     ??1?$unique_ptr@VCComputeScribbleStopwatch@@U?$default_delete@VCComputeScribbleStopwatch@@@std@@@std@@QEAA@XZ @ 0x180293034 (--1-$unique_ptr@VCComputeScribbleStopwatch@@U-$default_delete@VCComputeScribbleStopwatch@@@std@@.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1CComputeScribbleStopwatch@@QEAA@XZ @ 0x18029312C (--1CComputeScribbleStopwatch@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CComputeScribbleStopwatch>::operator()(__int64 a1, CComputeScribbleStopwatch *a2)
{
  if ( a2 )
  {
    CComputeScribbleStopwatch::~CComputeScribbleStopwatch(a2);
    operator delete(a2);
  }
}

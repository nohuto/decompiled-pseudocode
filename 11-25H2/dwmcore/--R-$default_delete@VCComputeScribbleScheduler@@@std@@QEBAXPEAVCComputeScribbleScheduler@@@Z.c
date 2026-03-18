/*
 * XREFs of ??R?$default_delete@VCComputeScribbleScheduler@@@std@@QEBAXPEAVCComputeScribbleScheduler@@@Z @ 0x180290734
 * Callers:
 *     ??1?$out_param_t@V?$unique_ptr@VCComputeScribbleScheduler@@U?$default_delete@VCComputeScribbleScheduler@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1802906B4 (--1-$out_param_t@V-$unique_ptr@VCComputeScribbleScheduler@@U-$default_delete@VCComputeScribbleSc.c)
 *     ??1?$unique_ptr@VCComputeScribbleScheduler@@U?$default_delete@VCComputeScribbleScheduler@@@std@@@std@@QEAA@XZ @ 0x1802906E4 (--1-$unique_ptr@VCComputeScribbleScheduler@@U-$default_delete@VCComputeScribbleScheduler@@@std@@.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x180293054 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CComputeScribbleScheduler>::operator()(__int64 a1, CComputeScribbleScheduler *a2)
{
  if ( a2 )
  {
    CComputeScribbleScheduler::~CComputeScribbleScheduler(a2);
    operator delete(a2);
  }
}

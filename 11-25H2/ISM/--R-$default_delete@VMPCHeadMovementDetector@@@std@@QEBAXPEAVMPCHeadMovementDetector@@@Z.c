/*
 * XREFs of ??R?$default_delete@VMPCHeadMovementDetector@@@std@@QEBAXPEAVMPCHeadMovementDetector@@@Z @ 0x1800CCB7C
 * Callers:
 *     ??1?$unique_ptr@VMPCHeadMovementDetector@@U?$default_delete@VMPCHeadMovementDetector@@@std@@@std@@QEAA@XZ @ 0x1800CC870 (--1-$unique_ptr@VMPCHeadMovementDetector@@U-$default_delete@VMPCHeadMovementDetector@@@std@@@std.c)
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x1800CD290 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCHeadMovementDetector@@QEAA@XZ @ 0x1800CE6CC (--1MPCHeadMovementDetector@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<MPCHeadMovementDetector>::operator()(__int64 a1, MPCHeadMovementDetector *a2)
{
  if ( a2 )
  {
    MPCHeadMovementDetector::~MPCHeadMovementDetector(a2);
    operator delete(a2, (const struct std::nothrow_t *)0xB8);
  }
}

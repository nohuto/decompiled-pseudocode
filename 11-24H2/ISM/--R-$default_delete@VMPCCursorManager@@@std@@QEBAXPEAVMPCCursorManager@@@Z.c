/*
 * XREFs of ??R?$default_delete@VMPCCursorManager@@@std@@QEBAXPEAVMPCCursorManager@@@Z @ 0x1800B9AFC
 * Callers:
 *     ??1?$unique_ptr@VMPCCursorManager@@U?$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ @ 0x1800B9894 (--1-$unique_ptr@VMPCCursorManager@@U-$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ.c)
 *     ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x1800BA020 (-Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x1800BB794 (-UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCCursorManager@@QEAA@XZ @ 0x1800BECA4 (--1MPCCursorManager@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<MPCCursorManager>::operator()(__int64 a1, MPCCursorManager *a2)
{
  if ( a2 )
  {
    MPCCursorManager::~MPCCursorManager(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x48);
  }
}

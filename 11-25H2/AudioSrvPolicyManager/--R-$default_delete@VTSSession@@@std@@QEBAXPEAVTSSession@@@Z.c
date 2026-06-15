/*
 * XREFs of ??R?$default_delete@VTSSession@@@std@@QEBAXPEAVTSSession@@@Z @ 0x18004066C
 * Callers:
 *     ??$?4U?$default_delete@VTSSession@@@std@@$0A@@?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18003F224 (--$-4U-$default_delete@VTSSession@@@std@@$0A@@-$unique_ptr@VTSSession@@U-$default_delete@VTSSess.c)
 *     ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x18003FD80 (--1-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18003FE30 (--1TSSession@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<TSSession>::operator()(__int64 a1, TSSession *a2)
{
  if ( a2 )
  {
    TSSession::~TSSession(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x460);
  }
}

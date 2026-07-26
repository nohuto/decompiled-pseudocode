/*
 * XREFs of ??1NdisPoll@@QEAA@XZ @ 0x1401553A0
 * Callers:
 *     ??_GNdisPoll@@QEAAPEAXI@Z @ 0x1400DCD00 (--_GNdisPoll@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ??1ExecutionContextLibrary@@QEAA@XZ @ 0x1401551A8 (--1ExecutionContextLibrary@@QEAA@XZ.c)
 */

void __fastcall NdisPoll::~NdisPoll(void (**this)(void))
{
  if ( this[20] )
    this[2]();
  ExecutionContextLibrary::~ExecutionContextLibrary((ExecutionContextLibrary *)this);
}

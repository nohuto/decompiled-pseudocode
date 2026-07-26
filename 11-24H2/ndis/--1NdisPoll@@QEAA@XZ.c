/*
 * XREFs of ??1NdisPoll@@QEAA@XZ @ 0x14014A6D0
 * Callers:
 *     ??_GNdisPoll@@QEAAPEAXI@Z @ 0x1400D59C0 (--_GNdisPoll@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ??1ExecutionContextLibrary@@QEAA@XZ @ 0x14014A4D8 (--1ExecutionContextLibrary@@QEAA@XZ.c)
 */

void __fastcall NdisPoll::~NdisPoll(void (**this)(void))
{
  if ( this[20] )
    this[2]();
  ExecutionContextLibrary::~ExecutionContextLibrary((ExecutionContextLibrary *)this);
}

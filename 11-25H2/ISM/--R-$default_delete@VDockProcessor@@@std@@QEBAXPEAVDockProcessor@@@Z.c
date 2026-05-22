/*
 * XREFs of ??R?$default_delete@VDockProcessor@@@std@@QEBAXPEAVDockProcessor@@@Z @ 0x1801B0608
 * Callers:
 *     ??1?$unique_ptr@VDockProcessor@@U?$default_delete@VDockProcessor@@@std@@@std@@QEAA@XZ @ 0x1801B05C0 (--1-$unique_ptr@VDockProcessor@@U-$default_delete@VDockProcessor@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::default_delete<DockProcessor>::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a2 + 16) + 24LL))(a2 + 16, 1LL);
  return result;
}

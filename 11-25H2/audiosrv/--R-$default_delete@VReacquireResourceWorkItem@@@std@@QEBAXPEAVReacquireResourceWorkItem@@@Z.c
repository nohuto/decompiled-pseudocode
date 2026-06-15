/*
 * XREFs of ??R?$default_delete@VReacquireResourceWorkItem@@@std@@QEBAXPEAVReacquireResourceWorkItem@@@Z @ 0x1800E6D74
 * Callers:
 *     ??1?$unique_ptr@VReacquireResourceWorkItem@@U?$default_delete@VReacquireResourceWorkItem@@@std@@@std@@QEAA@XZ @ 0x1800A61F0 (--1-$unique_ptr@VReacquireResourceWorkItem@@U-$default_delete@VReacquireResourceWorkItem@@@std@@.c)
 *     ??$?4U?$default_delete@VReacquireResourceWorkItem@@@std@@$0A@@?$unique_ptr@VReacquireResourceWorkItem@@U?$default_delete@VReacquireResourceWorkItem@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800E59E4 (--$-4U-$default_delete@VReacquireResourceWorkItem@@@std@@$0A@@-$unique_ptr@VReacquireResourceWor.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::default_delete<ReacquireResourceWorkItem>::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 1LL);
  return result;
}

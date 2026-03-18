/*
 * XREFs of ?s_ThreadMain@CManipulationManager@@KAKPEAX@Z @ 0x1802621A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationManager::s_ThreadMain(PVOID Parameter)
{
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)Parameter + 64LL))(Parameter);
  return 0LL;
}

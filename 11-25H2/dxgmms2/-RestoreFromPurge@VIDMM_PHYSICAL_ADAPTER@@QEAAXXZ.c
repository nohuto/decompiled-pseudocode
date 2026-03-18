/*
 * XREFs of ?RestoreFromPurge@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ @ 0x140101A3C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER::RestoreFromPurge(VIDMM_PHYSICAL_ADAPTER *this)
{
  __int64 i; // rbx
  __int64 v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 206) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 144LL))(v3);
  }
}

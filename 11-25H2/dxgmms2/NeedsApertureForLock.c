/*
 * XREFs of NeedsApertureForLock @ 0x140039994
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAX@Z @ 0x1400F35B8 (-LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall NeedsApertureForLock(__int64 a1, __int64 a2)
{
  int v3; // ecx

  v3 = *(_DWORD *)(a2 + 24);
  return ((v3 & 0x1E0000) == 0 || (*(_DWORD *)(a2 + 24) & 0x1E0000) == 0x40000)
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 40232) + 8LL * (v3 & 0x3F)) + 478LL) & 2) != 0;
}

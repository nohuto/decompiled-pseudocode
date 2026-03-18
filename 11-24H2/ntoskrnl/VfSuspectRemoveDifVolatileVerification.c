/*
 * XREFs of VfSuspectRemoveDifVolatileVerification @ 0x140B9B138
 * Callers:
 *     VfDriverRemoveAllDifVerification @ 0x1406110D4 (VfDriverRemoveAllDifVerification.c)
 *     VfDriverRemoveDifVerification @ 0x140B8A4F0 (VfDriverRemoveDifVerification.c)
 * Callees:
 *     VfTargetRecoverIoCallbacks @ 0x1406111E0 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetDriversDisableVerifier @ 0x140B8B2DC (VfTargetDriversDisableVerifier.c)
 *     VfThunkApplyPristineToAllSession @ 0x140B97184 (VfThunkApplyPristineToAllSession.c)
 *     VfSuspectDifRemoveEntry @ 0x140B9A640 (VfSuspectDifRemoveEntry.c)
 */

__int64 __fastcall VfSuspectRemoveDifVolatileVerification(ULONG_PTR a1, __int64 a2)
{
  int v3; // edi

  VfTargetRecoverIoCallbacks(*(_QWORD *)(a1 + 48), a2);
  v3 = VfThunkApplyPristineToAllSession(a1);
  if ( v3 >= 0 )
  {
    VfTargetDriversDisableVerifier();
    VfSuspectDifRemoveEntry((const UNICODE_STRING *)(a1 + 88));
    ++dword_140F03EB8;
    *(_DWORD *)(a1 + 104) &= ~0x2000000u;
  }
  return (unsigned int)v3;
}

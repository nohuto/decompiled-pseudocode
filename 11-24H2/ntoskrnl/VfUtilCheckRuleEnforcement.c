/*
 * XREFs of VfUtilCheckRuleEnforcement @ 0x140B851F0
 * Callers:
 *     VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140BA0160 (VfMiscMmBuildMdlForNonPagedPool_Exit.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140BA01E0 (VfMiscMmUnmapLockedPages_Entry.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140BA9E7C (VfTargetDriversGetVerifierData.c)
 */

_BOOL8 __fastcall VfUtilCheckRuleEnforcement(__int64 a1)
{
  __int64 VerifierData; // rax
  _BOOL8 result; // rax

  result = 1;
  if ( VerifierTipDisable == 1 )
  {
    VerifierData = VfTargetDriversGetVerifierData(a1);
    if ( !VerifierData || ((*(_BYTE *)(VerifierData + 48) - 8) & 0xFB) == 0 )
      return 0;
  }
  return result;
}

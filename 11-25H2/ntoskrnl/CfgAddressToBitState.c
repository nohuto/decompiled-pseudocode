/*
 * XREFs of CfgAddressToBitState @ 0x1404ADED4
 * Callers:
 *     MiCheckVerifierFunctionsCfgState @ 0x1407EB758 (MiCheckVerifierFunctionsCfgState.c)
 *     MiCfgMarkValidEntries @ 0x1409FDA5C (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x140AB1FD8 (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CfgAddressToBitState(unsigned __int64 a1, const signed __int64 *a2)
{
  return _bittest64(a2, 2 * (a1 >> 4)) | (2 * (unsigned int)_bittest64(a2, 2 * (a1 >> 4) + 1));
}

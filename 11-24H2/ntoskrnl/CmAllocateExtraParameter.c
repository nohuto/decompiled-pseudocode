/*
 * XREFs of CmAllocateExtraParameter @ 0x140A23404
 * Callers:
 *     VrpPreOpenOrCreate @ 0x1409271B4 (VrpPreOpenOrCreate.c)
 *     VrpPostOpenOrCreate @ 0x140AE85D0 (VrpPostOpenOrCreate.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 */

__int64 CmAllocateExtraParameter()
{
  __int64 result; // rax

  result = CmpAllocatePool(0x100uLL);
  if ( result )
  {
    *(_QWORD *)(result + 40) = 32LL;
    *(_QWORD *)(result + 32) = VrpOriginalKeyNameParameterCleanup;
    *(_OWORD *)(result + 16) = VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID;
    result += 48LL;
  }
  return result;
}

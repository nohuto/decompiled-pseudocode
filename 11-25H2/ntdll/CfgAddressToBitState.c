/*
 * XREFs of CfgAddressToBitState @ 0x18010B634
 * Callers:
 *     RtlValidateUserCallTarget @ 0x180008CD0 (RtlValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CfgAddressToBitState(unsigned __int64 a1, const signed __int64 *a2)
{
  return _bittest64(a2, 2 * (a1 >> 4)) | (2 * (unsigned int)_bittest64(a2, 2 * (a1 >> 4) + 1));
}

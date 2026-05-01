/*
 * XREFs of SdbpCheckPackageAttributes @ 0x18009ADE0
 * Callers:
 *     <none>
 * Callees:
 *     SdbGetTagFromTagID @ 0x18009295C (SdbGetTagFromTagID.c)
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledPreCheck @ 0x180096EB4 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledPreCheck.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180099364 (SdbpCheckApplicationTypeAttributes.c)
 */

__int64 __fastcall SdbpCheckPackageAttributes(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 result; // rax

  if ( (unsigned __int16)SdbGetTagFromTagID(a3, a5) == 28758 || (unsigned __int16)SdbGetTagFromTagID(a3, a5) == 28761 )
    Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledPreCheck();
  result = SdbpCheckApplicationTypeAttributes(a1, a3, a5, *(_QWORD **)(a6 + 88));
  if ( (_DWORD)result )
    return 1LL;
  return result;
}

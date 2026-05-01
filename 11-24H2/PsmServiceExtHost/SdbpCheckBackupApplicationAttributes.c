/*
 * XREFs of SdbpCheckBackupApplicationAttributes @ 0x180099670
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledPreCheck @ 0x180096EB4 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledPreCheck.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180099364 (SdbpCheckApplicationTypeAttributes.c)
 */

__int64 __fastcall SdbpCheckBackupApplicationAttributes(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 result; // rax

  Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledPreCheck();
  result = SdbpCheckApplicationTypeAttributes(a1, a3, a5, *(_QWORD **)(a6 + 96));
  if ( (_DWORD)result )
    return 1LL;
  return result;
}

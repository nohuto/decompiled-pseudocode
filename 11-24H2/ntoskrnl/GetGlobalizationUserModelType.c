/*
 * XREFs of GetGlobalizationUserModelType @ 0x14065ABAC
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1404CB300 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlIsMultiUsersInSessionSku @ 0x140780E40 (RtlIsMultiUsersInSessionSku.c)
 *     RtlIsMultiSessionSku @ 0x1409113D0 (RtlIsMultiSessionSku.c)
 */

__int64 GetGlobalizationUserModelType()
{
  __int64 result; // rax

  result = (unsigned int)dword_140EEECE8;
  if ( !dword_140EEECE8 )
  {
    if ( (unsigned __int8)RtlIsMultiSessionSku() )
      result = 1LL;
    else
      result = (unsigned int)((unsigned __int8)RtlIsMultiUsersInSessionSku() != 0) + 2;
    dword_140EEECE8 = result;
  }
  return result;
}

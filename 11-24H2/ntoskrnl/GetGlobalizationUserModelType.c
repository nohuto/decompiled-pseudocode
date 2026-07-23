/*
 * XREFs of GetGlobalizationUserModelType @ 0x1406592CC
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1404C4820 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlIsMultiUsersInSessionSku @ 0x140780D70 (RtlIsMultiUsersInSessionSku.c)
 *     RtlIsMultiSessionSku @ 0x1408E8B20 (RtlIsMultiSessionSku.c)
 */

__int64 GetGlobalizationUserModelType()
{
  __int64 result; // rax

  result = (unsigned int)dword_140EEEEF0;
  if ( !dword_140EEEEF0 )
  {
    if ( RtlIsMultiSessionSku() )
      result = 1LL;
    else
      result = (unsigned int)(RtlIsMultiUsersInSessionSku() != 0) + 2;
    dword_140EEEEF0 = result;
  }
  return result;
}

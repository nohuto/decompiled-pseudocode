/*
 * XREFs of GetGlobalizationUserModelType @ 0x14064EC24
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1404CB5C4 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlIsMultiUsersInSessionSku @ 0x140771BF0 (RtlIsMultiUsersInSessionSku.c)
 *     RtlIsMultiSessionSku @ 0x140A09E70 (RtlIsMultiSessionSku.c)
 */

__int64 GetGlobalizationUserModelType()
{
  __int64 result; // rax

  result = (unsigned int)dword_140EEEA1C;
  if ( !dword_140EEEA1C )
  {
    if ( RtlIsMultiSessionSku() )
      result = 1LL;
    else
      result = (unsigned int)(RtlIsMultiUsersInSessionSku() != 0) + 2;
    dword_140EEEA1C = result;
  }
  return result;
}

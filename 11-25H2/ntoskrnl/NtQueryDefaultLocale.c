/*
 * XREFs of NtQueryDefaultLocale @ 0x14090B6E0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetSessionLocaleId @ 0x14090B5D4 (PsGetSessionLocaleId.c)
 */

NTSTATUS __cdecl NtQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  NTSTATUS v3; // r8d
  __int64 v4; // rcx
  DWORD SessionLocaleId; // eax

  v3 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)DefaultLocaleId < 0x7FFFFFFF0000LL )
      v4 = (__int64)DefaultLocaleId;
    *(_DWORD *)v4 = *(_DWORD *)v4;
  }
  if ( UserProfile )
    SessionLocaleId = PsGetSessionLocaleId();
  else
    SessionLocaleId = PsDefaultSystemLocaleId;
  *DefaultLocaleId = SessionLocaleId;
  return v3;
}

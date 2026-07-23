/*
 * XREFs of PsIsServiceSession @ 0x1409A1044
 * Callers:
 *     PopGetSettingNotificationName @ 0x1409A14CC (PopGetSettingNotificationName.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x14044B690 (PsGetServerSiloServiceSessionId.c)
 *     PsGetSiloBySessionId @ 0x1409A0FF4 (PsGetSiloBySessionId.c)
 */

bool __fastcall PsIsServiceSession(unsigned int a1)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( !a1 )
    return 1;
  if ( (int)PsGetSiloBySessionId(a1, &v3) >= 0 )
    return (unsigned int)PsGetServerSiloServiceSessionId(v3) == a1;
  return 0;
}

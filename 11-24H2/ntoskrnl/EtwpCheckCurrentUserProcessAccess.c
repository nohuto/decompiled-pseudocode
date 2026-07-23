/*
 * XREFs of EtwpCheckCurrentUserProcessAccess @ 0x1408331C0
 * Callers:
 *     EtwpGetPrivateSessionTraceHandle @ 0x1407AD578 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpIsRegEntryAllowed @ 0x140832F04 (EtwpIsRegEntryAllowed.c)
 *     EtwpNotifyGuid @ 0x140834644 (EtwpNotifyGuid.c)
 * Callees:
 *     EtwpAccessCheck @ 0x14083669C (EtwpAccessCheck.c)
 *     ObpGetObjectSecurity @ 0x14084FB10 (ObpGetObjectSecurity.c)
 *     ObReleaseObjectSecurityEx @ 0x14086C2C0 (ObReleaseObjectSecurityEx.c)
 */

__int64 __fastcall EtwpCheckCurrentUserProcessAccess(ULONG_PTR a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebx

  ObpGetObjectSecurity(a1);
  v2 = EtwpAccessCheck(0LL, 0x1FFFFFu);
  LOBYTE(v3) = 0;
  v4 = v2;
  ObReleaseObjectSecurityEx(0LL, v3, a1);
  return v4;
}

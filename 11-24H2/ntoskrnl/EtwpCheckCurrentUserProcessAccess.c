/*
 * XREFs of EtwpCheckCurrentUserProcessAccess @ 0x140AB5B80
 * Callers:
 *     EtwpGetPrivateSessionTraceHandle @ 0x1407AD0A8 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpNotifyGuid @ 0x140836EE4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpAccessCheck @ 0x1408383D4 (EtwpAccessCheck.c)
 *     ObpGetObjectSecurity @ 0x140853850 (ObpGetObjectSecurity.c)
 *     ObReleaseObjectSecurityEx @ 0x140867FD0 (ObReleaseObjectSecurityEx.c)
 */

__int64 __fastcall EtwpCheckCurrentUserProcessAccess(ULONG_PTR *a1)
{
  unsigned int v2; // ebx
  char v4; // [rsp+38h] [rbp+10h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp+18h] BYREF

  SecurityDescriptor = 0LL;
  v4 = 0;
  ObpGetObjectSecurity(a1, &SecurityDescriptor, &v4, 0);
  v2 = EtwpAccessCheck(SecurityDescriptor, 0x1FFFFFu, 0LL);
  ObReleaseObjectSecurityEx((unsigned __int64)SecurityDescriptor, v4, (__int64)a1);
  return v2;
}

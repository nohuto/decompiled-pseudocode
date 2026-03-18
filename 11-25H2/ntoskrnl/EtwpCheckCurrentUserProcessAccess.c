/*
 * XREFs of EtwpCheckCurrentUserProcessAccess @ 0x140AB0CB8
 * Callers:
 *     EtwpGetPrivateSessionTraceHandle @ 0x14079DCD8 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpNotifyGuid @ 0x140897964 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 * Callees:
 *     EtwpAccessCheck @ 0x140898E74 (EtwpAccessCheck.c)
 *     ObReleaseObjectSecurityEx @ 0x140914900 (ObReleaseObjectSecurityEx.c)
 *     ObpGetObjectSecurity @ 0x1409160F0 (ObpGetObjectSecurity.c)
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
  ObReleaseObjectSecurityEx((__int64)SecurityDescriptor, v4, (__int64)a1);
  return v2;
}

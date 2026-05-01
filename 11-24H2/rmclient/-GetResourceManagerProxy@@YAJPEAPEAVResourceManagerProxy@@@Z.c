/*
 * XREFs of ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x18000FA70
 * Callers:
 *     RmGetNotification @ 0x18000F910 (RmGetNotification.c)
 *     RmAcquireResources @ 0x18000F960 (RmAcquireResources.c)
 *     RmReleaseResources @ 0x18000FA20 (RmReleaseResources.c)
 *     RmAccessCheckOnSelf @ 0x1800198A0 (RmAccessCheckOnSelf.c)
 *     RmAvailabilityCheck @ 0x1800198E0 (RmAvailabilityCheck.c)
 *     RmRegisterResource @ 0x180019960 (RmRegisterResource.c)
 * Callees:
 *     CreateResourceManagerProxy @ 0x18001365C (CreateResourceManagerProxy.c)
 */

__int64 __fastcall GetResourceManagerProxy(struct ResourceManagerProxy **a1)
{
  struct ResourceManagerProxy *v2; // rax
  int ResourceManagerProxy; // ebx

  RtlEnterCriticalSection(&s_csProxy);
  v2 = (struct ResourceManagerProxy *)qword_18002FD30;
  if ( !qword_18002FD30 )
  {
    ResourceManagerProxy = CreateResourceManagerProxy();
    if ( ResourceManagerProxy < 0 )
      goto LABEL_3;
    v2 = (struct ResourceManagerProxy *)qword_18002FD30;
  }
  *a1 = v2;
  ResourceManagerProxy = 0;
LABEL_3:
  RtlLeaveCriticalSection(&s_csProxy);
  return (unsigned int)ResourceManagerProxy;
}

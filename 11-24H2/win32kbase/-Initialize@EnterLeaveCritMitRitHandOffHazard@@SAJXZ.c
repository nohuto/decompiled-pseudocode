/*
 * XREFs of ?Initialize@EnterLeaveCritMitRitHandOffHazard@@SAJXZ @ 0x1401626E4
 * Callers:
 *     InitCreateUserCrit @ 0x1402E5784 (InitCreateUserCrit.c)
 * Callees:
 *     CreateKernelSemaphore @ 0x140136430 (CreateKernelSemaphore.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 EnterLeaveCritMitRitHandOffHazard::Initialize(void)
{
  __int64 v0; // rcx
  __int64 UserSessionState; // rbx
  struct _KSEMAPHORE *KernelSemaphore; // rax

  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v0);
  KernelSemaphore = CreateKernelSemaphore(0, 0x7FFFFFFF);
  *(_QWORD *)(UserSessionState + 18864) = KernelSemaphore;
  return KernelSemaphore == 0LL ? 0xC0000017 : 0;
}

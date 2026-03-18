/*
 * XREFs of CreateKernelSemaphore @ 0x140136430
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x14014F6E0 (RIMRegisterForInputWithCallbacks.c)
 *     ?Initialize@EnterLeaveCritMitRitHandOffHazard@@SAJXZ @ 0x1401626E4 (-Initialize@EnterLeaveCritMitRitHandOffHazard@@SAJXZ.c)
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

struct _KSEMAPHORE *__fastcall CreateKernelSemaphore(LONG Count, LONG Limit)
{
  struct _KSEMAPHORE *v4; // rax
  struct _KSEMAPHORE *v5; // rbx

  v4 = (struct _KSEMAPHORE *)Win32AllocPoolZInitImpl(64LL, 0x20uLL, 0x734B7355u);
  v5 = v4;
  if ( v4 )
    KeInitializeSemaphore(v4, Count, Limit);
  return v5;
}

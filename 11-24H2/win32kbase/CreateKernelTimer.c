/*
 * XREFs of CreateKernelTimer @ 0x1401A7690
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

struct _KTIMER *CreateKernelTimer()
{
  struct _KTIMER *v0; // rax
  struct _KTIMER *v1; // rbx

  v0 = (struct _KTIMER *)Win32AllocPoolZInitImpl(64LL, 0x40uLL, 0x79737355u);
  v1 = v0;
  if ( v0 )
    KeInitializeTimerEx(v0, SynchronizationTimer);
  return v1;
}

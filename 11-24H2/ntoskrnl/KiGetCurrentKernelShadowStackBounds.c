/*
 * XREFs of KiGetCurrentKernelShadowStackBounds @ 0x1405C42FC
 * Callers:
 *     KiProcessControlProtectionFromKernelMode @ 0x14043466C (KiProcessControlProtectionFromKernelMode.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 */

unsigned __int64 __fastcall KiGetCurrentKernelShadowStackBounds(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rbx
  __int64 i; // rdi
  unsigned __int64 v8; // rdi
  __int64 j; // rcx

  CurrentThread = KeGetCurrentThread();
  __asm { rdsspq  rbx }
  v4 = (unsigned __int64)CurrentThread->KernelShadowStackBase - 4096;
  result = (CurrentThread->KernelShadowStackLimit.AllFields & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( _RBX >= v4 || _RBX < result )
  {
    v6 = _RBX & 0xFFFFFFFFFFFFF000uLL;
    for ( i = v6 - 4096; MmIsAddressValidEx(i); i -= 4096LL )
      v6 = i;
    v8 = v6;
    for ( j = v6; MmIsAddressValidEx(j); j = v8 )
      v8 += 4096LL;
    *a1 = v8;
    return v6;
  }
  else
  {
    *a1 = v4;
  }
  return result;
}

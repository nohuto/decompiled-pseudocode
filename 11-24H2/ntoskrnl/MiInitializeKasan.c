/*
 * XREFs of MiInitializeKasan @ 0x140C51BB4
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     KasanTrackAddress @ 0x14044E740 (KasanTrackAddress.c)
 *     MxInstallMoreMemory @ 0x14066D8C0 (MxInstallMoreMemory.c)
 *     KasanInitSystem @ 0x140C286E0 (KasanInitSystem.c)
 *     MiFillGapAddresses @ 0x140C56E9C (MiFillGapAddresses.c)
 */

void __fastcall MiInitializeKasan(__int64 a1)
{
  __int64 v2; // rbx
  void *DpcStack; // rcx

  if ( _bittest64(&MiFlags, 0x23u) )
  {
    v2 = qword_140E38C38;
    MiFillGapAddresses(qword_140E38C38, qword_140E38C38 + qword_140E38C40 - 1);
    DpcStack = KeGetPcr()->Prcb.DpcStack;
    KasaniShadow = v2;
    if ( (int)KasanTrackAddress(
                (unsigned __int64)DpcStack + 80LL - (unsigned int)KeKernelStackSize,
                (unsigned int)KeKernelStackSize,
                0LL) < 0 )
      MxInstallMoreMemory(7);
    if ( (int)KasanTrackAddress(
                (unsigned __int64)KeGetPcr()->Prcb.IsrStack - (unsigned int)KeIsrStackSize,
                (unsigned int)KeIsrStackSize,
                0LL) < 0 )
      MxInstallMoreMemory(8);
    if ( (int)KasanTrackAddress(
                (unsigned __int64)KeGetPcr()->Prcb.ExceptionStack + 80LL - (unsigned int)KeExceptionStackSize,
                (unsigned int)KeExceptionStackSize,
                0LL) < 0 )
      MxInstallMoreMemory(9);
    if ( (int)KasanTrackAddress(
                (unsigned __int64)KeGetCurrentThread()->StackLimit,
                (unsigned int)KeKernelStackSize,
                0LL) < 0 )
      MxInstallMoreMemory(10);
    KasanInitSystem(a1, 1);
  }
}

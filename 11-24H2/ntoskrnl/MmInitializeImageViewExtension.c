/*
 * XREFs of MmInitializeImageViewExtension @ 0x140C541D0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     MxInstallMoreMemory @ 0x14066C6F0 (MxInstallMoreMemory.c)
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 *     MmUnsecureVirtualMemory @ 0x1408E51C0 (MmUnsecureVirtualMemory.c)
 *     MiMapSecurePureReserveView @ 0x140A3C6F4 (MiMapSecurePureReserveView.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5428C (MmInitializeImageViewExtensionCfg.c)
 */

__int64 __fastcall MmInitializeImageViewExtension(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  HANDLE SecureHandle; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  SecureHandle = 0LL;
  if ( a1 )
  {
    v4 = 0LL;
    if ( (int)MiMapSecurePureReserveView(
                (__int64)PsInitialSystemProcess,
                qword_140E2D700,
                &qword_140E2DA88,
                &v4,
                &SecureHandle) < 0 )
      MxInstallMoreMemory(49);
    MmUnsecureVirtualMemory(SecureHandle);
    MiUnmapViewOfSection(PsInitialSystemProcess, qword_140E2DA88, 0, 0);
    LOBYTE(v2) = 1;
    MmInitializeImageViewExtensionCfg(v2);
    result = (unsigned int)dword_140E2D7B0;
    dword_140E2D7AC = dword_140E2D7B0;
  }
  else
  {
    dword_140E2D7A0[0] = 0;
    result = (unsigned int)(dword_140E374AC + 4096);
    dword_140E2D7B0 = dword_140E374AC + 4096;
    if ( dword_140E374AC )
      dword_140E2D7A8 = 4096;
  }
  return result;
}

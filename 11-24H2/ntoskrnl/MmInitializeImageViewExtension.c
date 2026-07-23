/*
 * XREFs of MmInitializeImageViewExtension @ 0x140C56360
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     MxInstallMoreMemory @ 0x14066D8C0 (MxInstallMoreMemory.c)
 *     MmUnsecureVirtualMemory @ 0x140896BF0 (MmUnsecureVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x140896E14 (MiUnmapViewOfSection.c)
 *     MiMapSecurePureReserveView @ 0x140A31ED4 (MiMapSecurePureReserveView.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5641C (MmInitializeImageViewExtensionCfg.c)
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
                qword_140E2D840,
                &qword_140E2DBC8,
                &v4,
                &SecureHandle) < 0 )
      MxInstallMoreMemory(49);
    MmUnsecureVirtualMemory(SecureHandle);
    MiUnmapViewOfSection(PsInitialSystemProcess, qword_140E2DBC8, 0, 0);
    LOBYTE(v2) = 1;
    MmInitializeImageViewExtensionCfg(v2);
    result = (unsigned int)dword_140E2D8F0;
    dword_140E2D8EC = dword_140E2D8F0;
  }
  else
  {
    dword_140E2D8E0[0] = 0;
    result = (unsigned int)(dword_140E375EC + 4096);
    dword_140E2D8F0 = dword_140E375EC + 4096;
    if ( dword_140E375EC )
      dword_140E2D8E8 = 4096;
  }
  return result;
}

/*
 * XREFs of MmInitializeImageViewExtension @ 0x140C42F58
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     MxInstallMoreMemory @ 0x140660BB0 (MxInstallMoreMemory.c)
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 *     MmUnsecureVirtualMemory @ 0x1408B48C0 (MmUnsecureVirtualMemory.c)
 *     MiMapSecurePureReserveView @ 0x140A35B94 (MiMapSecurePureReserveView.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C43014 (MmInitializeImageViewExtensionCfg.c)
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
                qword_140E2D4C0,
                &qword_140E2D848,
                &v4,
                &SecureHandle) < 0 )
      MxInstallMoreMemory(49);
    MmUnsecureVirtualMemory(SecureHandle);
    MiUnmapViewOfSection(PsInitialSystemProcess, qword_140E2D848, 0, 0);
    LOBYTE(v2) = 1;
    MmInitializeImageViewExtensionCfg(v2);
    result = (unsigned int)dword_140E2D570;
    dword_140E2D56C = dword_140E2D570;
  }
  else
  {
    dword_140E2D560[0] = 0;
    result = (unsigned int)(dword_140E3726C + 4096);
    dword_140E2D570 = dword_140E3726C + 4096;
    if ( dword_140E3726C )
      dword_140E2D568 = 4096;
  }
  return result;
}

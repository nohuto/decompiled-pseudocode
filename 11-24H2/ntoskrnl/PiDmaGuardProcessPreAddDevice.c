/*
 * XREFs of PiDmaGuardProcessPreAddDevice @ 0x140981740
 * Callers:
 *     PipCallDriverAddDevice @ 0x140980ED0 (PipCallDriverAddDevice.c)
 * Callees:
 *     HalCvmDmaEnabled @ 0x1404F8F58 (HalCvmDmaEnabled.c)
 *     PipDmgGetDeviceDmarPolicy @ 0x140724E90 (PipDmgGetDeviceDmarPolicy.c)
 *     PipDmgGetDriversDmarPolicy @ 0x14072501C (PipDmgGetDriversDmarPolicy.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x140730310 (PipDmgSaveDeviceDmarPolicy.c)
 *     PiIommuSaveDeviceAtsSettings @ 0x140733F70 (PiIommuSaveDeviceAtsSettings.c)
 */

__int64 __fastcall PiDmaGuardProcessPreAddDevice(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int DriversDmarPolicy; // ebx
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v3 = *a1;
  if ( HalCvmDmaEnabled() )
  {
    DriversDmarPolicy = 2;
    return PipDmgSaveDeviceDmarPolicy(v3, a2, DriversDmarPolicy);
  }
  v6 = *(_QWORD *)(v3 + 720);
  if ( !v6 )
    return 0LL;
  if ( (*(_BYTE *)(v6 + 16) & 0x10) != 0 )
  {
    DriversDmarPolicy = 1;
  }
  else
  {
    DriversDmarPolicy = 2;
    if ( (*(_BYTE *)(v6 + 17) & 2) == 0 && (*(_DWORD *)(v3 + 560) & 0x100000) == 0 )
    {
      if ( (int)PipDmgGetDeviceDmarPolicy(a1, &v8) >= 0 )
        DriversDmarPolicy = v8;
      else
        DriversDmarPolicy = PipDmgGetDriversDmarPolicy(a1);
    }
  }
  result = PiIommuSaveDeviceAtsSettings(v3);
  if ( (int)result >= 0 )
    return PipDmgSaveDeviceDmarPolicy(v3, a2, DriversDmarPolicy);
  return result;
}

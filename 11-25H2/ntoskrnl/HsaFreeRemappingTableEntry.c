/*
 * XREFs of HsaFreeRemappingTableEntry @ 0x14056FAC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140205754 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140445E40 (HalpAcquireHighLevelLock.c)
 *     ExtEnvCriticalFailure @ 0x14055D380 (ExtEnvCriticalFailure.c)
 *     ExtEnvFreeMemory @ 0x14055D3A0 (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14055D3E0 (ExtEnvFreePhysicalMemory.c)
 *     HsaGetDeviceAperture @ 0x14056FC08 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x140570B5C (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall HsaFreeRemappingTableEntry(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // r15
  char v7; // r14
  _QWORD *DeviceAperture; // rdi
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-48h]
  __int128 v14; // [rsp+40h] [rbp-38h]
  unsigned __int64 v15; // [rsp+50h] [rbp-28h]

  v3 = 0;
  v13 = 0LL;
  v4 = 0LL;
  LODWORD(v14) = 0;
  v7 = 0;
  if ( a2 >> 9 >= HsaAllocatedDeviceApertures || a3 + (a2 & 0x1FF) > 0x200 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    DeviceAperture = (_QWORD *)HsaGetDeviceAperture(a2);
    if ( *DeviceAperture == a1 )
    {
      byte_140F8E0B8 = HalpAcquireHighLevelLock(&qword_140F8E0B0);
      v9 = *((_DWORD *)DeviceAperture + 12) == a3;
      *((_DWORD *)DeviceAperture + 12) -= a3;
      if ( v9 )
      {
        HsaUpdateRemappingTableInDeviceTableEntry(a1, (char *)DeviceAperture + 52, &HsaSharedRemappingTable);
        v13 = *(_OWORD *)(DeviceAperture + 1);
        v15 = DeviceAperture[5];
        v14 = *(_OWORD *)(DeviceAperture + 3);
        memset_0(DeviceAperture, 0, 0x40uLL);
        v4 = v15;
        v7 = 1;
      }
      HalpReleaseHighLevelLock((__int64)&qword_140F8E0B0, byte_140F8E0B8);
      if ( v7 )
      {
        if ( *((_QWORD *)&v13 + 1) == *((_QWORD *)&HsaSharedRemappingTable + 1) )
          ExtEnvCriticalFailure(v10, 0LL, 0LL, 0LL, 0LL);
        ExtEnvFreePhysicalMemory(v10, *((void **)&v13 + 1), v14, 1u);
        ExtEnvFreeMemory(v11, v4);
      }
    }
    else
    {
      return (unsigned int)-1073741594;
    }
  }
  return v3;
}

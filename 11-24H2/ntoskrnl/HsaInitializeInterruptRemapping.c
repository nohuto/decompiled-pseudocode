/*
 * XREFs of HsaInitializeInterruptRemapping @ 0x140B52B68
 * Callers:
 *     HsaInitializeIommu @ 0x140B52D00 (HsaInitializeIommu.c)
 * Callees:
 *     RtlInitializeBitMap @ 0x1404609E0 (RtlInitializeBitMap.c)
 *     HalpGetIrtEntryCount @ 0x140555E9C (HalpGetIrtEntryCount.c)
 *     ExtEnvAllocateMemory @ 0x14055FA30 (ExtEnvAllocateMemory.c)
 *     ExtEnvClearBits @ 0x14055FC68 (ExtEnvClearBits.c)
 *     ExtEnvInitializeSpinLock @ 0x14055FDB4 (ExtEnvInitializeSpinLock.c)
 *     HalMapIoSpace @ 0x14055FE80 (HalMapIoSpace.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HsaInitializeInterruptRemapping(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v6; // eax
  __int64 v7; // rax
  PVOID v8; // rax
  __int64 v9; // rcx
  RTL_BITMAP *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  PULONG BitMapBuffer; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+20h] BYREF

  v15 = 0LL;
  v4 = 0;
  BitMapBuffer = 0LL;
  v6 = *(_DWORD *)(a1 + 176);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      if ( !*((_QWORD *)&HsaSharedRemappingTable + 1) )
      {
        HIDWORD(NumberOfBytes) = *(_DWORD *)(a1 + 180);
        LODWORD(NumberOfBytes) = (16 * HIDWORD(NumberOfBytes) + 4095) & 0xFFFFF000;
        v7 = guard_dispatch_icall_no_overrides(-1LL, (unsigned int)NumberOfBytes >> 12, a3, a4);
        *(_QWORD *)&HsaSharedRemappingTable = v7;
        if ( v7
          && (v8 = HalMapIoSpace((LARGE_INTEGER)v7, (unsigned int)NumberOfBytes, MmCached),
              (*((_QWORD *)&HsaSharedRemappingTable + 1) = v8) != 0LL) )
        {
          memset_0(v8, 0, (unsigned int)NumberOfBytes);
          v4 = ExtEnvAllocateMemory(v9, 4 * ((unsigned int)(*(_DWORD *)(a1 + 180) + 31) >> 5), &BitMapBuffer);
          if ( v4 >= 0 )
          {
            RtlInitializeBitMap((PRTL_BITMAP)(&NumberOfBytes + 1), BitMapBuffer, *(_DWORD *)(a1 + 180));
            ExtEnvClearBits(v10, 0, *(_DWORD *)(a1 + 180));
            HsaTotalDeviceApertures = (unsigned int)HalpGetIrtEntryCount() >> 9;
            v4 = ExtEnvAllocateMemory(v11, 0x2000u, &v15);
            if ( v4 >= 0 )
            {
              ExtEnvInitializeSpinLock(HsaDeviceApertureLock);
              v12 = v15;
              HsaAllocatedDeviceApertures = 128;
              HsaDeviceApertureRanges[0] = v15;
              *(_OWORD *)(v15 + 8) = HsaSharedRemappingTable;
              *(_OWORD *)(v12 + 24) = *(_OWORD *)&NumberOfBytes;
              *(_QWORD *)(v12 + 40) = qword_140F8E8C0;
              *(_DWORD *)(v12 + 48) = 1;
              *(_DWORD *)(v12 + 52) = -1;
              *(_DWORD *)(v12 + 56) = 0;
            }
          }
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v4;
}

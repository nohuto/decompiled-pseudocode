/*
 * XREFs of HalpIvtLegacyProcessDrhdEntry @ 0x140577968
 * Callers:
 *     HalpIvtProcessDmarTable @ 0x1405780FC (HalpIvtProcessDmarTable.c)
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x140478B90 (HalpUnmapVirtualAddress.c)
 *     HalSocRequestApi @ 0x1404AE160 (HalSocRequestApi.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExtEnvAllocateMemory @ 0x14055FA30 (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x14055FCA0 (ExtEnvFreeMemory.c)
 *     HalMapIoSpace @ 0x14055FE80 (HalMapIoSpace.c)
 *     HalRegisterPermanentAddressUsage @ 0x14055FED0 (HalRegisterPermanentAddressUsage.c)
 *     HalpIvtReserveDomainIds @ 0x1405789EC (HalpIvtReserveDomainIds.c)
 *     HalpIvtAllocateReservedDomainList @ 0x140578CC0 (HalpIvtAllocateReservedDomainList.c)
 *     DmrGetNextDrhdDeviceScope @ 0x140579450 (DmrGetNextDrhdDeviceScope.c)
 *     DmrValidateDeviceScope @ 0x1405797DC (DmrValidateDeviceScope.c)
 *     DmrEnumerateRmrrDomains @ 0x1405798D0 (DmrEnumerateRmrrDomains.c)
 *     DmrFreeRmrrTree @ 0x140579A28 (DmrFreeRmrrTree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExtEnvRegisterIommu @ 0x140C10D18 (ExtEnvRegisterIommu.c)
 */

__int64 __fastcall HalpIvtLegacyProcessDrhdEntry(__int64 a1, __int64 a2)
{
  int v2; // esi
  char v5; // r12
  NTSTATUS ReservedDomainList; // r14d
  __int64 v7; // rcx
  int v8; // eax
  unsigned __int64 v9; // r15
  LARGE_INTEGER v10; // rbx
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  int v16; // r11d
  unsigned __int64 v17; // rdx
  unsigned int v18; // r14d
  unsigned __int64 v19; // rax
  _BYTE *NextDrhdDeviceScope; // rax
  int v21; // r11d
  bool v22; // cf
  int v23; // r11d
  char v24; // si
  __int64 v25; // rdx
  _QWORD *v26; // rsi
  size_t v27; // rbx
  __int16 v28; // ax
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v33; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+44h] [rbp-BCh]
  unsigned int v35; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v36; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  size_t Size; // [rsp+58h] [rbp-A8h]
  _QWORD *v39; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v40; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v41[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h]
  int v43; // [rsp+90h] [rbp-70h]
  int v44; // [rsp+94h] [rbp-6Ch]
  _QWORD *v45; // [rsp+B8h] [rbp-48h]
  _QWORD *v46; // [rsp+C0h] [rbp-40h]
  int v47; // [rsp+C8h] [rbp-38h]
  int v48; // [rsp+CCh] [rbp-34h]
  int v49; // [rsp+D8h] [rbp-28h]
  _BYTE v50[20]; // [rsp+DCh] [rbp-24h] BYREF
  _QWORD v51[24]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v52[28]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v54; // [rsp+2A8h] [rbp+1A8h] BYREF
  unsigned int v55; // [rsp+2B0h] [rbp+1B0h]
  ULONG_PTR v56; // [rsp+2B8h] [rbp+1B8h] BYREF

  LODWORD(v56) = 0;
  v54 = 0;
  v40 = 0LL;
  memset_0(v52, 0, 0x98uLL);
  memset_0(v51, 0, 0xB8uLL);
  LOBYTE(v2) = 0;
  v39 = 0LL;
  v5 = 0;
  v34 = v2;
  ReservedDomainList = 0;
  v35 = 0;
  v36 = 0;
  v55 = 0;
  v37 = 0LL;
  if ( *(_WORD *)a2 )
    return (unsigned int)-1073741823;
  if ( *(_WORD *)(a2 + 2) < 0x10u )
    return (unsigned int)-1073741811;
  if ( !*(_QWORD *)(a2 + 8) )
    return (unsigned int)ReservedDomainList;
  if ( (int)HalSocRequestApi(16LL, 0LL, 2, 16LL, &v40) < 0
    || !(unsigned __int8)guard_dispatch_icall_no_overrides(0LL, 0LL, 0LL, &v54) )
  {
    v54 = 0;
  }
  v8 = ExtEnvAllocateMemory(v7, 0x18u, &v37);
  v9 = v37;
  ReservedDomainList = v8;
  if ( v8 >= 0 )
  {
    ReservedDomainList = DmrEnumerateRmrrDomains(a1, a2 + 4, v37);
    if ( ReservedDomainList >= 0 )
    {
      memset_0(v41, 0, 0x68uLL);
      v41[1] = 104;
      v10 = *(LARGE_INTEGER *)(a2 + 8);
      v41[0] = 1;
      *(_QWORD *)&v40 = HalMapIoSpace(v10, 0x220uLL, MmNonCached);
      if ( !(_QWORD)v40 )
      {
        ReservedDomainList = -1073741670;
        goto LABEL_75;
      }
      ReservedDomainList = HalRegisterPermanentAddressUsage(v10, 0x220u);
      if ( ReservedDomainList < 0 )
      {
LABEL_74:
        HalpUnmapVirtualAddress(v40, 1LL, 0LL);
        if ( ReservedDomainList >= 0 )
          return (unsigned int)ReservedDomainList;
        goto LABEL_75;
      }
      LODWORD(Size) = *(unsigned __int16 *)(a2 + 2) - 16;
      v43 = Size + 368;
      v45 = v52;
      v46 = v51;
      v52[0] = IvtConfigureSettings;
      v52[1] = IvtInitializeIommu;
      v52[2] = IvtAllocateDomain;
      v52[3] = IvtFreeDomain;
      v52[4] = IvtCreateDevice;
      v52[5] = IvtDeleteDevice;
      v51[13] = IvtCheckForReservedRegion;
      v51[0] = IvtFindDevice;
      v51[17] = IvtEnumerateRmrrDevices;
      v11 = *(_QWORD *)(v40 + 8);
      v48 = *(unsigned __int16 *)(a2 + 6);
      v12 = v11 & 0xFFFFFFFFFFFFEEFFuLL;
      v42 = 0LL;
      v13 = *(_QWORD *)(v40 + 16);
      v47 = 2;
      _BitScanReverse(&v14, BYTE1(v12) & 0x1F);
      v44 = 4;
      v55 = v14;
      v15 = 1LL << (((unsigned __int8)(v13 >> 35) & 0x1Fu) + 1);
      if ( v15 > 0x100000 )
        LODWORD(v15) = 0x100000;
      v49 = v15;
      if ( (*(_BYTE *)(a1 + 37) & 3) == 1 && (v13 & 0x18) == 24 )
      {
        v52[15] = IvtUpdateRemappingTableEntry;
        v16 = 68;
        v44 = 68;
        v52[16] = IvtInvalidateRemappingTableEntry;
        v52[17] = IvtUpdateRemappingDestination;
      }
      else
      {
        v16 = v44;
      }
      if ( v54 == 2
        && (v13 & 2) != 0
        && (v12 & 0x80u) == 0LL
        && (v17 = (v12 >> 8) & 0x1F, (_DWORD)v17 != 0 && (v13 & 0x40) != 0)
        && (v12 & 0x80000000000000LL) != 0
        && (v12 & 0x40000000000000LL) != 0 )
      {
        v18 = v55;
        if ( (v12 & 0x10) == 0 )
        {
          v33 = v55;
          v52[10] = IvtLegacyFlushDomainTb;
          v52[11] = xHalTimerWatchdogStop;
          v52[12] = xHalTimerWatchdogStop;
          v52[8] = IvtAttachDeviceDomain;
          v52[9] = IvtDetachDeviceDomain;
          v51[18] = IvtProcessReservedDomains;
          _BitScanReverse64(&v19, v17);
          v16 |= (((_DWORD)v19 << 13) + 0x2000) | 0x100;
          v44 = v16;
        }
      }
      else
      {
        v18 = v55;
      }
      if ( (v16 & 0x100) != 0 )
      {
        LOBYTE(v2) = (v13 & 0x2480000000000LL) == 0x2480000000000LL;
        v34 = (unsigned __int8)v2;
      }
      NextDrhdDeviceScope = (_BYTE *)DmrGetNextDrhdDeviceScope(a2, 0LL, 256LL);
      if ( (_BYTE)v2 )
      {
        if ( (v13 & 0x1000000000000LL) != 0 )
        {
          v21 |= 0x800u;
          v44 = v21;
        }
        if ( (v13 & 0x1050224000004LL) == 0x1050224000004LL )
        {
          v21 |= 0x20u;
          v44 = v21;
          if ( (v13 & 0x80000000) != 0 )
          {
            v21 |= 0x10000u;
            v44 = v21;
          }
          v51[1] = IvtSetDeviceSvmCapabilities;
          v51[22] = IvtLegacySetDeviceSvmCapabilities;
          v51[2] = IvtLegacySetDevicePasidTable;
          v51[3] = IvtLegacyGrowPasidTable;
          v51[4] = IvtLegacySetPasidAddressSpace;
          v51[7] = IvtDismissPageFault;
          v51[8] = IvtGetPageFault;
          v51[14] = IvtMarkHiberRegions;
          v51[15] = IvtDrainSvmPageRequests;
          v51[16] = IvtCancelPageRequests;
        }
        if ( (v13 & 4) == 0 )
          goto LABEL_57;
        v23 = v21 | 0x1000;
        v51[21] = IvtLegacyConfigureAts;
        v51[5] = IvtLegacyFlushTb;
        v51[6] = IvtFlushDeviceTbOnly;
      }
      else
      {
        if ( NextDrhdDeviceScope
          && *NextDrhdDeviceScope == 1
          && NextDrhdDeviceScope[1] == 8
          && !NextDrhdDeviceScope[5]
          && NextDrhdDeviceScope[6] == 2
          && !NextDrhdDeviceScope[7]
          && !*(_WORD *)(a2 + 6)
          && (v12 & 0x3F0000) < 0x2F0000 )
        {
          if ( !HalpIommuEnableGpuIdentityMapping )
          {
            v21 &= ~0x100u;
            v44 = v21;
          }
          if ( v18 )
            v22 = (v12 & 0x800000000LL) != 0;
          else
            v22 = (v12 & 0x400000000LL) != 0;
          if ( v22 )
            v5 = 1;
        }
        if ( (v13 & 1) == 0 )
          goto LABEL_57;
        v23 = v21 | 0x800;
      }
      v44 = v23;
LABEL_57:
      v9 = v37;
      v33 = 0;
      HalpIvtReserveDomainIds(
        v37,
        v12 & 7,
        (unsigned int)&v36,
        (unsigned int)&v35,
        (__int64)&v56,
        (unsigned __int64)&v33 & -(__int64)(v5 != 0),
        (__int64)v50);
      v24 = v44;
      if ( (v44 & 0x20) != 0 || (v44 & 0x100) != 0 )
      {
        v24 = v44 | 0x12;
        v51[10] = IvtEnableInterrupt;
        v51[11] = IvtDisableInterrupt;
        v51[12] = IvtHandleInterrupt;
        v51[9] = IvtSetMessageInterruptRouting;
        v44 |= 0x12u;
      }
      if ( (int)DmrValidateDeviceScope(a1, a2) < 0 && (v24 & 0x20) != 0 )
        KeBugCheckEx(0x5Cu, 0x500uLL, 3uLL, 0LL, 0LL);
      ReservedDomainList = ExtEnvRegisterIommu(v41, v25, &v39);
      if ( ReservedDomainList >= 0 )
      {
        v26 = v39;
        *v39 = *(_QWORD *)(a2 + 8);
        *((_DWORD *)v26 + 63) = *(unsigned __int16 *)(a2 + 6);
        v26[27] = v12;
        v27 = (unsigned int)Size;
        v26[28] = v13;
        v26[35] = v26 + 46;
        *((_DWORD *)v26 + 64) = v27;
        *((_BYTE *)v26 + 268) = *(_BYTE *)(a2 + 4) & 1;
        *((_DWORD *)v26 + 65) = v56;
        *((_DWORD *)v26 + 66) = v33;
        *((_DWORD *)v26 + 62) = v55;
        v26[26] = 0LL;
        v26[30] = v26 + 29;
        v26[29] = v26 + 29;
        v26[8] = v26 + 7;
        v26[7] = v26 + 7;
        v26[10] = v26 + 9;
        v26[9] = v26 + 9;
        v26[12] = v26 + 11;
        v26[11] = v26 + 11;
        v28 = v44;
        if ( (v44 & 0x100) != 0 )
          *((_BYTE *)v26 + 318) = 1;
        *((_BYTE *)v26 + 320) = v34;
        if ( (v28 & 0x20) != 0 )
          *((_BYTE *)v26 + 316) = 1;
        if ( (v28 & 0x1000) != 0 )
          *((_BYTE *)v26 + 317) = 1;
        if ( v5 )
          *((_BYTE *)v26 + 319) = 1;
        v29 = v35;
        v30 = v36;
        *((_DWORD *)v26 + 68) = v26[28] & 1;
        v26[43] = v9;
        ReservedDomainList = HalpIvtAllocateReservedDomainList(v26, v30, v29);
        if ( ReservedDomainList >= 0 )
          memmove((void *)v26[35], (const void *)(a2 + 16), v27);
      }
      goto LABEL_74;
    }
  }
LABEL_75:
  if ( v9 )
  {
    DmrFreeRmrrTree(v9);
    ExtEnvFreeMemory(v31, v9);
  }
  return (unsigned int)ReservedDomainList;
}

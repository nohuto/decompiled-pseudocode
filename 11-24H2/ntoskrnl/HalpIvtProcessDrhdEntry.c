/*
 * XREFs of HalpIvtProcessDrhdEntry @ 0x1405781C8
 * Callers:
 *     HalpIvtProcessDmarTable @ 0x1405780FC (HalpIvtProcessDmarTable.c)
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x140478B90 (HalpUnmapVirtualAddress.c)
 *     RtlIsProcessorFeaturePresent @ 0x1404AA0E0 (RtlIsProcessorFeaturePresent.c)
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

__int64 __fastcall HalpIvtProcessDrhdEntry(__int64 a1, __int64 a2)
{
  NTSTATUS ReservedDomainList; // r14d
  char v5; // r12
  __int64 v6; // rcx
  int v7; // eax
  unsigned __int64 v8; // r15
  LARGE_INTEGER v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned __int64 v13; // rax
  int v14; // esi
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned int v17; // r14d
  unsigned __int64 v18; // rax
  _BYTE *NextDrhdDeviceScope; // rax
  char v21; // dl
  char v22; // cl
  char v23; // si
  __int64 v24; // rdx
  _QWORD *v25; // rsi
  size_t v26; // rbx
  __int16 v27; // ax
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v32; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v33[3]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v34; // [rsp+44h] [rbp-BCh]
  unsigned int v35; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v37; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v38; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-A8h] BYREF
  size_t Size; // [rsp+60h] [rbp-A0h]
  _QWORD *v41; // [rsp+68h] [rbp-98h] BYREF
  __int128 v42; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v43[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h]
  int v45; // [rsp+90h] [rbp-70h]
  int v46; // [rsp+94h] [rbp-6Ch]
  _QWORD *v47; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall **v48)(); // [rsp+C0h] [rbp-40h]
  int v49; // [rsp+C8h] [rbp-38h]
  int v50; // [rsp+CCh] [rbp-34h]
  int v51; // [rsp+D8h] [rbp-28h]
  _BYTE v52[20]; // [rsp+DCh] [rbp-24h] BYREF
  __int64 (__fastcall *v53)(); // [rsp+F0h] [rbp-10h] BYREF
  __int64 (__fastcall *v54)(__int64, __int64, char); // [rsp+F8h] [rbp-8h]
  void (__fastcall *v55)(__int64, __int64, char); // [rsp+100h] [rbp+0h]
  __int64 (__fastcall *v56)(__int64, __int64, int, unsigned int, int, int); // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v57)(_QWORD *, __int64, unsigned int, unsigned __int64, _BYTE *); // [rsp+110h] [rbp+10h]
  void (__fastcall *v58)(__int64, int, int, struct _EX_RUNDOWN_REF *, _QWORD *, unsigned int, __int64); // [rsp+118h] [rbp+18h]
  __int64 (__fastcall *v59)(__int64, unsigned __int16, char); // [rsp+120h] [rbp+20h]
  unsigned __int64 (__fastcall *v60)(__int64, unsigned int, __int16, unsigned __int16, int); // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v61)(_QWORD *, int *, _QWORD *, _WORD *, unsigned __int64 *, __int64 *); // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v62)(); // [rsp+138h] [rbp+38h]
  __int64 (__fastcall *v63)(); // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v64)(); // [rsp+148h] [rbp+48h]
  char (__fastcall *v65)(ULONG_PTR); // [rsp+150h] [rbp+50h]
  __int64 (__fastcall *v66)(); // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v67)(); // [rsp+160h] [rbp+60h]
  __int64 (__fastcall *v68)(__int64, unsigned __int16, char); // [rsp+168h] [rbp+68h]
  __int64 (__fastcall *v69)(_QWORD *, __int64, unsigned int); // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v70)(); // [rsp+178h] [rbp+78h]
  __int64 (__fastcall *v71)(); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v72)(__int64, __int64, char); // [rsp+198h] [rbp+98h]
  _QWORD v73[28]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v75; // [rsp+2A8h] [rbp+1A8h]
  char v76; // [rsp+2B0h] [rbp+1B0h] BYREF
  char v77; // [rsp+2B8h] [rbp+1B8h] BYREF

  v36 = 0;
  v76 = 0;
  v42 = 0LL;
  memset_0(v73, 0, 0x98uLL);
  memset_0(&v53, 0, 0xB8uLL);
  ReservedDomainList = 0;
  v41 = 0LL;
  v37 = 0;
  v38 = 0;
  v34 = 0;
  v39 = 0LL;
  v5 = 0;
  v75 = 0;
  v77 = 0;
  v33[0] = 0;
  v32 = 0;
  if ( *(_WORD *)a2 )
    return (unsigned int)-1073741823;
  if ( *(_WORD *)(a2 + 2) < 0x10u )
    return (unsigned int)-1073741811;
  if ( !*(_QWORD *)(a2 + 8) )
    return (unsigned int)ReservedDomainList;
  if ( (int)HalSocRequestApi(16LL, 0LL, 2, 16LL, &v42) < 0
    || !(unsigned __int8)guard_dispatch_icall_no_overrides(&v77, v33, &v32, &v76) )
  {
    v76 = 0;
  }
  v7 = ExtEnvAllocateMemory(v6, 0x18u, &v39);
  v8 = v39;
  ReservedDomainList = v7;
  if ( v7 < 0 )
    goto LABEL_89;
  ReservedDomainList = DmrEnumerateRmrrDomains(a1, a2 + 4, v39);
  if ( ReservedDomainList < 0 )
    goto LABEL_89;
  memset_0(v43, 0, 0x68uLL);
  v43[1] = 104;
  v9 = *(LARGE_INTEGER *)(a2 + 8);
  v43[0] = 1;
  *(_QWORD *)&v42 = HalMapIoSpace(v9, 0x220uLL, MmNonCached);
  if ( !(_QWORD)v42 )
  {
    ReservedDomainList = -1073741670;
LABEL_89:
    if ( v8 )
    {
      DmrFreeRmrrTree(v8);
      ExtEnvFreeMemory(v30, v8);
    }
    return (unsigned int)ReservedDomainList;
  }
  ReservedDomainList = HalRegisterPermanentAddressUsage(v9, 0x220u);
  if ( ReservedDomainList >= 0 )
  {
    LODWORD(Size) = *(unsigned __int16 *)(a2 + 2) - 16;
    v45 = Size + 368;
    v47 = v73;
    v48 = &v53;
    v73[0] = IvtConfigureSettings;
    v73[1] = IvtInitializeIommu;
    v73[2] = IvtAllocateDomain;
    v73[3] = IvtFreeDomain;
    v73[4] = IvtCreateDevice;
    v73[5] = IvtDeleteDevice;
    v66 = IvtCheckForReservedRegion;
    v53 = IvtFindDevice;
    v70 = IvtEnumerateRmrrDevices;
    v50 = *(unsigned __int16 *)(a2 + 6);
    v44 = 0LL;
    v10 = *(_QWORD *)(v42 + 16);
    v11 = *(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFEEFFuLL;
    v49 = 2;
    v46 = 4;
    _BitScanReverse(&v12, BYTE1(v11) & 0x1F);
    v34 = v12;
    v13 = 1LL << (((unsigned __int8)(v10 >> 35) & 0x1Fu) + 1);
    if ( v13 > 0x100000 )
      LODWORD(v13) = 0x100000;
    v51 = v13;
    if ( (*(_BYTE *)(a1 + 37) & 3) == 1 && (v10 & 0x18) == 24 )
    {
      v73[15] = IvtUpdateRemappingTableEntry;
      v14 = 68;
      v46 = 68;
      v73[16] = IvtInvalidateRemappingTableEntry;
      v73[17] = IvtUpdateRemappingDestination;
    }
    else
    {
      v14 = v46;
    }
    v15 = 256LL;
    if ( v76 == 2
      && (v10 & 2) != 0
      && (v11 & 0x80u) == 0LL
      && (v16 = (v11 >> 8) & 0x1F, (_DWORD)v16 != 0 && (v10 & 0x40) != 0)
      && (v11 & 0x80000000000000LL) != 0
      && (v11 & 0x40000000000000LL) != 0 )
    {
      v17 = v34;
      if ( (v11 & 0x10) == 0 )
      {
        v35 = v34;
        v73[10] = IvtFlushDomainTb;
        v73[11] = xHalTimerWatchdogStop;
        v73[12] = xHalTimerWatchdogStop;
        v73[8] = IvtAttachDeviceDomain;
        v73[9] = IvtDetachDeviceDomain;
        v71 = IvtProcessReservedDomains;
        _BitScanReverse64(&v18, v16);
        v14 |= (((_DWORD)v18 << 13) + 0x2000) | 0x100;
        v46 = v14;
      }
    }
    else
    {
      v17 = v34;
    }
    if ( (v14 & 0x100) != 0 && (v10 & 0x2480000000000LL) == 0x2480000000000LL && RtlIsProcessorFeaturePresent(0x3Du) )
      v5 = 1;
    NextDrhdDeviceScope = (_BYTE *)DmrGetNextDrhdDeviceScope(a2, 0LL, v15);
    if ( v5 )
    {
      if ( (v10 & 0x1000000000000LL) != 0 )
      {
        v14 |= 0x800u;
        v46 = v14;
      }
      v21 = 0;
      v75 = 0;
    }
    else
    {
      if ( !NextDrhdDeviceScope
        || *NextDrhdDeviceScope != 1
        || NextDrhdDeviceScope[1] != 8
        || NextDrhdDeviceScope[5]
        || NextDrhdDeviceScope[6] != 2
        || NextDrhdDeviceScope[7]
        || *(_WORD *)(a2 + 6)
        || (v11 & 0x3F0000) >= 0x2F0000 )
      {
        goto LABEL_48;
      }
      if ( !HalpIommuEnableGpuIdentityMapping )
      {
        v14 &= ~0x100u;
        v46 = v14;
      }
      if ( v17 ? (v11 & 0x800000000LL) != 0 : (v11 & 0x400000000LL) != 0 )
      {
        v21 = 1;
        v75 = 1;
      }
      else
      {
LABEL_48:
        v21 = 0;
      }
      if ( (v10 & 1) != 0 )
      {
        v14 |= 0x800u;
        v46 = v14;
      }
    }
    if ( v77 != 6 || v32 != -67 || (v22 = 1, v33[0] > 1u) )
      v22 = 0;
    if ( v5 )
    {
      if ( (v10 & 0x800004000000LL) == 0x800004000000LL && !v22 )
      {
        v54 = IvtSetDeviceSvmCapabilities;
        v57 = IvtSetPasidAddressSpace;
        v14 |= 0x80u;
        v46 = v14;
        v67 = IvtMarkHiberRegions;
        v55 = IvtSetDevicePasidTable;
        v56 = IvtGrowPasidTable;
        v58 = IvtFlushTb;
      }
      if ( (v10 & 0x1850224000004LL) == 0x1850224000004LL )
      {
        v14 |= 0x20u;
        v46 = v14;
        if ( (v10 & 0x80000000) != 0 )
        {
          v14 |= 0x10000u;
          v46 = v14;
        }
        v54 = IvtSetDeviceSvmCapabilities;
        v56 = IvtGrowPasidTable;
        v57 = IvtSetPasidAddressSpace;
        v67 = IvtMarkHiberRegions;
        v60 = IvtDismissPageFault;
        v61 = IvtGetPageFault;
        v68 = IvtDrainSvmPageRequests;
        v69 = IvtCancelPageRequests;
        v55 = IvtSetDevicePasidTable;
        v58 = IvtFlushTb;
        v72 = IvtConfigureAts;
        v59 = IvtFlushDeviceTbOnly;
      }
      if ( (v10 & 4) != 0 )
      {
        v72 = IvtConfigureAts;
        v46 = v14 | 0x1000;
        v58 = IvtFlushTb;
        v59 = IvtFlushDeviceTbOnly;
      }
    }
    v8 = v39;
    v35 = 0;
    HalpIvtReserveDomainIds(
      v39,
      v11 & 7,
      (unsigned int)&v38,
      (unsigned int)&v37,
      (__int64)&v36,
      (unsigned __int64)&v35 & -(__int64)(v21 != 0),
      (__int64)v52);
    v23 = v46;
    if ( (v46 & 0x20) != 0 || (v46 & 0x100) != 0 || (v46 & 0x80u) != 0 )
    {
      v23 = v46 | 0x12;
      v63 = IvtEnableInterrupt;
      v64 = IvtDisableInterrupt;
      v65 = IvtHandleInterrupt;
      v62 = IvtSetMessageInterruptRouting;
      v46 |= 0x12u;
    }
    if ( (int)DmrValidateDeviceScope(a1, a2) < 0 && (v23 & 0x20) != 0 )
      KeBugCheckEx(0x5Cu, 0x500uLL, 3uLL, 0LL, 0LL);
    ReservedDomainList = ExtEnvRegisterIommu(v43, v24, &v41);
    if ( ReservedDomainList >= 0 )
    {
      v25 = v41;
      *v41 = *(_QWORD *)(a2 + 8);
      *((_DWORD *)v25 + 63) = *(unsigned __int16 *)(a2 + 6);
      v25[27] = v11;
      v25[28] = v10;
      v26 = (unsigned int)Size;
      v25[35] = v25 + 46;
      *((_DWORD *)v25 + 64) = v26;
      *((_BYTE *)v25 + 268) = *(_BYTE *)(a2 + 4) & 1;
      *((_DWORD *)v25 + 65) = v36;
      *((_DWORD *)v25 + 66) = v35;
      *((_DWORD *)v25 + 62) = v34;
      v25[26] = 0LL;
      v25[30] = v25 + 29;
      v25[29] = v25 + 29;
      v25[8] = v25 + 7;
      v25[7] = v25 + 7;
      v25[10] = v25 + 9;
      v25[9] = v25 + 9;
      v25[12] = v25 + 11;
      v25[11] = v25 + 11;
      v27 = v46;
      if ( (v46 & 0x100) != 0 )
        *((_BYTE *)v25 + 318) = 1;
      if ( (v27 & 0x80u) != 0 )
        *((_BYTE *)v25 + 360) = 1;
      *((_BYTE *)v25 + 320) = v5;
      if ( (v27 & 0x20) != 0 )
        *((_BYTE *)v25 + 316) = 1;
      if ( (v27 & 0x1000) != 0 )
        *((_BYTE *)v25 + 317) = 1;
      if ( v75 )
        *((_BYTE *)v25 + 319) = 1;
      v28 = v37;
      v29 = v38;
      *((_DWORD *)v25 + 68) = v25[28] & 1;
      v25[43] = v8;
      ReservedDomainList = HalpIvtAllocateReservedDomainList(v25, v29, v28);
      if ( ReservedDomainList >= 0 )
        memmove((void *)v25[35], (const void *)(a2 + 16), v26);
    }
  }
  HalpUnmapVirtualAddress(v42, 1LL, 0LL);
  if ( ReservedDomainList < 0 )
    goto LABEL_89;
  return (unsigned int)ReservedDomainList;
}

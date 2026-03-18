/*
 * XREFs of HalpIvtProcessDrhdEntry @ 0x140574EC8
 * Callers:
 *     HalpIvtProcessDmarTable @ 0x140574DFC (HalpIvtProcessDmarTable.c)
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x140411990 (HalpUnmapVirtualAddress.c)
 *     HalSocRequestApi @ 0x1404AD34C (HalSocRequestApi.c)
 *     RtlIsProcessorFeaturePresent @ 0x1404EBE40 (RtlIsProcessorFeaturePresent.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExtEnvAllocateMemory @ 0x14055D130 (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x14055D3A0 (ExtEnvFreeMemory.c)
 *     HalMapIoSpace @ 0x14055D580 (HalMapIoSpace.c)
 *     HalRegisterPermanentAddressUsage @ 0x14055D5D0 (HalRegisterPermanentAddressUsage.c)
 *     HalpIvtReserveDomainIds @ 0x1405756EC (HalpIvtReserveDomainIds.c)
 *     HalpIvtAllocateReservedDomainList @ 0x1405759C0 (HalpIvtAllocateReservedDomainList.c)
 *     DmrGetNextDrhdDeviceScope @ 0x140576150 (DmrGetNextDrhdDeviceScope.c)
 *     DmrValidateDeviceScope @ 0x1405764DC (DmrValidateDeviceScope.c)
 *     DmrEnumerateRmrrDomains @ 0x1405765D0 (DmrEnumerateRmrrDomains.c)
 *     DmrFreeRmrrTree @ 0x140576728 (DmrFreeRmrrTree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExtEnvRegisterIommu @ 0x140BFFC84 (ExtEnvRegisterIommu.c)
 */

__int64 __fastcall HalpIvtProcessDrhdEntry(__int64 a1, __int64 a2)
{
  NTSTATUS ReservedDomainList; // r14d
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int64 v7; // r15
  LARGE_INTEGER v8; // rbx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  unsigned int v11; // eax
  unsigned __int64 v12; // rax
  int v13; // esi
  _BYTE *NextDrhdDeviceScope; // rax
  char v16; // dl
  char v17; // si
  __int64 v18; // rdx
  _QWORD *v19; // rsi
  size_t v20; // rbx
  __int16 v21; // ax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v26; // [rsp+44h] [rbp-BCh]
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v29; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v30; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  size_t Size; // [rsp+60h] [rbp-A0h]
  _QWORD *v33; // [rsp+68h] [rbp-98h] BYREF
  __int128 v34; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v35[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h]
  int v37; // [rsp+90h] [rbp-70h]
  int v38; // [rsp+94h] [rbp-6Ch]
  _QWORD *v39; // [rsp+B8h] [rbp-48h]
  _QWORD *v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C8h] [rbp-38h]
  int v42; // [rsp+CCh] [rbp-34h]
  int v43; // [rsp+D8h] [rbp-28h]
  _BYTE v44[20]; // [rsp+DCh] [rbp-24h] BYREF
  _QWORD v45[18]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v46[28]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v48; // [rsp+2A8h] [rbp+1A8h]
  char v49; // [rsp+2B8h] [rbp+1B8h] BYREF

  v28 = 0;
  v34 = 0LL;
  memset_0(v46, 0, 0x98uLL);
  memset_0(v45, 0, 0xB8uLL);
  ReservedDomainList = 0;
  v33 = 0LL;
  v29 = 0;
  v30 = 0;
  v31 = 0LL;
  v48 = 0;
  v49 = 0;
  if ( *(_WORD *)a2 )
    return (unsigned int)-1073741823;
  if ( *(_WORD *)(a2 + 2) < 0x10u )
    return (unsigned int)-1073741811;
  if ( !*(_QWORD *)(a2 + 8) )
    return (unsigned int)ReservedDomainList;
  if ( (int)HalSocRequestApi(16LL, 0LL, 2, 16LL, &v34) >= 0 )
    guard_dispatch_icall_no_overrides(&v49);
  v6 = ExtEnvAllocateMemory(v5, 0x18u, &v31);
  v7 = v31;
  ReservedDomainList = v6;
  if ( v6 < 0 )
    goto LABEL_57;
  ReservedDomainList = DmrEnumerateRmrrDomains(a1, a2 + 4, v31);
  if ( ReservedDomainList < 0 )
    goto LABEL_57;
  memset_0(v35, 0, 0x68uLL);
  v35[1] = 104;
  v8 = *(LARGE_INTEGER *)(a2 + 8);
  v35[0] = 1;
  *(_QWORD *)&v34 = HalMapIoSpace(v8, 0x220uLL, MmNonCached);
  if ( !(_QWORD)v34 )
  {
    ReservedDomainList = -1073741670;
LABEL_57:
    if ( v7 )
    {
      DmrFreeRmrrTree(v7);
      ExtEnvFreeMemory(v24, v7);
    }
    return (unsigned int)ReservedDomainList;
  }
  ReservedDomainList = HalRegisterPermanentAddressUsage(v8, 0x220u);
  if ( ReservedDomainList >= 0 )
  {
    LODWORD(Size) = *(unsigned __int16 *)(a2 + 2) - 16;
    v37 = Size + 368;
    v39 = v46;
    v40 = v45;
    v46[0] = IvtConfigureSettings;
    v46[1] = IvtInitializeIommu;
    v46[2] = IvtAllocateDomain;
    v46[3] = IvtFreeDomain;
    v46[4] = IvtCreateDevice;
    v46[5] = IvtDeleteDevice;
    v45[13] = IvtCheckForReservedRegion;
    v45[0] = IvtFindDevice;
    v45[17] = IvtEnumerateRmrrDevices;
    v42 = *(unsigned __int16 *)(a2 + 6);
    v36 = 0LL;
    v9 = *(_QWORD *)(v34 + 16);
    v10 = *(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFEEFFuLL;
    v41 = 2;
    v38 = 4;
    _BitScanReverse(&v11, BYTE1(v10) & 0x1F);
    v26 = v11;
    v12 = 1LL << (((unsigned __int8)(v9 >> 35) & 0x1Fu) + 1);
    if ( v12 > 0x100000 )
      LODWORD(v12) = 0x100000;
    v43 = v12;
    if ( (*(_BYTE *)(a1 + 37) & 3) == 1 && (v9 & 0x18) == 24 )
    {
      v46[15] = IvtUpdateRemappingTableEntry;
      v13 = 68;
      v38 = 68;
      v46[16] = IvtInvalidateRemappingTableEntry;
      v46[17] = IvtUpdateRemappingDestination;
    }
    else
    {
      v13 = v38;
    }
    NextDrhdDeviceScope = (_BYTE *)DmrGetNextDrhdDeviceScope(a2, 0LL, 256LL);
    if ( !NextDrhdDeviceScope
      || *NextDrhdDeviceScope != 1
      || NextDrhdDeviceScope[1] != 8
      || NextDrhdDeviceScope[5]
      || NextDrhdDeviceScope[6] != 2
      || NextDrhdDeviceScope[7]
      || *(_WORD *)(a2 + 6)
      || (v10 & 0x3F0000) >= 0x2F0000 )
    {
      goto LABEL_33;
    }
    if ( !HalpIommuEnableGpuIdentityMapping )
    {
      v13 &= ~0x100u;
      v38 = v13;
    }
    if ( v26 ? (v10 & 0x800000000LL) != 0 : (v10 & 0x400000000LL) != 0 )
    {
      v16 = 1;
      v48 = 1;
    }
    else
    {
LABEL_33:
      v16 = 0;
    }
    if ( (v9 & 1) != 0 )
      v38 = v13 | 0x800;
    v7 = v31;
    v27 = 0;
    HalpIvtReserveDomainIds(
      v31,
      v10 & 7,
      (unsigned int)&v30,
      (unsigned int)&v29,
      (__int64)&v28,
      (unsigned __int64)&v27 & -(__int64)(v16 != 0),
      (__int64)v44);
    v17 = v38;
    if ( (v38 & 0x20) != 0 || (v38 & 0x100) != 0 || (v38 & 0x80u) != 0 )
    {
      v17 = v38 | 0x12;
      v45[10] = IvtEnableInterrupt;
      v45[11] = IvtDisableInterrupt;
      v45[12] = IvtHandleInterrupt;
      v45[9] = IvtSetMessageInterruptRouting;
      v38 |= 0x12u;
    }
    if ( (int)DmrValidateDeviceScope(a1, a2) < 0 && (v17 & 0x20) != 0 )
      KeBugCheckEx(0x5Cu, 0x500uLL, 3uLL, 0LL, 0LL);
    ReservedDomainList = ExtEnvRegisterIommu(v35, v18, &v33);
    if ( ReservedDomainList >= 0 )
    {
      v19 = v33;
      *v33 = *(_QWORD *)(a2 + 8);
      *((_DWORD *)v19 + 63) = *(unsigned __int16 *)(a2 + 6);
      v19[27] = v10;
      v19[28] = v9;
      v20 = (unsigned int)Size;
      v19[35] = v19 + 46;
      *((_DWORD *)v19 + 64) = v20;
      *((_BYTE *)v19 + 268) = *(_BYTE *)(a2 + 4) & 1;
      *((_DWORD *)v19 + 65) = v28;
      *((_DWORD *)v19 + 66) = v27;
      *((_DWORD *)v19 + 62) = v26;
      v19[26] = 0LL;
      v19[30] = v19 + 29;
      v19[29] = v19 + 29;
      v19[8] = v19 + 7;
      v19[7] = v19 + 7;
      v19[10] = v19 + 9;
      v19[9] = v19 + 9;
      v19[12] = v19 + 11;
      v19[11] = v19 + 11;
      v21 = v38;
      if ( (v38 & 0x100) != 0 )
        *((_BYTE *)v19 + 318) = 1;
      if ( (v21 & 0x80u) != 0 )
        *((_BYTE *)v19 + 360) = 1;
      *((_BYTE *)v19 + 320) = 0;
      if ( (v21 & 0x20) != 0 )
        *((_BYTE *)v19 + 316) = 1;
      if ( (v21 & 0x1000) != 0 )
        *((_BYTE *)v19 + 317) = 1;
      if ( v48 )
        *((_BYTE *)v19 + 319) = 1;
      v22 = v29;
      v23 = v30;
      *((_DWORD *)v19 + 68) = v19[28] & 1;
      v19[43] = v7;
      ReservedDomainList = HalpIvtAllocateReservedDomainList(v19, v23, v22);
      if ( ReservedDomainList >= 0 )
        memmove((void *)v19[35], (const void *)(a2 + 16), v20);
    }
  }
  HalpUnmapVirtualAddress(v34, 1u, 0);
  if ( ReservedDomainList < 0 )
    goto LABEL_57;
  return (unsigned int)ReservedDomainList;
}

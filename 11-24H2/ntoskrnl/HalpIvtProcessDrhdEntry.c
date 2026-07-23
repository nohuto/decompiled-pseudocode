/*
 * XREFs of HalpIvtProcessDrhdEntry @ 0x140575658
 * Callers:
 *     HalpIvtProcessDmarTable @ 0x14057558C (HalpIvtProcessDmarTable.c)
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x1404605A0 (HalpUnmapVirtualAddress.c)
 *     RtlIsProcessorFeaturePresent @ 0x1404A43B0 (RtlIsProcessorFeaturePresent.c)
 *     HalSocRequestApi @ 0x1404A8A70 (HalSocRequestApi.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExtEnvAllocateMemory @ 0x14055D660 (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x14055D8D0 (ExtEnvFreeMemory.c)
 *     HalMapIoSpace @ 0x14055DAB0 (HalMapIoSpace.c)
 *     HalRegisterPermanentAddressUsage @ 0x14055DB00 (HalRegisterPermanentAddressUsage.c)
 *     HalpIvtReserveDomainIds @ 0x140575E7C (HalpIvtReserveDomainIds.c)
 *     HalpIvtAllocateReservedDomainList @ 0x140576150 (HalpIvtAllocateReservedDomainList.c)
 *     DmrGetNextDrhdDeviceScope @ 0x1405768E0 (DmrGetNextDrhdDeviceScope.c)
 *     DmrValidateDeviceScope @ 0x140576C6C (DmrValidateDeviceScope.c)
 *     DmrEnumerateRmrrDomains @ 0x140576D60 (DmrEnumerateRmrrDomains.c)
 *     DmrFreeRmrrTree @ 0x140576EB8 (DmrFreeRmrrTree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExtEnvRegisterIommu @ 0x140C12D0C (ExtEnvRegisterIommu.c)
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
  unsigned int v14; // r14d
  _BYTE *NextDrhdDeviceScope; // rax
  char v17; // dl
  char v18; // si
  __int64 v19; // rdx
  _QWORD *v20; // rsi
  size_t v21; // rbx
  __int16 v22; // ax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  _BYTE v27[3]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v28; // [rsp+44h] [rbp-BCh]
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v31; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v32; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  size_t Size; // [rsp+60h] [rbp-A0h]
  _QWORD *v35; // [rsp+68h] [rbp-98h] BYREF
  __int128 v36; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v37[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+88h] [rbp-78h]
  int v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+94h] [rbp-6Ch]
  _QWORD *v41; // [rsp+B8h] [rbp-48h]
  _QWORD *v42; // [rsp+C0h] [rbp-40h]
  int v43; // [rsp+C8h] [rbp-38h]
  int v44; // [rsp+CCh] [rbp-34h]
  int v45; // [rsp+D8h] [rbp-28h]
  _BYTE v46[20]; // [rsp+DCh] [rbp-24h] BYREF
  _QWORD v47[18]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v48[28]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v50; // [rsp+2A8h] [rbp+1A8h]
  char v51; // [rsp+2B8h] [rbp+1B8h] BYREF

  v30 = 0;
  v36 = 0LL;
  memset_0(v48, 0, 0x98uLL);
  memset_0(v47, 0, 0xB8uLL);
  ReservedDomainList = 0;
  v35 = 0LL;
  v31 = 0;
  v32 = 0;
  v28 = 0;
  v33 = 0LL;
  v50 = 0;
  v51 = 0;
  v27[0] = 0;
  if ( *(_WORD *)a2 )
    return (unsigned int)-1073741823;
  if ( *(_WORD *)(a2 + 2) < 0x10u )
    return (unsigned int)-1073741811;
  if ( !*(_QWORD *)(a2 + 8) )
    return (unsigned int)ReservedDomainList;
  if ( (int)HalSocRequestApi(16LL, 0LL, 2, 16LL, &v36) >= 0 )
    guard_dispatch_icall_no_overrides(&v51, v27);
  v6 = ExtEnvAllocateMemory(v5, 0x18u, &v33);
  v7 = v33;
  ReservedDomainList = v6;
  if ( v6 < 0 )
    goto LABEL_57;
  ReservedDomainList = DmrEnumerateRmrrDomains(a1, a2 + 4, v33);
  if ( ReservedDomainList < 0 )
    goto LABEL_57;
  memset_0(v37, 0, 0x68uLL);
  v37[1] = 104;
  v8 = *(LARGE_INTEGER *)(a2 + 8);
  v37[0] = 1;
  *(_QWORD *)&v36 = HalMapIoSpace(v8, 0x220uLL, MmNonCached);
  if ( !(_QWORD)v36 )
  {
    ReservedDomainList = -1073741670;
LABEL_57:
    if ( v7 )
    {
      DmrFreeRmrrTree(v7);
      ExtEnvFreeMemory(v25, v7);
    }
    return (unsigned int)ReservedDomainList;
  }
  ReservedDomainList = HalRegisterPermanentAddressUsage(v8, 0x220u);
  if ( ReservedDomainList >= 0 )
  {
    LODWORD(Size) = *(unsigned __int16 *)(a2 + 2) - 16;
    v39 = Size + 368;
    v41 = v48;
    v42 = v47;
    v48[0] = IvtConfigureSettings;
    v48[1] = IvtInitializeIommu;
    v48[2] = IvtAllocateDomain;
    v48[3] = IvtFreeDomain;
    v48[4] = IvtCreateDevice;
    v48[5] = IvtDeleteDevice;
    v47[13] = IvtCheckForReservedRegion;
    v47[0] = IvtFindDevice;
    v47[17] = IvtEnumerateRmrrDevices;
    v44 = *(unsigned __int16 *)(a2 + 6);
    v38 = 0LL;
    v9 = *(_QWORD *)(v36 + 16);
    v10 = *(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFEEFFuLL;
    v43 = 2;
    v40 = 4;
    _BitScanReverse(&v11, BYTE1(v10) & 0x1F);
    v28 = v11;
    v12 = 1LL << (((unsigned __int8)(v9 >> 35) & 0x1Fu) + 1);
    if ( v12 > 0x100000 )
      LODWORD(v12) = 0x100000;
    v45 = v12;
    if ( (*(_BYTE *)(a1 + 37) & 3) == 1 && (v9 & 0x18) == 24 )
    {
      v48[15] = IvtUpdateRemappingTableEntry;
      v13 = 68;
      v40 = 68;
      v48[16] = IvtInvalidateRemappingTableEntry;
      v48[17] = IvtUpdateRemappingDestination;
    }
    else
    {
      v13 = v40;
    }
    v14 = v28;
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
      v40 = v13;
    }
    if ( v14 ? (v10 & 0x800000000LL) != 0 : (v10 & 0x400000000LL) != 0 )
    {
      v17 = 1;
      v50 = 1;
    }
    else
    {
LABEL_33:
      v17 = 0;
    }
    if ( (v9 & 1) != 0 )
      v40 = v13 | 0x800;
    v7 = v33;
    v29 = 0;
    HalpIvtReserveDomainIds(
      v33,
      v10 & 7,
      (unsigned int)&v32,
      (unsigned int)&v31,
      (__int64)&v30,
      (unsigned __int64)&v29 & -(__int64)(v17 != 0),
      (__int64)v46);
    v18 = v40;
    if ( (v40 & 0x20) != 0 || (v40 & 0x100) != 0 || (v40 & 0x80u) != 0 )
    {
      v18 = v40 | 0x12;
      v47[10] = IvtEnableInterrupt;
      v47[11] = IvtDisableInterrupt;
      v47[12] = IvtHandleInterrupt;
      v47[9] = IvtSetMessageInterruptRouting;
      v40 |= 0x12u;
    }
    if ( (int)DmrValidateDeviceScope(a1, a2) < 0 && (v18 & 0x20) != 0 )
      KeBugCheckEx(0x5Cu, 0x500uLL, 3uLL, 0LL, 0LL);
    ReservedDomainList = ExtEnvRegisterIommu(v37, v19, &v35);
    if ( ReservedDomainList >= 0 )
    {
      v20 = v35;
      *v35 = *(_QWORD *)(a2 + 8);
      *((_DWORD *)v20 + 63) = *(unsigned __int16 *)(a2 + 6);
      v20[27] = v10;
      v20[28] = v9;
      v21 = (unsigned int)Size;
      v20[35] = v20 + 46;
      *((_DWORD *)v20 + 64) = v21;
      *((_BYTE *)v20 + 268) = *(_BYTE *)(a2 + 4) & 1;
      *((_DWORD *)v20 + 65) = v30;
      *((_DWORD *)v20 + 66) = v29;
      *((_DWORD *)v20 + 62) = v28;
      v20[26] = 0LL;
      v20[30] = v20 + 29;
      v20[29] = v20 + 29;
      v20[8] = v20 + 7;
      v20[7] = v20 + 7;
      v20[10] = v20 + 9;
      v20[9] = v20 + 9;
      v20[12] = v20 + 11;
      v20[11] = v20 + 11;
      v22 = v40;
      if ( (v40 & 0x100) != 0 )
        *((_BYTE *)v20 + 318) = 1;
      if ( (v22 & 0x80u) != 0 )
        *((_BYTE *)v20 + 360) = 1;
      *((_BYTE *)v20 + 320) = 0;
      if ( (v22 & 0x20) != 0 )
        *((_BYTE *)v20 + 316) = 1;
      if ( (v22 & 0x1000) != 0 )
        *((_BYTE *)v20 + 317) = 1;
      if ( v50 )
        *((_BYTE *)v20 + 319) = 1;
      v23 = v31;
      v24 = v32;
      *((_DWORD *)v20 + 68) = v20[28] & 1;
      v20[43] = v7;
      ReservedDomainList = HalpIvtAllocateReservedDomainList(v20, v24, v23);
      if ( ReservedDomainList >= 0 )
        memmove((void *)v20[35], (const void *)(a2 + 16), v21);
    }
  }
  HalpUnmapVirtualAddress(v36, 1LL, 0LL);
  if ( ReservedDomainList < 0 )
    goto LABEL_57;
  return (unsigned int)ReservedDomainList;
}

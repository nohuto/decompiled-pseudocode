/*
 * XREFs of HalpIvtLegacyProcessDrhdEntry @ 0x140574DF8
 * Callers:
 *     HalpIvtProcessDmarTable @ 0x14057558C (HalpIvtProcessDmarTable.c)
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x1404605A0 (HalpUnmapVirtualAddress.c)
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
  _BYTE *NextDrhdDeviceScope; // rax
  int v17; // r11d
  bool v18; // cf
  char v19; // si
  __int64 v20; // rdx
  _QWORD *v21; // rsi
  size_t v22; // rbx
  __int16 v23; // ax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh]
  unsigned int v30; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v31; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  size_t Size; // [rsp+58h] [rbp-A8h]
  _QWORD *v34; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v36[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v37; // [rsp+88h] [rbp-78h]
  int v38; // [rsp+90h] [rbp-70h]
  int v39; // [rsp+94h] [rbp-6Ch]
  _QWORD *v40; // [rsp+B8h] [rbp-48h]
  _QWORD *v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+C8h] [rbp-38h]
  int v43; // [rsp+CCh] [rbp-34h]
  int v44; // [rsp+D8h] [rbp-28h]
  _BYTE v45[20]; // [rsp+DCh] [rbp-24h] BYREF
  _QWORD v46[18]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v47[28]; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v49; // [rsp+2B0h] [rbp+1B0h]
  ULONG_PTR v50; // [rsp+2B8h] [rbp+1B8h] BYREF

  LODWORD(v50) = 0;
  v35 = 0LL;
  memset_0(v47, 0, 0x98uLL);
  memset_0(v46, 0, 0xB8uLL);
  LOBYTE(v2) = 0;
  v34 = 0LL;
  v5 = 0;
  v29 = v2;
  ReservedDomainList = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0LL;
  if ( *(_WORD *)a2 )
    return (unsigned int)-1073741823;
  if ( *(_WORD *)(a2 + 2) < 0x10u )
    return (unsigned int)-1073741811;
  if ( !*(_QWORD *)(a2 + 8) )
    return (unsigned int)ReservedDomainList;
  if ( (int)HalSocRequestApi(16LL, 0LL, 2, 16LL, &v35) >= 0 )
    guard_dispatch_icall_no_overrides(0LL, 0LL);
  v8 = ExtEnvAllocateMemory(v7, 0x18u, &v32);
  v9 = v32;
  ReservedDomainList = v8;
  if ( v8 < 0 )
    goto LABEL_52;
  ReservedDomainList = DmrEnumerateRmrrDomains(a1, a2 + 4, v32);
  if ( ReservedDomainList < 0 )
    goto LABEL_52;
  memset_0(v36, 0, 0x68uLL);
  v36[1] = 104;
  v10 = *(LARGE_INTEGER *)(a2 + 8);
  v36[0] = 1;
  *(_QWORD *)&v35 = HalMapIoSpace(v10, 0x220uLL, MmNonCached);
  if ( !(_QWORD)v35 )
  {
    ReservedDomainList = -1073741670;
LABEL_52:
    if ( v9 )
    {
      DmrFreeRmrrTree(v9);
      ExtEnvFreeMemory(v26, v9);
    }
    return (unsigned int)ReservedDomainList;
  }
  ReservedDomainList = HalRegisterPermanentAddressUsage(v10, 0x220u);
  if ( ReservedDomainList >= 0 )
  {
    LODWORD(Size) = *(unsigned __int16 *)(a2 + 2) - 16;
    v38 = Size + 368;
    v40 = v47;
    v41 = v46;
    v47[0] = IvtConfigureSettings;
    v47[1] = IvtInitializeIommu;
    v47[2] = IvtAllocateDomain;
    v47[3] = IvtFreeDomain;
    v47[4] = IvtCreateDevice;
    v47[5] = IvtDeleteDevice;
    v46[13] = IvtCheckForReservedRegion;
    v46[0] = IvtFindDevice;
    v46[17] = IvtEnumerateRmrrDevices;
    v11 = *(_QWORD *)(v35 + 8);
    v43 = *(unsigned __int16 *)(a2 + 6);
    v12 = v11 & 0xFFFFFFFFFFFFEEFFuLL;
    v37 = 0LL;
    v13 = *(_QWORD *)(v35 + 16);
    v42 = 2;
    _BitScanReverse(&v14, BYTE1(v12) & 0x1F);
    v39 = 4;
    v49 = v14;
    v15 = 1LL << (((unsigned __int8)(v13 >> 35) & 0x1Fu) + 1);
    if ( v15 > 0x100000 )
      LODWORD(v15) = 0x100000;
    v44 = v15;
    if ( (*(_BYTE *)(a1 + 37) & 3) == 1 && (v13 & 0x18) == 24 )
    {
      v47[15] = IvtUpdateRemappingTableEntry;
      v39 = 68;
      v47[16] = IvtInvalidateRemappingTableEntry;
      v47[17] = IvtUpdateRemappingDestination;
    }
    NextDrhdDeviceScope = (_BYTE *)DmrGetNextDrhdDeviceScope(a2, 0LL, 256LL);
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
        v17 &= ~0x100u;
        v39 = v17;
      }
      if ( v49 )
        v18 = (v12 & 0x800000000LL) != 0;
      else
        v18 = (v12 & 0x400000000LL) != 0;
      if ( v18 )
        v5 = 1;
    }
    if ( (v13 & 1) != 0 )
      v39 = v17 | 0x800;
    v9 = v32;
    v28 = 0;
    HalpIvtReserveDomainIds(
      v32,
      v12 & 7,
      (unsigned int)&v31,
      (unsigned int)&v30,
      (__int64)&v50,
      (unsigned __int64)&v28 & -(__int64)(v5 != 0),
      (__int64)v45);
    v19 = v39;
    if ( (v39 & 0x20) != 0 || (v39 & 0x100) != 0 )
    {
      v19 = v39 | 0x12;
      v46[10] = IvtEnableInterrupt;
      v46[11] = IvtDisableInterrupt;
      v46[12] = IvtHandleInterrupt;
      v46[9] = IvtSetMessageInterruptRouting;
      v39 |= 0x12u;
    }
    if ( (int)DmrValidateDeviceScope(a1, a2) < 0 && (v19 & 0x20) != 0 )
      KeBugCheckEx(0x5Cu, 0x500uLL, 3uLL, 0LL, 0LL);
    ReservedDomainList = ExtEnvRegisterIommu(v36, v20, &v34);
    if ( ReservedDomainList >= 0 )
    {
      v21 = v34;
      *v34 = *(_QWORD *)(a2 + 8);
      *((_DWORD *)v21 + 63) = *(unsigned __int16 *)(a2 + 6);
      v21[27] = v12;
      v22 = (unsigned int)Size;
      v21[28] = v13;
      v21[35] = v21 + 46;
      *((_DWORD *)v21 + 64) = v22;
      *((_BYTE *)v21 + 268) = *(_BYTE *)(a2 + 4) & 1;
      *((_DWORD *)v21 + 65) = v50;
      *((_DWORD *)v21 + 66) = v28;
      *((_DWORD *)v21 + 62) = v49;
      v21[26] = 0LL;
      v21[30] = v21 + 29;
      v21[29] = v21 + 29;
      v21[8] = v21 + 7;
      v21[7] = v21 + 7;
      v21[10] = v21 + 9;
      v21[9] = v21 + 9;
      v21[12] = v21 + 11;
      v21[11] = v21 + 11;
      v23 = v39;
      if ( (v39 & 0x100) != 0 )
        *((_BYTE *)v21 + 318) = 1;
      *((_BYTE *)v21 + 320) = v29;
      if ( (v23 & 0x20) != 0 )
        *((_BYTE *)v21 + 316) = 1;
      if ( (v23 & 0x1000) != 0 )
        *((_BYTE *)v21 + 317) = 1;
      if ( v5 )
        *((_BYTE *)v21 + 319) = 1;
      v24 = v30;
      v25 = v31;
      *((_DWORD *)v21 + 68) = v21[28] & 1;
      v21[43] = v9;
      ReservedDomainList = HalpIvtAllocateReservedDomainList(v21, v25, v24);
      if ( ReservedDomainList >= 0 )
        memmove((void *)v21[35], (const void *)(a2 + 16), v22);
    }
  }
  HalpUnmapVirtualAddress(v35, 1LL, 0LL);
  if ( ReservedDomainList < 0 )
    goto LABEL_52;
  return (unsigned int)ReservedDomainList;
}

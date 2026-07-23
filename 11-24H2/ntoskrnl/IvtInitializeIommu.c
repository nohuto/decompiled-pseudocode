/*
 * XREFs of IvtInitializeIommu @ 0x140B53BE0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     IvtFlushTbInternal @ 0x140372B58 (IvtFlushTbInternal.c)
 *     IvtInvalidateRemappingTableEntries @ 0x140374EC0 (IvtInvalidateRemappingTableEntries.c)
 *     HalSocRequestApi @ 0x1404A8A70 (HalSocRequestApi.c)
 *     IvtGetBlockedDomain @ 0x1404C1988 (IvtGetBlockedDomain.c)
 *     IvtBuildContextEntry @ 0x1404D1F98 (IvtBuildContextEntry.c)
 *     IvtBuildScalableModeContextEntry @ 0x1404F69D0 (IvtBuildScalableModeContextEntry.c)
 *     IvtGetPasidGranularTranslationType @ 0x1404F8030 (IvtGetPasidGranularTranslationType.c)
 *     IvtGetContextEntryType @ 0x1404F8270 (IvtGetContextEntryType.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     HalMapIoSpace @ 0x14055DAB0 (HalMapIoSpace.c)
 *     IvtGetIdentityMappedDomain @ 0x14056BC68 (IvtGetIdentityMappedDomain.c)
 *     IvtInitializeIdentityMappings @ 0x14056C3B8 (IvtInitializeIdentityMappings.c)
 *     IvtInitializeMTRR @ 0x14056C64C (IvtInitializeMTRR.c)
 *     IvtInvalidateAllContextEntries @ 0x14056C968 (IvtInvalidateAllContextEntries.c)
 *     IvtInvalidateScalableModePasidCache @ 0x14056CAC8 (IvtInvalidateScalableModePasidCache.c)
 *     IvtLegacyBuildScalableModeContextEntry @ 0x14056D2A8 (IvtLegacyBuildScalableModeContextEntry.c)
 *     IvtLegacyFlushTbInternal @ 0x14056D5F8 (IvtLegacyFlushTbInternal.c)
 *     IvtLegacySetScalableModeContextEntry @ 0x14056E288 (IvtLegacySetScalableModeContextEntry.c)
 *     IvtSetScalableModeContextEntry @ 0x14056E924 (IvtSetScalableModeContextEntry.c)
 *     IvtUpdateGlobalCommand @ 0x14056E964 (IvtUpdateGlobalCommand.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IvtLegacyProcessDeviceExceptions @ 0x140B5455C (IvtLegacyProcessDeviceExceptions.c)
 *     IvtLegacySetupScalableModeDefaultPasidTables @ 0x140B54674 (IvtLegacySetupScalableModeDefaultPasidTables.c)
 *     IvtProcessDeviceExceptions @ 0x140B54844 (IvtProcessDeviceExceptions.c)
 *     IvtSetupScalableModeDefaultPasidTables @ 0x140B54A88 (IvtSetupScalableModeDefaultPasidTables.c)
 */

__int64 __fastcall IvtInitializeIommu(__int64 a1, int a2, char a3)
{
  int v3; // r13d
  int v4; // eax
  char v5; // r15
  unsigned __int16 v7; // r12
  unsigned int v8; // edx
  __int64 result; // rax
  _DWORD *v10; // rax
  int v11; // eax
  __int64 v12; // rax
  PVOID v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  PVOID v17; // rax
  char v18; // r15
  unsigned __int16 IdentityMappedDomain; // ax
  __int64 v20; // rcx
  __int64 v21; // rcx
  volatile signed __int64 *v22; // r15
  volatile signed __int64 *v23; // r12
  __int64 v24; // rcx
  char ContextEntryType; // al
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r9
  __int128 v28; // kr00_16
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 *v31; // rax
  unsigned __int64 *v32; // r8
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  PVOID v36; // rax
  int v37; // eax
  unsigned __int64 *v38; // r9
  unsigned int v39; // r15d
  _QWORD *v40; // r12
  __int64 v41; // r13
  int v42; // eax
  __int64 v43; // rax
  PVOID v44; // rax
  __int64 v45; // rcx
  int v46; // r12d
  unsigned int v47; // r15d
  __int64 v48; // rax
  PVOID v49; // rax
  unsigned int v50; // ecx
  __int64 v51; // rax
  unsigned __int64 v52; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v54; // ecx
  signed __int32 v55[8]; // [rsp+8h] [rbp-99h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-79h]
  char v57; // [rsp+58h] [rbp-49h]
  unsigned int v58; // [rsp+5Ch] [rbp-45h]
  int v59; // [rsp+60h] [rbp-41h]
  __int64 v60; // [rsp+68h] [rbp-39h] BYREF
  int v61; // [rsp+70h] [rbp-31h]
  int v62; // [rsp+74h] [rbp-2Dh]
  unsigned int v63; // [rsp+78h] [rbp-29h]
  unsigned __int64 *v64; // [rsp+80h] [rbp-21h]
  __int128 v65; // [rsp+88h] [rbp-19h] BYREF
  __int128 v66; // [rsp+98h] [rbp-9h] BYREF
  _OWORD v67[2]; // [rsp+A8h] [rbp+7h] BYREF

  v3 = *(_DWORD *)(a1 + 308);
  v58 = *(_DWORD *)(a1 + 304);
  v4 = *(_DWORD *)(a1 + 312);
  v62 = v4;
  v5 = a3;
  v57 = a3;
  v59 = 0;
  v7 = 0;
  v63 = 0;
  v61 = v3;
  v60 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  memset(v67, 0, sizeof(v67));
  if ( !a2 )
  {
    result = HalSocRequestApi(a1, 0LL, 4, 8LL, &IvtPhysicalMemoryApi);
    if ( (int)result < 0 )
      return result;
    v10 = *(_DWORD **)(a1 + 8);
    if ( !v10 )
    {
      v10 = HalMapIoSpace(*(LARGE_INTEGER *)a1, 0x220uLL, MmNonCached);
      *(_QWORD *)(a1 + 8) = v10;
      if ( !v10 )
        return 3221225473LL;
    }
    v10[14] = 0x80000000;
    _InterlockedOr(v55, 0);
    IvtUpdateGlobalCommand(a1, 0x4000000u, 0);
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL);
    if ( v11 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) = v11;
      _InterlockedOr(v55, 0);
    }
    if ( *(_BYTE *)(a1 + 320) && (*(_DWORD *)(a1 + 224) & 0x20000000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 224LL) |= 0x80000000;
      _InterlockedOr(v55, 0);
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 220LL) |= 3u;
      _InterlockedOr(v55, 0);
    }
    IvtUpdateGlobalCommand(a1, 0x2000000u, 0);
    if ( *(_BYTE *)(a1 + 320) && *(int *)(*(_QWORD *)(a1 + 8) + 28LL) < 0 )
      IvtUpdateGlobalCommand(a1, 0x80000000, 0);
    if ( !v3 )
    {
LABEL_81:
      v38 = (unsigned __int64 *)&v65;
      v39 = 0;
      v64 = (unsigned __int64 *)&v65;
      v40 = (_QWORD *)(a1 + 112);
      do
      {
        if ( v39 != 1 || v3 && *(_BYTE *)(a1 + 320) && *(_BYTE *)(a1 + 316) )
        {
          v41 = 0x8000LL;
          if ( v39 != 1 )
            v41 = 4096LL;
          _BitScanReverse((unsigned int *)&v42, v41);
          v40[2] = v41;
          v59 = v42;
          if ( !*v40 )
          {
            v43 = guard_dispatch_icall_no_overrides(-1LL, (unsigned int)v41 >> 12);
            v40[1] = v43;
            if ( !v43 )
              return 3221225473LL;
            v44 = HalMapIoSpace(*(LARGE_INTEGER *)(32LL * v39 + a1 + 120), (unsigned int)v41, MmCached);
            *v40 = v44;
            if ( !v44 )
              return 3221225473LL;
            memset_0(v44, 0, (unsigned int)v41);
            v38 = v64;
            LOBYTE(v42) = v59;
          }
          v3 = v61;
          *v38 = ((_BYTE)v42 - 4) & 7 ^ (*(_DWORD *)v38 & 0xFF8 | ((((__int64)v40[1] >> 63) & 0xFFF) + v40[1]) & 0xFFFFFFFFFFFFF000uLL);
        }
        ++v38;
        ++v39;
        v40 += 4;
        v64 = v38;
      }
      while ( v39 < 2 );
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) = 0LL;
      _InterlockedOr(v55, 0);
      v45 = v65;
      if ( *(_BYTE *)(a1 + 320) )
      {
        v45 = v65 | 0x800;
        *(_QWORD *)&v65 = v65 | 0x800;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) = v45;
      _InterlockedOr(v55, 0);
      v46 = v62;
      if ( !v62 )
        goto LABEL_109;
      if ( v62 == 1 )
      {
        *(_QWORD *)(a1 + 288) = IvtSharedRemappingTable;
        *(_QWORD *)(a1 + 296) = IvtSharedRemappingTablePhysical;
      }
      if ( *(_QWORD *)(a1 + 288) )
      {
        v50 = v58;
LABEL_107:
        v51 = *(_QWORD *)(a1 + 296);
        _BitScanReverse(&v50, v50);
        v63 = v50;
        v52 = ((_BYTE)v50 - 1) & 0xF | (((v51 >> 63) & 0xFFF) + v51) & 0xFFFFFFFFFFFFF000uLL | 0x800;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) = v52;
        _InterlockedOr(v55, 0);
        KeStallExecutionProcessor(0x64u);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) != v52 )
          KeBugCheckEx(0x5Cu, 0x7000uLL, 0LL, 0LL, 0LL);
        IvtUpdateGlobalCommand(a1, 0x1000000u, 1);
LABEL_109:
        if ( v3 )
        {
          if ( *(_BYTE *)(a1 + 320) && *(_BYTE *)(a1 + 316) )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 192LL) = 0LL;
            _InterlockedOr(v55, 0);
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 200LL) = 0LL;
            _InterlockedOr(v55, 0);
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 208LL) = *((_QWORD *)&v65 + 1);
            _InterlockedOr(v55, 0);
          }
          IvtInitializeMTRR(a1);
        }
        if ( !*(_QWORD *)(a1 + 184) )
        {
          PhysicalAddress = MmGetPhysicalAddress((PVOID)(a1 + 176));
          v54 = *(_DWORD *)(a1 + 200);
          *(PHYSICAL_ADDRESS *)(a1 + 184) = PhysicalAddress;
          *(_QWORD *)(a1 + 200) = v54 & 3 | PhysicalAddress.QuadPart & 0xFFFFFFFFFFFFFFFCuLL;
          *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 192) & 0xFFFFFFFFFFFFFF90uLL | 0x65;
        }
        v8 = 0x4000000;
        goto LABEL_117;
      }
      v47 = (16 * v58 + 4095) & 0xFFFFF000;
      v48 = guard_dispatch_icall_no_overrides(-1LL, v47 >> 12);
      *(_QWORD *)(a1 + 296) = v48;
      if ( v48 )
      {
        v49 = HalMapIoSpace((LARGE_INTEGER)v48, v47, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
        *(_QWORD *)(a1 + 288) = v49;
        if ( v49 )
        {
          memset_0(v49, 0, v47);
          v50 = v58;
          *(_DWORD *)(a1 + 304) = v58;
          if ( v46 == 1 && !IvtSharedRemappingTable )
          {
            IvtSharedRemappingTable = *(_QWORD *)(a1 + 288);
            IvtSharedRemappingTablePhysical = *(_QWORD *)(a1 + 296);
          }
          goto LABEL_107;
        }
      }
      return 3221225473LL;
    }
    if ( *(_BYTE *)(a1 + 319) && !*(_QWORD *)(a1 + 336) && (int)IvtInitializeIdentityMappings(a1) < 0 )
      return 3221225473LL;
    if ( *(_QWORD *)(a1 + 40) )
    {
LABEL_62:
      if ( !*(_QWORD *)(a1 + 16) )
      {
        v30 = guard_dispatch_icall_no_overrides(-1LL, 1LL);
        *(_QWORD *)(a1 + 24) = v30;
        if ( !v30 )
          return 3221225473LL;
        v31 = (unsigned __int64 *)HalMapIoSpace(
                                    (LARGE_INTEGER)v30,
                                    0x1000uLL,
                                    (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
        *(_QWORD *)(a1 + 16) = v31;
        v32 = v31;
        if ( !v31 )
          return 3221225473LL;
        v33 = (unsigned __int64)(v31 + 512);
        v34 = (((*(__int64 *)(a1 + 48) >> 63) & 0xFFF) + *(_QWORD *)(a1 + 48)) & 0xFFFFFFFFFFFFF000uLL | 1;
        while ( (unsigned __int64)v32 < v33 )
        {
          *v32 = v34;
          if ( !*(_BYTE *)(a1 + 320) )
            *++v32 = 0LL;
          ++v32;
          v33 = *(_QWORD *)(a1 + 16) + 4096LL;
        }
      }
      if ( !*(_QWORD *)(a1 + 32) )
      {
        v35 = guard_dispatch_icall_no_overrides(-1LL, 1LL);
        if ( !v35 )
          return 3221225473LL;
        v36 = HalMapIoSpace((LARGE_INTEGER)v35, 0x1000uLL, MmCached);
        *(_QWORD *)(a1 + 32) = v36;
        if ( !v36 )
          return 3221225473LL;
        memset_0(v36, 0, 0x1000uLL);
      }
      if ( v3 == 2 && !v5 )
      {
        v37 = (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline()
            ? IvtProcessDeviceExceptions(a1)
            : IvtLegacyProcessDeviceExceptions(a1);
        if ( v37 < 0 )
          return 3221225473LL;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) = (*(_BYTE *)(a1 + 320) != 0 ? 0x400 : 0) | (((*(__int64 *)(a1 + 24) >> 63) & 0xFFF)
                                                                                         + *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFF000uLL;
      _InterlockedOr(v55, 0);
      IvtUpdateGlobalCommand(a1, 0x40000000u, 1);
      goto LABEL_81;
    }
    v12 = guard_dispatch_icall_no_overrides(-1LL, 1LL);
    *(_QWORD *)(a1 + 48) = v12;
    if ( !v12 )
      return 3221225473LL;
    v13 = HalMapIoSpace((LARGE_INTEGER)v12, 0x1000uLL, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
    *(_QWORD *)(a1 + 40) = v13;
    if ( !v13 )
      return 3221225473LL;
    if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
      memset_0(*(void **)(a1 + 40), 0, 0x1000uLL);
    if ( !IvtBlockedPageTable )
    {
      v16 = guard_dispatch_icall_no_overrides(-1LL, 1LL);
      IvtBlockedPageTablePhysical = v16;
      if ( !v16 )
        return 3221225473LL;
      v17 = HalMapIoSpace((LARGE_INTEGER)v16, 0x1000uLL, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
      IvtBlockedPageTable = (__int64)v17;
      if ( !v17 )
        return 3221225473LL;
      memset_0(v17, 0, 0x1000uLL);
    }
    v18 = 0;
    if ( v3 == 1 )
    {
      if ( *(_BYTE *)(a1 + 319) )
      {
        v18 = 1;
        IdentityMappedDomain = IvtGetIdentityMappedDomain(a1, &v60);
LABEL_41:
        v7 = IdentityMappedDomain;
      }
    }
    else if ( v3 == 2 )
    {
      v18 = 1;
      IdentityMappedDomain = IvtGetBlockedDomain(a1, 0LL, (unsigned __int64 *)&v60);
      goto LABEL_41;
    }
    if ( *(_BYTE *)(a1 + 320) )
    {
      IvtGetPasidGranularTranslationType(v15, 0, v18);
      if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
      {
        result = IvtSetupScalableModeDefaultPasidTables(a1);
        if ( (int)result < 0 )
          return result;
        IvtBuildScalableModeContextEntry(v21, *(_QWORD *)(a1 + 104), 0, 0, BugCheckParameter4, (unsigned __int64 *)v67);
      }
      else
      {
        result = IvtLegacySetupScalableModeDefaultPasidTables(a1);
        if ( (int)result < 0 )
          return result;
        IvtLegacyBuildScalableModeContextEntry(
          v20,
          *(_QWORD *)(a1 + 104),
          0,
          0,
          BugCheckParameter4,
          (unsigned __int64 *)v67);
      }
      v22 = *(volatile signed __int64 **)(a1 + 40);
      v23 = v22 + 512;
      while ( v22 < v23 )
      {
        if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
          IvtSetScalableModeContextEntry(v24, (signed __int64 *)v67, v22);
        else
          IvtLegacySetScalableModeContextEntry(v24, v67, v22);
        v22 += 4;
      }
    }
    else
    {
      ContextEntryType = IvtGetContextEntryType(v15, v14, v18);
      IvtBuildContextEntry(a1, ContextEntryType, v7, v60, (__int64 *)&v66);
      v26 = *(_QWORD *)(a1 + 40);
      v27 = v26 + 4096;
      if ( v26 < v26 + 4096 )
      {
        v28 = v66;
        v29 = v66 & 1;
        do
        {
          if ( v29 )
          {
            *(_OWORD *)v26 = v28;
          }
          else
          {
            *(_QWORD *)v26 = 0LL;
            *(_QWORD *)(v26 + 8) = 0LL;
          }
          v26 += 16LL;
        }
        while ( v26 < v27 );
      }
    }
    v5 = v57;
    goto LABEL_62;
  }
  if ( a2 != 3 )
    return 0LL;
  if ( v4 )
  {
    IvtInvalidateRemappingTableEntries(a1, 0LL);
    IvtUpdateGlobalCommand(a1, 0x2000000u, 1);
  }
  if ( !v3 )
    return 0LL;
  Feature_Test57481295__private_IsEnabledDeviceUsageNoInline();
  IvtInvalidateAllContextEntries(a1);
  if ( *(_BYTE *)(a1 + 320) )
    IvtInvalidateScalableModePasidCache(a1, 0xFFFFu, 0x10000LL, -1, 0, 0, 0);
  if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
    IvtFlushTbInternal(a1, 0LL, 0, 0LL, 1, 0LL, 0LL, 0, 0LL);
  else
    IvtLegacyFlushTbInternal(a1, 0, 0LL, 1, 0LL, 0LL, 0, 0LL);
  v8 = 0x80000000;
LABEL_117:
  IvtUpdateGlobalCommand(a1, v8, 1);
  return 0LL;
}

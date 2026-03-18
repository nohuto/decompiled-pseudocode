/*
 * XREFs of IvtInitializeIommu @ 0x140B51B90
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x140263A60 (MmGetPhysicalAddress.c)
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     IvtFlushTbInternal @ 0x1403BA188 (IvtFlushTbInternal.c)
 *     IvtInvalidateRemappingTableEntries @ 0x1403BB780 (IvtInvalidateRemappingTableEntries.c)
 *     HalSocRequestApi @ 0x1404AE160 (HalSocRequestApi.c)
 *     IvtGetBlockedDomain @ 0x1404C8254 (IvtGetBlockedDomain.c)
 *     IvtBuildContextEntry @ 0x1404D8B48 (IvtBuildContextEntry.c)
 *     IvtBuildScalableModeContextEntry @ 0x1404F90F0 (IvtBuildScalableModeContextEntry.c)
 *     IvtGetPasidGranularTranslationType @ 0x1404FA750 (IvtGetPasidGranularTranslationType.c)
 *     IvtGetContextEntryType @ 0x1404FA990 (IvtGetContextEntryType.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053C180 (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     HalMapIoSpace @ 0x14055FE80 (HalMapIoSpace.c)
 *     IvtGetIdentityMappedDomain @ 0x14056E7D8 (IvtGetIdentityMappedDomain.c)
 *     IvtInitializeIdentityMappings @ 0x14056EF28 (IvtInitializeIdentityMappings.c)
 *     IvtInitializeMTRR @ 0x14056F1BC (IvtInitializeMTRR.c)
 *     IvtInvalidateAllContextEntries @ 0x14056F4D8 (IvtInvalidateAllContextEntries.c)
 *     IvtInvalidateScalableModePasidCache @ 0x14056F638 (IvtInvalidateScalableModePasidCache.c)
 *     IvtLegacyBuildScalableModeContextEntry @ 0x14056FE18 (IvtLegacyBuildScalableModeContextEntry.c)
 *     IvtLegacyFlushTbInternal @ 0x140570168 (IvtLegacyFlushTbInternal.c)
 *     IvtLegacySetScalableModeContextEntry @ 0x140570DF8 (IvtLegacySetScalableModeContextEntry.c)
 *     IvtSetScalableModeContextEntry @ 0x140571494 (IvtSetScalableModeContextEntry.c)
 *     IvtUpdateGlobalCommand @ 0x1405714D4 (IvtUpdateGlobalCommand.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IvtLegacyProcessDeviceExceptions @ 0x140B5250C (IvtLegacyProcessDeviceExceptions.c)
 *     IvtLegacySetupScalableModeDefaultPasidTables @ 0x140B52624 (IvtLegacySetupScalableModeDefaultPasidTables.c)
 *     IvtProcessDeviceExceptions @ 0x140B527F4 (IvtProcessDeviceExceptions.c)
 *     IvtSetupScalableModeDefaultPasidTables @ 0x140B52A38 (IvtSetupScalableModeDefaultPasidTables.c)
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
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // rax
  PVOID v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  PVOID v22; // rax
  char v23; // r15
  unsigned __int16 IdentityMappedDomain; // ax
  __int64 v25; // rcx
  __int64 v26; // rcx
  volatile signed __int64 *v27; // r15
  volatile signed __int64 *v28; // r12
  __int64 v29; // rcx
  char ContextEntryType; // al
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  PVOID v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  PVOID v39; // rax
  int v40; // eax
  unsigned __int64 *v41; // r9
  unsigned int v42; // r15d
  _QWORD *v43; // r12
  __int64 v44; // r13
  int v45; // eax
  __int64 v46; // rax
  PVOID v47; // rax
  __int64 v48; // rcx
  int v49; // r12d
  unsigned int v50; // r15d
  __int64 v51; // rax
  PVOID v52; // rax
  unsigned int v53; // ecx
  __int64 v54; // rax
  unsigned __int64 v55; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v57; // ecx
  signed __int32 v58[8]; // [rsp+8h] [rbp-99h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-79h]
  char v60; // [rsp+58h] [rbp-49h]
  unsigned int v61; // [rsp+5Ch] [rbp-45h]
  int v62; // [rsp+60h] [rbp-41h]
  __int64 v63; // [rsp+68h] [rbp-39h] BYREF
  int v64; // [rsp+70h] [rbp-31h]
  int v65; // [rsp+74h] [rbp-2Dh]
  unsigned int v66; // [rsp+78h] [rbp-29h]
  unsigned __int64 *v67; // [rsp+80h] [rbp-21h]
  __int128 v68; // [rsp+88h] [rbp-19h] BYREF
  __int128 v69; // [rsp+98h] [rbp-9h] BYREF
  _OWORD v70[2]; // [rsp+A8h] [rbp+7h] BYREF

  v3 = *(_DWORD *)(a1 + 308);
  v61 = *(_DWORD *)(a1 + 304);
  v4 = *(_DWORD *)(a1 + 312);
  v65 = v4;
  v5 = a3;
  v60 = a3;
  v62 = 0;
  v7 = 0;
  v66 = 0;
  v64 = v3;
  v63 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  memset(v70, 0, sizeof(v70));
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
    _InterlockedOr(v58, 0);
    IvtUpdateGlobalCommand(a1, 0x4000000u, 0);
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL);
    if ( v11 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) = v11;
      _InterlockedOr(v58, 0);
    }
    if ( *(_BYTE *)(a1 + 320) && (*(_DWORD *)(a1 + 224) & 0x20000000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 224LL) |= 0x80000000;
      _InterlockedOr(v58, 0);
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 220LL) |= 3u;
      _InterlockedOr(v58, 0);
    }
    IvtUpdateGlobalCommand(a1, 0x2000000u, 0);
    if ( *(_BYTE *)(a1 + 320) && *(int *)(*(_QWORD *)(a1 + 8) + 28LL) < 0 )
      IvtUpdateGlobalCommand(a1, 0x80000000, 0);
    if ( !v3 )
    {
LABEL_81:
      v41 = (unsigned __int64 *)&v68;
      v42 = 0;
      v67 = (unsigned __int64 *)&v68;
      v43 = (_QWORD *)(a1 + 112);
      do
      {
        if ( v42 != 1 || v3 && *(_BYTE *)(a1 + 320) && *(_BYTE *)(a1 + 316) )
        {
          v44 = 0x8000LL;
          if ( v42 != 1 )
            v44 = 4096LL;
          _BitScanReverse((unsigned int *)&v45, v44);
          v43[2] = v44;
          v62 = v45;
          if ( !*v43 )
          {
            v46 = guard_dispatch_icall_no_overrides(-1LL, (unsigned int)v44 >> 12, v13, v41);
            v43[1] = v46;
            if ( !v46 )
              return 3221225473LL;
            v47 = HalMapIoSpace(*(LARGE_INTEGER *)(32LL * v42 + a1 + 120), (unsigned int)v44, MmCached);
            *v43 = v47;
            if ( !v47 )
              return 3221225473LL;
            memset_0(v47, 0, (unsigned int)v44);
            v41 = v67;
            LOBYTE(v45) = v62;
          }
          v3 = v64;
          v13 = ((_BYTE)v45 - 4) & 7;
          *v41 = v13 ^ (*(_DWORD *)v41 & 0xFF8 | ((((__int64)v43[1] >> 63) & 0xFFF) + v43[1]) & 0xFFFFFFFFFFFFF000uLL);
        }
        ++v41;
        ++v42;
        v43 += 4;
        v67 = v41;
      }
      while ( v42 < 2 );
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) = 0LL;
      _InterlockedOr(v58, 0);
      v48 = v68;
      if ( *(_BYTE *)(a1 + 320) )
      {
        v48 = v68 | 0x800;
        *(_QWORD *)&v68 = v68 | 0x800;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) = v48;
      _InterlockedOr(v58, 0);
      v49 = v65;
      if ( v65 )
      {
        if ( v65 == 1 )
        {
          *(_QWORD *)(a1 + 288) = IvtSharedRemappingTable;
          *(_QWORD *)(a1 + 296) = IvtSharedRemappingTablePhysical;
        }
        if ( *(_QWORD *)(a1 + 288) )
        {
          v53 = v61;
        }
        else
        {
          v50 = (16 * v61 + 4095) & 0xFFFFF000;
          v51 = guard_dispatch_icall_no_overrides(-1LL, v50 >> 12, v13, v41);
          *(_QWORD *)(a1 + 296) = v51;
          if ( !v51 )
            return 3221225473LL;
          v52 = HalMapIoSpace((LARGE_INTEGER)v51, v50, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
          *(_QWORD *)(a1 + 288) = v52;
          if ( !v52 )
            return 3221225473LL;
          memset_0(v52, 0, v50);
          v53 = v61;
          *(_DWORD *)(a1 + 304) = v61;
          if ( v49 == 1 && !IvtSharedRemappingTable )
          {
            IvtSharedRemappingTable = *(_QWORD *)(a1 + 288);
            IvtSharedRemappingTablePhysical = *(_QWORD *)(a1 + 296);
          }
        }
        v54 = *(_QWORD *)(a1 + 296);
        _BitScanReverse(&v53, v53);
        v66 = v53;
        v55 = ((_BYTE)v53 - 1) & 0xF | (((v54 >> 63) & 0xFFF) + v54) & 0xFFFFFFFFFFFFF000uLL | 0x800;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) = v55;
        _InterlockedOr(v58, 0);
        KeStallExecutionProcessor(0x64u);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) != v55 )
          KeBugCheckEx(0x5Cu, 0x7000uLL, 0LL, 0LL, 0LL);
        IvtUpdateGlobalCommand(a1, 0x1000000u, 1);
      }
      if ( v3 )
      {
        if ( *(_BYTE *)(a1 + 320) && *(_BYTE *)(a1 + 316) )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 192LL) = 0LL;
          _InterlockedOr(v58, 0);
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 200LL) = 0LL;
          _InterlockedOr(v58, 0);
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 208LL) = *((_QWORD *)&v68 + 1);
          _InterlockedOr(v58, 0);
        }
        IvtInitializeMTRR(a1);
      }
      if ( !*(_QWORD *)(a1 + 184) )
      {
        PhysicalAddress = MmGetPhysicalAddress((PVOID)(a1 + 176));
        v57 = *(_DWORD *)(a1 + 200);
        *(PHYSICAL_ADDRESS *)(a1 + 184) = PhysicalAddress;
        *(_QWORD *)(a1 + 200) = v57 & 3 | PhysicalAddress.QuadPart & 0xFFFFFFFFFFFFFFFCuLL;
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 192) & 0xFFFFFFFFFFFFFF90uLL | 0x65;
      }
      v8 = 0x4000000;
      goto LABEL_117;
    }
    if ( *(_BYTE *)(a1 + 319) && !*(_QWORD *)(a1 + 336) && (int)IvtInitializeIdentityMappings(a1, v12, v13, v14) < 0 )
      return 3221225473LL;
    if ( *(_QWORD *)(a1 + 40) )
    {
LABEL_62:
      if ( !*(_QWORD *)(a1 + 16) )
      {
        v34 = guard_dispatch_icall_no_overrides(-1LL, 1LL, v13, v14);
        *(_QWORD *)(a1 + 24) = v34;
        if ( !v34 )
          return 3221225473LL;
        v35 = HalMapIoSpace((LARGE_INTEGER)v34, 0x1000uLL, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
        *(_QWORD *)(a1 + 16) = v35;
        v13 = (unsigned __int64)v35;
        if ( !v35 )
          return 3221225473LL;
        v36 = (unsigned __int64)v35 + 4096;
        v37 = (((*(__int64 *)(a1 + 48) >> 63) & 0xFFF) + *(_QWORD *)(a1 + 48)) & 0xFFFFFFFFFFFFF000uLL | 1;
        while ( v13 < v36 )
        {
          *(_QWORD *)v13 = v37;
          if ( !*(_BYTE *)(a1 + 320) )
          {
            v13 += 8LL;
            *(_QWORD *)v13 = 0LL;
          }
          v13 += 8LL;
          v36 = *(_QWORD *)(a1 + 16) + 4096LL;
        }
      }
      if ( !*(_QWORD *)(a1 + 32) )
      {
        v38 = guard_dispatch_icall_no_overrides(-1LL, 1LL, v13, v14);
        if ( !v38 )
          return 3221225473LL;
        v39 = HalMapIoSpace((LARGE_INTEGER)v38, 0x1000uLL, MmCached);
        *(_QWORD *)(a1 + 32) = v39;
        if ( !v39 )
          return 3221225473LL;
        memset_0(v39, 0, 0x1000uLL);
      }
      if ( v3 == 2 && !v5 )
      {
        v40 = (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline()
            ? IvtProcessDeviceExceptions(a1)
            : IvtLegacyProcessDeviceExceptions(a1);
        if ( v40 < 0 )
          return 3221225473LL;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) = (*(_BYTE *)(a1 + 320) != 0 ? 0x400 : 0) | (((*(__int64 *)(a1 + 24) >> 63) & 0xFFF)
                                                                                         + *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFF000uLL;
      _InterlockedOr(v58, 0);
      IvtUpdateGlobalCommand(a1, 0x40000000u, 1);
      goto LABEL_81;
    }
    v15 = guard_dispatch_icall_no_overrides(-1LL, 1LL, v13, v14);
    *(_QWORD *)(a1 + 48) = v15;
    if ( !v15 )
      return 3221225473LL;
    v16 = HalMapIoSpace((LARGE_INTEGER)v15, 0x1000uLL, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
    *(_QWORD *)(a1 + 40) = v16;
    if ( !v16 )
      return 3221225473LL;
    if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
      memset_0(*(void **)(a1 + 40), 0, 0x1000uLL);
    if ( !IvtBlockedPageTable )
    {
      v21 = guard_dispatch_icall_no_overrides(-1LL, 1LL, v19, v20);
      IvtBlockedPageTablePhysical = v21;
      if ( !v21 )
        return 3221225473LL;
      v22 = HalMapIoSpace((LARGE_INTEGER)v21, 0x1000uLL, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
      IvtBlockedPageTable = (__int64)v22;
      if ( !v22 )
        return 3221225473LL;
      memset_0(v22, 0, 0x1000uLL);
    }
    v23 = 0;
    if ( v3 == 1 )
    {
      if ( *(_BYTE *)(a1 + 319) )
      {
        v23 = 1;
        IdentityMappedDomain = IvtGetIdentityMappedDomain(a1, &v63);
LABEL_41:
        v7 = IdentityMappedDomain;
      }
    }
    else if ( v3 == 2 )
    {
      v23 = 1;
      IdentityMappedDomain = IvtGetBlockedDomain(a1, 0LL, (unsigned __int64 *)&v63);
      goto LABEL_41;
    }
    if ( *(_BYTE *)(a1 + 320) )
    {
      IvtGetPasidGranularTranslationType(v18, 0, v23);
      if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
      {
        result = IvtSetupScalableModeDefaultPasidTables(a1);
        if ( (int)result < 0 )
          return result;
        IvtBuildScalableModeContextEntry(v26, *(_QWORD *)(a1 + 104), 0, 0, BugCheckParameter4, (unsigned __int64 *)v70);
      }
      else
      {
        result = IvtLegacySetupScalableModeDefaultPasidTables(a1);
        if ( (int)result < 0 )
          return result;
        IvtLegacyBuildScalableModeContextEntry(
          v25,
          *(_QWORD *)(a1 + 104),
          0,
          0,
          BugCheckParameter4,
          (unsigned __int64 *)v70);
      }
      v27 = *(volatile signed __int64 **)(a1 + 40);
      v28 = v27 + 512;
      while ( v27 < v28 )
      {
        if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
          IvtSetScalableModeContextEntry(v29, (signed __int64 *)v70, v27);
        else
          IvtLegacySetScalableModeContextEntry(v29, v70, v27);
        v27 += 4;
      }
    }
    else
    {
      ContextEntryType = IvtGetContextEntryType(v18, v17, v23);
      IvtBuildContextEntry(a1, ContextEntryType, v7, v63, (__int64 *)&v69);
      v31 = *(_QWORD **)(a1 + 40);
      v14 = (unsigned __int64)(v31 + 512);
      if ( v31 < v31 + 512 )
      {
        v13 = *((_QWORD *)&v69 + 1);
        v32 = v69;
        v33 = v69 & 1;
        do
        {
          if ( v33 )
          {
            v31[1] = v13;
            *v31 = v32;
          }
          else
          {
            *v31 = 0LL;
            v31[1] = 0LL;
          }
          v31 += 2;
        }
        while ( (unsigned __int64)v31 < v14 );
      }
    }
    v5 = v60;
    goto LABEL_62;
  }
  if ( a2 != 1 )
    return 3221225473LL;
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

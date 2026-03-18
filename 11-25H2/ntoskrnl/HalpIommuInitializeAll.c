/*
 * XREFs of HalpIommuInitializeAll @ 0x140B5B7A0
 * Callers:
 *     HalpIommuInitSystem @ 0x140B3D550 (HalpIommuInitSystem.c)
 *     HalpInterruptReinitialize @ 0x140B5AD18 (HalpInterruptReinitialize.c)
 * Callees:
 *     RtlClearAllBits @ 0x14044A700 (RtlClearAllBits.c)
 *     HviGetHardwareFeatures @ 0x1404A37E0 (HviGetHardwareFeatures.c)
 *     HalpInterruptIsRemappingRequired @ 0x1404ABF70 (HalpInterruptIsRemappingRequired.c)
 *     HalpIommuPopulateExceptionList @ 0x1404D0D60 (HalpIommuPopulateExceptionList.c)
 *     HalpMmAllocateMemory @ 0x140540484 (HalpMmAllocateMemory.c)
 *     HalpIommuUpdatePageTableLevel @ 0x14054AA50 (HalpIommuUpdatePageTableLevel.c)
 *     HalpIommuUpdatePageWalkCapability @ 0x14054AAB0 (HalpIommuUpdatePageWalkCapability.c)
 *     HalpIommuConfigureInterrupt @ 0x14054F724 (HalpIommuConfigureInterrupt.c)
 *     HalpGetIrtEntryCount @ 0x14055359C (HalpGetIrtEntryCount.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     HalpIommuSetupMessageInterruptRouting @ 0x140B3DA60 (HalpIommuSetupMessageInterruptRouting.c)
 *     HalpIommuProcessReservedDomains @ 0x140B3DB9C (HalpIommuProcessReservedDomains.c)
 */

__int64 __fastcall HalpIommuInitializeAll(char a1, __int64 a2)
{
  char v4; // al
  unsigned int v5; // esi
  ULONG_PTR *v6; // r14
  __int64 v7; // r12
  __int64 v8; // rdi
  int v9; // eax
  int v10; // ebx
  unsigned int v11; // ebx
  __int64 Memory; // rax
  __int64 result; // rax
  int v14; // ecx
  int v15; // edx
  const char *v16; // rcx
  __int64 v17; // r8
  __int128 v18; // [rsp+30h] [rbp-50h] BYREF
  __int128 v19; // [rsp+48h] [rbp-38h]
  __int64 v20; // [rsp+58h] [rbp-28h]
  __int128 v21; // [rsp+60h] [rbp-20h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( !a1 && (int)HalpIommuPopulateExceptionList() < 0 )
    return 3221225473LL;
  if ( HalpHvIommu )
  {
    if ( HalpHvCpuManager )
    {
      HviGetHardwareFeatures((__int64)&v21);
      v4 = BYTE4(v21);
      if ( BYTE4(v21) )
        goto LABEL_50;
    }
    return 0LL;
  }
  if ( IommuRemappingPolicy && (ULONG_PTR *)HalpIommuList == &HalpIommuList )
    return 3221225659LL;
  v5 = 0;
LABEL_10:
  if ( v5 < 3 )
  {
    v6 = (ULONG_PTR *)HalpIommuList;
    while ( 1 )
    {
      v7 = (__int64)v6;
      if ( v6 == &HalpIommuList )
      {
        ++v5;
        goto LABEL_10;
      }
      v8 = (__int64)v6;
      v6 = (ULONG_PTR *)*v6;
      v9 = *(_DWORD *)(v8 + 472);
      if ( (v9 & 0x40) == 0 && IommuRemappingPolicy )
        return 3221225659LL;
      v10 = (*(_DWORD *)(v8 + 472) & 0x20) != 0;
      if ( (v9 & 0x100) != 0 )
        break;
      if ( (v9 & 0x20) != 0 || IommuRemappingPolicy )
      {
LABEL_24:
        if ( v5 )
        {
          if ( v5 < 2 )
            goto LABEL_30;
          if ( *(_QWORD *)(v8 + 304) )
          {
            if ( a1 )
            {
              if ( (*(_DWORD *)(v8 + 392) & 2) != 0 )
              {
                result = HalpIommuSetupMessageInterruptRouting(v8);
                if ( (int)result < 0 )
                  return result;
              }
              else
              {
                result = 0LL;
              }
              if ( !*(_QWORD *)(v8 + 288) )
                return result;
              guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 16));
            }
            else
            {
              v14 = *(_DWORD *)KiGlobalState;
              *((_QWORD *)&v18 + 1) = (unsigned __int16)(*(_DWORD *)KiGlobalState >> 6);
              *(_QWORD *)&v18 = 1LL << (v14 & 0x3F);
              if ( !HalpInterruptIsRemappingRequired() || (v15 = 6, (*(_DWORD *)(v8 + 472) & 0x10) != 0) )
                v15 = 1073741822;
              HalpIommuConfigureInterrupt(v7, v15, &v18);
            }
          }
        }
        else
        {
          if ( !a1 && (int)HalpIommuProcessReservedDomains(a2, v8) < 0 )
            return 3221225473LL;
          *(_QWORD *)&v19 = 0LL;
          HIDWORD(v20) = 0;
          *((_QWORD *)&v19 + 1) = __PAIR64__(IommuRemappingPolicy, v10);
          LODWORD(v20) = HalpGetIrtEntryCount();
          if ( (int)guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 16)) < 0 )
            return 3221225473LL;
LABEL_30:
          result = guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 16));
          if ( (int)result < 0 )
            return result;
        }
      }
    }
    if ( !v5 && !a1 )
    {
      v11 = *(_DWORD *)(v8 + 440);
      if ( v11 > 0x10000 )
        v11 = 0x10000;
      Memory = HalpMmAllocateMemory(4 * ((v11 + 32) >> 5));
      *(_DWORD *)(v8 + 456) = v11;
      *(_QWORD *)(v8 + 464) = Memory;
      RtlClearAllBits((PRTL_BITMAP)(v8 + 456));
      *(_QWORD *)(v8 + 448) = 0LL;
    }
    v10 = (HalpIommuPolicy == 3) + 1;
    goto LABEL_24;
  }
  HalpIommuUpdatePageWalkCapability();
  HalpIommuUpdatePageTableLevel();
  if ( HalpIommuMaxPageTableDepth )
  {
    v4 = 12;
    v16 = "\t";
    HalpIommuDomainMaxInputBitWidth = 12;
    v17 = (unsigned int)HalpIommuMaxPageTableDepth;
    do
    {
      v4 += *v16;
      v16 += 4;
      --v17;
    }
    while ( v17 );
LABEL_50:
    HalpIommuDomainMaxInputBitWidth = v4;
  }
  return 0LL;
}

/*
 * XREFs of HalpIommuInitializeAll @ 0x140B6B2A0
 * Callers:
 *     HalpIommuInitSystem @ 0x140B4D550 (HalpIommuInitSystem.c)
 *     HalpInterruptReinitialize @ 0x140B6A818 (HalpInterruptReinitialize.c)
 * Callees:
 *     RtlClearAllBits @ 0x140448960 (RtlClearAllBits.c)
 *     HviGetHardwareFeatures @ 0x1404A3740 (HviGetHardwareFeatures.c)
 *     HalpInterruptIsRemappingRequired @ 0x1404AD420 (HalpInterruptIsRemappingRequired.c)
 *     HalpIommuPopulateExceptionList @ 0x1404D0E30 (HalpIommuPopulateExceptionList.c)
 *     HalpMmAllocateMemory @ 0x140542CB4 (HalpMmAllocateMemory.c)
 *     HalpIommuUpdatePageTableLevel @ 0x14054D340 (HalpIommuUpdatePageTableLevel.c)
 *     HalpIommuUpdatePageWalkCapability @ 0x14054D3A0 (HalpIommuUpdatePageWalkCapability.c)
 *     HalpIommuConfigureInterrupt @ 0x140552024 (HalpIommuConfigureInterrupt.c)
 *     HalpGetIrtEntryCount @ 0x140555E9C (HalpGetIrtEntryCount.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpIommuSetupMessageInterruptRouting @ 0x140B4DA60 (HalpIommuSetupMessageInterruptRouting.c)
 *     HalpIommuProcessReservedDomains @ 0x140B4DB9C (HalpIommuProcessReservedDomains.c)
 */

__int64 __fastcall HalpIommuInitializeAll(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // al
  unsigned int v7; // esi
  ULONG_PTR *v8; // r14
  __int64 v9; // r12
  __int64 v10; // rdi
  int v11; // eax
  int v12; // ebx
  unsigned int v13; // ebx
  __int64 Memory; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 result; // rax
  int v18; // ecx
  int v19; // edx
  __int64 v20; // rdx
  const char *v21; // rcx
  __int64 v22; // r8
  __int128 v23; // [rsp+30h] [rbp-50h] BYREF
  __int128 v24; // [rsp+48h] [rbp-38h] BYREF
  __int64 v25; // [rsp+58h] [rbp-28h]
  __int128 v26; // [rsp+60h] [rbp-20h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( !a1 && (int)HalpIommuPopulateExceptionList() < 0 )
    return 3221225473LL;
  if ( HalpHvIommu )
  {
    if ( HalpHvCpuManager )
    {
      HviGetHardwareFeatures((__int64)&v26);
      v6 = BYTE4(v26);
      if ( BYTE4(v26) )
        goto LABEL_50;
    }
    return 0LL;
  }
  if ( IommuRemappingPolicy && (ULONG_PTR *)HalpIommuList == &HalpIommuList )
    return 3221225659LL;
  v7 = 0;
LABEL_10:
  if ( v7 < 3 )
  {
    v8 = (ULONG_PTR *)HalpIommuList;
    while ( 1 )
    {
      v9 = (__int64)v8;
      if ( v8 == &HalpIommuList )
      {
        ++v7;
        goto LABEL_10;
      }
      v10 = (__int64)v8;
      v8 = (ULONG_PTR *)*v8;
      v11 = *(_DWORD *)(v10 + 472);
      if ( (v11 & 0x40) == 0 && IommuRemappingPolicy )
        return 3221225659LL;
      v12 = (*(_DWORD *)(v10 + 472) & 0x20) != 0;
      if ( (v11 & 0x100) != 0 )
        break;
      if ( (v11 & 0x20) != 0 || IommuRemappingPolicy )
      {
LABEL_24:
        if ( v7 )
        {
          if ( v7 < 2 )
            goto LABEL_30;
          if ( *(_QWORD *)(v10 + 304) )
          {
            if ( a1 )
            {
              if ( (*(_DWORD *)(v10 + 392) & 2) != 0 )
              {
                result = HalpIommuSetupMessageInterruptRouting(v10, 0x10000LL);
                if ( (int)result < 0 )
                  return result;
              }
              else
              {
                result = 0LL;
              }
              v20 = *(_QWORD *)(v10 + 288);
              if ( !v20 )
                return result;
              guard_dispatch_icall_no_overrides(*(_QWORD *)(v10 + 16), v20, a3, a4);
            }
            else
            {
              v18 = *(_DWORD *)KiGlobalState;
              *((_QWORD *)&v23 + 1) = (unsigned __int16)(*(_DWORD *)KiGlobalState >> 6);
              *(_QWORD *)&v23 = 1LL << (v18 & 0x3F);
              if ( !HalpInterruptIsRemappingRequired() || (v19 = 6, (*(_DWORD *)(v10 + 472) & 0x10) != 0) )
                v19 = 1073741822;
              HalpIommuConfigureInterrupt(v9, v19, &v23);
            }
          }
        }
        else
        {
          if ( !a1 && (int)HalpIommuProcessReservedDomains(a2, v10, a3, a4) < 0 )
            return 3221225473LL;
          *(_QWORD *)&v24 = 0LL;
          HIDWORD(v25) = 0;
          *((_QWORD *)&v24 + 1) = __PAIR64__(IommuRemappingPolicy, v12);
          LODWORD(v25) = HalpGetIrtEntryCount();
          if ( (int)guard_dispatch_icall_no_overrides(*(_QWORD *)(v10 + 16), &v24, v15, v16) < 0 )
            return 3221225473LL;
LABEL_30:
          LOBYTE(a3) = a1;
          result = guard_dispatch_icall_no_overrides(*(_QWORD *)(v10 + 16), v7, a3, 0LL);
          if ( (int)result < 0 )
            return result;
        }
      }
    }
    if ( !v7 && !a1 )
    {
      v13 = *(_DWORD *)(v10 + 440);
      if ( v13 > 0x10000 )
        v13 = 0x10000;
      Memory = HalpMmAllocateMemory(4 * ((v13 + 32) >> 5));
      *(_DWORD *)(v10 + 456) = v13;
      *(_QWORD *)(v10 + 464) = Memory;
      RtlClearAllBits((PRTL_BITMAP)(v10 + 456));
      *(_QWORD *)(v10 + 448) = 0LL;
    }
    v12 = (HalpIommuPolicy == 3) + 1;
    goto LABEL_24;
  }
  HalpIommuUpdatePageWalkCapability();
  HalpIommuUpdatePageTableLevel();
  if ( HalpIommuMaxPageTableDepth )
  {
    v6 = 12;
    v21 = "\t";
    HalpIommuDomainMaxInputBitWidth = 12;
    v22 = (unsigned int)HalpIommuMaxPageTableDepth;
    do
    {
      v6 += *v21;
      v21 += 4;
      --v22;
    }
    while ( v22 );
LABEL_50:
    HalpIommuDomainMaxInputBitWidth = v6;
  }
  return 0LL;
}

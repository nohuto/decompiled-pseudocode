/*
 * XREFs of HalpTimerRegister @ 0x14055DCBC
 * Callers:
 *     HalpVpptTimerRegister @ 0x1405465BC (HalpVpptTimerRegister.c)
 *     HalpHvDiscover @ 0x14055CC50 (HalpHvDiscover.c)
 *     HalpWdatDiscover @ 0x14055CF58 (HalpWdatDiscover.c)
 *     HalpPmTimerDiscover @ 0x14055E0D0 (HalpPmTimerDiscover.c)
 *     HalpHvWatchdogDiscover @ 0x14055E260 (HalpHvWatchdogDiscover.c)
 *     HalpArtDiscover @ 0x14055E3B4 (HalpArtDiscover.c)
 *     HalpHpetDiscover @ 0x14055E498 (HalpHpetDiscover.c)
 *     HalpApicTimerDiscover @ 0x14055E9D0 (HalpApicTimerDiscover.c)
 *     HalpTscDiscover @ 0x14055ED28 (HalpTscDiscover.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x140375540 (HalQueryMaximumProcessorCount.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     HalpMmAllocateMemoryInternal @ 0x140540620 (HalpMmAllocateMemoryInternal.c)
 *     HalpTimerBuildKnownResourceIdString @ 0x140544BA0 (HalpTimerBuildKnownResourceIdString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HalpPciGetHpetInterruptSource @ 0x140C17260 (HalpPciGetHpetInterruptSource.c)
 */

__int64 __fastcall HalpTimerRegister(__int64 a1, UNICODE_STRING *a2)
{
  unsigned int v2; // ebx
  UNICODE_STRING *p_DestinationString; // r15
  int v5; // ecx
  unsigned int MaximumProcessorCount; // r12d
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  void *MemoryInternal; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  __int128 v13; // xmm0
  unsigned int i; // ebp
  __int64 v15; // rcx
  __int64 *v16; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-F8h] BYREF
  WCHAR SourceString[80]; // [rsp+30h] [rbp-E8h] BYREF

  v2 = 0;
  p_DestinationString = a2;
  DestinationString = 0LL;
  if ( !HalpTimerRegistrationAllowed )
    return (unsigned int)-1073741431;
  if ( *(_DWORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)(a1 + 4) != 144 )
    return (unsigned int)-1073741811;
  v5 = *(_DWORD *)(a1 + 116);
  if ( (v5 & 0xFE000000) != 0
    || (v5 & 0x400000) != 0
    || !*(_DWORD *)(a1 + 136)
    || (v5 & 0x400) != 0 && !*(_QWORD *)(a1 + 56) )
  {
    return (unsigned int)-1073741811;
  }
  if ( (v5 & 0x1000) != 0 || (v5 & 0x80u) != 0 )
    return (unsigned int)-1073741637;
  if ( (v5 & 0x800) != 0 && !*(_QWORD *)(a1 + 72) )
    return (unsigned int)-1073741811;
  if ( (v5 & 0x801) == 0x800 )
    return (unsigned int)-1073741637;
  if ( (v5 & 0xF00) != 0 && !*(_QWORD *)(a1 + 40) || (v5 & 2) != 0 && !*(_QWORD *)(a1 + 16) || (v5 & 0x10001) == 0x10000 )
    return (unsigned int)-1073741811;
  if ( !a2 )
  {
    HalpTimerBuildKnownResourceIdString(a1, 75, SourceString);
    p_DestinationString = &DestinationString;
    RtlInitUnicodeString(&DestinationString, SourceString);
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x10000) != 0 )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    v7 = (*(_DWORD *)(a1 + 96) + 7) & 0xFFFFFFF8;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 96);
    MaximumProcessorCount = 1;
  }
  v8 = (((MaximumProcessorCount * v7 + 351) & 0xFFFFFFF8) + 9 + p_DestinationString->Length) & 0xFFFFFFF8;
  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v8, 1u);
  v10 = (__int64)MemoryInternal;
  if ( MemoryInternal )
  {
    memset_0(MemoryInternal, 0, v8);
    v11 = (v10 + 303) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_QWORD *)(v10 + 288) = v11;
    v12 = (v11 + 55) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_QWORD *)(v10 + 72) = v12;
    *(_QWORD *)(v11 + 32) = (MaximumProcessorCount * v7 + v12 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_QWORD *)(v10 + 192) = *(_QWORD *)(a1 + 104);
    *(_OWORD *)(v10 + 104) = *(_OWORD *)(a1 + 8);
    *(_OWORD *)(v10 + 120) = *(_OWORD *)(a1 + 24);
    *(_OWORD *)(v10 + 136) = *(_OWORD *)(a1 + 40);
    *(_OWORD *)(v10 + 152) = *(_OWORD *)(a1 + 56);
    v13 = *(_OWORD *)(a1 + 72);
    *(_DWORD *)(v10 + 80) = v7;
    *(_OWORD *)(v10 + 168) = v13;
    *(_DWORD *)(v10 + 220) = *(_DWORD *)(a1 + 100);
    *(_DWORD *)(v10 + 224) = *(_DWORD *)(a1 + 116);
    *(_DWORD *)(v10 + 84) = *(_DWORD *)(a1 + 120);
    *(_DWORD *)(v10 + 88) = *(_DWORD *)(a1 + 124);
    *(_DWORD *)(v10 + 96) = *(_DWORD *)(a1 + 132);
    *(_DWORD *)(v10 + 92) = *(_DWORD *)(a1 + 128);
    *(_DWORD *)(v10 + 228) = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v10 + 216) = *(_DWORD *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 96) )
    {
      if ( *(_QWORD *)(a1 + 88) )
      {
        for ( i = 0; i < MaximumProcessorCount; ++i )
          memmove(
            (void *)(*(_QWORD *)(v10 + 72) + *(_DWORD *)(v10 + 80) * i),
            *(const void **)(a1 + 88),
            *(unsigned int *)(a1 + 96));
      }
    }
    *(_DWORD *)(v10 + 284) = *(_DWORD *)(a1 + 140);
    *(_WORD *)(v11 + 24) = 0;
    *(_WORD *)(v11 + 26) = p_DestinationString->Length + 2;
    RtlCopyUnicodeString((PUNICODE_STRING)(v11 + 24), p_DestinationString);
    if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    {
      *(_QWORD *)(v11 + 12) = 0LL;
      *(_DWORD *)(v11 + 8) = 0;
      *(_DWORD *)v11 = 0;
      *(_DWORD *)(v11 + 4) = 0;
      if ( *(_DWORD *)(a1 + 136) == 3 )
      {
        LOBYTE(v15) = *(_BYTE *)(a1 + 142);
        HalpPciGetHpetInterruptSource(v15, v11 + 8, (v10 + 303) & 0xFFFFFFFFFFFFFFF8uLL);
      }
    }
    v16 = (__int64 *)qword_140FC35C8;
    if ( *(ULONG_PTR **)qword_140FC35C8 != &HalpRegisteredTimers )
      __fastfail(3u);
    LODWORD(HalpRegisteredTimerCount) = HalpRegisteredTimerCount + 1;
    *(_QWORD *)v10 = &HalpRegisteredTimers;
    *(_QWORD *)(v10 + 8) = v16;
    *v16 = v10;
    qword_140FC35C8 = v10;
    if ( (*(_DWORD *)(v10 + 224) & 0x100000) != 0 )
      HalpTimerAuxiliaryClockEnabled = 1;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}

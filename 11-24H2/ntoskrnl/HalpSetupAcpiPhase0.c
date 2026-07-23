/*
 * XREFs of HalpSetupAcpiPhase0 @ 0x140C157FC
 * Callers:
 *     HalpAcpiInitDiscard @ 0x140C11374 (HalpAcpiInitDiscard.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14045F918 (HalpAcpiGetTable.c)
 *     HalpMap @ 0x140460358 (HalpMap.c)
 *     strstr @ 0x1404FB270 (strstr.c)
 *     HalpMmAllocateMemoryInternal @ 0x140540620 (HalpMmAllocateMemoryInternal.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HalReadBootRegister @ 0x140B52ABC (HalReadBootRegister.c)
 *     HalWriteBootRegister @ 0x140B52B00 (HalWriteBootRegister.c)
 *     HalpNumaInitializeHmaConfiguration @ 0x140C13974 (HalpNumaInitializeHmaConfiguration.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140C139F8 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpAcpiInitializePmRegisters @ 0x140C1540C (HalpAcpiInitializePmRegisters.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140C1711C (HalpAcpiDetectMachineSpecificActions.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140C69568 (HalpAllocPhysicalMemoryEx.c)
 *     HalpAcpiTableCacheInit @ 0x140C699DC (HalpAcpiTableCacheInit.c)
 */

__int64 __fastcall HalpSetupAcpiPhase0(__int64 a1)
{
  __int64 result; // rax
  _DWORD *Table; // rax
  unsigned int v4; // ecx
  size_t v5; // r8
  const char *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  if ( !HalpProcessedACPIPhase0 )
  {
    result = HalpAcpiTableCacheInit();
    if ( (int)result < 0 )
      return result;
    Table = (_DWORD *)HalpAcpiGetTable(a1, 1346584902, 0, 0);
    if ( !Table )
      return 3221226021LL;
    v4 = Table[1];
    v5 = 276LL;
    if ( v4 < 0x114 )
      v5 = v4;
    memmove(&HalpFixedAcpiDescTable, Table, v5);
    if ( (!a1 || (v6 = *(const char **)(a1 + 216)) == 0LL || !strstr(v6, "FORCELEGACYPLATFORM"))
      && (unsigned __int8)byte_140FC0F88 >= 5u )
    {
      if ( (dword_140FC0FF0 & 0x100000) != 0 )
        HalpPlatformFlags &= ~1u;
      if ( (word_140FC0FED & 2) == 0 )
        HalpPlatformFlags &= ~2u;
      if ( (word_140FC0FED & 0x20) != 0 )
        HalpPlatformFlags &= ~4u;
      off_140E00AA0[0] = (__int64 (__fastcall *)())HalpAcpiAoacCapable;
      if ( (dword_140FC0FF0 & 0x200000) != 0 )
        HalpPlatformFlags |= 8u;
    }
    HalpAcpiInitializePmRegisters((__int64)&HalpFixedAcpiDescTable);
    if ( (dword_140FC0FF0 & 0x40000) != 0 )
      HalpInterruptClusterModeForced = 1;
    if ( (dword_140FC0FF0 & 0x80000) != 0 )
      HalpInterruptPhysicalModeOnly = 1;
    HalpAcpiDetectMachineSpecificActions(a1);
    HalpNumaInitializeStaticConfiguration(a1);
    HalpNumaInitializeHmaConfiguration(a1);
    PdttTable = 0LL;
    v7 = HalpAcpiGetTable(a1, 1414808656, 0, 0);
    v8 = v7;
    if ( v7 )
    {
      v9 = *(unsigned __int8 *)(v7 + 36);
      if ( *(unsigned int *)(v8 + 4) >= (unsigned __int64)*(unsigned int *)(v8 + 40) + 2 * v9 )
      {
        qword_140E11850 = HalpMmAllocateMemoryInternal(136 * (int)v9, 1u);
        if ( qword_140E11850 )
          PdttTable = v8;
      }
    }
    v10 = HalpAcpiGetTable(a1, 1413824855, 0, 0);
    if ( v10 )
      HalpWAETDeviceFlags = *(_DWORD *)(v10 + 36);
    if ( !HalpLowStubPhysicalAddress )
    {
      v13 = 0x100000LL;
      v11 = (void *)HalpAllocPhysicalMemoryEx(a1, (unsigned int)&v13, 1, 0, 0LL);
      HalpLowStubPhysicalAddress = v11;
      if ( v11 )
        HalpLowStub = HalpMap((__int64)v11, 1LL, 1uLL, 0, 4u, 0LL);
    }
    if ( (dword_140FC0FF0 & 3) == 0 )
      HalpVirtAddrForFlush = HalpMap((__int64)HalpLowStubPhysicalAddress, 1LL, 1uLL, 0, 4u, 0LL);
    HalpProcessedACPIPhase0 = 1;
    qword_140E007B8 = (__int64)HalpAcpiGetPrmCache;
    LOBYTE(v13) = 0;
    qword_140E007C0 = (__int64)HalpAcpiInvokePrmFwHandler;
    qword_140E007A8 = (__int64)HalAcpiGetTableDispatch;
    qword_140E007B0 = (__int64)xHalTimerWatchdogStop;
    v12 = HalpAcpiGetTable(a1, 1414483778, 0, 0);
    HalpSimpleBootFlagTable = v12;
    if ( v12 && *(_DWORD *)(v12 + 4) >= 0x28u && *(_BYTE *)(v12 + 36) > 9u )
    {
      if ( !(unsigned int)HalReadBootRegister(&v13) && (v13 & 1) == 0 )
        HalWriteBootRegister(v13 | 1);
    }
    else
    {
      HalpSimpleBootFlagTable = 0LL;
    }
    off_140E00798[0] = HalpEndOfBoot;
  }
  return 0LL;
}

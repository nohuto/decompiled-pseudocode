/*
 * XREFs of MmLockPagableDataSection @ 0x140A54770
 * Callers:
 *     DifMmLockPagableDataSectionWrapper @ 0x140631D40 (DifMmLockPagableDataSectionWrapper.c)
 *     HalpPowerInitSystem @ 0x140B4E560 (HalpPowerInitSystem.c)
 *     VfInitDifWithoutReboot @ 0x140B8590C (VfInitDifWithoutReboot.c)
 *     VfInitSystemNoRebootNeeded @ 0x140B85980 (VfInitSystemNoRebootNeeded.c)
 *     BgkpLockBgfxCodeSection @ 0x140BB24F0 (BgkpLockBgfxCodeSection.c)
 *     HeadlessInit @ 0x140C442D4 (HeadlessInit.c)
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1402BBA7C (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MiLockPagableImageSection @ 0x1402BBC20 (MiLockPagableImageSection.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1402BBE58 (MmUnlockLoadedDataTableEntry.c)
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

PVOID __stdcall MmLockPagableDataSection(PVOID AddressWithinSection)
{
  __int64 v2; // rsi
  _BYTE *v3; // rcx
  char *v4; // rbp
  PIMAGE_NT_HEADERS v5; // rax
  unsigned int NumberOfSections; // r9d
  _DWORD *v7; // rbx
  unsigned int i; // ecx
  unsigned __int64 v9; // rdx
  unsigned int v10; // eax
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return (PVOID)1;
  v2 = MiLockLoadedDataTableEntryIfNecessary((__int64)AddressWithinSection, &v12);
  v3 = *(_BYTE **)(v2 + 48);
  v4 = (char *)((_BYTE *)AddressWithinSection - v3);
  v5 = RtlImageNtHeader(v3);
  NumberOfSections = v5->FileHeader.NumberOfSections;
  v7 = (_DWORD *)((char *)&v5->OptionalHeader.Magic + v5->FileHeader.SizeOfOptionalHeader);
  for ( i = 0; ; ++i )
  {
    if ( i >= NumberOfSections )
      KeBugCheckEx(0x1Au, 0x1234uLL, (ULONG_PTR)AddressWithinSection, 0LL, 0LL);
    v9 = (unsigned int)v7[3];
    v10 = v7[4];
    if ( (unsigned __int64)v4 >= v9 )
    {
      if ( v10 < v7[2] )
        v10 = v7[2];
      if ( (unsigned __int64)v4 < (unsigned int)v9 + v10 )
        break;
    }
    v7 += 10;
  }
  MiLockPagableImageSection(v2, (unsigned __int64)v7, 1u);
  if ( v12 )
    MmUnlockLoadedDataTableEntry(v2);
  return v7;
}

/*
 * XREFs of MmLockPagableDataSection @ 0x140A5CF50
 * Callers:
 *     DifMmLockPagableDataSectionWrapper @ 0x140633780 (DifMmLockPagableDataSectionWrapper.c)
 *     HalpPowerInitSystem @ 0x140B4C520 (HalpPowerInitSystem.c)
 *     VfInitDifWithoutReboot @ 0x140B8390C (VfInitDifWithoutReboot.c)
 *     VfInitSystemNoRebootNeeded @ 0x140B83980 (VfInitSystemNoRebootNeeded.c)
 *     BgkpLockBgfxCodeSection @ 0x140BB04F0 (BgkpLockBgfxCodeSection.c)
 *     HeadlessInit @ 0x140C42184 (HeadlessInit.c)
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1402C6EFC (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MiLockPagableImageSection @ 0x1402C70A0 (MiLockPagableImageSection.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1402C72D8 (MmUnlockLoadedDataTableEntry.c)
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

PVOID __stdcall MmLockPagableDataSection(PVOID AddressWithinSection)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rcx
  char *v4; // rbp
  unsigned __int64 v5; // rax
  unsigned int v6; // r9d
  _DWORD *v7; // rbx
  unsigned int i; // ecx
  unsigned __int64 v9; // rdx
  unsigned int v10; // eax
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return (PVOID)1;
  v2 = MiLockLoadedDataTableEntryIfNecessary((__int64)AddressWithinSection, &v12);
  v3 = *(_QWORD *)(v2 + 48);
  v4 = (char *)AddressWithinSection - v3;
  v5 = RtlImageNtHeader(v3);
  v6 = *(unsigned __int16 *)(v5 + 6);
  v7 = (_DWORD *)(*(unsigned __int16 *)(v5 + 20) + v5 + 24);
  for ( i = 0; ; ++i )
  {
    if ( i >= v6 )
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

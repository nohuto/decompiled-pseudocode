/*
 * XREFs of HalpDmaInitDiscard @ 0x140C11FD4
 * Callers:
 *     HalpDmaInitSystem @ 0x140B4F910 (HalpDmaInitSystem.c)
 * Callees:
 *     HalpDmaInitMemory @ 0x140C128E8 (HalpDmaInitMemory.c)
 */

__int64 __fastcall HalpDmaInitDiscard(__int64 a1)
{
  __int64 *i; // rdx
  unsigned __int64 v2; // rax
  __int64 v3; // r9

  qword_140E00770 = (__int64)HaliGetDmaAdapter;
  off_140E00B48[0] = (__int64 (__fastcall *)())HalpDmaLinkDeviceObjectByToken;
  off_140E00B50 = (__int64 (__fastcall *)())HalpDmaCheckAdapterToken;
  off_140E00830[0] = (__int64 (__fastcall *)())HalpAllocateMapRegisters;
  off_140E00A98[0] = (__int64 (__fastcall *)())HalpDmaFreeCrashDumpRegisters;
  for ( i = *(__int64 **)(a1 + 32); i != (__int64 *)(a1 + 32); i = (__int64 *)*i )
  {
    v2 = *((int *)i + 6);
    if ( (unsigned int)v2 <= 0x25 )
    {
      v3 = 0x2BC0400048LL;
      if ( _bittest64(&v3, v2) )
        continue;
    }
    if ( ((i[4] + i[5]) << 12) - 1 > (unsigned __int64)HalpMaximumPhysicalMemoryAddress )
      HalpMaximumPhysicalMemoryAddress = ((i[4] + i[5]) << 12) - 1;
  }
  HalpDmaInitMemory();
  return 0LL;
}

/*
 * XREFs of MiReservePoolMemory @ 0x14026C688
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x14034C090 (RtlpHpEnvAllocVA.c)
 *     MmAllocateSecurePoolMemory @ 0x14067DD58 (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiMarkSystemVaAllocated @ 0x14026B454 (MiMarkSystemVaAllocated.c)
 *     MiObtainSystemVa @ 0x14026CAF4 (MiObtainSystemVa.c)
 *     MiObtainDynamicVa @ 0x14026CBCC (MiObtainDynamicVa.c)
 */

__int64 __fastcall MiReservePoolMemory(unsigned __int64 a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // r10

  v4 = a3 >> 21;
  if ( a3 >> 21 > 0xFFFFFFFF )
    return 0LL;
  switch ( a2 )
  {
    case 4:
      return MiObtainDynamicVa(qword_140E2DC38 + 384LL * a4, (unsigned int)v4);
    case 5:
      return MiObtainSystemVa((unsigned int)v4);
    case 14:
      return a1 & -(__int64)((unsigned int)MiMarkSystemVaAllocated(
                                             0xEu,
                                             ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL,
                                             ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL + 8 * v4,
                                             1,
                                             1) != 0);
    default:
      return 0LL;
  }
}

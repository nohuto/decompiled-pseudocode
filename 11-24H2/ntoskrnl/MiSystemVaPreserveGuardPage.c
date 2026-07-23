/*
 * XREFs of MiSystemVaPreserveGuardPage @ 0x14067AD3C
 * Callers:
 *     MiMarkSystemVaAllocated @ 0x14026B454 (MiMarkSystemVaAllocated.c)
 *     MiExtendDynamicBitMap @ 0x14026ECB4 (MiExtendDynamicBitMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSystemVaPreserveGuardPage(__int64 a1, int a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a2 == 4 )
  {
    LOBYTE(v2) = a1 == qword_140E2DC38 - 384 + 384LL * (unsigned __int16)KeNumberNodes;
  }
  else if ( a2 == 5 || a2 == 14 )
  {
    return 1;
  }
  return v2;
}

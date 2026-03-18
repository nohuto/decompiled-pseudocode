/*
 * XREFs of PpmParkInitialize @ 0x140C221F0
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 PpmParkInitialize()
{
  int v0; // eax

  v0 = PpmHeteroMultiClassParkingRegValue;
  if ( PpmHeteroMultiClassParkingRegValue == -1 )
    v0 = (unsigned __int8)PpmMaxCoreClasses > 2u;
  PpmHeteroMultiClassParkingEnabled = v0;
  PpmParkOldSoftParkRankList = (void *)ExAllocatePool2(0x40uLL, 4LL * (unsigned int)KeMaximumProcessors, 0x704D5050uLL);
  if ( !PpmParkOldSoftParkRankList )
    return 3221225626LL;
  PpmParkNewSoftParkRankList = (void *)ExAllocatePool2(0x40uLL, 4LL * (unsigned int)KeMaximumProcessors, 0x704D5050uLL);
  return PpmParkNewSoftParkRankList != 0LL ? 0 : 0xC000009A;
}

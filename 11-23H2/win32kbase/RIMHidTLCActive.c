/*
 * XREFs of RIMHidTLCActive @ 0x1C01918F4
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0071424 (RIMFreeSpecificDevWorker.c)
 *     RIMIsRawInputActive @ 0x1C01710C8 (RIMIsRawInputActive.c)
 *     rimObsStartStopDeviceRead @ 0x1C01AF2E0 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     RIMHidValidExclusive @ 0x1C0191930 (RIMHidValidExclusive.c)
 */

__int64 __fastcall RIMHidTLCActive(_DWORD *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1[7] || a1[6] || a1[8] > (unsigned int)RIMHidValidExclusive(a1) )
    return 1;
  return v1;
}

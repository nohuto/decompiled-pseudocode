/*
 * XREFs of RIMHidTLCActive @ 0x14011577C
 * Callers:
 *     RIMIsRawInputActive @ 0x14011573C (RIMIsRawInputActive.c)
 *     RIMFreeSpecificDevWorker @ 0x140133A58 (RIMFreeSpecificDevWorker.c)
 *     rimObsStartStopDeviceRead @ 0x1401F0DA0 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     RIMHidValidExclusive @ 0x1401E33D8 (RIMHidValidExclusive.c)
 */

__int64 __fastcall RIMHidTLCActive(_DWORD *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1[7] || a1[6] || a1[8] > (unsigned int)RIMHidValidExclusive(a1) )
    return 1;
  return v1;
}

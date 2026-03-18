/*
 * XREFs of ViTargetDriversAllocateVerifiedData @ 0x140B8B994
 * Callers:
 *     VfTargetDriversAdd @ 0x1403F01F8 (VfTargetDriversAdd.c)
 *     VfTargetDriversEnableVerifier @ 0x140B8B364 (VfTargetDriversEnableVerifier.c)
 * Callees:
 *     InitializeSListHead @ 0x14045FE80 (InitializeSListHead.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

union _SLIST_HEADER *__fastcall ViTargetDriversAllocateVerifiedData(unsigned __int64 a1)
{
  union _SLIST_HEADER *Pool2; // rax
  union _SLIST_HEADER *v3; // rbx

  Pool2 = (union _SLIST_HEADER *)ExAllocatePool2(0x40uLL, 0x120uLL, 0x44566656uLL);
  v3 = Pool2;
  if ( Pool2 )
  {
    Pool2->Alignment = a1;
    Pool2[2].Region = 2557876544LL;
    Pool2[1].Region = (unsigned __int64)&Pool2[1];
    Pool2[1].Alignment = (unsigned __int64)&Pool2[1];
    Pool2[6].Region = (unsigned __int64)&Pool2[6];
    Pool2[6].Alignment = (unsigned __int64)&Pool2[6];
    InitializeSListHead(Pool2 + 4);
    InitializeSListHead(v3 + 5);
    v3[17].Alignment = (unsigned __int64)&v3[16].Region;
    v3[16].Region = (unsigned __int64)&v3[16].Region;
  }
  else
  {
    _InterlockedExchange(&ViTargetAllocationFailures, 1);
  }
  return v3;
}

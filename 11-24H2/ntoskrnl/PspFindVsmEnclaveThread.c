/*
 * XREFs of PspFindVsmEnclaveThread @ 0x140A3971C
 * Callers:
 *     PsAdjustBasicEnclaveThreadList @ 0x1405E6A10 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x1405E6B94 (PsLoadVsmEnclaveData.c)
 *     PsCallEnclave @ 0x140AD1D10 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspFindVsmEnclaveThread(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return a1 > v2;
}

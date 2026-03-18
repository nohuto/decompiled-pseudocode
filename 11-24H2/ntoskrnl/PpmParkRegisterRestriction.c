/*
 * XREFs of PpmParkRegisterRestriction @ 0x1405DA87C
 * Callers:
 *     PpmParkRegisterParking @ 0x1405D9FB4 (PpmParkRegisterParking.c)
 *     PpmParkInitParkNode @ 0x1405E3894 (PpmParkInitParkNode.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmParkRegisterRestriction(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 1224) = 1;
  result = ExAllocatePool2(0x40uLL);
  if ( result )
  {
    *(_QWORD *)(a1 + 1248) = result;
    *(_DWORD *)(a1 + 1224) = 2;
  }
  return result;
}

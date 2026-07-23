/*
 * XREFs of PpmParkRegisterRestriction @ 0x1405D7B9C
 * Callers:
 *     PpmParkRegisterParking @ 0x1405D72D0 (PpmParkRegisterParking.c)
 *     PpmParkInitParkNode @ 0x1405E0E1C (PpmParkInitParkNode.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmParkRegisterRestriction(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(unsigned __int16 *)(a1 + 10);
  *(_DWORD *)(a1 + 1232) = 1;
  result = ExAllocatePool2(0x40uLL, 4 * v1, 0x704D5050u);
  if ( result )
  {
    *(_QWORD *)(a1 + 1256) = result;
    *(_DWORD *)(a1 + 1232) = 2;
  }
  return result;
}

/*
 * XREFs of MiSetSlabAllocatorSlabSize @ 0x140689A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetSlabAllocatorSlabSize(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)(a2 + 136) ^= ((unsigned __int8)*(_DWORD *)(a2 + 136) ^ (unsigned __int8)(16 * a3)) & 0x30;
  return result;
}

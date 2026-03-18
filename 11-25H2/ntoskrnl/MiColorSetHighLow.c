/*
 * XREFs of MiColorSetHighLow @ 0x140462188
 * Callers:
 *     MiInitializePartitionFreeZeroLists @ 0x1407DCF4C (MiInitializePartitionFreeZeroLists.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiColorSetHighLow(_DWORD *a1, __int16 a2)
{
  __int64 result; // rax

  result = (unsigned int)*a1;
  *a1 = result ^ ((unsigned __int16)result ^ (unsigned __int16)(a2 << 15)) & 0x8000;
  return result;
}

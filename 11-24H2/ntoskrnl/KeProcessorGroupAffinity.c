/*
 * XREFs of KeProcessorGroupAffinity @ 0x14044E190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeProcessorGroupAffinity(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  __int64 result; // rax

  v3 = *((_DWORD *)KiGlobalState + a2);
  *(_DWORD *)(a1 + 10) = 0;
  *(_WORD *)(a1 + 14) = 0;
  *(_WORD *)(a1 + 8) = v3 >> 6;
  result = 1LL << (v3 & 0x3F);
  *(_QWORD *)a1 = result;
  return result;
}

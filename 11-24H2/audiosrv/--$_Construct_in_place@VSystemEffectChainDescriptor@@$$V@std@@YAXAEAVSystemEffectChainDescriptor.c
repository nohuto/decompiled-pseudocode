/*
 * XREFs of ??$_Construct_in_place@VSystemEffectChainDescriptor@@$$V@std@@YAXAEAVSystemEffectChainDescriptor@@@Z @ 0x180149F1C
 * Callers:
 *     ??$make_shared@VSystemEffectChainDescriptor@@$$V@std@@YA?AV?$shared_ptr@VSystemEffectChainDescriptor@@@0@XZ @ 0x18003A6EC (--$make_shared@VSystemEffectChainDescriptor@@$$V@std@@YA-AV-$shared_ptr@VSystemEffectChainDescri.c)
 * Callees:
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 */

__int64 __fastcall std::_Construct_in_place<SystemEffectChainDescriptor,>(_QWORD *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0x48uLL);
  result = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[6] = 0LL;
  a1[7] = 0LL;
  a1[8] = 0LL;
  return result;
}

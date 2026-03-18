/*
 * XREFs of MiInitializeProcessTopDownEntropy @ 0x1408F8FC0
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1408F8590 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 */

_QWORD *__fastcall MiInitializeProcessTopDownEntropy(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  _QWORD *result; // rax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 872) <= 0x100000000uLL )
    v1 = *(_QWORD *)(a1 + 872);
  v3 = (-(__int64)((*(_DWORD *)(a1 + 1532) & 1) != 0) & 0x9FFFF0000LL) + 0x7FF600000000LL;
  if ( (*(_DWORD *)(a1 + 1872) & 0x40) == 0 )
  {
    if ( v1 )
      v1 -= (unsigned __int8)ExGenRandom(1) << 16;
    v3 -= (unsigned int)ExGenRandom(1) << 16;
  }
  result = *(_QWORD **)(a1 + 1040);
  if ( v1 )
    result[120] = v3;
  else
    v1 = v3;
  result[102] = v1;
  result[111] = v1;
  return result;
}

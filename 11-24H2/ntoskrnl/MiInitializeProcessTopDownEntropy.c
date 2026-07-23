/*
 * XREFs of MiInitializeProcessTopDownEntropy @ 0x14091B89C
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14091A9E8 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 */

_QWORD *__fastcall MiInitializeProcessTopDownEntropy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  _QWORD *result; // rax

  v4 = 0LL;
  if ( *(_QWORD *)(a1 + 872) <= 0x100000000uLL )
    v4 = *(_QWORD *)(a1 + 872);
  v6 = (-(__int64)((*(_DWORD *)(a1 + 1532) & 1) != 0) & 0x9FFFF0000LL) + 0x7FF600000000LL;
  if ( (*(_DWORD *)(a1 + 1872) & 0x40) == 0 )
  {
    if ( v4 )
      v4 -= (unsigned __int8)ExGenRandom(1, a2, a3, a4) << 16;
    v6 -= (unsigned int)ExGenRandom(1, a2, a3, a4) << 16;
  }
  result = *(_QWORD **)(a1 + 1040);
  if ( v4 )
    result[120] = v6;
  else
    v4 = v6;
  result[102] = v4;
  result[111] = v4;
  return result;
}

/*
 * XREFs of PopCopyFirmwareRuntimeInformationPfnList @ 0x140B70468
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x140B66A30 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall PopCopyFirmwareRuntimeInformationPfnList(_QWORD *MemoryMap, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v5; // rsi
  PVOID *v6; // r14
  __int64 result; // rax

  v2 = MemoryMap[30];
  if ( v2 )
  {
    v5 = (*(_DWORD *)(v2 + 40) >> 12) + (unsigned int)((*(_DWORD *)(v2 + 40) & 0xFFF) != 0);
    if ( v5 > 1 )
      v5 = 1LL;
    v6 = (PVOID *)(v2 + 48);
    memmove((void *)(a2 + 888), v6, 8 * v5);
    for ( *(_DWORD *)(a2 + 880) = v5; v5; --v5 )
      PoSetHiberRange(MemoryMap, 0xC000u, *v6++, 1uLL, 0x644D6946u);
  }
  else
  {
    *(_DWORD *)(a2 + 880) = 0;
  }
  *(_QWORD *)(a2 + 896) = MemoryMap[32];
  result = MemoryMap[33];
  *(_QWORD *)(a2 + 904) = result;
  return result;
}

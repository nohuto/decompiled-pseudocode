/*
 * XREFs of HsaUpdateInterruptDestination @ 0x140570DF4
 * Callers:
 *     HsaUpdateRemappingTableEntry @ 0x140571110 (HsaUpdateRemappingTableEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall HsaUpdateInterruptDestination(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // ecx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx

  if ( *(_DWORD *)BugCheckParameter4 == 1 )
  {
    *(_QWORD *)(BugCheckParameter3 + 8) |= 0xFF00000000000000uLL;
    result = *(_QWORD *)BugCheckParameter3 & 0xFFFFFFFF000000BFuLL | 0xFFFFFF00;
    *(_QWORD *)BugCheckParameter3 = result;
  }
  else
  {
    if ( *(_DWORD *)BugCheckParameter4 == 4 )
    {
      *(_BYTE *)(BugCheckParameter3 + 15) = *(_BYTE *)(BugCheckParameter4 + 11);
      result = *(_QWORD *)BugCheckParameter3 & 0xFFFFFFFF000000BFuLL;
      v5 = result ^ ((unsigned __int64)*(unsigned int *)(BugCheckParameter4 + 8) << 8) & 0xFFFFFF00;
    }
    else
    {
      if ( *(_DWORD *)BugCheckParameter4 != 6 )
        KeBugCheckEx(0x5Cu, 0x7000uLL, 0x20uLL, BugCheckParameter3, BugCheckParameter4);
      v3 = *(_DWORD *)(BugCheckParameter4 + 12) | (*(_DWORD *)(BugCheckParameter4 + 8) << 16);
      *(_BYTE *)(BugCheckParameter3 + 15) = HIBYTE(v3);
      result = (unsigned __int64)v3 << 8;
      v5 = result ^ (*(_QWORD *)BugCheckParameter3 ^ result) & 0xFFFFFFFF000000FFuLL | 0x40;
    }
    *(_QWORD *)BugCheckParameter3 = v5;
  }
  return result;
}

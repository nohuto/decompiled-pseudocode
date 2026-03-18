/*
 * XREFs of HalpIommuUpdateRemappingTableEntry @ 0x140446D6C
 * Callers:
 *     HalpInterruptEnableNmi @ 0x140443DC4 (HalpInterruptEnableNmi.c)
 *     HalpInterruptSetRemappedDestination @ 0x1404469F4 (HalpInterruptSetRemappedDestination.c)
 *     HalpSetIrtEntry @ 0x140446E30 (HalpSetIrtEntry.c)
 *     HalpInterruptRemap @ 0x14053E694 (HalpInterruptRemap.c)
 *     HalpInterruptRemapFixedLines @ 0x14053FD20 (HalpInterruptRemapFixedLines.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpIommuUpdateRemappingTableEntry(char a1, __int64 a2)
{
  ULONG_PTR *v2; // rbx
  int v3; // esi
  char v4; // bp
  unsigned int v5; // r14d
  ULONG_PTR *v7; // rdi

  v2 = (ULONG_PTR *)HalpIommuList;
  v3 = 0;
  v4 = 0;
  v5 = a2;
  while ( v2 != &HalpIommuList )
  {
    v7 = v2;
    v2 = (ULONG_PTR *)*v2;
    if ( (v7[59] & 0x40) != 0 )
    {
      if ( !v3 || IommuRemappingPolicy == 2 || *((_DWORD *)v7 + 119) == 6 )
      {
        LOBYTE(a2) = a1;
        v4 = guard_dispatch_icall_no_overrides(v7[2], a2);
      }
      if ( v4 )
        guard_dispatch_icall_no_overrides(v7[2], v5);
      ++v3;
    }
  }
}

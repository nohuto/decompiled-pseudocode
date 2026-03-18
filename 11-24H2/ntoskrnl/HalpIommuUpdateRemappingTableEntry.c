/*
 * XREFs of HalpIommuUpdateRemappingTableEntry @ 0x1403BAEFC
 * Callers:
 *     HalpInterruptSetRemappedDestination @ 0x1403BAB84 (HalpInterruptSetRemappedDestination.c)
 *     HalpSetIrtEntry @ 0x1403BAFC0 (HalpSetIrtEntry.c)
 *     HalpInterruptEnableNmi @ 0x1404A356C (HalpInterruptEnableNmi.c)
 *     HalpInterruptRemap @ 0x140540EC4 (HalpInterruptRemap.c)
 *     HalpInterruptRemapFixedLines @ 0x140542550 (HalpInterruptRemapFixedLines.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpIommuUpdateRemappingTableEntry(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR *v4; // rbx
  int v5; // esi
  char v7; // bp
  unsigned int v8; // r14d
  ULONG_PTR *v10; // rdi

  v4 = (ULONG_PTR *)HalpIommuList;
  v5 = 0;
  v7 = 0;
  v8 = a2;
  while ( v4 != &HalpIommuList )
  {
    v10 = v4;
    v4 = (ULONG_PTR *)*v4;
    if ( (v10[59] & 0x40) != 0 )
    {
      if ( !v5 || IommuRemappingPolicy == 2 || *((_DWORD *)v10 + 119) == 6 )
      {
        LOBYTE(a2) = a1;
        v7 = guard_dispatch_icall_no_overrides(v10[2], a2, v8, a3);
      }
      if ( v7 )
        guard_dispatch_icall_no_overrides(v10[2], v8, a3, a4);
      ++v5;
    }
  }
}

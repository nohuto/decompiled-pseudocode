/*
 * XREFs of MiFilterCrashDumpPte @ 0x14066BC60
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiIsPageSecured @ 0x140377B2C (MiIsPageSecured.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiFilterCrashDumpPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 *v3; // rsi
  __int64 v6; // r14
  unsigned __int64 LeafVa; // rax
  int SystemRegionType; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v14; // rbx
  __int64 v15; // rbp
  int v16; // eax

  v3 = *(__int64 **)(a1 + 184);
  v6 = *v3;
  if ( a3 == 3 && (*(_DWORD *)a1 & 0x22000) != 0 )
  {
    LeafVa = MiGetLeafVa(a2);
    SystemRegionType = MiGetSystemRegionType(LeafVa);
    if ( SystemRegionType == 7 || (*(_DWORD *)(v6 + 40) & 4) != 0 && SystemRegionType == 3 )
      return 1LL;
  }
  v10 = MI_READ_PTE_LOCK_FREE(a2);
  if ( a3 )
  {
    if ( (v10 & 1) != 0 )
    {
      v12 = (v10 >> 12) & 0xFFFFFFFFFFLL;
      if ( v12 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v12 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        if ( (v10 & 0x80u) != 0LL )
        {
          MiGetLeafVa(a2);
          MiGetLeafVa(a2 + 8);
        }
        goto LABEL_29;
      }
      return 1LL;
    }
  }
  else
  {
    if ( (v10 & 1) == 0 )
    {
      if ( (v10 & 0x400) != 0 || (v10 & 0x800) == 0 )
        return 0LL;
      if ( qword_140E2D940 )
      {
        if ( (v10 & 0x10) != 0 )
          v10 &= ~0x10uLL;
        else
          v10 &= ~qword_140E2D940;
      }
    }
    v14 = (v10 >> 12) & 0xFFFFFFFFFFLL;
    if ( v14 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v14 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      v15 = 48 * v14 - 0x220000000000LL;
      if ( !(unsigned int)MiIsPageSecured(v15, v9, v11)
        && ((unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) != 8
         || (*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
         || (*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL
         || (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
         && (*(_BYTE *)(v15 + 34) & 7) == 6
         && (*(_QWORD *)(v15 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL) )
      {
LABEL_29:
        v16 = guard_dispatch_icall_no_overrides(v6);
        if ( v16 < 0 && *((int *)v3 + 2) >= 0 )
          *((_DWORD *)v3 + 2) = v16;
      }
    }
  }
  return 0LL;
}

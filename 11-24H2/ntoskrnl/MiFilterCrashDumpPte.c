/*
 * XREFs of MiFilterCrashDumpPte @ 0x140678790
 * Callers:
 *     <none>
 * Callees:
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiIsPageSecured @ 0x1403F4404 (MiIsPageSecured.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiFilterCrashDumpPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 *v3; // rsi
  __int64 v7; // r14
  unsigned __int64 LeafVa; // rax
  int SystemRegionType; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r9
  unsigned __int64 v16; // rbx
  __int64 v17; // rbp
  int v18; // eax

  v3 = *(__int64 **)(a1 + 184);
  v7 = *v3;
  if ( a3 == 3 && (*(_DWORD *)a1 & 0x22000) != 0 )
  {
    LeafVa = MiGetLeafVa(a2);
    SystemRegionType = MiGetSystemRegionType(LeafVa);
    if ( SystemRegionType == 7 || (*(_DWORD *)(v7 + 40) & 4) != 0 && SystemRegionType == 3 )
      return 1LL;
  }
  v11 = MI_READ_PTE_LOCK_FREE(a2);
  if ( a3 )
  {
    if ( (v11 & 1) != 0 )
    {
      v13 = (v11 >> 12) & 0xFFFFFFFFFFLL;
      if ( v13 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        if ( (v11 & 0x80u) != 0LL )
        {
          MiGetLeafVa(a2);
          MiGetLeafVa(a2 + 8);
          v13 = (__int64)(*(_QWORD *)(a1 + 96) << 25) >> 16;
          if ( v14 >= v13 )
            v13 = v14;
        }
        goto LABEL_32;
      }
      return 1LL;
    }
  }
  else
  {
    if ( (v11 & 1) == 0 )
    {
      if ( (v11 & 0x400) != 0 || (v11 & 0x800) == 0 )
        return 0LL;
      if ( qword_140E2DCC0 )
      {
        if ( (v11 & 0x10) != 0 )
          v11 &= ~0x10uLL;
        else
          v11 &= ~qword_140E2DCC0;
      }
    }
    v16 = (v11 >> 12) & 0xFFFFFFFFFFLL;
    if ( v16 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v16 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      v17 = 48 * v16 - 0x220000000000LL;
      if ( !(unsigned int)MiIsPageSecured(v17, v10, v12)
        && ((unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) != 8
         || (*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
         || (*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL
         || (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
         && (*(_BYTE *)(v17 + 34) & 7) == 6
         && (*(_QWORD *)(v17 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL) )
      {
        v13 = v16;
LABEL_32:
        v18 = guard_dispatch_icall_no_overrides(v7, v13);
        if ( v18 < 0 && *((int *)v3 + 2) >= 0 )
          *((_DWORD *)v3 + 2) = v18;
      }
    }
  }
  return 0LL;
}

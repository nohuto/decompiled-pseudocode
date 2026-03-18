/*
 * XREFs of MiFilterCrashDumpPte @ 0x1406775B0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiIsPageSecured @ 0x140395B74 (MiIsPageSecured.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r9
  __int64 v17; // r9
  unsigned __int64 v18; // r8
  unsigned __int64 v20; // rbx
  __int64 v21; // rbp
  int v22; // eax

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
      if ( v13 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        if ( (v11 & 0x80u) != 0LL )
        {
          MiGetLeafVa(a2);
          v15 = MiGetLeafVa(a2 + 8) - 1;
          v13 = (__int64)(*(_QWORD *)(a1 + 96) << 25) >> 16;
          if ( v16 >= v13 )
            v13 = v16;
          v17 = 1LL;
          v18 = ((*(_QWORD *)(a1 + 128) << 25) | 0xFFF0000LL) >> 16;
          if ( v15 <= v18 )
            v18 = v15;
          v14 = (v18 - v13 + 1) >> 12;
          goto LABEL_36;
        }
        v14 = 1LL;
LABEL_35:
        v17 = 2LL;
LABEL_36:
        v22 = guard_dispatch_icall_no_overrides(v7, v13, v14, v17);
        if ( v22 < 0 && *((int *)v3 + 2) >= 0 )
          *((_DWORD *)v3 + 2) = v22;
        return 0LL;
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
      if ( qword_140E2DB80 )
      {
        if ( (v11 & 0x10) != 0 )
          v11 &= ~0x10uLL;
        else
          v11 &= ~qword_140E2DB80;
      }
    }
    v20 = (v11 >> 12) & 0xFFFFFFFFFFLL;
    if ( v20 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v20 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      v21 = 48 * v20 - 0x220000000000LL;
      if ( !(unsigned int)MiIsPageSecured(v21, v10, v12)
        && ((unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) != 8
         || (*(_QWORD *)(v21 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
         || (*(_QWORD *)(v21 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL
         || (*(_QWORD *)(v21 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
         && (*(_BYTE *)(v21 + 34) & 7) == 6
         && (*(_QWORD *)(v21 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL) )
      {
        v14 = 1LL;
        v13 = v20;
        goto LABEL_35;
      }
    }
  }
  return 0LL;
}

/*
 * XREFs of IoSetDumpRange @ 0x14058F310
 * Callers:
 *     IopAddPageDumpRange @ 0x140590480 (IopAddPageDumpRange.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     IopAddPageToPageMap @ 0x140590668 (IopAddPageToPageMap.c)
 */

__int64 __fastcall IoSetDumpRange(__int64 a1, char *a2, unsigned __int64 a3, int a4)
{
  int v4; // r15d
  int v5; // eax
  char *v7; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v10; // rcx
  PHYSICAL_ADDRESS v11; // rdi
  __int64 v12; // rdx
  char v13; // al
  __int64 v14; // r8
  unsigned int v15; // edx
  unsigned int i; // r8d
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned int j; // r8d
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  char v22; // si
  PHYSICAL_ADDRESS v23; // rax
  int v24; // eax

  v4 = a4;
  v5 = a4 & 0xF;
  v7 = a2;
  if ( v5 == 1 )
  {
    PhysicalAddress = MmGetPhysicalAddress(a2);
    v10 = *(_QWORD *)(a1 + 24);
    v11 = PhysicalAddress;
    v12 = *(_QWORD *)(a1 + 16);
    v13 = *(_BYTE *)(a1 + 40) & 1;
    v14 = *(_QWORD *)(a1 + 32);
    v7 = (char *)((unsigned __int64)v11.QuadPart >> 12);
    v4 = 0;
LABEL_18:
    v15 = IopAddPageToPageMap(v10, v12, v14, (_DWORD)v7, a3, v13, v4);
    if ( v15 != -1073741503 )
      return v15;
    goto LABEL_31;
  }
  if ( v5 == 2 )
  {
    v15 = -1073741503;
    for ( i = 0; i < *(_DWORD *)MmPhysicalMemoryBlock; ++i )
    {
      v17 = *((_QWORD *)MmPhysicalMemoryBlock + 2 * i + 2);
      if ( v17 > (unsigned __int64)v7 )
        break;
      v18 = *((_QWORD *)MmPhysicalMemoryBlock + 2 * i + 3) + v17;
      if ( v18 > (unsigned __int64)v7 )
      {
        if ( a3 <= v18 - (unsigned __int64)v7 )
        {
LABEL_17:
          v14 = *(_QWORD *)(a1 + 32);
          v12 = *(_QWORD *)(a1 + 16);
          v10 = *(_QWORD *)(a1 + 24);
          v13 = *(_BYTE *)(a1 + 40) & 1;
          goto LABEL_18;
        }
        break;
      }
    }
    if ( SpecialMemoryRanges )
    {
      for ( j = 0; j < *(_DWORD *)SpecialMemoryRanges; ++j )
      {
        v20 = *(_QWORD *)(SpecialMemoryRanges + 16LL * j + 16);
        if ( v20 > (unsigned __int64)v7 )
          break;
        v21 = *(_QWORD *)(SpecialMemoryRanges + 16LL * j + 24) + v20;
        if ( v21 > (unsigned __int64)v7 )
        {
          if ( a3 > v21 - (unsigned __int64)v7 )
            goto LABEL_31;
          goto LABEL_17;
        }
      }
    }
    goto LABEL_31;
  }
  v22 = 1;
  while ( a3 )
  {
    if ( MmIsAddressValidEx((__int64)v7) )
    {
      v23 = MmGetPhysicalAddress(v7);
      v24 = IopAddPageToPageMap(
              *(_QWORD *)(a1 + 24),
              *(_QWORD *)(a1 + 16),
              *(_QWORD *)(a1 + 32),
              (unsigned __int64)v23.QuadPart >> 12,
              1LL,
              *(_BYTE *)(a1 + 40) & 1,
              0);
      if ( v24 == -1073741789 )
        return 3221225507LL;
      if ( v24 < 0 )
        v22 = 0;
    }
    v7 += 4096;
    --a3;
  }
  if ( v22 != 1 )
  {
    v15 = -1073741503;
LABEL_31:
    if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
      return 0;
    return v15;
  }
  return 0;
}

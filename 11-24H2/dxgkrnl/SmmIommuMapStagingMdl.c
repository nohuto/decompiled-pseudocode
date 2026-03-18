/*
 * XREFs of SmmIommuMapStagingMdl @ 0x14003B134
 * Callers:
 *     SmmIommuMapReferenced @ 0x14003A270 (SmmIommuMapReferenced.c)
 * Callees:
 *     SmmIoMmuUnmapStagingMdl @ 0x14003B048 (SmmIoMmuUnmapStagingMdl.c)
 *     SmmIoMmuReferenceMdl @ 0x14003B20C (SmmIoMmuReferenceMdl.c)
 *     SmmIommuMapIdentityRange @ 0x14003B548 (SmmIommuMapIdentityRange.c)
 */

__int64 __fastcall SmmIommuMapStagingMdl(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int *v3; // rdi
  unsigned int v4; // esi
  int v7; // r14d
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx

  v3 = a2 + 6;
  v4 = 0;
  while ( 1 )
  {
    LOBYTE(a3) = 1;
    v7 = SmmIoMmuReferenceMdl(a1 + 64, a2, a3);
    if ( v7 < 0 )
      break;
    v8 = a2[7];
    if ( v8 )
    {
      v9 = *(_QWORD *)(a1 + 176);
      v10 = v8 << 12;
      *(_QWORD *)v9 = 0LL;
      *(_WORD *)(v9 + 10) = 0;
      *(_QWORD *)(v9 + 32) = 0LL;
      *(_QWORD *)(v9 + 40) = (unsigned int)v10;
      *(_WORD *)(v9 + 8) = 8 * (((unsigned int)v10 >> 12) + 6);
      v7 = SmmIommuMapIdentityRange(*(_QWORD *)(a1 + 48), v10, *(_QWORD *)(a1 + 176));
      if ( v7 < 0 )
        break;
      v4 = *v3;
    }
    if ( *v3 == a2[4] )
      return (unsigned int)v7;
  }
  if ( v4 )
  {
    a2[4] = v4;
    *v3 = 0;
    SmmIoMmuUnmapStagingMdl(a1, a2);
  }
  return (unsigned int)v7;
}

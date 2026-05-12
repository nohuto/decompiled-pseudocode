/*
 * XREFs of NvmeAdapterGetStorageAdapterProperty @ 0x140199B4C
 * Callers:
 *     NvmeAdapterStorageQueryProperty @ 0x14019D454 (NvmeAdapterStorageQueryProperty.c)
 * Callees:
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetStorageAdapterProperty(__int64 a1, int *a2, int *a3)
{
  unsigned int v3; // ebp
  int v8; // edx
  char v9; // al
  bool v10; // cf

  v3 = *a3;
  if ( (unsigned int)*a3 >= 8 )
  {
    memset_0(a2, 0, (unsigned int)*a3);
    if ( v3 >= 0x1E )
    {
      v8 = v3 < 0x20 ? 30 : 32;
      *a2 = v8;
      a2[1] = v8;
      a2[2] = *(_DWORD *)(a1 + 200);
      a2[3] = *(_DWORD *)(a1 + 204);
      a2[4] = *(_DWORD *)(a1 + 224);
      *((_BYTE *)a2 + 20) = *(_BYTE *)(a1 + 265);
      *((_BYTE *)a2 + 23) = 1;
      v9 = *(_BYTE *)(a1 + 144) & 1;
      *(int *)((char *)a2 + 26) = 1;
      v10 = (unsigned int)*a3 < 0x20;
      *((_BYTE *)a2 + 24) = v9 != 0 ? 20 : 17;
      if ( !v10 )
      {
        *((_BYTE *)a2 + 30) = *(_BYTE *)(a1 + 274);
        *((_BYTE *)a2 + 31) = *(_BYTE *)(a1 + 275);
      }
      *a3 = v8;
    }
    else
    {
      *a2 = 32;
      a2[1] = 32;
      *a3 = 8;
    }
    return 0LL;
  }
  else
  {
    *a3 = 0;
    return 3221225507LL;
  }
}

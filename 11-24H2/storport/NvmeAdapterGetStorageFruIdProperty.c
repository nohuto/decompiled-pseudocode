/*
 * XREFs of NvmeAdapterGetStorageFruIdProperty @ 0x140199C38
 * Callers:
 *     NvmeAdapterStorageQueryProperty @ 0x14019D454 (NvmeAdapterStorageQueryProperty.c)
 * Callees:
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetStorageFruIdProperty(__int64 a1, _DWORD *a2, int *a3)
{
  unsigned int v3; // esi
  __int64 v8; // rdx
  int v9; // ecx

  v3 = *a3;
  if ( (unsigned int)*a3 < 0x10 )
  {
    if ( v3 < 8 )
    {
      *a3 = 0;
      return 3221225507LL;
    }
    goto LABEL_11;
  }
  memset_0(a2, 0, (unsigned int)*a3);
  *a2 = 16;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 1136) + 592LL);
  if ( *(_QWORD *)(v8 + 112) != qword_140170D80 || *(_QWORD *)(v8 + 120) != qword_140170D88 )
  {
    v9 = 28;
    if ( v3 >= 0x1C )
    {
      a2[2] = 16;
      *(_OWORD *)(a2 + 3) = *(_OWORD *)(v8 + 112);
      goto LABEL_10;
    }
LABEL_11:
    a2[1] = 16;
    *a3 = 8;
    return 0LL;
  }
  v9 = 32;
  if ( v3 < 0x20 )
    goto LABEL_11;
  a2[2] = 20;
  *(_OWORD *)(a2 + 3) = *(_OWORD *)(v8 + 4);
  a2[7] = *(_DWORD *)(v8 + 20);
LABEL_10:
  *a3 = v9;
  a2[1] = v9;
  return 0LL;
}

/*
 * XREFs of sub_1405190F0 @ 0x1405190F0
 * Callers:
 *     <none>
 * Callees:
 *     MmFreePagesFromMdl @ 0x1403A37F0 (MmFreePagesFromMdl.c)
 *     MmUnmapReservedMapping @ 0x14040F6F0 (MmUnmapReservedMapping.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

void __fastcall sub_1405190F0(__int64 a1)
{
  void *v2; // rcx
  struct _MDL *v3; // rdi
  void *v4; // rsi

  v2 = *(void **)(a1 + 8);
  v3 = *(struct _MDL **)a1;
  v4 = *(void **)(a1 + 24);
  if ( v2 )
    MmUnmapReservedMapping(v2, *(_DWORD *)(a1 + 16), v3);
  if ( v3 )
  {
    MmFreePagesFromMdl(v3);
    ExFreePool(v3);
  }
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  ExFreePool(v4);
}

/*
 * XREFs of PiSwFindBusRelations @ 0x1408355B4
 * Callers:
 *     PiSwFindChildren @ 0x140836178 (PiSwFindChildren.c)
 *     PiSwCloseDescendants @ 0x140A822E4 (PiSwCloseDescendants.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1403F7C80 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PiSwFindBusRelations(__int64 a1)
{
  bool v1; // zf
  _OWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 8) == 0LL;
  memset(v3, 0, sizeof(v3));
  if ( v1 )
    return 0LL;
  v3[0] = *(_OWORD *)a1;
  return RtlLookupElementGenericTableAvl(&PiSwBusRelationsTable, v3);
}

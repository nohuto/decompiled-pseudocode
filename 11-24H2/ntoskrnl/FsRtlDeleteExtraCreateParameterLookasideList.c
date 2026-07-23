/*
 * XREFs of FsRtlDeleteExtraCreateParameterLookasideList @ 0x140707DA0
 * Callers:
 *     <none>
 * Callees:
 *     ExDeletePagedLookasideList @ 0x140472030 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x140472060 (ExDeleteNPagedLookasideList.c)
 */

void __stdcall FsRtlDeleteExtraCreateParameterLookasideList(PVOID Lookaside, FSRTL_ECP_LOOKASIDE_FLAGS Flags)
{
  if ( (Flags & 2) != 0 )
    ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)Lookaside);
  else
    ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)Lookaside);
}

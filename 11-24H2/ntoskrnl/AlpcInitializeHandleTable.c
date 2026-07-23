/*
 * XREFs of AlpcInitializeHandleTable @ 0x140867CBC
 * Callers:
 *     AlpcpCreateConnectionPort @ 0x14086671C (AlpcpCreateConnectionPort.c)
 *     AlpcpCreateClientPort @ 0x140868FD0 (AlpcpCreateClientPort.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x1403EFFF0 (ExAllocateFromPagedLookasideList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall AlpcInitializeHandleTable(__int64 a1)
{
  PVOID v2; // rax

  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  v2 = ExAllocateFromPagedLookasideList(&stru_140E27240);
  *(_QWORD *)a1 = v2;
  if ( !v2 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 16) = 16LL;
  memset_0(v2, 0, 0x80uLL);
  return 0LL;
}

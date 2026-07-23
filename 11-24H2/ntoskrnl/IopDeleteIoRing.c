/*
 * XREFs of IopDeleteIoRing @ 0x140714060
 * Callers:
 *     <none>
 * Callees:
 *     IopUnlockAndFreeMdl @ 0x14025FCC8 (IopUnlockAndFreeMdl.c)
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IopIoRingCleanupRegBufferArray @ 0x1407140D4 (IopIoRingCleanupRegBufferArray.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteIoRing(__int64 a1)
{
  void *v2; // rcx
  struct _MDL *v3; // rcx
  ULONG_PTR v4; // rcx
  void *v5; // rcx

  if ( *(_QWORD *)(a1 + 184) )
    IopIoRingCleanupRegBufferArray(*(unsigned int *)(a1 + 176));
  v2 = *(void **)(a1 + 200);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x46527249u);
  v3 = *(struct _MDL **)(a1 + 72);
  if ( v3 )
    IopUnlockAndFreeMdl(v3);
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
    MiRemoveFromSystemSpace(v4, 1);
  v5 = *(void **)(a1 + 56);
  if ( v5 )
    ObfDereferenceObject(v5);
}

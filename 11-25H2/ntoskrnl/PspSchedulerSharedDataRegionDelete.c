/*
 * XREFs of PspSchedulerSharedDataRegionDelete @ 0x140A5FA20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     MiRemoveFromSystemSpace @ 0x1402A8BCC (MiRemoveFromSystemSpace.c)
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 */

void __fastcall PspSchedulerSharedDataRegionDelete(__int64 a1)
{
  unsigned __int64 v1; // rdx
  ULONG_PTR v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v1 = *(_QWORD *)(a1 + 184);
  if ( v1 )
  {
    MiUnmapViewOfSection(*(PRKPROCESS *)(a1 + 160), v1, 0, 0);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 176);
  if ( v3 )
  {
    MiRemoveFromSystemSpace(v3, 1);
    *(_QWORD *)(a1 + 176) = 0LL;
  }
  v4 = *(void **)(a1 + 168);
  if ( v4 )
  {
    ObfDereferenceObjectWithTag(v4, 0x61537350u);
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  v5 = *(void **)(a1 + 160);
  if ( v5 )
  {
    ObfDereferenceObjectWithTag(v5, 0x61537350u);
    *(_QWORD *)(a1 + 160) = 0LL;
  }
}

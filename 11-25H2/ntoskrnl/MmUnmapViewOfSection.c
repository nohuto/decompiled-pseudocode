/*
 * XREFs of MmUnmapViewOfSection @ 0x1408B42E0
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(struct _KPROCESS *a1)
{
  return MiUnmapViewOfSection(a1);
}

/*
 * XREFs of MmUnmapViewOfSection @ 0x1408E4C50
 * Callers:
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(struct _KPROCESS *a1)
{
  return MiUnmapViewOfSection(a1);
}

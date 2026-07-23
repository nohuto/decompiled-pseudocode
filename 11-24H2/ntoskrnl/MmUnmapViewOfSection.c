/*
 * XREFs of MmUnmapViewOfSection @ 0x140896C60
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x140896E14 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(struct _KPROCESS *a1)
{
  return MiUnmapViewOfSection(a1);
}

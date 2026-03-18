/*
 * XREFs of CmSiUnmapViewOfSection @ 0x140499840
 * Callers:
 *     HvpViewMapFreeView @ 0x140A4A284 (HvpViewMapFreeView.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1406A6950 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall CmSiUnmapViewOfSection(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}

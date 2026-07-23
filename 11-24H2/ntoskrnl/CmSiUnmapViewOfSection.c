/*
 * XREFs of CmSiUnmapViewOfSection @ 0x1404941D0
 * Callers:
 *     HvpViewMapFreeView @ 0x140A40FA4 (HvpViewMapFreeView.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1406A78F0 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall CmSiUnmapViewOfSection(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}

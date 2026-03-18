/*
 * XREFs of FxProbeAndLockForWrite @ 0x140020940
 * Callers:
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x140020120 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxProbeAndLockForWrite(_MDL *Mdl, char a2)
{
  MmProbeAndLockPages(Mdl, 1, IoWriteAccess);
  return 0LL;
}

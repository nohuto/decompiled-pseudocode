/*
 * XREFs of ?GetFullMDL@VIDMM_PROCESS_HEAP@@UEAAPEAU_MDL@@PEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400A1B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _MDL *__fastcall VIDMM_PROCESS_HEAP::GetFullMDL(VIDMM_PROCESS_HEAP *this, struct VIDMM_HEAP_ALLOC *a2)
{
  return (struct _MDL *)*((_QWORD *)a2 + 12);
}

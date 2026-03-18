/*
 * XREFs of ?GetMDLForRange@VIDMM_PROCESS_HEAP@@UEAAPEAU_MDL@@PEAUVIDMM_HEAP_ALLOC@@_K1@Z @ 0x1400A1B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _MDL *__fastcall VIDMM_PROCESS_HEAP::GetMDLForRange(VIDMM_PROCESS_HEAP *this, struct VIDMM_HEAP_ALLOC *a2)
{
  return (struct _MDL *)*((_QWORD *)a2 + 13);
}

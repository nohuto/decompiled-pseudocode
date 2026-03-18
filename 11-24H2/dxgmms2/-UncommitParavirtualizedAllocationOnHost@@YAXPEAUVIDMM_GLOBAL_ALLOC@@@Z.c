/*
 * XREFs of ?UncommitParavirtualizedAllocationOnHost@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140096620
 * Callers:
 *     ??1VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1400F5BA4 (--1VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall UncommitParavirtualizedAllocationOnHost(struct VIDMM_GLOBAL_ALLOC *a1)
{
  struct _MDL *v2; // rcx

  v2 = (struct _MDL *)*((_QWORD *)a1 + 51);
  if ( v2 )
  {
    MmFreePagesFromMdl(v2);
    ExFreePoolWithTag(*((PVOID *)a1 + 51), 0);
    *((_QWORD *)a1 + 51) = 0LL;
  }
}

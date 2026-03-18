/*
 * XREFs of ?UnlockHeapAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1E@Z @ 0x1400A4270
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z @ 0x1400DA2EC (-VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::UnlockHeapAllocation(
        VIDMM_PROCESS_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  void *v5; // rcx

  if ( a5 )
  {
    v5 = (void *)*((_QWORD *)a2 + 13);
    *((_QWORD *)a2 + 13) = 0LL;
  }
  else
  {
    v5 = (void *)*((_QWORD *)a2 + 12);
    *((_QWORD *)a2 + 12) = 0LL;
  }
  VidMmiUnlockAllocation(v5);
}

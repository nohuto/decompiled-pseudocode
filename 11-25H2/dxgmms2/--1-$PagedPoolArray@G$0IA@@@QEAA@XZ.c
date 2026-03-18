/*
 * XREFs of ??1?$PagedPoolArray@G$0IA@@@QEAA@XZ @ 0x140098398
 * Callers:
 *     ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400984A4 (-ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@QEAAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 */

void __fastcall PagedPoolArray<unsigned short,128>::~PagedPoolArray<unsigned short,128>(void **a1)
{
  if ( *a1 != a1 + 1 )
    operator delete(*a1);
}

/*
 * XREFs of ?SetMemoryRefreshIdle@VIDMM_GLOBAL@@QEAAXXZ @ 0x14004EA48
 * Callers:
 *     ?Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_HEAP_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ33PEAX@Z5TVIDMM_ROTATE_FLAGS@@@Z @ 0x1400A3D10 (-Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_HEAP_ALLOC@@W4_MM_ROTATE_DIRECTION@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_GLOBAL::SetMemoryRefreshIdle(VIDMM_GLOBAL *this)
{
  if ( *((_DWORD *)this + 10048) != -1 )
    (*((void (__fastcall **)(_QWORD))this + 5004))(*((_QWORD *)this + 5010));
}

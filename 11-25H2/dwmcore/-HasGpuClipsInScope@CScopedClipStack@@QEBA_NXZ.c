/*
 * XREFs of ?HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x1800815D0
 * Callers:
 *     ?Initialize@CSubDrawingContext@@AEAAJXZ @ 0x1800814C4 (-Initialize@CSubDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScopedClipStack::HasGpuClipsInScope(CScopedClipStack *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 1);
  return v1 != *(_QWORD *)this && *(_QWORD *)(v1 - 184);
}

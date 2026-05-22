/*
 * XREFs of ?SetRotationAngle@HardwareCursorVisual@SystemCursors@@UEAAJM@Z @ 0x1800FA4C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemCursors::HardwareCursorVisual::SetRotationAngle(
        SystemCursors::HardwareCursorVisual *this,
        float a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5));
  return 0LL;
}

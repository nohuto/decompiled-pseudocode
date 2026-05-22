/*
 * XREFs of ?SetOffset@HardwareCursorVisual@SystemCursors@@UEAAJHH@Z @ 0x1800FC150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemCursors::HardwareCursorVisual::SetOffset(SystemCursors::HardwareCursorVisual *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 64LL))(*((_QWORD *)this + 5));
  return 0LL;
}

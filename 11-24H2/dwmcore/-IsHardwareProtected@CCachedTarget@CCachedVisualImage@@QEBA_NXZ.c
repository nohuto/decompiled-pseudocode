/*
 * XREFs of ?IsHardwareProtected@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x18028D150
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1801AE0BC (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::CCachedTarget::IsHardwareProtected(CCachedVisualImage::CCachedTarget *this)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 56LL))(v1);
}

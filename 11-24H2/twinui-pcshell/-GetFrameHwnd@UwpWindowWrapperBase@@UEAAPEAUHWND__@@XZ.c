/*
 * XREFs of ?GetFrameHwnd@UwpWindowWrapperBase@@UEAAPEAUHWND__@@XZ @ 0x18018F9B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

HWND __fastcall UwpWindowWrapperBase::GetFrameHwnd(UwpWindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 232LL))(*((_QWORD *)this + 33));
  return (HWND)*((_QWORD *)this + 15);
}

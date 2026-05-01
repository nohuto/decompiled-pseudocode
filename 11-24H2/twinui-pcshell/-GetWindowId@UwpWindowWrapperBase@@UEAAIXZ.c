/*
 * XREFs of ?GetWindowId@UwpWindowWrapperBase@@UEAAIXZ @ 0x18010F470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::GetWindowId(UwpWindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 232LL))(*((_QWORD *)this + 33));
  return *((unsigned int *)this + 70);
}

/*
 * XREFs of ?GetLastActivationFILETIME@CWin32ApplicationView@@UEAAJPEAU_FILETIME@@@Z @ 0x1801D8970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWin32ApplicationView::GetLastActivationFILETIME(CWin32ApplicationView *this, struct _FILETIME *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _FILETIME *))(**((_QWORD **)this + 27) + 40LL))(
           *((_QWORD *)this + 27),
           a2);
}

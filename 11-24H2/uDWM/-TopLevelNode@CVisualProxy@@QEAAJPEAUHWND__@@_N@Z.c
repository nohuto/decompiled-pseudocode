/*
 * XREFs of ?TopLevelNode@CVisualProxy@@QEAAJPEAUHWND__@@_N@Z @ 0x180030340
 * Callers:
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x1800300C0 (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualProxy::TopLevelNode(CVisualProxy *this, HWND a2, __int64 a3, __int64 a4)
{
  LOBYTE(a4) = 1;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, HWND, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 296LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2,
           a4);
}

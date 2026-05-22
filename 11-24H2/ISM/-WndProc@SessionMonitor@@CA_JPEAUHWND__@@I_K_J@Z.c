/*
 * XREFs of ?WndProc@SessionMonitor@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180084730
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LRESULT __fastcall SessionMonitor::WndProc(HWND a1, UINT a2, WPARAM a3, LPARAM a4)
{
  int v4; // edi
  int v5; // esi
  struct SessionMonitor *v7; // rbx
  _DWORD *v8; // rax

  v4 = a4;
  v5 = a3;
  if ( a2 == 689 )
  {
    v7 = SessionMonitor::_instance;
    if ( SessionMonitor::_instance )
    {
      v8 = operator new(8uLL);
      *v8 = v5;
      v8[1] = v4;
      (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), _DWORD *, __int64))(**((_QWORD **)v7 + 2) + 152LL))(
        *((_QWORD *)v7 + 2),
        lambda_62513fe2106ea5be335490f61af9321d_::_lambda_invoker_cdecl_,
        v8,
        3LL);
    }
  }
  else
  {
    if ( a2 != 2 )
      return DefWindowProcW(a1, a2, a3, a4);
    PostQuitMessage(0);
  }
  return 0LL;
}

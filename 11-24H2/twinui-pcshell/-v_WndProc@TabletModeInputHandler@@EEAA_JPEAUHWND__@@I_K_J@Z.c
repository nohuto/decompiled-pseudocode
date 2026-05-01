/*
 * XREFs of ?v_WndProc@TabletModeInputHandler@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1804D6470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LRESULT __fastcall TabletModeInputHandler::v_WndProc(
        TabletModeInputHandler *this,
        HWND a2,
        UINT a3,
        WPARAM a4,
        LPARAM lParam)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+34h] [rbp+Ch]

  v6 = 0LL;
  v7 = *((_QWORD *)this + 2);
  if ( !v7 )
    return DefWindowProcW(*((HWND *)this + 1), a3, a4, lParam);
  v11 = (__int16)lParam;
  v12 = SWORD1(lParam);
  switch ( a3 )
  {
    case 0x100u:
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 56LL))(v7, (unsigned int)a4);
      return DefWindowProcW(*((HWND *)this + 1), a3, a4, lParam);
    case 0x101u:
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, (unsigned int)a4);
      return DefWindowProcW(*((HWND *)this + 1), a3, a4, lParam);
    case 0x200u:
      (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v7 + 32LL))(v7, 0LL, &v11);
      return v6;
    case 0x201u:
      (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v7 + 24LL))(v7, 0LL, &v11);
      return v6;
    case 0x202u:
      (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v7 + 40LL))(v7, 0LL, &v11);
      return v6;
  }
  if ( a3 != 533 )
    return DefWindowProcW(*((HWND *)this + 1), a3, a4, lParam);
  (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v7 + 72LL))(v7, a2);
  return v6;
}

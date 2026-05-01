/*
 * XREFs of ?v_GetProcessId@CWin32ApplicationView@@EEAAJPEAK@Z @ 0x180311280
 * Callers:
 *     ?GetHostId@CWin32ApplicationView@@UEAAJPEA_K@Z @ 0x180310210 (-GetHostId@CWin32ApplicationView@@UEAAJPEA_K@Z.c)
 *     ?UpdateEngagementFlags@CWin32ApplicationView@@UEAAJW4VIEW_ENGAGEMENT_FLAGS@@0@Z @ 0x180311150 (-UpdateEngagementFlags@CWin32ApplicationView@@UEAAJW4VIEW_ENGAGEMENT_FLAGS@@0@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWin32ApplicationView::v_GetProcessId(CWin32ApplicationView *this, unsigned int *a2)
{
  HWND v3; // rax

  *a2 = 0;
  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  return GetWindowThreadProcessId(v3, a2) == 0 ? 0x80004005 : 0;
}

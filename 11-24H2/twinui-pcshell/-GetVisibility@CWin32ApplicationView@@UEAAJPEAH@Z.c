/*
 * XREFs of ?GetVisibility@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x180148770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

HRESULT __fastcall CWin32ApplicationView::GetVisibility(CWin32ApplicationView *this, int *a2)
{
  int v2; // ebx
  __int64 v4; // rcx
  HWND v5; // rax
  HRESULT result; // eax
  int pvAttribute; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0;
  v4 = *((_QWORD *)this + 27);
  pvAttribute = 0;
  v5 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  result = DwmGetWindowAttribute(v5, 0xEu, &pvAttribute, 4u);
  if ( result >= 0 )
  {
    LOBYTE(v2) = pvAttribute == 0;
    result = 0;
    *a2 = v2;
  }
  return result;
}

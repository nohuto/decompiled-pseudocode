/*
 * XREFs of ?GetThreadId@CImmersiveApplicationWindow@@UEAAJPEAK@Z @ 0x180307DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 */

signed int __fastcall CImmersiveApplicationWindow::GetThreadId(CImmersiveApplicationWindow *this, unsigned int *a2)
{
  HWND v2; // rcx
  DWORD WindowThreadProcessId; // ebx
  signed int result; // eax
  DWORD dwProcessId; // [rsp+30h] [rbp+8h] BYREF

  v2 = (HWND)*((_QWORD *)this + 2);
  dwProcessId = 0;
  WindowThreadProcessId = GetWindowThreadProcessId(v2, &dwProcessId);
  if ( WindowThreadProcessId )
  {
    result = 0;
  }
  else
  {
    result = ResultFromKnownLastError();
    if ( result < 0 )
      return result;
  }
  *a2 = WindowThreadProcessId;
  return result;
}

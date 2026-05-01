/*
 * XREFs of ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x18009C70C
 * Callers:
 *     ReportHangInternal @ 0x18009C398 (ReportHangInternal.c)
 * Callees:
 *     SetLastError_0 @ 0x18007316C (SetLastError_0.c)
 *     GetProcAddress_0 @ 0x180073190 (GetProcAddress_0.c)
 *     LoadLibraryExW_0 @ 0x1800731D8 (LoadLibraryExW_0.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x1800738AC (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterWindowMessageWPresent @ 0x18007398C (IsRegisterWindowMessageWPresent.c)
 *     ??1?$unique_any@U?$handle_traits@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@Z$0A@@tlx@@@tlx@@QEAA@XZ @ 0x18009C378 (--1-$unique_any@U-$handle_traits@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@Z$0A@@tlx@@@t.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UtilRegisterErrorReportingDialog(HWND hwnd, unsigned int a2, unsigned int *a3)
{
  HMODULE v5; // rbx
  DWORD v6; // ecx
  UINT v7; // eax
  unsigned int v8; // edi
  FARPROC RegisterErrorReportingDialog; // rax
  HMODULE Library; // [rsp+40h] [rbp+18h] BYREF

  Library = 0LL;
  if ( !hwnd || !a2 )
    goto LABEL_13;
  if ( !IsRegisterWindowMessageWPresent() || !IsChangeWindowMessageFilterExPresent() )
  {
    v6 = 127;
    goto LABEL_12;
  }
  Library = LoadLibraryExW_0(L"user32.dll", 0LL, 0x800u);
  v5 = Library;
  if ( !Library )
  {
    v6 = 126;
LABEL_12:
    v8 = 0;
    SetLastError_0(v6);
    goto LABEL_14;
  }
  v7 = RegisterWindowMessageW(L"WerHangRepMessage");
  if ( !v7 )
    goto LABEL_13;
  v8 = ChangeWindowMessageFilterEx(hwnd, v7, 1u, 0LL);
  if ( v8 )
  {
    RegisterErrorReportingDialog = GetProcAddress_0(v5, "RegisterErrorReportingDialog");
    if ( RegisterErrorReportingDialog )
    {
      v8 = ((__int64 (__fastcall *)(HWND, _QWORD))RegisterErrorReportingDialog)(hwnd, a2);
      goto LABEL_14;
    }
LABEL_13:
    v8 = 0;
  }
LABEL_14:
  tlx::unique_any<tlx::handle_traits<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),0>>::~unique_any<tlx::handle_traits<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),0>>(&Library);
  return v8;
}

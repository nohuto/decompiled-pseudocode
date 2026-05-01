/*
 * XREFs of ?CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x1800CB624
 * Callers:
 *     ?GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x1800CB4D0 (-GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x180045678 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     ?GetGhostWindowIfHung@CWin32ApplicationView@@AEAAPEAUHWND__@@PEAU2@@Z @ 0x1800CB734 (-GetGhostWindowIfHung@CWin32ApplicationView@@AEAAPEAUHWND__@@PEAU2@@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWin32ApplicationView::CopyCloakableWindowsFromGatherer(
        CWin32ApplicationView *this,
        unsigned int *a2,
        HWND **a3)
{
  unsigned int v6; // ebx
  HWND *v7; // rax
  unsigned int v8; // ebx
  size_t v10; // rax
  HWND v11; // rax
  CWin32ApplicationView *v12; // rcx
  HWND GhostWindowIfHung; // rax
  CWin32ApplicationView *v14; // rcx
  unsigned int v15; // ebp
  HWND *v16; // rdi
  HWND *v17; // r15
  HWND v18; // rax
  __int64 v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0;
  *a3 = 0LL;
  v6 = *((_DWORD *)this + 60) + 1;
  if ( !is_mul_ok(v6, 8uLL) )
  {
    v8 = -2147024362;
    goto LABEL_4;
  }
  v7 = (HWND *)CoTaskMemAlloc(8LL * (unsigned int)(*((_DWORD *)this + 60) + 1));
  *a3 = v7;
  if ( !v7 )
  {
    v8 = -2147024882;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A4,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)v8);
    return v8;
  }
  v10 = CTCoAllocPolicy::_CoTaskMemSize(v7);
  memset_0(*a3, 0, v10);
  v11 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  GhostWindowIfHung = CWin32ApplicationView::GetGhostWindowIfHung(v12, v11);
  v14 = (CWin32ApplicationView *)*a3;
  v15 = 1;
  **a3 = GhostWindowIfHung;
  v16 = (HWND *)*((_QWORD *)this + 29);
  v17 = &v16[*((_QWORD *)this + 30)];
  while ( v16 != v17 )
  {
    v18 = CWin32ApplicationView::GetGhostWindowIfHung(v14, *v16);
    v14 = (CWin32ApplicationView *)*a3;
    v19 = v15++;
    ++v16;
    (*a3)[v19] = v18;
  }
  *a2 = v6;
  return 0LL;
}

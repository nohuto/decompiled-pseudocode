/*
 * XREFs of ?GetLastActivationTimestamp@CWin32ApplicationView@@UEAAJPEA_K@Z @ 0x1801FC920
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnbiasedInterruptTimeFromFileTime@@YA_KAEBU_FILETIME@@@Z @ 0x1801FC994 (-UnbiasedInterruptTimeFromFileTime@@YA_KAEBU_FILETIME@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWin32ApplicationView::GetLastActivationTimestamp(CWin32ApplicationView *this, unsigned __int64 *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 27);
  v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, struct _FILETIME *))(*(_QWORD *)v3 + 40LL))(v3, &v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22F,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    *a2 = UnbiasedInterruptTimeFromFileTime(&v8);
    return 0LL;
  }
}

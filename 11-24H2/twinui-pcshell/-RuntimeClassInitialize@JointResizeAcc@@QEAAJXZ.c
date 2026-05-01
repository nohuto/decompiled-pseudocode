/*
 * XREFs of ?RuntimeClassInitialize@JointResizeAcc@@QEAAJXZ @ 0x1800157EC
 * Callers:
 *     ??$MakeAndInitialize@VJointResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVJointResizeAcc@@@Z @ 0x1802A7F4C (--$MakeAndInitialize@VJointResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVJointResizeAcc@@@Z.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180016930 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

__int64 __fastcall JointResizeAcc::RuntimeClassInitialize(JointResizeAcc *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  const char *v5; // r9
  int v6; // [rsp+20h] [rbp-98h]
  WNDCLASSEXW v7; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (char *)this + 72,
         L"Joint Resize Divider",
         -1LL);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v7.cbSize = 80;
    memset_0(&v7.style, 0, 0x4CuLL);
    v7.cbWndExtra = 8;
    v7.lpfnWndProc = (WNDPROC)CWRLImpWndProc<JointResizeAcc>::s_WndProcBase;
    v7.hInstance = &_ImageBase;
    v7.lpszClassName = L"JointResizeAcc";
    RegisterClassExW(&v7);
    CreateWindowExW(0x8200000u, L"JointResizeAcc", 0LL, 0x80000000, 0, 0, 0, 0, HWND_MESSAGE, 0LL, &_ImageBase, this);
    if ( *((_QWORD *)this + 5) )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x88,
               (unsigned int)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
               v5);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (unsigned int)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
      (const char *)(unsigned int)v2,
      v6);
    return v3;
  }
}

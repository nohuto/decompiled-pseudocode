/*
 * XREFs of ?Finalize@SingleShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x1800CA920
 * Callers:
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x1800CA440 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800C9E90 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180231DC8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::SingleShadowWindowGatherer::Finalize(
        __int64 a1,
        _QWORD *a2)
{
  HWND v2; // rdi
  int WindowLongPtrW; // eax
  HWND Window; // rax
  HWND v8; // rcx
  const char *v9; // r9
  LONG bottom; // eax
  LONG right; // ecx
  LONG top; // edx
  LONG left; // r8d
  void *v14; // r8
  __int64 v15; // rdx
  int v16; // edi
  _QWORD *v17; // rax
  _DWORD v18[4]; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v2 = *(HWND *)(a1 + 32);
  if ( !v2 )
    return 0LL;
  WindowLongPtrW = GetWindowLongPtrW(v2, -16);
  if ( (WindowLongPtrW & 0x10000000) == 0 )
    return 2147500037LL;
  if ( (*(_QWORD *)&WindowLongPtrW & 0xC70000LL) != 0 )
    return 2147500037LL;
  if ( (GetWindowLongPtrW(v2, -20) & 0x80080) != 0x80080 )
    return 2147500037LL;
  Window = GetWindow(v2, 4u);
  if ( Window )
  {
    if ( IsWindowVisible(Window) )
      return 2147500037LL;
  }
  v8 = *(HWND *)(a1 + 32);
  Rect = 0LL;
  if ( !GetWindowRect(v8, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x171,
             (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
             v9);
  bottom = *(_DWORD *)(a1 + 28);
  right = *(_DWORD *)(a1 + 24);
  if ( Rect.bottom > bottom )
    bottom = Rect.bottom;
  top = *(_DWORD *)(a1 + 20);
  if ( Rect.right > right )
    right = Rect.right;
  left = *(_DWORD *)(a1 + 16);
  if ( Rect.top < top )
    top = Rect.top;
  v18[1] = top;
  if ( Rect.left < left )
    left = Rect.left;
  v18[2] = right;
  v18[0] = left;
  v18[3] = bottom;
  if ( !(unsigned __int8)Geometry::operator==(v18, &Rect) )
    return 0LL;
  v15 = a2[1];
  v16 = 0;
  if ( v15 != a2[3]
    || (v16 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)a2,
                v15 + 1,
                v14),
        v16 >= 0) )
  {
    v17 = (_QWORD *)(*a2 + 8 * a2[1]++);
    if ( !v17 )
      return 0LL;
    *v17 = *(_QWORD *)(a1 + 32);
  }
  if ( v16 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x174,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
    (const char *)(unsigned int)v16);
  return (unsigned int)v16;
}

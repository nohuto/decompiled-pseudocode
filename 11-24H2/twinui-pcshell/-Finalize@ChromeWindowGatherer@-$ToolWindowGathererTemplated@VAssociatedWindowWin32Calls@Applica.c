/*
 * XREFs of ?Finalize@ChromeWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x1800CA774
 * Callers:
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x1800CA440 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800C9E90 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?CheckBorderWindowAttributes@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x1800CB274 (-CheckBorderWindowAttributes@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applicati.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::ChromeWindowGatherer::Finalize(
        __int64 a1,
        _QWORD *a2)
{
  HWND *v2; // rbx
  HWND v6; // rcx
  HWND *v7; // rbp
  HWND *v8; // r14
  HWND v9; // rdi
  void *v10; // r8
  signed int Error; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  HWND v14; // rdi
  HWND *v15; // rdx
  int v16[4]; // [rsp+30h] [rbp-478h] BYREF
  __int128 v17; // [rsp+40h] [rbp-468h] BYREF
  WCHAR ClassName[264]; // [rsp+50h] [rbp-458h] BYREF
  WCHAR String2[264]; // [rsp+260h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4A8h] [rbp+0h]

  v2 = (HWND *)(a1 + 32);
  if ( !*(_QWORD *)(a1 + 32) )
    return 0LL;
  memset_0(ClassName, 0, 0x208uLL);
  v6 = *v2;
  v16[0] = 0;
  if ( GetClassNameW(v6, ClassName, 260) )
  {
    v7 = v2 + 4;
    v8 = v2;
    do
    {
      v9 = *v8;
      if ( !GetClassNameW(*v8, String2, 260) )
        break;
      if ( CompareStringOrdinal(ClassName, -1, String2, -1, 0) != 2 )
        break;
      v17 = *(_OWORD *)(a1 + 16);
      if ( (int)ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::CheckBorderWindowAttributes(
                  &v17,
                  v9,
                  v10,
                  v16) < 0 )
        break;
      ++v8;
    }
    while ( v8 != v7 );
    if ( (v16[0] & 0xF) == 0xF )
    {
      while ( v2 != v7 )
      {
        v13 = a2[1];
        v14 = *v2;
        if ( v13 != a2[3]
          || (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)a2,
                    v13 + 1,
                    v10) >= 0 )
        {
          v15 = (HWND *)(*a2 + 8 * a2[1]++);
          if ( v15 )
            *v15 = v14;
        }
        ++v2;
      }
    }
    return 0LL;
  }
  Error = ResultFromKnownLastError();
  v12 = Error;
  if ( Error < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x133,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
      (const char *)(unsigned int)Error);
  return v12;
}

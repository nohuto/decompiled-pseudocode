/*
 * XREFs of ?ExcludeWindow@VirtualDesktopGestureWindow@@IEAAJPEAUHWND__@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@1@Z @ 0x18055F734
 * Callers:
 *     ?GetFilterForDesktop@VirtualDesktopGestureWindow@@IEAAJPEAUIVirtualDesktop@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@1@Z @ 0x18055FF58 (-GetFilterForDesktop@VirtualDesktopGestureWindow@@IEAAJPEAUIVirtualDesktop@@AEAV-$CCoSimpleArray.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800C9E90 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?RemoveAt@?$CTSimpleArray@PEAUUiaPropertyChangedEventArgs@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUUiaPropertyChangedEventArgs@@@@V?$CSimpleArrayStandardCompareHelper@PEAUUiaPropertyChangedEventArgs@@@@V?$CSimpleArrayStandardMergeHelper@PEAUUiaPropertyChangedEventArgs@@@@@@QEAAJ_K@Z @ 0x180310B04 (-RemoveAt@-$CTSimpleArray@PEAUUiaPropertyChangedEventArgs@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUU.c)
 *     ??$FindEx@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@?$CTSimpleFixedArray@PEAUHWND__@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@QEBAJAEBV?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@AEBQEAUHWND__@@PEA_K_K@Z @ 0x18055BA1C (--$FindEx@V-$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@-$CTSimpleFixedArray@PEAUHWND__@@V.c)
 */

__int64 __fastcall VirtualDesktopGestureWindow::ExcludeWindow(unsigned __int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v12; // rcx
  void *v13; // r8
  __int64 v14; // rdx
  __int64 *v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = a2;
  v17 = a1;
  if ( (int)CTSimpleFixedArray<HWND__ *,CSimpleArrayStandardCompareHelper<HWND__ *>>::FindEx<CSimpleArrayStandardCompareHelper<HWND__ *>>(
              a3,
              a2,
              &v18,
              &v17) >= 0 )
  {
    v17 = 0LL;
    v9 = CTSimpleFixedArray<HWND__ *,CSimpleArrayStandardCompareHelper<HWND__ *>>::FindEx<CSimpleArrayStandardCompareHelper<HWND__ *>>(
           v7,
           v6,
           &v18,
           &v17);
    if ( v9 >= 0 )
      v9 = CTSimpleArray<UiaPropertyChangedEventArgs *,4294967294,CTPolicyCoTaskMem<UiaPropertyChangedEventArgs *>,CSimpleArrayStandardCompareHelper<UiaPropertyChangedEventArgs *>,CSimpleArrayStandardMergeHelper<UiaPropertyChangedEventArgs *>>::RemoveAt(
             v8,
             v17);
    if ( v9 < 0 )
    {
      v10 = 541LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  if ( (unsigned int)CTSimpleFixedArray<HWND__ *,CSimpleArrayStandardCompareHelper<HWND__ *>>::FindEx<CSimpleArrayStandardCompareHelper<HWND__ *>>(
                       a4,
                       v6,
                       &v18,
                       &v17) == -2147319765 )
  {
    v14 = a4[1];
    v9 = 0;
    if ( v14 != a4[3]
      || (v9 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 v12,
                 v14 + 1,
                 v13),
          v9 >= 0) )
    {
      v15 = (__int64 *)(*a4 + 8 * a4[1]++);
      if ( !v15 )
        return 0LL;
      *v15 = a2;
    }
    if ( v9 < 0 )
    {
      v10 = 547LL;
      goto LABEL_6;
    }
  }
  return 0LL;
}

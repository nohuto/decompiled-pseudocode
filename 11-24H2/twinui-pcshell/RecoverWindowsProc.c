/*
 * XREFs of RecoverWindowsProc @ 0x180140AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x18014075C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z @ 0x180140BC8 (-IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z.c)
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180140C80 (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180140CA8 (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180140CD0 (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall RecoverWindowsProc(HWND a1, _QWORD *a2)
{
  HWND v3; // rdx
  HWND v4; // rdx
  void *v5; // r8
  HWND v6; // rdx
  bool v7; // al
  __int64 v9; // rdx
  _OWORD *v10; // r8
  HWND v11; // rdx
  HWND hWnd[2]; // [rsp+20h] [rbp-10h] BYREF

  hWnd[1] = 0LL;
  hWnd[0] = a1;
  if ( !IsWindowVisible(a1) || !(unsigned int)GetWindowBand(hWnd[0], &hWnd[1]) )
    return 1LL;
  if ( (LODWORD(hWnd[1]) == 1 || LODWORD(hWnd[1]) == 8) && LODWORD(hWnd[1]) != 1 )
  {
    v7 = !CApplicationManagerUtility::IsOwnedWindow((CApplicationManagerUtility *)hWnd[0], (HWND)LODWORD(hWnd[1]))
      && CApplicationManagerUtility::IsTrayWindowStyleCheck(hWnd[0], v11);
    BYTE4(hWnd[1]) = 0;
LABEL_9:
    if ( !v7 )
      return 1LL;
    goto LABEL_12;
  }
  if ( !(unsigned __int8)CApplicationManagerUtility::IsClassicApplication(hWnd[0], LODWORD(hWnd[1])) )
    return 1LL;
  if ( CApplicationManagerUtility::IsForcedAppWindow((CApplicationManagerUtility *)hWnd[0], v3) )
  {
    BYTE4(hWnd[1]) = 0;
  }
  else
  {
    if ( !CApplicationManagerUtility::IsOwnedWindow((CApplicationManagerUtility *)hWnd[0], v4) )
    {
      BYTE4(hWnd[1]) = 0;
      v7 = CApplicationManagerUtility::IsTrayWindowStyleCheck(hWnd[0], v6);
      goto LABEL_9;
    }
    BYTE4(hWnd[1]) = 1;
  }
LABEL_12:
  v9 = a2[1];
  if ( v9 != a2[3]
    || (int)CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
              (__int64)a2,
              v9 + 1,
              v5) >= 0 )
  {
    ++a2[1];
    v10 = (_OWORD *)(16LL * a2[1] + *a2 - 16LL);
    if ( v10 )
      *v10 = *(_OWORD *)hWnd;
  }
  return 1LL;
}

/*
 * XREFs of ShouldWindowBeConsideredForRecovery @ 0x180161B60
 * Callers:
 *     RecoverWindowsProc @ 0x180161B30 (RecoverWindowsProc.c)
 * Callees:
 *     ?IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z @ 0x180161C20 (-IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180161C84 (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180161CAC (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180161CF8 (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 */

bool __fastcall ShouldWindowBeConsideredForRecovery(HWND a1, HWND *a2)
{
  char v3; // di
  _DWORD *v5; // rsi
  HWND v6; // rdx
  HWND v7; // rdx
  HWND v8; // rdx
  HWND v9; // rdx
  CApplicationManagerUtility *v10; // rcx
  HWND v11; // rdx

  *a2 = a1;
  if ( !IsWindowVisible(a1) )
    return 0;
  v5 = a2 + 1;
  if ( !(unsigned int)GetWindowBand(*a2, a2 + 1) )
    return 0;
  v3 = 1;
  if ( (*v5 == 1 || *v5 == 8) && *v5 != 1 )
  {
    if ( CApplicationManagerUtility::IsOwnedWindow((CApplicationManagerUtility *)*a2, v6)
      || !CApplicationManagerUtility::IsTrayWindowStyleCheck(*a2, v11) )
    {
      v3 = 0;
    }
    goto LABEL_13;
  }
  if ( !(unsigned __int8)CApplicationManagerUtility::IsClassicApplication(*a2, (unsigned int)*v5) )
    return 0;
  if ( CApplicationManagerUtility::IsForcedAppWindow((CApplicationManagerUtility *)*a2, v7) )
  {
LABEL_13:
    *((_BYTE *)a2 + 12) = 0;
    return v3;
  }
  if ( CApplicationManagerUtility::IsOwnedWindow((CApplicationManagerUtility *)*a2, v8) )
  {
    *((_BYTE *)a2 + 12) = 1;
  }
  else
  {
    v10 = (CApplicationManagerUtility *)*a2;
    *((_BYTE *)a2 + 12) = 0;
    return CApplicationManagerUtility::IsTrayWindowStyleCheck((HWND)v10, v9);
  }
  return v3;
}

/*
 * XREFs of ?TryConvertCoreKeyboardViewTypeToShellView@TouchKeyboardExperienceManager@@AEAA?AV?$optional@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1802C1BDC
 * Callers:
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x1800803D4 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchKeyboardExperienceManager::TryConvertCoreKeyboardViewTypeToShellView(
        __int64 a1,
        __int64 a2,
        int a3)
{
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  __int64 result; // rax

  if ( !a3 )
  {
    *(_DWORD *)a2 = 12;
    goto LABEL_13;
  }
  v3 = a3 - 2;
  if ( !v3 )
    goto LABEL_11;
  v4 = v3 - 1;
  if ( !v4 )
    goto LABEL_11;
  v5 = v4 - 1;
  if ( !v5 )
  {
    *(_DWORD *)a2 = 13;
LABEL_13:
    result = a2;
    goto LABEL_14;
  }
  v6 = v5 - 2;
  if ( !v6 || (v7 = v6 - 4) == 0 )
  {
LABEL_11:
    *(_DWORD *)a2 = 14;
    goto LABEL_13;
  }
  result = a2;
  if ( v7 != 3 )
  {
    *(_BYTE *)(a2 + 4) = 0;
    return result;
  }
  *(_DWORD *)a2 = 19;
LABEL_14:
  *(_BYTE *)(a2 + 4) = 1;
  return result;
}

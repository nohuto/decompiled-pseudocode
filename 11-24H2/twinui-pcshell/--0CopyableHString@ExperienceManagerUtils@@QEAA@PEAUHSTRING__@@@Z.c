/*
 * XREFs of ??0CopyableHString@ExperienceManagerUtils@@QEAA@PEAUHSTRING__@@@Z @ 0x1801F5FB4
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800B3D8C (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall ExperienceManagerUtils::CopyableHString::CopyableHString(HSTRING *newString, HSTRING string)
{
  *newString = 0LL;
  WindowsDeleteString(0LL);
  *newString = 0LL;
  *((_DWORD *)newString + 2) = WindowsDuplicateString(string, newString);
  return newString;
}

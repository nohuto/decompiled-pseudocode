/*
 * XREFs of ??0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z @ 0x1801D9470
 * Callers:
 *     _lambda_b77313e954014d84b78f3886c1783ac6_::_lambda_b77313e954014d84b78f3886c1783ac6_ @ 0x180680A84 (_lambda_b77313e954014d84b78f3886c1783ac6_--_lambda_b77313e954014d84b78f3886c1783ac6_.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall ExperienceManagerUtils::CopyableHString::CopyableHString(
        HSTRING *newString,
        const struct ExperienceManagerUtils::CopyableHString *a2)
{
  int v3; // eax
  HSTRING v4; // rdi
  HSTRING v5; // rcx

  *newString = 0LL;
  v3 = *((_DWORD *)a2 + 2);
  *((_DWORD *)newString + 2) = v3;
  if ( v3 >= 0 )
  {
    v4 = *(HSTRING *)a2;
    v5 = 0LL;
    if ( *(_QWORD *)a2 )
      v5 = *newString;
    WindowsDeleteString(v5);
    *newString = 0LL;
    *((_DWORD *)newString + 2) = WindowsDuplicateString(v4, newString);
  }
  return newString;
}

/*
 * XREFs of _lambda_67700adb2cf4a33e0bc58e7b17f19822_::_lambda_67700adb2cf4a33e0bc58e7b17f19822_ @ 0x1802E2E18
 * Callers:
 *     ?OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18009A4C0 (-OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall lambda_67700adb2cf4a33e0bc58e7b17f19822_::_lambda_67700adb2cf4a33e0bc58e7b17f19822_(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  if ( a1 != a2 )
  {
    v2 = *a2;
    *a2 = 0LL;
    *a1 = v2;
  }
  return a1;
}

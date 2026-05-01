/*
 * XREFs of EnumWindowsHelpers::ForEachWindow__lambda_41d14996f06832153f35f30c97717118___ @ 0x18030C1D4
 * Callers:
 *     ?GetViewsByZOrder@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18008E4C0 (-GetViewsByZOrder@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall EnumWindowsHelpers::ForEachWindow__lambda_41d14996f06832153f35f30c97717118___(LPARAM a1)
{
  return EnumWindows(
           (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_41d14996f06832153f35f30c97717118___,
           a1);
}

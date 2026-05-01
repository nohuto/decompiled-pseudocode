/*
 * XREFs of ?GetApplicationId@WindowWrapperBase@@UEAAPEBGXZ @ 0x180440260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PCWSTR __fastcall WindowWrapperBase::GetApplicationId(HSTRING *this)
{
  return WindowsGetStringRawBuffer(this[36], 0LL);
}

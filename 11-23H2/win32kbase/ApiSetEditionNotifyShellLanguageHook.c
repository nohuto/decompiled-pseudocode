/*
 * XREFs of ApiSetEditionNotifyShellLanguageHook @ 0x1C0067D6C
 * Callers:
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0064AFC (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00673D0 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C006C200 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionNotifyShellLanguageHook(__int64 a1, __int64 a2, unsigned int a3))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02966A0;
  if ( qword_1C02966A0 )
  {
    result = (__int64 (*)(void))qword_1C02966A0();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C02966A8;
      if ( qword_1C02966A8 )
        return (__int64 (*)(void))qword_1C02966A8(a1, a2, a3);
    }
  }
  return result;
}

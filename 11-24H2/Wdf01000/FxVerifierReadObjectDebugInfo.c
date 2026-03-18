/*
 * XREFs of FxVerifierReadObjectDebugInfo @ 0x1400965E4
 * Callers:
 *     FxDriverGlobalsInitializeDebugExtension @ 0x140095E2C (FxDriverGlobalsInitializeDebugExtension.c)
 * Callees:
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1400454A4 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x140083680 (-_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z.c)
 *     FxVerifyAllocateDebugInfo @ 0x140096728 (FxVerifyAllocateDebugInfo.c)
 */

__int64 __fastcall FxVerifierReadObjectDebugInfo(
        void *Key,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObjectDebugInfo **Info,
        const wchar_t *a4,
        unsigned int length)
{
  int v8; // eax
  int DebugInfo; // ebx
  void *Value; // rdi
  FxObjectDebugInfoFlags v11; // r9d
  _UNICODE_STRING valueName; // [rsp+40h] [rbp-10h] BYREF
  unsigned int type; // [rsp+88h] [rbp+38h] BYREF
  int v15; // [rsp+8Ch] [rbp+3Ch]

  v15 = HIDWORD(a4);
  length = 0;
  type = 7;
  valueName = 0LL;
  RtlInitUnicodeString(&valueName, L"TrackHandles");
  v8 = FxRegKey::_QueryValue(FxDriverGlobals, Key, &valueName, 0, 0LL, &length, &type);
  DebugInfo = v8;
  if ( v8 == -2147483643 || v8 == -1073741789 )
  {
    Value = (void *)ExAllocatePool2(256LL, length, FxDriverGlobals->Tag);
    if ( Value )
    {
      DebugInfo = FxRegKey::_QueryValue(FxDriverGlobals, Key, &valueName, length, Value, &length, &type);
      if ( DebugInfo >= 0 )
      {
        DebugInfo = FxRegKey::_VerifyMultiSzString(FxDriverGlobals, &valueName, (wchar_t *)Value, length);
        if ( DebugInfo >= 0 )
          DebugInfo = FxVerifyAllocateDebugInfo(Info, (const wchar_t *)Value, FxDriverGlobals, v11);
      }
      ExFreePoolWithTag(Value, 0);
    }
    else
    {
      return (unsigned int)-1073741664;
    }
  }
  return (unsigned int)DebugInfo;
}

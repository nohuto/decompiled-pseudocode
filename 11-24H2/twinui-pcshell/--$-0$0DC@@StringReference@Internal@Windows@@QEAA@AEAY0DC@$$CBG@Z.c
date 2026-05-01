/*
 * XREFs of ??$?0$0DC@@StringReference@Internal@Windows@@QEAA@AEAY0DC@$$CBG@Z @ 0x18020E088
 * Callers:
 *     ??0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEAUIShellKeyboardHostingPolicy@3456@PEAUIDesktopKeyboardHostingPolicy@1456@PEAUIInputInjectionValidityHelper@1456@@Z @ 0x18029B1EC (--0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEA.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(HSTRING *string, PCWSTR sourceString)
{
  if ( WindowsCreateStringReference(sourceString, 0x31u, (HSTRING_HEADER *)(string + 1), string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}

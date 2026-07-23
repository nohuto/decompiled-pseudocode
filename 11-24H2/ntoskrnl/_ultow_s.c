/*
 * XREFs of _ultow_s @ 0x140500B20
 * Callers:
 *     LocalConvertAclToString @ 0x140864F2C (LocalConvertAclToString.c)
 *     BcdGetElementDataWithFlags @ 0x1409A4E5C (BcdGetElementDataWithFlags.c)
 *     BcdSetElementDataWithFlags @ 0x1409A517C (BcdSetElementDataWithFlags.c)
 *     BiDeleteElement @ 0x1409A5F20 (BiDeleteElement.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140A58B88 (_CmCreateOrdinalInstanceKey.c)
 *     LocalGetStringForRelativeAttribute @ 0x140AA5150 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x140500C80 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}

/*
 * XREFs of _ultow_s @ 0x140503260
 * Callers:
 *     LocalConvertAclToString @ 0x140860920 (LocalConvertAclToString.c)
 *     BcdGetElementDataWithFlags @ 0x1409BE80C (BcdGetElementDataWithFlags.c)
 *     BcdSetElementDataWithFlags @ 0x1409BEB2C (BcdSetElementDataWithFlags.c)
 *     BiDeleteElement @ 0x1409BF8D0 (BiDeleteElement.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140A60638 (_CmCreateOrdinalInstanceKey.c)
 *     LocalGetStringForRelativeAttribute @ 0x140AAA0A0 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x1405033C0 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}

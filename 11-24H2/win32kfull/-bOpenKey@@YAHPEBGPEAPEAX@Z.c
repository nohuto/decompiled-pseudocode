/*
 * XREFs of ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1401520AC
 * Callers:
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x140151A74 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     hfontInitDefaultGuiFont @ 0x1403EADD8 (hfontInitDefaultGuiFont.c)
 *     bInitStockFontsInternal @ 0x1403EB62C (bInitStockFontsInternal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bOpenKey(PCWSTR SourceString, PHANDLE KeyHandle)
{
  struct _UNICODE_STRING v4; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v4 = 0LL;
  RtlInitUnicodeString(&v4, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &v4;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, 0, &ObjectAttributes) >= 0;
}

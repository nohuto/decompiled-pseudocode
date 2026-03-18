/*
 * XREFs of UmfdUnloadFontFile @ 0x1C00C5A80
 * Callers:
 *     UmfdLoadFontFile @ 0x1C00C8200 (UmfdLoadFontFile.c)
 * Callees:
 *     UmfdUnloadFontFileInternal @ 0x1C00C5B58 (UmfdUnloadFontFileInternal.c)
 */

__int64 __fastcall UmfdUnloadFontFile(PVOID pv)
{
  unsigned int v2; // ebx

  v2 = UmfdUnloadFontFileInternal();
  EngFreeMem(pv);
  return v2;
}

/*
 * XREFs of RtlImageNtHeaderEx_ExceptionFilter @ 0x180146864
 * Callers:
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlImageNtHeaderEx_ExceptionFilter(char a1)
{
  return (a1 & 2) == 0;
}

/*
 * XREFs of RtlImageNtHeaderEx_ExceptionFilter @ 0x180147E14
 * Callers:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlImageNtHeaderEx_ExceptionFilter(char a1)
{
  return (a1 & 2) == 0;
}

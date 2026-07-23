/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x14060609C
 * Callers:
 *     SepLogTokenSidManagement @ 0x14078FD30 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}

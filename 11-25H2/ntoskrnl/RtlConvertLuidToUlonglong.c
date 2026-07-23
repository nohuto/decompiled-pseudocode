/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x1405FC4B8
 * Callers:
 *     SepLogTokenSidManagement @ 0x140780AA0 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}

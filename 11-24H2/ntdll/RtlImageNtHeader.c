/*
 * XREFs of RtlImageNtHeader @ 0x1800DBE70
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 */

PIMAGE_NT_HEADERS __cdecl RtlImageNtHeader(PVOID BaseOfImage)
{
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp+10h] BYREF

  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  return OutHeaders;
}

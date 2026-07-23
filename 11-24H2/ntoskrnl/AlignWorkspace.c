/*
 * XREFs of AlignWorkspace @ 0x1405F12C8
 * Callers:
 *     RtlCompressDeflateInitCompressionStream @ 0x1405F12E4 (RtlCompressDeflateInitCompressionStream.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall AlignWorkspace(unsigned __int64 *a1)
{
  unsigned __int64 result; // rax

  result = *a1;
  if ( (*a1 & 0x1F) != 0 )
  {
    result = (result + 32) & 0xFFFFFFFFFFFFFFE0uLL;
    *a1 = result;
  }
  return result;
}

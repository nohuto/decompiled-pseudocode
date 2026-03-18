/*
 * XREFs of RtlCompressWorkSpaceSizeLZNT1 @ 0x140B59950
 * Callers:
 *     RtlGetCompressionWorkSpaceSize @ 0x140393E20 (RtlGetCompressionWorkSpaceSize.c)
 *     SmDecompressBuffer @ 0x1403CC850 (SmDecompressBuffer.c)
 *     EtwpInitializeCompression @ 0x1404B6DB4 (EtwpInitializeCompression.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCompressWorkSpaceSizeLZNT1(__int16 a1, _DWORD *a2, _DWORD *a3)
{
  if ( !a1 )
  {
    *a2 = 65568;
LABEL_3:
    *a3 = 4096;
    return 0LL;
  }
  if ( a1 == 256 )
  {
    *a2 = 32;
    goto LABEL_3;
  }
  return 3221225659LL;
}

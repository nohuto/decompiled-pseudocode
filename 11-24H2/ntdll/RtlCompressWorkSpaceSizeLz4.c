/*
 * XREFs of RtlCompressWorkSpaceSizeLz4 @ 0x18014E9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCompressWorkSpaceSizeLz4(__int16 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( (a1 & 0xFEFF) != 0 )
    return 3221225659LL;
  *a2 = a1 != 0 ? 262200 : 16416;
  result = 0LL;
  *a3 = 0;
  return result;
}

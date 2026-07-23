/*
 * XREFs of RtlDecompressBufferDeflateZlib @ 0x18014B490
 * Callers:
 *     <none>
 * Callees:
 *     RtlDecompressBufferDeflateInternal @ 0x18014B348 (RtlDecompressBufferDeflateInternal.c)
 */

__int64 __fastcall RtlDecompressBufferDeflateZlib(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        _DWORD *a6,
        _QWORD *a7)
{
  int v8; // [rsp+28h] [rbp-20h]

  return RtlDecompressBufferDeflateInternal(1, a1, a2, a3, a4, v8, a6, a7);
}

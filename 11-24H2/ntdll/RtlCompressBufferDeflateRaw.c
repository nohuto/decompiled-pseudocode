/*
 * XREFs of RtlCompressBufferDeflateRaw @ 0x18014B290
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompressBufferDeflateInternal @ 0x18014B18C (RtlCompressBufferDeflateInternal.c)
 */

__int64 __fastcall RtlCompressBufferDeflateRaw(
        __int16 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        _DWORD *a7,
        void *a8)
{
  int v9; // [rsp+30h] [rbp-28h]

  return RtlCompressBufferDeflateInternal(0, a1, a2, a3, a4, a5, v9, a7, a8);
}

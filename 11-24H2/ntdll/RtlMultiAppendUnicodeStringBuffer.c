/*
 * XREFs of RtlMultiAppendUnicodeStringBuffer @ 0x1800A6610
 * Callers:
 *     RtlAppendPathElement @ 0x1800A76A0 (RtlAppendPathElement.c)
 * Callees:
 *     RtlpEnsureBufferSize @ 0x1800A6B80 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlMultiAppendUnicodeStringBuffer(unsigned __int16 *a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned int v4; // r9d
  unsigned __int64 v5; // rbx
  unsigned __int64 v9; // rbx
  __int64 *v10; // r14
  __int64 v11; // rax
  unsigned int v12; // r14d
  __int64 v13; // rax
  __int64 result; // rax

  v3 = *a1;
  v4 = 0;
  v5 = v3;
  while ( v4 != a2 )
  {
    v5 += *(unsigned __int16 *)(a3 + 16LL * v4);
    if ( v5 > 0xFFFE )
      return 3221225734LL;
    ++v4;
  }
  v9 = v5 + 2;
  if ( v9 > 0xFFFE )
    return 3221225734LL;
  v10 = (__int64 *)(a1 + 8);
  if ( a1 != (unsigned __int16 *)-16LL && v9 <= *((_QWORD *)a1 + 4)
    || (result = RtlpEnsureBufferSize(0LL, a1 + 8, v9), (int)result >= 0) )
  {
    v11 = *v10;
    v12 = 0;
    a1[1] = v9;
    *a1 = v9 - 2;
    *((_QWORD *)a1 + 1) = v11;
    if ( a2 )
    {
      do
      {
        memmove(
          (void *)(*((_QWORD *)a1 + 1) + 2 * (v3 >> 1)),
          *(const void **)(a3 + 16LL * v12 + 8),
          *(unsigned __int16 *)(a3 + 16LL * v12));
        v13 = *(unsigned __int16 *)(a3 + 16LL * v12++);
        v3 += v13;
      }
      while ( v12 != a2 );
    }
    *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * (v3 >> 1)) = 0;
    return 0LL;
  }
  return result;
}

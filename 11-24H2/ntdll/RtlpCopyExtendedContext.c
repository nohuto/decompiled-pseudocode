/*
 * XREFs of RtlpCopyExtendedContext @ 0x180141DF0
 * Callers:
 *     RtlCopyExtendedContext @ 0x180141DD0 (RtlCopyExtendedContext.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x180044820 (RtlpValidateContextFlags.c)
 *     RtlpCopyLegacyContext @ 0x1800D8FF4 (RtlpCopyLegacyContext.c)
 *     RtlpCopyXStateChunk @ 0x1800D9290 (RtlpCopyXStateChunk.c)
 *     RtlpCopyKernelCetChunk @ 0x18011E128 (RtlpCopyKernelCetChunk.c)
 */

__int64 __fastcall RtlpCopyExtendedContext(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v6; // esi
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v13 = 0;
  result = RtlpValidateContextFlags(a4, (__int64)&v13);
  if ( (int)result >= 0 )
  {
    v10 = a5;
    if ( (v13 & 1) != 0 )
    {
      v11 = *(int *)(a5 + 8);
      if ( *(_DWORD *)(a2 + 8) != (_DWORD)v11 || *(_DWORD *)(a2 + 12) < *(_DWORD *)(a5 + 12) )
        return 3221225485LL;
      RtlpCopyLegacyContext(v11, a2 + *(int *)(a2 + 8), a4, a5 + v11);
    }
    if ( (v13 & 2) == 0 || (result = RtlpCopyXStateChunk(v9, a2, a2, v10, v10), (int)result >= 0) )
    {
      if ( (v13 & 4) != 0 )
      {
        v12 = RtlpCopyKernelCetChunk(v9, a2, a2, v10, v10);
        if ( v12 < 0 )
          return (unsigned int)v12;
        return v6;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}

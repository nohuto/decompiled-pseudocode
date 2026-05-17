/*
 * XREFs of RtlNormalizeString @ 0x1800C1C80
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x1800C00F0 (RtlpNameprepAsciiRealWorker.c)
 * Callees:
 *     RtlpGetNormalization @ 0x1800C12A4 (RtlpGetNormalization.c)
 *     RtlpNormalizeStringWorker @ 0x1800C1D08 (RtlpNormalizeStringWorker.c)
 */

__int64 __fastcall RtlNormalizeString(unsigned int a1, __int64 a2, int a3, int a4, int *a5)
{
  int v7; // esi
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v7 = a2;
  if ( !a2 )
    return 3221225485LL;
  if ( a3 < -1 )
    return 3221225485LL;
  if ( !a1 )
    return 3221225485LL;
  v8 = (__int64)a5;
  if ( *a5 < 0 )
    return 3221225485LL;
  result = RtlpGetNormalization(a1, &v10);
  if ( (int)result >= 0 )
    return RtlpNormalizeStringWorker(v10, v7, a3, a4, v8);
  return result;
}

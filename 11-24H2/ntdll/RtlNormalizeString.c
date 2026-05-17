/*
 * XREFs of RtlNormalizeString @ 0x1800BCC20
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x1800BB090 (RtlpNameprepAsciiRealWorker.c)
 * Callees:
 *     RtlpGetNormalization @ 0x1800BC244 (RtlpGetNormalization.c)
 *     RtlpNormalizeStringWorker @ 0x1800BCCA8 (RtlpNormalizeStringWorker.c)
 */

__int64 __fastcall RtlNormalizeString(unsigned int a1, __int64 a2, unsigned __int64 a3, int a4, int *a5)
{
  int v6; // edi
  int v7; // esi
  __int64 v8; // rbx
  __int64 result; // rax
  volatile signed __int32 *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v6 = a3;
  v7 = a2;
  if ( !a2 )
    return 3221225485LL;
  if ( (int)a3 < -1 )
    return 3221225485LL;
  if ( !a1 )
    return 3221225485LL;
  v8 = (__int64)a5;
  if ( *a5 < 0 )
    return 3221225485LL;
  result = RtlpGetNormalization(a1, &v10, a3);
  if ( (int)result >= 0 )
    return RtlpNormalizeStringWorker((_DWORD)v10, v7, v6, a4, v8);
  return result;
}

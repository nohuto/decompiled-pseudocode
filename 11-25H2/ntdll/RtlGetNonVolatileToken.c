/*
 * XREFs of RtlGetNonVolatileToken @ 0x180146620
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall RtlGetNonVolatileToken(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE v6[56]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+88h] [rbp+20h] BYREF

  v7 = 0LL;
  memset(v6, 0, 48);
  v4 = 1LL;
  result = ZwQueryVirtualMemory(-1LL, a1, 7LL, v6, 48LL, &v7);
  if ( (int)result >= 0 )
  {
    if ( (v6[12] & 0x20) != 0 )
    {
      if ( RtlpIsFlushRequired )
        v4 = 3LL;
      result = 0LL;
      *a3 = v4;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}

/*
 * XREFs of RtlpValidateKeyTrust @ 0x18008660C
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x180086044 (RtlpCallQueryRegistryRoutine.c)
 * Callees:
 *     ZwQueryKey @ 0x1801634E0 (ZwQueryKey.c)
 */

__int64 __fastcall RtlpValidateKeyTrust(__int64 a1, __int16 a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  int v5; // [rsp+48h] [rbp+10h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v5 = 0;
  v6 = 0;
  if ( (a2 & 0x100) == 0 )
  {
    v4 = ZwQueryKey(a1, 8LL, &v5, 4LL, &v6);
    if ( v4 < 0 )
    {
      v2 = v4;
      if ( v4 == -1073741431 )
        return v2;
    }
    else if ( (v5 & 1) != 0 )
    {
      return v2;
    }
    __fastfail(9u);
  }
  return v2;
}

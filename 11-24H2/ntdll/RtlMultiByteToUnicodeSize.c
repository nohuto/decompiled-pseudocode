/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x1800D41D0
 * Callers:
 *     RtlOemStringToUnicodeString @ 0x1800D40E0 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18000C3F0 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlMultiByteToUnicodeSize(int *a1, char *a2, unsigned int a3)
{
  int v3; // r9d
  __int64 v6; // rax
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF

  _InterlockedOr(v7, 0);
  if ( word_1801CCFD0 != -535 && GlobalRtlNlsState != -535 )
  {
    _InterlockedOr(v7, 0);
    v3 = 0;
    if ( word_1801CCF9C )
    {
      while ( a3-- )
      {
        v6 = (unsigned __int8)*a2++;
        if ( *(_WORD *)(qword_1801CD020 + 2 * v6) )
        {
          if ( !a3 )
          {
            *a1 = v3 + 2;
            return 0LL;
          }
          --a3;
          ++a2;
        }
        v3 += 2;
      }
    }
    else
    {
      v3 = 2 * a3;
    }
    *a1 = v3;
    return 0LL;
  }
  if ( a3 )
  {
    RtlUTF8ToUnicodeN(0LL, 0, a1, a2, a3);
    return 0LL;
  }
  *a1 = 0;
  return 0LL;
}

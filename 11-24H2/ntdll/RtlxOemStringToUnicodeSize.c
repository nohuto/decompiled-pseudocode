/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x1800D8650
 * Callers:
 *     <none>
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18000C3F0 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlxOemStringToUnicodeSize(unsigned __int16 *a1)
{
  unsigned int v1; // eax
  int v2; // edx
  char *v3; // r9
  int v4; // eax
  __int64 v7; // rcx
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  v3 = (char *)*((_QWORD *)a1 + 1);
  v9 = 0;
  _InterlockedOr(v8, 0);
  if ( word_1801CCFD0 == -535 || GlobalRtlNlsState == -535 )
  {
    if ( v1 )
      RtlUTF8ToUnicodeN(0LL, 0, &v9, v3, v1);
    v4 = v9;
    return (unsigned int)(v4 + 2);
  }
  _InterlockedOr(v8, 0);
  if ( !word_1801CCF9C )
  {
    v4 = 2 * v1;
    return (unsigned int)(v4 + 2);
  }
  while ( v1-- )
  {
    v7 = (unsigned __int8)*v3++;
    if ( *(_WORD *)(qword_1801CD020 + 2 * v7) )
    {
      if ( !v1 )
      {
        v2 += 2;
        return (unsigned int)(v2 + 2);
      }
      --v1;
      ++v3;
    }
    v2 += 2;
  }
  return (unsigned int)(v2 + 2);
}

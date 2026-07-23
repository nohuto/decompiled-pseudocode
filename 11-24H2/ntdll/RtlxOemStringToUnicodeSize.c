/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x1800D39C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x180038DF0 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlxOemStringToUnicodeSize(unsigned __int16 *a1)
{
  ULONG UTF8StringByteCount; // eax
  int v2; // edx
  const CHAR *v3; // r9
  ULONG v4; // eax
  __int64 v7; // rcx
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+40h] [rbp+8h] BYREF

  UTF8StringByteCount = *a1;
  v2 = 0;
  v3 = (const CHAR *)*((_QWORD *)a1 + 1);
  UnicodeStringActualByteCount = 0;
  _InterlockedOr(v8, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    if ( UTF8StringByteCount )
      RtlUTF8ToUnicodeN(0LL, 0, &UnicodeStringActualByteCount, v3, UTF8StringByteCount);
    v4 = UnicodeStringActualByteCount;
    return v4 + 2;
  }
  _InterlockedOr(v8, 0);
  if ( !GlobalRtlNlsState.DBCSCodePage )
  {
    v4 = 2 * UTF8StringByteCount;
    return v4 + 2;
  }
  while ( UTF8StringByteCount-- )
  {
    v7 = *(unsigned __int8 *)v3++;
    if ( *(_WORD *)(qword_1801CC020 + 2 * v7) )
    {
      if ( !UTF8StringByteCount )
      {
        v2 += 2;
        return (unsigned int)(v2 + 2);
      }
      --UTF8StringByteCount;
      ++v3;
    }
    v2 += 2;
  }
  return (unsigned int)(v2 + 2);
}

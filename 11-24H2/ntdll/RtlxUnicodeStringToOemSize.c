/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x18007CF00
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x18007E730 (RtlUnicodeToUTF8N.c)
 */

__int64 __fastcall RtlxUnicodeStringToOemSize(unsigned __int16 *a1)
{
  ULONG UnicodeStringByteCount; // edx
  const WCHAR *v2; // r9
  int v3; // r8d
  ULONG v4; // edx
  __int64 v6; // rax
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF
  ULONG UTF8StringActualByteCount; // [rsp+40h] [rbp+8h] BYREF

  UnicodeStringByteCount = *a1;
  v2 = (const WCHAR *)*((_QWORD *)a1 + 1);
  UTF8StringActualByteCount = 0;
  _InterlockedOr(v7, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    if ( UnicodeStringByteCount )
      RtlUnicodeToUTF8N(0LL, 0, &UTF8StringActualByteCount, v2, UnicodeStringByteCount);
    return UTF8StringActualByteCount + 1;
  }
  else
  {
    _InterlockedOr(v7, 0);
    v3 = 0;
    v4 = UnicodeStringByteCount >> 1;
    if ( GlobalRtlNlsState.DBCSCodePage )
    {
      for ( ; v4; --v4 )
      {
        v6 = *v2++;
        v3 += (HIBYTE(*((_WORD *)GlobalRtlNlsState.WideCharTable + v6)) != 0) + 1;
      }
      return (unsigned int)(v3 + 1);
    }
    else
    {
      return v4 + 1;
    }
  }
}

/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x18006A020
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x18006B850 (RtlUnicodeToUTF8N.c)
 */

__int64 __fastcall RtlxUnicodeStringToOemSize(unsigned __int16 *a1)
{
  unsigned int v1; // edx
  unsigned __int16 *v2; // r9
  int v3; // r8d
  unsigned int v4; // edx
  __int64 v6; // rax
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v8 = 0;
  _InterlockedOr(v7, 0);
  if ( word_1801CEFD0 == -535 || GlobalRtlNlsState == -535 )
  {
    if ( v1 )
      RtlUnicodeToUTF8N(0, 0, (unsigned int)&v8, (_DWORD)v2, v1);
    return (unsigned int)(v8 + 1);
  }
  else
  {
    _InterlockedOr(v7, 0);
    v3 = 0;
    v4 = v1 >> 1;
    if ( word_1801CEF9C )
    {
      for ( ; v4; --v4 )
      {
        v6 = *v2++;
        v3 += (HIBYTE(*(_WORD *)(qword_1801CEFB8 + 2 * v6)) != 0) + 1;
      }
      return (unsigned int)(v3 + 1);
    }
    else
    {
      return v4 + 1;
    }
  }
}

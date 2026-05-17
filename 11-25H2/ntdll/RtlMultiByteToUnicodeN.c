/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x18004AF70
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x1800AB0E0 (RtlCreateEnvironmentEx.c)
 *     mbstowcs @ 0x180126970 (mbstowcs.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x180139DC0 (RtlConsoleMultiByteToUnicodeN.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18004B290 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlMultiByteToUnicodeN(
        _WORD *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4,
        unsigned int a5)
{
  __int16 v7; // cx
  __int64 *v8; // rdi
  __int16 v9; // dx
  __int64 v10; // rsi
  unsigned int v11; // eax
  _WORD *v12; // rbx
  unsigned int v13; // r11d
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int *v20; // rcx
  signed __int32 v21[8]; // [rsp+0h] [rbp-38h] BYREF

  _InterlockedOr(v21, 0);
  if ( word_1801CEFD0 == -535 || GlobalRtlNlsState == -535 )
  {
    v7 = Utf8TableInfo;
    v8 = (__int64 *)&xmmword_1801CF070;
    v9 = WORD6(Utf8TableInfo);
    v10 = qword_1801CF088;
  }
  else
  {
    _InterlockedOr(v21, 0);
    v7 = GlobalRtlNlsState;
    v8 = &qword_1801CEFB0;
    v9 = word_1801CEF9C;
    v10 = qword_1801CEFC8;
  }
  v11 = a5;
  v12 = a1;
  if ( v7 == -535 )
  {
    v20 = &a5;
    if ( a3 )
      v20 = a3;
    if ( a5 )
    {
      RtlUTF8ToUnicodeN((_DWORD)a1, a2, (_DWORD)v20, (_DWORD)a4, a5);
      return 0LL;
    }
    result = 0LL;
    *v20 = 0;
  }
  else
  {
    v13 = a2 >> 1;
    if ( !v9 )
    {
      if ( v13 < a5 )
        v11 = v13;
      if ( a3 )
        *a3 = 2 * v11;
      v14 = *v8;
      if ( v11 )
      {
        v15 = v11;
        do
        {
          v16 = *a4;
          ++a1;
          ++a4;
          *(a1 - 1) = *(_WORD *)(v14 + 2 * v16);
          --v15;
        }
        while ( v15 );
      }
      return 0LL;
    }
    while ( v13 && v11 )
    {
      --v13;
      --v11;
      v18 = 2LL * *a4;
      v19 = *(unsigned __int16 *)(v18 + v10);
      if ( (_WORD)v19 )
      {
        if ( !v11 )
        {
          *v12 = 0;
          LODWORD(v12) = (_DWORD)v12 + 2;
          break;
        }
        --v11;
        *v12++ = *(_WORD *)(v10 + 2 * (v19 + a4[1]));
        a4 += 2;
      }
      else
      {
        *v12++ = *(_WORD *)(v18 + *v8);
        ++a4;
      }
    }
    if ( !a3 )
      return 0LL;
    *a3 = (_DWORD)v12 - (_DWORD)a1;
    return 0LL;
  }
  return result;
}

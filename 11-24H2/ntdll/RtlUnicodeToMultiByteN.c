/*
 * XREFs of RtlUnicodeToMultiByteN @ 0x1800B2430
 * Callers:
 *     EtwpAddDebugInfoEvents @ 0x1800B4BBC (EtwpAddDebugInfoEvents.c)
 *     wcstombs @ 0x180128270 (wcstombs.c)
 *     _wctomb_s_l @ 0x18012C2D8 (_wctomb_s_l.c)
 *     _safecrt_wctomb_s @ 0x18012EBB8 (_safecrt_wctomb_s.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x1800B1E90 (RtlUnicodeToUTF8N.c)
 */

__int64 __fastcall RtlUnicodeToMultiByteN(
        _BYTE *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int a5)
{
  __int16 v7; // ax
  __int64 *v8; // rbx
  __int16 v9; // cx
  __int64 v10; // rsi
  _BYTE *v11; // r8
  unsigned int v12; // eax
  __int64 v13; // r11
  __int64 result; // rax
  __int64 v15; // rcx
  __int16 v16; // di
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int *v19; // r8
  unsigned int v20; // ecx
  signed __int32 v21[8]; // [rsp+0h] [rbp-38h] BYREF
  char v22; // [rsp+48h] [rbp+10h] BYREF

  _InterlockedOr(v21, 0);
  if ( word_1801CCFD0 == -535 || GlobalRtlNlsState == -535 )
  {
    v7 = Utf8TableInfo;
    v8 = (__int64 *)&xmmword_1801CD070 + 1;
    v9 = WORD6(Utf8TableInfo);
    v10 = *((_QWORD *)&xmmword_1801CD070 + 1);
  }
  else
  {
    _InterlockedOr(v21, 0);
    v7 = GlobalRtlNlsState;
    v8 = &qword_1801CCFB8;
    v9 = word_1801CCF9C;
    v10 = qword_1801CCFB8;
  }
  v11 = a1;
  if ( v7 == -535 )
  {
    v19 = (unsigned int *)&v22;
    if ( a3 )
      v19 = a3;
    if ( a5 )
    {
      RtlUnicodeToUTF8N(a1, a2, v19, a4, a5);
      return 0LL;
    }
    result = 0LL;
    *v19 = 0;
  }
  else
  {
    v12 = a5 >> 1;
    if ( !v9 )
    {
      if ( v12 < a2 )
        a2 = a5 >> 1;
      if ( a3 )
        *a3 = a2;
      v13 = *v8;
      if ( a2 )
      {
        v17 = a2;
        do
        {
          v18 = *(unsigned __int16 *)a4;
          ++a1;
          a4 = (unsigned int *)((char *)a4 + 2);
          *(a1 - 1) = *(_BYTE *)(v18 + v13);
          --v17;
        }
        while ( v17 );
      }
      return 0LL;
    }
    if ( v12 )
    {
      while ( a2 )
      {
        v15 = *(unsigned __int16 *)a4;
        a4 = (unsigned int *)((char *)a4 + 2);
        v16 = *(_WORD *)(v10 + 2 * v15);
        if ( HIBYTE(v16) )
        {
          v20 = a2--;
          if ( v20 < 2 )
            break;
          *v11++ = HIBYTE(v16);
        }
        *v11 = v16;
        --a2;
        ++v11;
        if ( !--v12 )
          break;
      }
    }
    if ( !a3 )
      return 0LL;
    *a3 = (_DWORD)v11 - (_DWORD)a1;
    return 0LL;
  }
  return result;
}

/*
 * XREFs of RtlConsoleMultiByteToUnicodeN @ 0x180138650
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x18000C0D0 (RtlMultiByteToUnicodeN.c)
 *     RtlpIsUtf8Process @ 0x180070CD0 (RtlpIsUtf8Process.c)
 */

__int64 __fastcall RtlConsoleMultiByteToUnicodeN(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // edx
  unsigned int *v7; // r8
  unsigned __int8 *v8; // r9
  unsigned int v9; // r10d
  _WORD *v10; // r11
  __int64 v12; // r14
  __int64 v13; // r15
  unsigned int v14; // edx
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r12
  int v19; // ebp
  unsigned int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rsi
  signed __int32 v23[8]; // [rsp+0h] [rbp-48h] BYREF

  *a6 = 0;
  if ( RtlpIsUtf8Process() )
  {
    while ( v9 < a5 )
    {
      if ( v8[v9] < 0x20u )
      {
        *a6 = 1;
        return RtlMultiByteToUnicodeN(v10, v6, v7, v8, a5);
      }
      ++v9;
    }
    return RtlMultiByteToUnicodeN(v10, v6, v7, v8, a5);
  }
  else
  {
    _InterlockedOr(v23, v9);
    v12 = qword_1801CCFB0;
    v13 = qword_1801CD020;
    v14 = v6 >> 1;
    if ( word_1801CCF9C == (_WORD)v9 )
    {
      v15 = a5;
      if ( v14 < a5 )
        v15 = v14;
      if ( v7 )
        *v7 = 2 * v15;
      if ( v15 )
      {
        v16 = v15;
        do
        {
          if ( *v8 < 0x20u )
            *a6 = 1;
          v17 = *v8++;
          *v10++ = *(_WORD *)(v12 + 2 * v17);
          --v16;
        }
        while ( v16 );
      }
    }
    else
    {
      v18 = qword_1801CCFC8;
      v19 = (int)v10;
      v20 = a5;
      while ( v14 && v20 )
      {
        v21 = *v8;
        --v14;
        --v20;
        v22 = *(unsigned __int16 *)(v13 + 2 * v21);
        if ( (_WORD)v22 )
        {
          if ( !v20 )
          {
            *v10 = v9;
            LODWORD(v10) = (_DWORD)v10 + 2;
            break;
          }
          ++v8;
          --v20;
          *v10 = *(_WORD *)(v18 + 2 * (v22 + *v8));
        }
        else
        {
          if ( (unsigned __int8)v21 < 0x20u )
            *a6 = 1;
          *v10 = *(_WORD *)(v12 + 2LL * *v8);
        }
        ++v10;
        ++v8;
      }
      if ( v7 )
        *v7 = (_DWORD)v10 - v19;
    }
    return 0LL;
  }
}

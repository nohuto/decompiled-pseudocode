/*
 * XREFs of RtlUnicodeToCustomCPN @ 0x1800B1D30
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x1800AF9B0 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeToOemN @ 0x1801073E0 (RtlUnicodeToOemN.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x1800B1E90 (RtlUnicodeToUTF8N.c)
 */

__int64 __fastcall RtlUnicodeToCustomCPN(
        __int64 a1,
        _BYTE *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  unsigned int v6; // r10d
  _BYTE *v7; // r11
  unsigned int v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rbx
  __int64 v12; // rsi
  unsigned __int16 *v13; // rdi
  __int64 v14; // rcx
  __int16 v15; // r8
  unsigned __int16 *v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  char *v19; // r8
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  char v22; // [rsp+40h] [rbp+8h] BYREF

  v6 = a3;
  v7 = a2;
  if ( !a1 || *(_WORD *)a1 == 0xFDE9 )
  {
    v19 = &v22;
    if ( a4 )
      v19 = (char *)a4;
    v20 = 0;
    if ( a6 )
    {
      if ( (unsigned int)RtlUnicodeToUTF8N((_DWORD)a2, v6, (_DWORD)v19, (_DWORD)a5, a6) == -1073741789 )
        return (unsigned int)-2147483643;
      return v20;
    }
    else
    {
      *(_DWORD *)v19 = 0;
      return 0LL;
    }
  }
  else
  {
    v8 = a6 >> 1;
    if ( *(_WORD *)(a1 + 12) )
    {
      v12 = *(_QWORD *)(a1 + 40);
      if ( v8 )
      {
        v13 = a5;
        while ( v6 )
        {
          v14 = *v13++;
          v15 = *(_WORD *)(v12 + 2 * v14);
          if ( HIBYTE(v15) )
          {
            v21 = v6--;
            if ( v21 < 2 )
              break;
            *v7++ = HIBYTE(v15);
          }
          *v7 = v15;
          --v6;
          ++v7;
          if ( !--v8 )
            break;
        }
      }
      if ( a4 )
        *a4 = (_DWORD)v7 - (_DWORD)a2;
    }
    else
    {
      v9 = a3;
      if ( v8 < a3 )
        v9 = a6 >> 1;
      if ( a4 )
        *a4 = v9;
      v10 = *(_QWORD *)(a1 + 40);
      if ( v9 )
      {
        v16 = a5;
        v17 = v9;
        do
        {
          v18 = *v16;
          ++v7;
          ++v16;
          *(v7 - 1) = *(_BYTE *)(v18 + v10);
          --v17;
        }
        while ( v17 );
      }
    }
    return v6 < v8 ? 0x80000005 : 0;
  }
}

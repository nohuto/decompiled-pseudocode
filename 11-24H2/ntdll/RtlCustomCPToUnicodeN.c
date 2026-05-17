/*
 * XREFs of RtlCustomCPToUnicodeN @ 0x18000C280
 * Callers:
 *     RtlOemToUnicodeN @ 0x1800D4290 (RtlOemToUnicodeN.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18000C3F0 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlCustomCPToUnicodeN(
        __int64 a1,
        _WORD *a2,
        unsigned int a3,
        char *a4,
        unsigned __int8 *a5,
        unsigned int a6)
{
  _WORD *v7; // r11
  unsigned int v8; // r8d
  unsigned int v9; // r10d
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int8 *v12; // r9
  __int64 v13; // rax
  char *v15; // r8
  unsigned int v16; // ebx
  unsigned __int8 *v17; // rbx
  int v18; // esi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  char v22; // [rsp+40h] [rbp+8h] BYREF

  v7 = a2;
  if ( !a1 || *(_WORD *)a1 == 0xFDE9 )
  {
    v15 = &v22;
    if ( a4 )
      v15 = a4;
    v16 = 0;
    if ( a6 )
    {
      if ( (unsigned int)RtlUTF8ToUnicodeN((_DWORD)a2, a3, (_DWORD)v15, (_DWORD)a5, a6) == -1073741789 )
        return (unsigned int)-2147483643;
      return v16;
    }
    else
    {
      *(_DWORD *)v15 = 0;
      return 0LL;
    }
  }
  else
  {
    v8 = a6;
    v9 = a3 >> 1;
    if ( *(_WORD *)(a1 + 12) )
    {
      v17 = a5;
      v18 = (int)a2;
      v19 = *(_QWORD *)(a1 + 56);
      while ( v9 && v8 )
      {
        --v9;
        --v8;
        v20 = 2LL * *v17;
        v21 = *(unsigned __int16 *)(v20 + v19);
        if ( (_WORD)v21 )
        {
          if ( !v8 )
          {
            *v7 = 0;
            LODWORD(v7) = (_DWORD)v7 + 2;
            break;
          }
          --v8;
          *v7++ = *(_WORD *)(v19 + 2 * (v21 + v17[1]));
          v17 += 2;
        }
        else
        {
          *v7++ = *(_WORD *)(v20 + *(_QWORD *)(a1 + 32));
          ++v17;
        }
      }
      if ( a4 )
        *(_DWORD *)a4 = (_DWORD)v7 - v18;
    }
    else
    {
      v10 = a6;
      if ( v9 < a6 )
        v10 = v9;
      if ( a4 )
        *(_DWORD *)a4 = 2 * v10;
      v11 = *(_QWORD *)(a1 + 32);
      if ( (_DWORD)v10 )
      {
        v12 = a5;
        do
        {
          v13 = *v12;
          ++v7;
          ++v12;
          *(v7 - 1) = *(_WORD *)(v11 + 2 * v13);
          --v10;
        }
        while ( v10 );
      }
    }
    return v9 < v8 ? 0x80000005 : 0;
  }
}

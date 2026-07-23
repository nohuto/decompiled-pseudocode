/*
 * XREFs of RtlpValidateAsciiStd3AndLength @ 0x1800B4820
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x1800B2E50 (RtlpNameprepAsciiRealWorker.c)
 * Callees:
 *     FindEmailAt @ 0x1800B4DD0 (FindEmailAt.c)
 */

bool __fastcall RtlpValidateAsciiStd3AndLength(unsigned __int16 *a1, __int64 a2, char a3, char a4)
{
  unsigned __int16 *v4; // rsi
  char v6; // r11
  unsigned int v8; // r10d
  unsigned __int16 *v9; // rbx
  unsigned __int16 *v10; // r8
  unsigned __int16 *v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r15
  int v14; // ecx

  v4 = a1 - 1;
  v6 = a3;
  LOWORD(v8) = 46;
  v9 = &a1[(int)a2];
  if ( a3 )
    v10 = &a1[(int)FindEmailAt(a1, a2)];
  else
    v10 = a1 - 1;
  if ( v10 == v9 || (int)a2 <= 0 )
    return 0;
  v11 = a1;
  v12 = 0LL;
  v13 = 0x3FFFFFF01FFBLL;
  while ( v11 != v9 )
  {
    v8 = *v11;
    if ( v8 >= 0x7F )
      return 0;
    v14 = 64;
    if ( !v6 )
      v14 = 46;
    if ( v8 == v14 )
    {
      if ( v6 )
      {
        if ( v11 == a1 )
          return 0;
        if ( v11 == v10 - 1 )
          v6 = 0;
      }
      else if ( v11 == v4 + 1
             || (__int64)(((char *)v11 - (char *)v4) & 0xFFFFFFFFFFFFFFFEuLL) > 128
             || a4 && v11 > a1 && *(v11 - 1) == 45 )
      {
        return 0;
      }
      v4 = v11++;
    }
    else
    {
      if ( v6 )
      {
        if ( !(_WORD)v8 )
          return 0;
      }
      else
      {
        if ( a4 )
        {
          if ( v8 == 45 )
          {
            if ( v11 == v4 + 1 )
              return 0;
          }
          else if ( ((unsigned __int16)(v8 - 45) > 0x2Du || !_bittest64(&v13, v8 - 45))
                 && (unsigned __int16)(v8 - 97) > 0x19u )
          {
            return 0;
          }
        }
        if ( v8 < 0x20 )
          return 0;
      }
      ++v11;
    }
  }
  if ( v6 )
    return 1;
  if ( (__int64)(((char *)v9 - (char *)v4) & 0xFFFFFFFFFFFFFFFEuLL) > 128 )
    return 0;
  LOBYTE(v12) = (_WORD)v8 == 46;
  if ( v9 - v10 > v12 + 255 )
    return 0;
  if ( a4 )
    return (_WORD)v8 != 45;
  return 1;
}

/*
 * XREFs of RtlStringCbPrintfExW @ 0x1800092E0
 * Callers:
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180007A4C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlQueryPackageClaims @ 0x180008FD0 (RtlQueryPackageClaims.c)
 *     LdrpConstructModernAppKeyName @ 0x1800A3518 (LdrpConstructModernAppKeyName.c)
 * Callees:
 *     RtlStringExHandleOtherFlagsW @ 0x18010FE2C (RtlStringExHandleOtherFlagsW.c)
 *     _vsnwprintf @ 0x180120D90 (_vsnwprintf.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 RtlStringCbPrintfExW(
        wchar_t *Buffer,
        unsigned __int64 a2,
        wchar_t **a3,
        _QWORD *a4,
        int a5,
        wchar_t *Format,
        ...)
{
  unsigned __int64 v7; // rdi
  int v9; // ebx
  const wchar_t *v10; // r8
  wchar_t *v11; // r13
  unsigned __int64 v12; // rsi
  int v13; // eax
  unsigned __int64 v14; // r8
  wchar_t *v16; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-10h] BYREF
  _QWORD *v19; // [rsp+A8h] [rbp+60h]
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, Format);
  v19 = a4;
  v7 = a2 >> 1;
  v9 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !Buffer && v7 || v7 > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( v7 - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
  {
    if ( v7 )
      *Buffer = 0;
    return (unsigned int)v9;
  }
  v10 = Format;
  v11 = Buffer;
  v16 = Buffer;
  v17 = a2 >> 1;
  if ( (a5 & 0x100) != 0 && !Format )
    v10 = &SourceString;
  v9 = 0;
  if ( (a5 & 0xFFFFE000) != 0 )
  {
    v9 = -1073741811;
    if ( v7 )
      *Buffer = 0;
  }
  else
  {
    if ( v7 )
    {
      v17 = 0LL;
      v12 = v7 - 1;
      v13 = vsnwprintf(Buffer, v7 - 1, v10, va);
      if ( v13 >= 0 )
      {
        if ( v13 == v12 )
        {
LABEL_23:
          Buffer[v12] = 0;
LABEL_12:
          v7 -= v12;
          v11 = &Buffer[v12];
          v16 = v11;
          v17 = v7;
          if ( v9 >= 0 )
          {
            if ( (a5 & 0x200) != 0 )
            {
              v14 = (a2 & 1) + 2 * v7;
              if ( v14 > 2 )
                memset_thunk_772440563353939046(v11 + 1, (unsigned __int8)a5, v14 - 2);
            }
LABEL_16:
            a4 = v19;
LABEL_17:
            if ( a3 )
              *a3 = v11;
            if ( a4 )
              *a4 = (a2 & 1) + 2 * v7;
            return (unsigned int)v9;
          }
          goto LABEL_26;
        }
        if ( v13 <= v12 )
        {
          v12 = v13;
          goto LABEL_12;
        }
      }
      v9 = -2147483643;
      goto LABEL_23;
    }
    if ( !*v10 )
      goto LABEL_17;
    v9 = Buffer != 0LL ? -2147483643 : -1073741811;
  }
LABEL_26:
  if ( (a5 & 0x1C00) != 0 && a2 )
  {
    RtlStringExHandleOtherFlagsW(Buffer, a2, v10, &v16, &v17, a5);
    v11 = v16;
    v7 = v17;
  }
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
    goto LABEL_16;
  return (unsigned int)v9;
}

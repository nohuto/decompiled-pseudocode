/*
 * XREFs of LdrpResCompareResourceNames @ 0x180097BB0
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x1800969C0 (LdrpResSearchResourceInsideDirectory.c)
 * Callees:
 *     LdrpResReadFile @ 0x180098460 (LdrpResReadFile.c)
 *     wcsncmp @ 0x180125B90 (wcsncmp.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpResCompareResourceNames(
        __int64 a1,
        void *a2,
        __int64 a3,
        const wchar_t *a4,
        unsigned __int64 a5,
        unsigned int *a6,
        __int16 a7,
        int *a8)
{
  unsigned int v8; // r14d
  __int64 v11; // rdi
  __int64 result; // rax
  unsigned __int16 *v13; // rcx
  unsigned __int64 v14; // rdx
  int v15; // edx
  __int64 v16; // rcx
  unsigned __int16 *v17; // [rsp+28h] [rbp-270h]
  __int64 v19; // [rsp+38h] [rbp-260h]
  _BYTE v20[528]; // [rsp+40h] [rbp-258h] BYREF

  v8 = 0;
  v19 = a3;
  if ( !a5 || !a6 )
    return 3221225485LL;
  v11 = *a6;
  if ( ((unsigned __int64)a4 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (int)v11 >= 0 )
    {
      if ( (a7 & 0x1000) == 0 || (v11 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        *a8 = (_DWORD)a4 - v11;
        return v8;
      }
      return (unsigned int)-1073741701;
    }
    if ( (a7 & 0x1000) != 0 && (v11 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      return (unsigned int)-1073741701;
LABEL_23:
    *a8 = 1;
    return v8;
  }
  if ( (int)v11 >= 0 )
  {
    *a8 = -1;
    return v8;
  }
  LODWORD(v11) = v11 & 0x7FFFFFFF;
  v13 = (unsigned __int16 *)(v11 + a5);
  v17 = (unsigned __int16 *)(v11 + a5);
  if ( (a7 & 0x1000) != 0 )
  {
    if ( (unsigned __int64)v13 < a5 )
      return (unsigned int)-1073741701;
    if ( (a7 & 0x8800) == 0x8800 )
      goto LABEL_31;
    if ( (unsigned __int64)(v13 + 2) < a5 || (unsigned __int64)(v13 + 2) > a3 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
      return (unsigned int)-1073741701;
  }
  if ( (a7 & 0x8800) != 0x8800 )
  {
LABEL_14:
    if ( (a7 & 0x1000) != 0 && (a7 & 0x8800) != 0x8800 )
    {
      v14 = a5 + v11 + 2 * (*v13 + 2LL);
      if ( v14 < a5 || v14 > a3 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
        return (unsigned int)-1073741701;
    }
    if ( ((unsigned __int64)(v13 + 1) & 0xFFFFFFFFFFFF0000uLL) == 0 )
      return (unsigned int)-1073741701;
    v15 = wcsncmp(a4, v13 + 1, *v13);
    if ( v15 )
      goto LABEL_26;
    v16 = -1LL;
    do
      ++v16;
    while ( a4[v16] );
    if ( v16 == *v17 )
    {
LABEL_26:
      *a8 = v15;
      return v8;
    }
    goto LABEL_23;
  }
LABEL_31:
  result = LdrpResReadFile(a2);
  if ( (int)result >= 0 )
  {
    result = LdrpResReadFile(a2);
    v8 = result;
    if ( (int)result >= 0 )
    {
      a3 = v19;
      v13 = (unsigned __int16 *)v20;
      v17 = (unsigned __int16 *)v20;
      goto LABEL_14;
    }
  }
  return result;
}

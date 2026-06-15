/*
 * XREFs of ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x18004E540
 * Callers:
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18000C640 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x18000C978 (--1CPerfTracker@@QEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     _vsnprintf @ 0x1800A8D44 (_vsnprintf.c)
 *     StringExHandleOtherFlagsA @ 0x1800FEAE0 (StringExHandleOtherFlagsA.c)
 */

__int64 StringCchPrintfExA(char *a1, size_t a2, char **a3, unsigned __int64 *a4, DWORD dwFlags, char *Format, ...)
{
  unsigned int v7; // ebx
  char *v8; // rax
  int v11; // r10d
  __int64 result; // rax
  unsigned __int64 v13; // r12
  int v14; // eax
  const char *v15; // r8
  size_t v16; // rbp
  STRSAFE_LPSTR v17; // r13
  STRSAFE_LPSTR ppszDestEnd; // [rsp+30h] [rbp-58h] BYREF
  size_t pcchRemaining[2]; // [rsp+38h] [rbp-50h] BYREF
  va_list ArgList; // [rsp+C0h] [rbp+38h] BYREF

  va_start(ArgList, Format);
  v7 = 0;
  v8 = a1;
  v11 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !a1 && a2 || a2 > 0x7FFFFFFF )
      v11 = -2147024809;
  }
  else
  {
    if ( a2 - 1 > 0x7FFFFFFE )
      v11 = -2147024809;
    v8 = a1;
  }
  if ( v11 < 0 )
  {
    if ( a2 )
      *v8 = 0;
    return (unsigned int)v11;
  }
  v15 = Format;
  v16 = a2;
  v17 = v8;
  ppszDestEnd = v8;
  pcchRemaining[0] = a2;
  if ( (dwFlags & 0x100) != 0 && !Format )
    v15 = MultiByteStr;
  if ( (dwFlags & 0xFFFFE000) != 0 )
  {
    v7 = -2147024809;
    if ( a2 )
      *v8 = 0;
    goto LABEL_19;
  }
  if ( a2 )
  {
    v13 = a2 - 1;
    pcchRemaining[0] = 0LL;
    v14 = vsnprintf(v8, a2 - 1, v15, ArgList);
    if ( v14 >= 0 && v14 <= v13 )
    {
      if ( v14 == v13 )
      {
        v16 = 1LL;
        a1[v13] = 0;
        v17 = &a1[v13];
      }
      else
      {
        v17 = &a1[v14];
        v16 = a2 - v14;
      }
      if ( (dwFlags & 0x200) != 0 && v16 > 1 )
        memset_0(v17 + 1, (unsigned __int8)dwFlags, v16 - 1);
      goto LABEL_10;
    }
    v8 = a1;
    v16 = 1LL;
    pcchRemaining[0] = 1LL;
    v17 = &a1[v13];
    a1[v13] = 0;
    ppszDestEnd = &a1[v13];
    v7 = -2147024774;
LABEL_19:
    if ( (dwFlags & 0x1C00) != 0 && a2 )
    {
      StringExHandleOtherFlagsA(v8, a2, (size_t)v15, &ppszDestEnd, pcchRemaining, dwFlags);
      v17 = ppszDestEnd;
      v16 = pcchRemaining[0];
    }
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2147024774 )
      return v7;
    goto LABEL_10;
  }
  if ( *v15 )
  {
    v7 = -2147024774;
    if ( !v8 )
      v7 = -2147024809;
    goto LABEL_19;
  }
LABEL_10:
  if ( a3 )
    *a3 = v17;
  result = v7;
  if ( a4 )
    *a4 = v16;
  return result;
}

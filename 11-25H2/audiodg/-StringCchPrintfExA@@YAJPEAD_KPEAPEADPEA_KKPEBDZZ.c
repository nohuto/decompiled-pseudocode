/*
 * XREFs of ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x14002CDAC
 * Callers:
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBDU_GUID@@@Z @ 0x140007490 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBDU_GUID@@@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 * Callees:
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     _vsnprintf @ 0x14005A254 (_vsnprintf.c)
 *     StringExHandleOtherFlagsA @ 0x14006BCC0 (StringExHandleOtherFlagsA.c)
 */

__int64 StringCchPrintfExA(
        STRSAFE_LPSTR pszDest,
        size_t cbDest,
        char **a3,
        unsigned __int64 *a4,
        DWORD dwFlags,
        char *Format,
        ...)
{
  int v7; // ebx
  const char *v9; // r8
  STRSAFE_LPSTR v10; // r13
  size_t v11; // r15
  unsigned __int64 v12; // rdi
  int v13; // eax
  STRSAFE_LPSTR ppszDestEnd; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchRemaining[2]; // [rsp+38h] [rbp-10h] BYREF
  unsigned __int64 *v18; // [rsp+A8h] [rbp+60h]
  va_list ArgList; // [rsp+C0h] [rbp+78h] BYREF

  va_start(ArgList, Format);
  v18 = a4;
  v7 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cbDest || cbDest > 0x7FFFFFFF )
      v7 = -2147024809;
  }
  else if ( cbDest - 1 > 0x7FFFFFFE )
  {
    v7 = -2147024809;
  }
  if ( v7 < 0 )
  {
    if ( cbDest )
      *pszDest = 0;
  }
  else
  {
    v9 = Format;
    v10 = pszDest;
    ppszDestEnd = pszDest;
    v11 = cbDest;
    pcchRemaining[0] = cbDest;
    if ( (dwFlags & 0x100) != 0 && !Format )
      v9 = (const char *)&word_1400A8088;
    v7 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v7 = -2147024809;
      if ( cbDest )
        *pszDest = 0;
    }
    else if ( cbDest )
    {
      pcchRemaining[0] = 0LL;
      v12 = cbDest - 1;
      v13 = vsnprintf(pszDest, cbDest - 1, v9, ArgList);
      if ( v13 < 0 || v13 > v12 )
      {
        pszDest[v12] = 0;
        v7 = -2147024774;
      }
      else if ( v13 == v12 )
      {
        pszDest[v12] = 0;
      }
      else
      {
        v12 = v13;
      }
      v11 = cbDest - v12;
      v10 = &pszDest[v12];
      ppszDestEnd = &pszDest[v12];
      pcchRemaining[0] = cbDest - v12;
      if ( v7 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v11 > 1 )
          memset_0(v10 + 1, (unsigned __int8)dwFlags, v11 - 1);
        goto LABEL_21;
      }
    }
    else
    {
      if ( !*v9 )
        goto LABEL_22;
      v7 = pszDest != 0LL ? -2147024774 : -2147024809;
    }
    if ( (dwFlags & 0x1C00) != 0 && cbDest )
    {
      StringExHandleOtherFlagsA(pszDest, cbDest, (size_t)v9, &ppszDestEnd, pcchRemaining, dwFlags);
      v10 = ppszDestEnd;
      v11 = pcchRemaining[0];
    }
    if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147024774 )
    {
LABEL_21:
      a4 = v18;
LABEL_22:
      if ( a3 )
        *a3 = v10;
      if ( a4 )
        *a4 = v11;
    }
  }
  return (unsigned int)v7;
}

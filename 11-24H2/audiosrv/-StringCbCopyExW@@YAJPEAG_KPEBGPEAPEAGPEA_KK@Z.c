/*
 * XREFs of ?StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x180064CB0
 * Callers:
 *     s_sndevtResolveSoundAlias @ 0x18007F820 (s_sndevtResolveSoundAlias.c)
 *     ?GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z @ 0x18009E37C (-GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z.c)
 * Callees:
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     StringExHandleOtherFlagsW @ 0x18010A66C (StringExHandleOtherFlagsW.c)
 */

__int64 __fastcall StringCbCopyExW(
        STRSAFE_LPWSTR pszDest,
        size_t cbDest,
        const unsigned __int16 *a3,
        unsigned __int16 **a4,
        unsigned __int64 *a5,
        DWORD a6)
{
  DWORD dwFlags; // r15d
  wchar_t *v7; // rsi
  size_t v8; // rdi
  int v11; // ebx
  STRSAFE_LPWSTR v12; // rbp
  const unsigned __int16 *v13; // rax
  size_t v14; // rdx
  __int64 v15; // r9
  wchar_t v16; // ax
  STRSAFE_LPWSTR v17; // rax
  __int64 v18; // rcx
  size_t pcchRemaining[2]; // [rsp+30h] [rbp-38h] BYREF
  STRSAFE_LPWSTR ppszDestEnd; // [rsp+78h] [rbp+10h] BYREF

  dwFlags = a6;
  v7 = pszDest;
  v8 = cbDest >> 1;
  v11 = 0;
  if ( (a6 & 0x100) != 0 )
  {
    if ( !pszDest && v8 || v8 > 0x7FFFFFFF )
      v11 = -2147024809;
  }
  else if ( v8 - 1 > 0x7FFFFFFE )
  {
    v11 = -2147024809;
  }
  if ( v11 < 0 )
  {
    if ( v8 )
      *pszDest = 0;
    return (unsigned int)v11;
  }
  ppszDestEnd = pszDest;
  v12 = pszDest;
  pcchRemaining[0] = cbDest >> 1;
  if ( (a6 & 0x100) != 0 )
  {
    v13 = &LocaleName;
    if ( a3 )
      v13 = a3;
    a3 = v13;
  }
  v11 = 0;
  if ( (a6 & 0xFFFFE000) == 0 )
  {
    if ( v8 )
    {
      v14 = cbDest >> 1;
      a3 = (const unsigned __int16 *)((char *)a3 - (__int64)pszDest);
      v15 = 0LL;
      do
      {
        if ( !(2147483646 - v8 + v14) )
          break;
        v16 = *(STRSAFE_LPWSTR)((char *)pszDest + (_QWORD)a3);
        if ( !v16 )
          break;
        *pszDest = v16;
        ++v15;
        ++pszDest;
        --v14;
      }
      while ( v14 );
      v17 = pszDest - 1;
      if ( v14 )
        v17 = pszDest;
      v18 = v15 - 1;
      if ( v14 )
        v18 = v15;
      *v17 = 0;
      v12 = &v7[v18];
      ppszDestEnd = v12;
      v8 -= v18;
      pcchRemaining[0] = v8;
      v11 = v14 == 0 ? 0x8007007A : 0;
      if ( v14 )
      {
        if ( (dwFlags & 0x200) != 0 )
        {
          a3 = (const unsigned __int16 *)((cbDest & 1) + 2 * v8);
          if ( (unsigned __int64)a3 > 2 )
            memset_0(v12 + 1, (unsigned __int8)dwFlags, (size_t)(a3 - 1));
        }
      }
    }
    else
    {
      if ( !*a3 )
        goto LABEL_36;
      v11 = pszDest != 0LL ? -2147024774 : -2147024809;
    }
    if ( v11 < 0 )
      goto LABEL_32;
LABEL_36:
    if ( a4 )
      *a4 = v12;
    if ( a5 )
      *a5 = (cbDest & 1) + 2 * v8;
    return (unsigned int)v11;
  }
  v11 = -2147024809;
  if ( v8 )
    *pszDest = 0;
LABEL_32:
  if ( (dwFlags & 0x1C00) != 0 && cbDest )
  {
    StringExHandleOtherFlagsW(v7, cbDest, (size_t)a3, &ppszDestEnd, pcchRemaining, dwFlags);
    v12 = ppszDestEnd;
    v8 = pcchRemaining[0];
  }
  if ( v11 == -2147024774 )
    goto LABEL_36;
  return (unsigned int)v11;
}

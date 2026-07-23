/*
 * XREFs of DrvDbSplitDeviceIdDriverInfMatch @ 0x140980950
 * Callers:
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140980664 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PiDevCfgFindDeviceDriver @ 0x1409C86B4 (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x140423600 (RtlStringCchCopyNExW.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     wcstol @ 0x1404FE024 (wcstol.c)
 */

__int64 __fastcall DrvDbSplitDeviceIdDriverInfMatch(STRSAFE_PCNZWCH pszSrc, wchar_t *a2, unsigned int a3, __int64 a4)
{
  NTSTATUS v4; // r12d
  unsigned int v6; // ebp
  char v8; // r13
  wchar_t *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  const wchar_t *v13; // rdi
  wchar_t *v14; // rax
  wchar_t *v15; // r14
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax

  v4 = 0;
  v6 = a3;
  v8 = -1;
  v9 = wcschr(pszSrc, 0x5Cu);
  if ( !v9 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( pszSrc[v10] );
    LODWORD(v11) = v10;
    if ( a4 )
    {
      *(_BYTE *)a4 = 0;
      *(_WORD *)(a4 + 2) = 0;
    }
    goto LABEL_6;
  }
  v11 = v9 - pszSrc;
  if ( !a4 )
    goto LABEL_6;
  v13 = v9 + 1;
  v14 = wcschr(v9 + 1, 0x5Cu);
  v15 = v14;
  if ( v14 )
  {
    *v14 = 0;
    v18 = wcstol(v14 + 1, 0LL, 16);
    if ( v18 > 0xFF )
      LOBYTE(v18) = -1;
    v8 = v18;
  }
  if ( *v13 != 42 )
  {
    v16 = wcstol(v13, 0LL, 16);
    if ( v16 )
    {
      v17 = v16 - 1;
      *(_BYTE *)a4 = 2;
      if ( v17 > 0xFFFF )
        LOWORD(v17) = -1;
      goto LABEL_17;
    }
    *(_BYTE *)a4 = 1;
    goto LABEL_16;
  }
  *(_BYTE *)a4 = 3;
  if ( !v13[1] )
  {
LABEL_16:
    LOWORD(v17) = 0;
    goto LABEL_17;
  }
  LOWORD(v17) = wcstol(v13 + 1, 0LL, 16);
LABEL_17:
  *(_WORD *)(a4 + 2) = v17;
  v6 = a3;
  if ( v15 )
    *v15 = 92;
LABEL_6:
  if ( !a2 || (v4 = RtlStringCchCopyNExW(a2, v6, pszSrc, (unsigned int)v11, 0LL, 0LL, 0x900u), v4 >= 0) )
  {
    if ( a4 )
      *(_BYTE *)(a4 + 1) = v8;
  }
  return (unsigned int)v4;
}

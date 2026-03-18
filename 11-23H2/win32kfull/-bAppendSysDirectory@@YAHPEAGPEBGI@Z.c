/*
 * XREFs of ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00194B4
 * Callers:
 *     vInitFontsDirectoryNameInformation @ 0x1C0018500 (vInitFontsDirectoryNameInformation.c)
 *     bAddAllFlEntry @ 0x1C001ADEC (bAddAllFlEntry.c)
 *     FontAssocDefaultRoutine @ 0x1C029DD90 (FontAssocDefaultRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C029E0C8 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C029EF40 (bDeleteFlEntry.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C0019984 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C001B1E0 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0115D18 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0115E6C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     cCapString @ 0x1C01177C8 (cCapString.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 */

__int64 __fastcall bAppendSysDirectory(unsigned __int16 *a1, const unsigned __int16 *a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int16 *v6; // rbx
  __int64 v7; // rdi
  unsigned __int16 *v8; // rcx
  unsigned __int16 v9; // ax
  unsigned __int16 *v10; // rax
  const unsigned __int16 *NtSystemRoot; // rax
  unsigned __int64 v12; // rdx
  unsigned __int16 *v13; // rax
  char *v14; // rcx
  __int64 v15; // rax
  signed __int64 v16; // r9
  char *v17; // rax
  wchar_t *v19; // rax
  _WORD *v20; // rdx
  __int64 v21; // r8
  unsigned __int16 *v22; // rcx
  unsigned __int16 v23; // ax
  unsigned __int16 *v24; // rax
  unsigned __int16 *v25; // [rsp+58h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v25, 0x208u);
  v6 = v25;
  if ( v25 )
  {
    v7 = 260LL;
    if ( wcschr(a2, 0x5Cu) )
    {
      cCapString(a1, a2, 260LL);
      v19 = wcsstr(a1, L"%SYSTEMROOT%");
      if ( v19 )
      {
        *v19 = 92;
        v20 = v19 + 12;
        v21 = -1LL;
        do
          ++v21;
        while ( v20[v21] );
        memmove(v19 + 11, v20, 2 * v21 + 2);
        goto LABEL_25;
      }
      if ( *(_DWORD *)(a1 + 1) != 6029370 )
        goto LABEL_25;
      if ( (int)StringCchCopyW(v6, 0x104uLL, a1) >= 0 )
      {
        v22 = a1;
        v4 = (char *)L"\\??\\" - (char *)a1;
        do
        {
          if ( v7 == -2147483386 )
            break;
          v23 = *(unsigned __int16 *)((char *)v22 + v4);
          if ( !v23 )
            break;
          *v22++ = v23;
          --v7;
        }
        while ( v7 );
        v24 = v22 - 1;
        if ( v7 )
          v24 = v22;
        *v24 = 0;
        if ( v7 )
        {
          if ( StringCchCatW(a1, v4, v6) >= 0 )
            goto LABEL_25;
        }
      }
    }
    else
    {
      v5 = 260LL;
      v4 = (char *)L"\\??\\" - (char *)v6;
      v8 = v6;
      do
      {
        if ( v5 == -2147483386 )
          break;
        v9 = *(unsigned __int16 *)((char *)v8 + v4);
        if ( !v9 )
          break;
        *v8++ = v9;
        --v5;
      }
      while ( v5 );
      v10 = v8 - 1;
      if ( v5 )
        v10 = v8;
      *v10 = 0;
      if ( v5 )
      {
        NtSystemRoot = (const unsigned __int16 *)RtlGetNtSystemRoot(v8, v4);
        if ( StringCchCatW(v6, v12, NtSystemRoot) >= 0 )
        {
          v4 = 260LL;
          v13 = v6;
          do
          {
            if ( !*v13 )
              break;
            ++v13;
            --v4;
          }
          while ( v4 );
          v5 = (260 - v4) & -(__int64)(v4 != 0);
          if ( v4 )
          {
            v14 = (char *)&v6[v5];
            v4 = 260 - v5;
            if ( v5 != 260 )
            {
              v15 = 2147483646LL;
              v16 = (char *)L"\\fonts\\" - v14;
              do
              {
                if ( !v15 )
                  break;
                v5 = *(unsigned __int16 *)&v14[v16];
                if ( !(_WORD)v5 )
                  break;
                *(_WORD *)v14 = v5;
                --v15;
                v14 += 2;
                --v4;
              }
              while ( v4 );
            }
            v17 = v14 - 2;
            if ( v4 )
              v17 = v14;
            *(_WORD *)v17 = 0;
            if ( v4 )
            {
              if ( StringCchCatW(v6, v4, a2) >= 0 )
              {
                cCapString(a1, v6, 260LL);
LABEL_25:
                AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v25, v4, v5);
                return 1LL;
              }
            }
          }
        }
      }
    }
  }
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v25, v4, v5);
  return 0LL;
}

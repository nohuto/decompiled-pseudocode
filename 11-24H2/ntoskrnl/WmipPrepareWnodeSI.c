/*
 * XREFs of WmipPrepareWnodeSI @ 0x1409B3B80
 * Callers:
 *     WmipQuerySetExecuteSI @ 0x1409B2A54 (WmipQuerySetExecuteSI.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     _wtoi @ 0x1404FBFD0 (_wtoi.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WmipUnreferenceEntry @ 0x1409B31A8 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x1409B4038 (WmipReferenceEntry.c)
 *     WmipAddProviderIdToPIList @ 0x1409B407C (WmipAddProviderIdToPIList.c)
 *     WmipCountedToSz @ 0x1409B5550 (WmipCountedToSz.c)
 *     WmipIsNumber @ 0x1409B55C0 (WmipIsNumber.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipPrepareWnodeSI(__int64 a1, __int64 a2, int *a3, void **a4, _BYTE *a5, _BYTE *a6)
{
  volatile signed __int64 **v7; // rbx
  __int64 v8; // rdi
  volatile signed __int64 **v9; // r13
  __int64 v10; // rsi
  int v11; // r14d
  wchar_t *v12; // r12
  __int64 v13; // rax
  ULONG_PTR v14; // rsi
  int v15; // eax
  _DWORD *v16; // rax
  size_t v17; // rbx
  unsigned int v18; // r12d
  const wchar_t *v19; // rdx
  unsigned __int64 v20; // rax
  const wchar_t *v22; // rdi
  unsigned int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  _BYTE *v27; // rax
  __int64 v28; // rdi
  unsigned int i; // ebx
  volatile signed __int64 **v30; // rsi
  _BYTE *v31; // rax
  wchar_t *Str1; // [rsp+30h] [rbp-59h]
  unsigned int v33; // [rsp+38h] [rbp-51h] BYREF
  volatile signed __int64 **v34; // [rsp+40h] [rbp-49h]
  int v35; // [rsp+48h] [rbp-41h] BYREF
  volatile signed __int64 **v36; // [rsp+50h] [rbp-39h] BYREF
  _BYTE *v37; // [rsp+58h] [rbp-31h]
  int *v38; // [rsp+60h] [rbp-29h]
  void **v39; // [rsp+68h] [rbp-21h]
  __int64 v40; // [rsp+70h] [rbp-19h]
  wchar_t pszDest[8]; // [rsp+78h] [rbp-11h] BYREF

  v38 = a3;
  v39 = a4;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v37 = a5;
  v34 = 0LL;
  *a5 = 1;
  v10 = *(_QWORD *)(a1 + 56);
  v33 = 0;
  if ( v10 && *(_DWORD *)(v10 + 36) )
  {
    v11 = 0;
    *(_OWORD *)(a2 + 24) = *(_OWORD *)(v10 + 72);
    if ( (*(_DWORD *)(v10 + 16) & 1) != 0 )
    {
      *a6 = 1;
    }
    else
    {
      *a6 = 0;
      Str1 = (wchar_t *)WmipCountedToSz(a2 + *(unsigned int *)(a2 + 48));
      v12 = Str1;
      if ( Str1 )
      {
        v34 = (volatile signed __int64 **)*v39;
        v7 = v34;
        v36 = v34;
        v35 = *v38;
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        if ( *(_DWORD *)(v10 + 36) )
        {
          v13 = v10 + 56;
          v14 = *(_QWORD *)(v10 + 56);
          v40 = v13;
          if ( v14 != v13 )
          {
            do
            {
              if ( (_BYTE)v9 )
                break;
              v15 = *(_DWORD *)(v14 + 16);
              if ( (v15 & 0x89000) == 0 )
              {
                if ( (v15 & 1) != 0 )
                {
                  v16 = *(_DWORD **)(v14 + 88);
                  v17 = -1LL;
                  v18 = *v16;
                  v19 = (const wchar_t *)(v16 + 1);
                  do
                    ++v17;
                  while ( v19[v17] );
                  v20 = -1LL;
                  do
                    ++v20;
                  while ( Str1[v20] );
                  if ( v20 <= v17 || wcsnicmp(Str1, v19, v17) )
                  {
                    v12 = Str1;
                  }
                  else
                  {
                    v22 = &Str1[v17];
                    v23 = wtoi(v22);
                    if ( (unsigned __int8)WmipIsNumber(v22, v24, v25, v26) )
                    {
                      if ( v23 >= v18 && v23 < 0xF423F && v23 < v18 + *(_DWORD *)(v14 + 72) )
                      {
                        RtlStringCbPrintfW(pszDest, 0xEuLL, L"%d", v23);
                        if ( !wcsicmp(pszDest, v22) )
                        {
                          *(_DWORD *)(a2 + 44) |= 0x80u;
                          LOBYTE(v9) = 1;
                          *(_DWORD *)(a2 + 4) = *(_DWORD *)(v14 + 80);
                          v27 = v37;
                          *(_DWORD *)(a2 + 52) = v23 - v18;
                          *v27 = 0;
                        }
                      }
                    }
                    v12 = Str1;
                  }
                }
                else if ( (v15 & 2) != 0 )
                {
                  v28 = *(_QWORD *)(v14 + 88);
                  for ( i = 0; i < *(_DWORD *)(v14 + 72); ++i )
                  {
                    if ( !wcsicmp(*(const wchar_t **)(v28 + 8LL * i), v12) )
                    {
                      *(_DWORD *)(a2 + 44) |= 0x80u;
                      LOBYTE(v9) = 1;
                      *(_DWORD *)(a2 + 4) = *(_DWORD *)(v14 + 80);
                      v31 = v37;
                      *(_DWORD *)(a2 + 52) = i;
                      *v31 = 0;
                      break;
                    }
                  }
                }
                else
                {
                  WmipReferenceEntry(v14);
                  v11 = WmipAddProviderIdToPIList(
                          (unsigned int)&v36,
                          (unsigned int)&v33,
                          (unsigned int)&v35,
                          (_DWORD)v34,
                          v14);
                  LOBYTE(v9) = v11 < 0;
                }
              }
              v14 = *(_QWORD *)v14;
            }
            while ( v14 != v40 );
            v7 = v36;
            v8 = v33;
          }
        }
        else
        {
          v11 = -1073741055;
        }
        ExFreePoolWithTag(v12, 0);
        KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
        v9 = v34;
      }
      else
      {
        v11 = -1073741670;
      }
      if ( *v37 )
      {
        *v38 = v8;
        *v39 = v7;
      }
      else if ( v7 )
      {
        if ( (_DWORD)v8 )
        {
          v30 = v7;
          do
          {
            WmipUnreferenceEntry((__int64)&WmipISChunkInfo, *v30++);
            --v8;
          }
          while ( v8 );
          v9 = v34;
        }
        if ( v7 != v9 )
          ExFreePoolWithTag(v7, 0);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741055;
  }
  return (unsigned int)v11;
}

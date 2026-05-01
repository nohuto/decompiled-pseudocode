/*
 * XREFs of ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x180041448
 * Callers:
 *     ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x18003CEAC (--$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKno.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002284 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180006288 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180008AE4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x180041BC8 (-ValidateKGL@CQueryKnownGameList@@AEAAJK@Z.c)
 */

signed int __fastcall CQueryKnownGameList::RuntimeClassInitialize(
        CQueryKnownGameList *this,
        const unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  const unsigned __int16 *v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  size_t v9; // rax
  _WORD *v10; // rax
  const struct std::nothrow_t *v11; // rdx
  _WORD *v12; // rcx
  _WORD *v13; // rbx
  unsigned __int64 v14; // rdx
  char *v15; // r14
  __int16 v16; // ax
  _WORD *v17; // rax
  HANDLE FileW; // rax
  char *v19; // r14
  void *v20; // rsi
  wil::details *v21; // rcx
  DWORD LastError; // ebx
  const char *v24; // r9
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // rdx
  const struct std::nothrow_t *v28; // rax
  const struct std::nothrow_t *v29; // rdx
  const struct std::nothrow_t *v30; // rbx
  unsigned int v31; // eax
  DWORD nFileSizeLow; // edx
  int v33; // eax
  DWORD NumberOfBytesRead; // [rsp+40h] [rbp-19h] BYREF
  _BY_HANDLE_FILE_INFORMATION FileInformation; // [rsp+48h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  NumberOfBytesRead = 0;
  memset(&FileInformation, 0, sizeof(FileInformation));
  if ( a2 )
  {
    v6 = a2;
    v7 = 0x7FFFFFFFLL;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v7;
    }
    while ( v7 );
    v4 = v7 == 0 ? 0x80070057 : 0;
    if ( !v7 )
    {
      v5 = 227LL;
      goto LABEL_82;
    }
    v8 = ((0x7FFFFFFF - v7) & -(__int64)(v7 != 0)) + 1;
    v9 = 2 * v8;
    if ( !is_mul_ok(v8, 2uLL) )
      v9 = -1LL;
    v10 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
    v12 = (_WORD *)*((_QWORD *)this + 2);
    v13 = v10;
    if ( v10 != v12 )
    {
      operator delete(v12, v11);
      v12 = v13;
      *((_QWORD *)this + 2) = v13;
    }
    if ( !v12 )
    {
      v4 = -2147024882;
      v5 = 230LL;
      goto LABEL_82;
    }
    if ( v8 - 1 > 0x7FFFFFFE )
    {
      v4 = -2147024809;
      if ( v8 )
        *v12 = 0;
    }
    else
    {
      v14 = 2147483646 - v8;
      v15 = (char *)((char *)a2 - (char *)v12);
      do
      {
        if ( !(v14 + v8) )
          break;
        v16 = *(_WORD *)((char *)v12 + (_QWORD)v15);
        if ( !v16 )
          break;
        *v12++ = v16;
        --v8;
      }
      while ( v8 );
      v17 = v12 - 1;
      if ( v8 )
        v17 = v12;
      *v17 = 0;
      v4 = v8 == 0 ? 0x8007007A : 0;
      if ( v8 )
      {
        FileW = CreateFileW(*((LPCWSTR *)this + 2), 0x80000000, 1u, 0LL, 3u, 0x80u, 0LL);
        v19 = (char *)*((_QWORD *)this + 3);
        v20 = FileW;
        v21 = (wil::details *)(v19 - 1);
        if ( (unsigned __int64)(v19 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          LastError = GetLastError();
          CloseHandle(v19);
          SetLastError(LastError);
        }
        *((_QWORD *)this + 3) = v20;
        if ( v20 == (void *)-1LL )
          return wil::details::GetLastErrorFailHr(v21);
        if ( !GetFileInformationByHandle(v20, &FileInformation) )
        {
          v25 = 238LL;
          return wil::details::in1diag3::Return_GetLastError(
                   retaddr,
                   (void *)v25,
                   (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                   v24);
        }
        if ( FileInformation.nFileSizeHigh )
        {
          v27 = 241LL;
          goto LABEL_77;
        }
        if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 32, 0x18u, &NumberOfBytesRead, 0LL) )
        {
          v25 = 243LL;
          return wil::details::in1diag3::Return_GetLastError(
                   retaddr,
                   (void *)v25,
                   (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                   v24);
        }
        if ( NumberOfBytesRead != 24 )
        {
          v27 = 244LL;
          goto LABEL_77;
        }
        v26 = *((_DWORD *)this + 9);
        if ( !v26 )
        {
          v27 = 248LL;
          goto LABEL_77;
        }
        if ( v26 == 1 )
        {
          if ( *((_DWORD *)this + 8) != 24 )
          {
            v27 = 251LL;
            goto LABEL_77;
          }
        }
        else
        {
          if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 56, 8u, &NumberOfBytesRead, 0LL) )
          {
            v25 = 257LL;
            return wil::details::in1diag3::Return_GetLastError(
                     retaddr,
                     (void *)v25,
                     (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                     v24);
          }
          if ( NumberOfBytesRead != 8 )
          {
            v27 = 258LL;
            goto LABEL_77;
          }
          if ( *((_DWORD *)this + 9) >= 3u )
          {
            if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 64, 0x298u, &NumberOfBytesRead, 0LL) )
            {
              v25 = 262LL;
              return wil::details::in1diag3::Return_GetLastError(
                       retaddr,
                       (void *)v25,
                       (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                       v24);
            }
            if ( NumberOfBytesRead != 664 )
            {
              v27 = 263LL;
              goto LABEL_77;
            }
            if ( *((_DWORD *)this + 9) >= 4u )
            {
              if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 728, 8u, &NumberOfBytesRead, 0LL) )
              {
                v25 = 267LL;
                return wil::details::in1diag3::Return_GetLastError(
                         retaddr,
                         (void *)v25,
                         (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                         v24);
              }
              if ( NumberOfBytesRead != 8 )
              {
                v27 = 268LL;
                goto LABEL_77;
              }
              if ( *((_DWORD *)this + 9) >= 5u )
              {
                if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 736, 4u, &NumberOfBytesRead, 0LL) )
                {
                  v25 = 272LL;
                  return wil::details::in1diag3::Return_GetLastError(
                           retaddr,
                           (void *)v25,
                           (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                           v24);
                }
                if ( NumberOfBytesRead != 4 )
                {
                  v27 = 273LL;
                  goto LABEL_77;
                }
              }
            }
          }
        }
        if ( *((_DWORD *)this + 12) >= FileInformation.nFileSizeLow )
        {
          v27 = 279LL;
        }
        else if ( *((_DWORD *)this + 13) )
        {
          if ( SetFilePointer(*((HANDLE *)this + 3), *((_DWORD *)this + 11), 0LL, 0) == -1 )
          {
            v4 = -2147418113;
            v5 = 283LL;
            goto LABEL_82;
          }
          v28 = (const struct std::nothrow_t *)operator new[](
                                                 *((unsigned int *)this + 12),
                                                 (const struct std::nothrow_t *)&std::nothrow);
          v29 = (const struct std::nothrow_t *)*((_QWORD *)this + 93);
          v30 = v28;
          if ( v28 != v29 )
          {
            operator delete(*((void **)this + 93), v29);
            v29 = v30;
            *((_QWORD *)this + 93) = v30;
          }
          if ( !v29 )
          {
            v4 = -2147024882;
            v5 = 286LL;
            goto LABEL_82;
          }
          if ( !ReadFile(*((HANDLE *)this + 3), v29, *((_DWORD *)this + 12), &NumberOfBytesRead, 0LL) )
          {
            v25 = 289LL;
            return wil::details::in1diag3::Return_GetLastError(
                     retaddr,
                     (void *)v25,
                     (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                     v24);
          }
          v31 = *((_DWORD *)this + 12);
          if ( NumberOfBytesRead == v31 )
          {
            nFileSizeLow = FileInformation.nFileSizeLow;
            *((_DWORD *)this + 200) = v31 / *((_DWORD *)this + 13);
            v33 = CQueryKnownGameList::ValidateKGL(this, nFileSizeLow);
            v4 = v33;
            if ( v33 != -2147024809 )
            {
              if ( v33 >= 0 )
                return 0;
              v5 = 296LL;
              goto LABEL_82;
            }
            return -2147024809;
          }
          v27 = 290LL;
        }
        else
        {
          v27 = 280LL;
        }
LABEL_77:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x80070057LL);
        return -2147024809;
      }
    }
    v5 = 232LL;
    goto LABEL_82;
  }
  v4 = -2147467261;
  v5 = 225LL;
LABEL_82:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)v4);
  return v4;
}

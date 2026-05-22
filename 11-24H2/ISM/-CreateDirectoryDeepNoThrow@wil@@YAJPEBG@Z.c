/*
 * XREFs of ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800D5BE8
 * Callers:
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800D5BE8 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800D8B64 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180085630 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E878 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800D5BE8 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?try_get_parent_path_range@wil@@YA_NPEBGPEA_K@Z @ 0x1800D9830 (-try_get_parent_path_range@wil@@YA_NPEBGPEA_K@Z.c)
 */

__int64 __fastcall wil::CreateDirectoryDeepNoThrow(const WCHAR *this, const unsigned __int16 *a2)
{
  DWORD LastError; // eax
  unsigned __int64 *v4; // r8
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  size_t v7; // rax
  const WCHAR *v8; // rdx
  wil *v9; // rbx
  unsigned int v11; // edi
  wil *v12; // rcx
  unsigned __int64 v13; // rdi
  wil *v14; // rax
  int DirectoryDeepNoThrow; // eax
  const struct std::nothrow_t *v16; // rdx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdx
  const struct std::nothrow_t *v20; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v22; // [rsp+48h] [rbp+10h] BYREF

  if ( CreateDirectoryW(this, 0LL) )
    return 0LL;
  LastError = GetLastError();
  if ( LastError == 3 )
  {
    v22 = 0LL;
    if ( !wil::try_get_parent_path_range(this, (const unsigned __int16 *)&v22, v4) )
      goto LABEL_22;
    v5 = v22;
    v6 = v22 + 1;
    v7 = 2 * (v22 + 1);
    if ( !is_mul_ok(v22 + 1, 2uLL) )
      v7 = -1LL;
    v9 = (wil *)operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v9 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7E,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    if ( v6 - 1 > 0x7FFFFFFE )
    {
      v11 = -2147024809;
      if ( v6 )
        *(_WORD *)v9 = 0;
    }
    else
    {
      if ( v5 <= 0x7FFFFFFE )
      {
        v8 = this;
        v12 = v9;
        v13 = v5 - v6;
        do
        {
          if ( !(v13 + v6) )
            break;
          if ( !*v8 )
            break;
          *(_WORD *)v12 = *v8++;
          v12 = (wil *)((char *)v12 + 2);
          --v6;
        }
        while ( v6 );
        v14 = (wil *)((char *)v12 - 2);
        if ( v6 )
          v14 = v12;
        v11 = v6 == 0 ? 0x8007007A : 0;
        *(_WORD *)v14 = 0;
      }
      else
      {
        v11 = -2147024809;
        *(_WORD *)v9 = 0;
      }
      if ( (v11 & 0x80000000) == 0 )
      {
        DirectoryDeepNoThrow = wil::CreateDirectoryDeepNoThrow(v9, v8);
        v11 = DirectoryDeepNoThrow;
        if ( DirectoryDeepNoThrow < 0 )
        {
          v17 = (unsigned int)DirectoryDeepNoThrow;
          v18 = 128LL;
LABEL_30:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v18,
            (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
            (const char *)v17);
          operator delete(v9, v20);
          return v11;
        }
        operator delete(v9, v16);
LABEL_22:
        if ( !CreateDirectoryW(this, 0LL) )
        {
          LastError = GetLastError();
          if ( LastError != 183 )
          {
            if ( LastError )
            {
              v19 = 135LL;
              return wil::details::in1diag3::Return_Win32(
                       retaddr,
                       (void *)v19,
                       (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
                       (const char *)LastError);
            }
          }
        }
        return 0LL;
      }
    }
    v17 = v11;
    v18 = 127LL;
    goto LABEL_30;
  }
  if ( LastError != 183 && LastError )
  {
    v19 = 141LL;
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)v19,
             (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
             (const char *)LastError);
  }
  return 0LL;
}

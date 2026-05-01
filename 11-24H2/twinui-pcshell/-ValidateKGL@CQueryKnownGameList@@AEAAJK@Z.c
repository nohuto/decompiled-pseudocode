/*
 * XREFs of ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x18014EDE8
 * Callers:
 *     ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x180027908 (-RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CQueryKnownGameList::ValidateKGL(CQueryKnownGameList *this, unsigned int a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // ebx
  unsigned int v14; // r15d
  struct localeinfo_struct *locale; // r12
  int v16; // ebx
  wint_t v17; // ax
  int v18[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !*((_DWORD *)this + 10) )
  {
    v4 = 808LL;
LABEL_4:
    v5 = -2147024809;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v7 = *((_DWORD *)this + 11);
  if ( v7 >= a2 )
  {
    v4 = 809LL;
    goto LABEL_4;
  }
  v8 = *((_DWORD *)this + 12);
  if ( v8 >= a2 )
  {
    v4 = 810LL;
    goto LABEL_4;
  }
  if ( *((_DWORD *)this + 9) == 5 )
  {
    if ( *((_DWORD *)this + 13) != 16 )
    {
      v4 = 814LL;
      goto LABEL_4;
    }
    goto LABEL_13;
  }
  if ( *((_DWORD *)this + 13) < 0x10u )
  {
    v4 = 819LL;
    goto LABEL_4;
  }
  if ( *((_DWORD *)this + 9) >= 2u )
  {
LABEL_13:
    if ( *((_DWORD *)this + 15) > 2u )
    {
      v4 = 825LL;
      goto LABEL_4;
    }
  }
  if ( *((_DWORD *)this + 9) >= 3u && (unsigned __int16)(*((_WORD *)this + 33) - 1) > 8u )
  {
    v4 = 831LL;
    goto LABEL_4;
  }
  if ( v7 + v8 < v8 )
  {
    v5 = -2147024362;
    v4 = 834LL;
    goto LABEL_5;
  }
  if ( v7 + v8 >= a2 )
  {
    v4 = 835LL;
    goto LABEL_4;
  }
  if ( v8 % *((_DWORD *)this + 13) )
  {
    v4 = 836LL;
    goto LABEL_4;
  }
  v9 = 0;
  v10 = v8 / *((_DWORD *)this + 13);
  while ( v9 < v10 )
  {
    v11 = *(_QWORD *)this;
    *(_OWORD *)v18 = 0LL;
    v5 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, int *))(v11 + 88))(this, v9, v18);
    if ( v5 < 0 )
    {
      v4 = 847LL;
      goto LABEL_5;
    }
    if ( v18[2] >= a2 )
    {
      v4 = 849LL;
      goto LABEL_4;
    }
    if ( v18[3] >= a2 )
    {
      v4 = 850LL;
      goto LABEL_4;
    }
    if ( (unsigned int)(v18[3] + v18[2]) < v18[2] )
    {
      v5 = -2147024362;
      v4 = 851LL;
      goto LABEL_5;
    }
    if ( v18[3] + v18[2] > a2 )
    {
      v4 = 852LL;
      goto LABEL_4;
    }
    if ( v9 )
    {
      v12 = *(_QWORD *)v18;
      if ( !LOWORD(v18[0]) )
        goto LABEL_41;
      v13 = 0;
      v14 = 0;
      locale = _create_locale(0, "C");
      while ( v14 < 4 )
      {
        v16 = _towlower_l(*((_WORD *)&v19 + v14), locale);
        v17 = _towlower_l(*((_WORD *)v18 + v14++), locale);
        v13 = v16 - v17;
        if ( v13 )
          goto LABEL_39;
      }
      if ( v14 != 4 )
        v13 = 1;
LABEL_39:
      _free_locale(locale);
      if ( v13 >= 0 )
      {
        v4 = 859LL;
        goto LABEL_4;
      }
    }
    v12 = *(_QWORD *)v18;
LABEL_41:
    v19 = v12;
    ++v9;
  }
  return 0LL;
}

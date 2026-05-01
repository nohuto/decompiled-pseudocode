/*
 * XREFs of ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x180041BC8
 * Callers:
 *     ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x180041448 (-RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z @ 0x180041A08 (-StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CQueryKnownGameList::ValidateKGL(CQueryKnownGameList *this, unsigned int a2)
{
  unsigned int v4; // edx
  unsigned int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // esi
  unsigned int v8; // r14d
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebp
  __int64 v12; // rax
  unsigned int v14; // ebx
  unsigned int v15[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !*((_DWORD *)this + 10) )
  {
    v6 = 808LL;
    goto LABEL_42;
  }
  v4 = *((_DWORD *)this + 11);
  if ( v4 >= a2 )
  {
    v6 = 809LL;
    goto LABEL_42;
  }
  v5 = *((_DWORD *)this + 12);
  if ( v5 >= a2 )
  {
    v6 = 810LL;
    goto LABEL_42;
  }
  if ( *((_DWORD *)this + 9) == 5 )
  {
    if ( *((_DWORD *)this + 13) != 16 )
    {
      v6 = 814LL;
LABEL_42:
      v14 = -2147024809;
      goto LABEL_43;
    }
  }
  else
  {
    if ( *((_DWORD *)this + 13) < 0x10u )
    {
      v6 = 819LL;
      goto LABEL_42;
    }
    if ( *((_DWORD *)this + 9) < 2u )
      goto LABEL_11;
  }
  if ( *((_DWORD *)this + 15) > 2u )
  {
    v6 = 825LL;
    goto LABEL_42;
  }
LABEL_11:
  if ( *((_DWORD *)this + 9) >= 3u && (unsigned __int16)(*((_WORD *)this + 33) - 1) > 8u )
  {
    v6 = 831LL;
    goto LABEL_42;
  }
  if ( v4 + v5 >= v5 )
  {
    if ( v4 + v5 >= a2 )
    {
      v6 = 835LL;
      goto LABEL_42;
    }
    if ( v5 % *((_DWORD *)this + 13) )
    {
      v6 = 836LL;
      goto LABEL_42;
    }
    v7 = 0;
    v8 = v5 / *((_DWORD *)this + 13);
    if ( !v8 )
      return 0LL;
    while ( 1 )
    {
      v9 = *(_QWORD *)this;
      *(_OWORD *)v15 = 0LL;
      v10 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, unsigned int *))(v9 + 88))(this, v7, v15);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x34F,
          (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)(unsigned int)v10);
        return v11;
      }
      if ( v15[2] >= a2 )
      {
        v6 = 849LL;
        goto LABEL_42;
      }
      if ( v15[3] >= a2 )
      {
        v6 = 850LL;
        goto LABEL_42;
      }
      if ( v15[3] + v15[2] < v15[2] )
      {
        v14 = -2147024362;
        v6 = 851LL;
        goto LABEL_43;
      }
      if ( v15[3] + v15[2] > a2 )
      {
        v6 = 852LL;
        goto LABEL_42;
      }
      if ( !v7 )
        goto LABEL_26;
      v12 = *(_QWORD *)v15;
      if ( LOWORD(v15[0]) )
        break;
LABEL_27:
      ++v7;
      v16 = v12;
      if ( v7 >= v8 )
        return 0LL;
    }
    if ( (int)KnownGameList::StrCmpInsensitive(
                (KnownGameList *)&v16,
                (const unsigned __int16 *)4,
                (__int64)v15,
                (const unsigned __int16 *)4) >= 0 )
    {
      v6 = 859LL;
      goto LABEL_42;
    }
LABEL_26:
    v12 = *(_QWORD *)v15;
    goto LABEL_27;
  }
  v14 = -2147024362;
  v6 = 834LL;
LABEL_43:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)v14);
  return v14;
}

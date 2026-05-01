/*
 * XREFs of ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x18003D428
 * Callers:
 *     ?GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003F2D0 (-GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z @ 0x1800414DC (-RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002284 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MarkConsumed@CGameEntry@@AEAAJK_N@Z @ 0x1800410B4 (-MarkConsumed@CGameEntry@@AEAAJK_N@Z.c)
 *     ?ReadDWORD@CGameEntry@@AEAAJPEAK@Z @ 0x1800412F0 (-ReadDWORD@CGameEntry@@AEAAJPEAK@Z.c)
 *     ?ReadUShort@CGameEntry@@AEAAJPEAG_N@Z @ 0x180041370 (-ReadUShort@CGameEntry@@AEAAJPEAG_N@Z.c)
 *     ?VerifyAvailable@CGameEntry@@AEAAJK@Z @ 0x180041F9C (-VerifyAvailable@CGameEntry@@AEAAJK@Z.c)
 */

__int64 __fastcall CGameEntry::CompleteInitialization(CGameEntry *this)
{
  int DWORD; // edi
  bool v3; // r8
  __int64 v4; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int16 *v7; // rsi
  unsigned int v8; // edx
  bool v9; // r8
  _WORD *v10; // rdi
  int UShort; // esi
  bool v12; // r8
  __int64 v13; // rdx
  _WORD *v14; // r14
  size_t v15; // rax
  void *v16; // rax
  const struct std::nothrow_t *v17; // rdx
  void *v18; // rcx
  void *v19; // rsi
  unsigned int v20; // ebx
  __int64 v21; // rdx
  unsigned int v22; // r15d
  __int64 v23; // rsi
  int v24; // ebp
  size_t v25; // rax
  void *v26; // rax
  const struct std::nothrow_t *v27; // rdx
  void *v28; // rcx
  void *v29; // rdi
  __int64 v30; // rdx
  unsigned int v31; // esi
  __int64 v32; // rdi
  __int64 v33; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  DWORD = CGameEntry::ReadDWORD(this, (unsigned int *)this + 9);
  if ( DWORD < 0 )
  {
    v4 = 1334LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)DWORD);
    return (unsigned int)DWORD;
  }
  v6 = *((unsigned int *)this + 9);
  if ( v6 > (unsigned __int64)*((unsigned int *)this + 8) + 4 )
  {
    v20 = -2147483637;
    v21 = 1338LL;
    goto LABEL_60;
  }
  if ( (unsigned int)v6 < 4 )
  {
    *((_DWORD *)this + 8) = -1;
    DWORD = -2147024362;
    v4 = 1342LL;
    goto LABEL_3;
  }
  v7 = (unsigned __int16 *)((char *)this + 48);
  *((_DWORD *)this + 8) = v6 - 4;
  DWORD = CGameEntry::ReadUShort(this, (unsigned __int16 *)this + 24, v3);
  if ( DWORD < 0 )
  {
    v4 = 1346LL;
    goto LABEL_3;
  }
  DWORD = CGameEntry::VerifyAvailable(this, *v7);
  if ( DWORD < 0 )
  {
    v4 = 1348LL;
    goto LABEL_3;
  }
  v8 = *v7;
  *((_QWORD *)this + 5) = *((_QWORD *)this + 2);
  DWORD = CGameEntry::MarkConsumed(this, v8, 1);
  if ( DWORD < 0 )
  {
    v4 = 1352LL;
    goto LABEL_3;
  }
  v10 = (_WORD *)((char *)this + 50);
  UShort = CGameEntry::ReadUShort(this, (unsigned __int16 *)this + 25, v9);
  if ( UShort < 0 )
  {
    v13 = 1354LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)UShort);
    return (unsigned int)UShort;
  }
  if ( 12 * (unsigned int)(unsigned __int16)*v10 > *((_DWORD *)this + 8) )
  {
    v20 = -2147024809;
    v21 = 1356LL;
    goto LABEL_60;
  }
  v14 = (_WORD *)((char *)this + 52);
  UShort = CGameEntry::ReadUShort(this, (unsigned __int16 *)this + 26, v12);
  if ( UShort < 0 )
  {
    v13 = 1358LL;
    goto LABEL_14;
  }
  if ( 4 * (unsigned int)(unsigned __int16)*v14 > *((_DWORD *)this + 8) )
  {
    v20 = -2147024809;
    v21 = 1360LL;
    goto LABEL_60;
  }
  if ( !*v10 )
    goto LABEL_32;
  v15 = 16LL * (unsigned __int16)*v10;
  if ( !is_mul_ok((unsigned __int16)*v10, 0x10uLL) )
    v15 = -1LL;
  v16 = operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
  v18 = (void *)*((_QWORD *)this + 7);
  v19 = v16;
  if ( v16 != v18 )
  {
    operator delete(v18, v17);
    v18 = v19;
    *((_QWORD *)this + 7) = v19;
  }
  if ( v18 )
  {
    v22 = 0;
    if ( *v10 )
    {
      while ( 1 )
      {
        v23 = 16LL * v22;
        v24 = CGameEntry::ReadDWORD(this, (unsigned int *)(v23 + *((_QWORD *)this + 7)));
        if ( v24 < 0 )
          break;
        v24 = CGameEntry::ReadDWORD(this, (unsigned int *)(v23 + *((_QWORD *)this + 7) + 4LL));
        if ( v24 < 0 )
        {
          v30 = 1372LL;
          goto LABEL_43;
        }
        v24 = CGameEntry::VerifyAvailable(this, *(_DWORD *)(v23 + *((_QWORD *)this + 7) + 4));
        if ( v24 < 0 )
        {
          v30 = 1374LL;
          goto LABEL_43;
        }
        *(_QWORD *)(v23 + *((_QWORD *)this + 7) + 8) = *((_QWORD *)this + 2);
        UShort = CGameEntry::MarkConsumed(this, *(_DWORD *)(v23 + *((_QWORD *)this + 7) + 4), 1);
        if ( UShort < 0 )
        {
          v13 = 1378LL;
          goto LABEL_14;
        }
        if ( ++v22 >= (unsigned __int16)*v10 )
          goto LABEL_32;
      }
      v30 = 1370LL;
      goto LABEL_43;
    }
LABEL_32:
    if ( !*v14 )
      return 0LL;
    v25 = 16LL * (unsigned __int16)*v14;
    if ( !is_mul_ok((unsigned __int16)*v14, 0x10uLL) )
      v25 = -1LL;
    v26 = operator new[](v25, (const struct std::nothrow_t *)&std::nothrow);
    v28 = (void *)*((_QWORD *)this + 8);
    v29 = v26;
    if ( v26 != v28 )
    {
      operator delete(v28, v27);
      v28 = v29;
      *((_QWORD *)this + 8) = v29;
    }
    if ( !v28 )
    {
      v20 = -2147024882;
      v21 = 1386LL;
      goto LABEL_60;
    }
    v31 = 0;
    if ( !*v14 )
      return 0LL;
    while ( 1 )
    {
      v32 = 16LL * v31;
      *(_DWORD *)(*((_QWORD *)this + 8) + v32 + 4) = 0;
      *(_QWORD *)(v32 + *((_QWORD *)this + 8) + 8) = 0LL;
      v24 = CGameEntry::ReadDWORD(this, (unsigned int *)(v32 + *((_QWORD *)this + 8)));
      if ( v24 < 0 )
        break;
      v33 = *((_QWORD *)this + 8);
      if ( (*(_DWORD *)(v32 + v33) & 0x10000000) == 0 )
      {
        v24 = CGameEntry::ReadDWORD(this, (unsigned int *)(v32 + v33 + 4));
        if ( v24 < 0 )
        {
          v30 = 1399LL;
          goto LABEL_43;
        }
        v24 = CGameEntry::VerifyAvailable(this, *(_DWORD *)(v32 + *((_QWORD *)this + 8) + 4));
        if ( v24 < 0 )
        {
          v30 = 1401LL;
          goto LABEL_43;
        }
        *(_QWORD *)(v32 + *((_QWORD *)this + 8) + 8) = *((_QWORD *)this + 2);
        DWORD = CGameEntry::MarkConsumed(this, *(_DWORD *)(v32 + *((_QWORD *)this + 8) + 4), 1);
        if ( DWORD < 0 )
        {
          v4 = 1405LL;
          goto LABEL_3;
        }
      }
      if ( ++v31 >= (unsigned __int16)*v14 )
        return 0LL;
    }
    v30 = 1393LL;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v24);
    return (unsigned int)v24;
  }
  v20 = -2147024882;
  v21 = 1366LL;
LABEL_60:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)v20);
  return v20;
}

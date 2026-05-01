/*
 * XREFs of ?RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z @ 0x1800414DC
 * Callers:
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x18003CFA0 (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002284 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x18003D428 (-CompleteInitialization@CGameEntry@@AEAAJXZ.c)
 *     memcpy_0 @ 0x180043070 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGameEntry::RuntimeClassInitialize(CGameEntry *this, struct KnownGameList::IGameEntry *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  void *v7; // rax
  const struct std::nothrow_t *v8; // rdx
  void *v9; // rcx
  void *v10; // rdi
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  size_t Size; // [rsp+38h] [rbp+10h] BYREF
  void *Src; // [rsp+40h] [rbp+18h] BYREF

  Src = 0LL;
  LODWORD(Size) = 0;
  v4 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, void **))(*(_QWORD *)a2 + 72LL))(a2, &Src);
  if ( v4 < 0 )
  {
    v5 = 1210LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, size_t *))(*(_QWORD *)a2 + 80LL))(a2, &Size);
  if ( v4 < 0 )
  {
    v5 = 1212LL;
    goto LABEL_3;
  }
  v7 = operator new[]((unsigned int)Size, (const struct std::nothrow_t *)&std::nothrow);
  v9 = (void *)*((_QWORD *)this + 9);
  v10 = v7;
  if ( v7 != v9 )
  {
    operator delete(v9, v8);
    v9 = v10;
    *((_QWORD *)this + 9) = v10;
  }
  if ( !v9 )
  {
    v11 = -2147024882;
    v12 = 1215LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  memcpy_0(v9, Src, (unsigned int)Size);
  v13 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 2) = v13;
  *((_QWORD *)this + 3) = v13;
  *((_DWORD *)this + 8) = Size;
  v11 = CGameEntry::CompleteInitialization(this);
  if ( v11 < 0 )
  {
    v12 = 1224LL;
    goto LABEL_10;
  }
  return 0LL;
}

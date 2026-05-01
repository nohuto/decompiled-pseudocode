/*
 * XREFs of ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003FC48
 * Callers:
 *     ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003F150 (-GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002284 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18003F968 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CQueryKnownGameList::GetProcessNameByPID(
        struct _RTL_CRITICAL_SECTION *this,
        DWORD a2,
        const unsigned __int16 **a3)
{
  ULONG_PTR v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // r14
  ULONG_PTR SpinCount; // rsi
  int v10; // esi
  size_t v11; // rax
  void *v12; // rax
  void *v13; // rsi
  unsigned int ProcessImageInfoByPID; // r14d
  const struct std::nothrow_t *v15; // rdx
  const struct std::nothrow_t *v16; // rdx
  const struct std::nothrow_t *v17; // rdx
  char *v18; // rsi
  const unsigned __int16 *v19; // r15
  size_t v20; // rax
  const struct std::nothrow_t *v21; // rdx
  char *v22; // r14
  const struct std::nothrow_t *v23; // rdx
  const struct std::nothrow_t *v24; // rdx
  const struct std::nothrow_t *v25; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v27; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR v28; // [rsp+88h] [rbp+48h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x365,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = 0LL;
  v28 = 0LL;
  v8 = this + 19;
  EnterCriticalSection(this + 19);
  SpinCount = this[18].SpinCount;
  if ( SpinCount )
  {
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 8LL))(SpinCount);
    v7 = SpinCount;
    v28 = SpinCount;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( v7 )
  {
    v27 = 0;
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)v7 + 24LL))(
            v7,
            a2,
            0LL,
            &v27);
    if ( v10 < 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
      return (unsigned int)v10;
    }
    v11 = 2LL * v27;
    if ( !is_mul_ok(v27, 2uLL) )
      v11 = -1LL;
    v12 = operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( !v12 )
    {
      ProcessImageInfoByPID = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x375,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      operator delete(0LL, v15);
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
      return ProcessImageInfoByPID;
    }
    ProcessImageInfoByPID = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, void *, unsigned int *))(*(_QWORD *)v7 + 24LL))(
                              v7,
                              a2,
                              v12,
                              &v27);
    if ( (ProcessImageInfoByPID & 0x80000000) != 0 )
    {
      operator delete(v13, v16);
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
      return ProcessImageInfoByPID;
    }
    *a3 = (const unsigned __int16 *)v13;
  }
  else
  {
    v27 = 260;
    v18 = (char *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v18 )
    {
      ProcessImageInfoByPID = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x382,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      operator delete(0LL, v25);
      return ProcessImageInfoByPID;
    }
    operator delete(0LL, v17);
    ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(a2, v18, (unsigned __int16 *)&v27, 0LL, 0LL);
    v19 = (const unsigned __int16 *)v18;
    if ( ProcessImageInfoByPID == -2147024774 )
    {
      v20 = 2LL * v27;
      if ( !is_mul_ok(v27, 2uLL) )
        v20 = -1LL;
      v22 = (char *)operator new[](v20, (const struct std::nothrow_t *)&std::nothrow);
      if ( v22 != v18 )
      {
        operator delete(v18, v21);
        v18 = v22;
        v19 = (const unsigned __int16 *)v22;
        if ( !v22 )
        {
          ProcessImageInfoByPID = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x388,
            (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8007000ELL);
          operator delete(0LL, v23);
          return ProcessImageInfoByPID;
        }
      }
      ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(a2, v18, (unsigned __int16 *)&v27, 0LL, 0LL);
    }
    if ( (ProcessImageInfoByPID & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38C,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)ProcessImageInfoByPID);
      operator delete(v18, v24);
      return ProcessImageInfoByPID;
    }
    *a3 = v19;
  }
  operator delete(0LL, v16);
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}

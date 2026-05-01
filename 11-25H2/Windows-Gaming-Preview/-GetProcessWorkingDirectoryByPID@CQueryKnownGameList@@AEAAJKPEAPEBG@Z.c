/*
 * XREFs of ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1800400B4
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003DD24 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002284 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x1800403A8 (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CQueryKnownGameList::GetProcessWorkingDirectoryByPID(
        struct _RTL_CRITICAL_SECTION *this,
        DWORD a2,
        const unsigned __int16 **a3)
{
  ULONG_PTR v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  ULONG_PTR SpinCount; // rdi
  int v10; // edi
  size_t v11; // rax
  void *v12; // rax
  void *v13; // rdi
  unsigned int ProcessWorkingDirectoryByPID; // esi
  const struct std::nothrow_t *v15; // rdx
  const struct std::nothrow_t *v16; // rdx
  const struct std::nothrow_t *v17; // rdx
  unsigned __int16 *v18; // rdi
  unsigned int v19; // edx
  const unsigned __int16 *v20; // r14
  size_t v21; // rax
  const struct std::nothrow_t *v22; // rdx
  unsigned __int16 *v23; // rsi
  const struct std::nothrow_t *v24; // rdx
  const struct std::nothrow_t *v25; // rdx
  const struct std::nothrow_t *v26; // rdx
  unsigned int *v27; // [rsp+20h] [rbp-20h]
  unsigned int *v28; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v30; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR v31; // [rsp+88h] [rbp+48h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BF,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = 0LL;
  v31 = 0LL;
  v8 = this + 19;
  EnterCriticalSection(this + 19);
  SpinCount = this[18].SpinCount;
  if ( SpinCount )
  {
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 8LL))(SpinCount);
    v7 = SpinCount;
    v31 = SpinCount;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( v7 )
  {
    v30 = 0;
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)v7 + 40LL))(
            v7,
            a2,
            0LL,
            &v30);
    if ( v10 < 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
      return (unsigned int)v10;
    }
    v11 = 2LL * v30;
    if ( !is_mul_ok(v30, 2uLL) )
      v11 = -1LL;
    v12 = operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( !v12 )
    {
      ProcessWorkingDirectoryByPID = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3CF,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      operator delete(0LL, v15);
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
      return ProcessWorkingDirectoryByPID;
    }
    ProcessWorkingDirectoryByPID = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, void *, unsigned int *))(*(_QWORD *)v7 + 40LL))(
                                     v7,
                                     a2,
                                     v12,
                                     &v30);
    if ( (ProcessWorkingDirectoryByPID & 0x80000000) != 0 )
    {
      operator delete(v13, v16);
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
      return ProcessWorkingDirectoryByPID;
    }
    *a3 = (const unsigned __int16 *)v13;
  }
  else
  {
    v30 = 260;
    v18 = (unsigned __int16 *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v18 )
    {
      ProcessWorkingDirectoryByPID = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3DC,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      operator delete(0LL, v26);
      return ProcessWorkingDirectoryByPID;
    }
    operator delete(0LL, v17);
    ProcessWorkingDirectoryByPID = Common::GetProcessWorkingDirectoryByPID(
                                     a2,
                                     v19,
                                     (bool)v18,
                                     (unsigned __int16 *)&v30,
                                     v27);
    v20 = v18;
    if ( ProcessWorkingDirectoryByPID == -2147024774 )
    {
      v21 = 2LL * v30;
      if ( !is_mul_ok(v30, 2uLL) )
        v21 = -1LL;
      v23 = (unsigned __int16 *)operator new[](v21, (const struct std::nothrow_t *)&std::nothrow);
      if ( v23 != v18 )
      {
        operator delete(v18, v22);
        v18 = v23;
        v20 = v23;
        if ( !v23 )
        {
          ProcessWorkingDirectoryByPID = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3E4,
            (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8007000ELL);
          operator delete(0LL, v24);
          return ProcessWorkingDirectoryByPID;
        }
      }
      ProcessWorkingDirectoryByPID = Common::GetProcessWorkingDirectoryByPID(
                                       a2,
                                       (unsigned int)v22,
                                       (bool)v18,
                                       (unsigned __int16 *)&v30,
                                       v28);
    }
    if ( (ProcessWorkingDirectoryByPID & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3EA,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)ProcessWorkingDirectoryByPID);
      operator delete(v18, v25);
      return ProcessWorkingDirectoryByPID;
    }
    *a3 = v20;
  }
  operator delete(0LL, v16);
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}

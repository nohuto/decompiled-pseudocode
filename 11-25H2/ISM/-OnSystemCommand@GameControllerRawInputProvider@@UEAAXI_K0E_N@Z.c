/*
 * XREFs of ?OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x18005AC00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z @ 0x18005AF30 (-SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E558 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800CBEC8 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GameControllerRawInputProvider::OnSystemCommand(
        GameControllerRawInputProvider *this,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        bool a6)
{
  int v10; // ebp
  char *v11; // rsi
  char *i; // rbx
  _DWORD *v13; // rax
  unsigned int v14; // r8d
  const char *v15; // r9
  _DWORD *v16; // rbx
  wil::details::in1diag3 *v17; // rcx
  int v18; // eax
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // r14
  __int64 (__fastcall *v24)(__int64, __int64 (__fastcall *)(void *), _QWORD *, _QWORD *); // rbp
  __int64 v25; // rcx
  int v26; // eax
  GameControllerRawInputProvider **v27; // rcx
  __int64 v28; // rcx
  char *v29; // rcx
  char **v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rdx
  int v34; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v10 = a5 + 45;
  if ( !a6 )
  {
    v11 = (char *)this + 96;
    for ( i = (char *)*((_QWORD *)this + 12); i != v11; i = *(char **)i )
    {
      if ( *((_DWORD *)i + 8) == v10 )
      {
        v28 = *((_QWORD *)i + 3);
        if ( v28 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 96LL))(v28);
        v29 = *(char **)i;
        v30 = (char **)*((_QWORD *)i + 1);
        if ( *(char **)(*(_QWORD *)i + 8LL) != i || *v30 != i )
          goto LABEL_40;
        *v30 = v29;
        *((_QWORD *)v29 + 1) = v30;
        --*((_DWORD *)this + 28);
        v31 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), char *, __int64))(**((_QWORD **)this + 5)
                                                                                                 + 152LL))(
                *((_QWORD *)this + 5),
                GameControllerRawInputProvider::ShellButtonListEntryDeletionCallback,
                i,
                1LL);
        if ( v31 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x23D,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontroll"
                          "errawinputprovider.cpp",
            (const char *)(unsigned int)v31,
            v34);
      }
    }
  }
  v13 = operator new(0xBC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v13;
  if ( v13 )
  {
    memset_0(v13, 0, 0xBC0uLL);
    v16[6] = 3008;
  }
  else
  {
    v16 = 0LL;
  }
  v17 = retaddr;
  if ( !v16 )
  {
    v33 = 580LL;
    goto LABEL_39;
  }
  *v16 = 128;
  v16[1] = a2;
  *((_QWORD *)v16 + 4) = a3;
  v16[16] = v10;
  *((_BYTE *)v16 + 68) = a6;
  GameControllerRawInputProvider::SetTimestampsFromInput(
    (GameControllerRawInputProvider *)((char *)this - 16),
    a4,
    (struct InputInfo *)v16);
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), _DWORD *, __int64))(**((_QWORD **)this + 5)
                                                                                             + 152LL))(
          *((_QWORD *)this + 5),
          GameControllerRawInputProvider::InputReportCallback,
          v16,
          4LL);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x24F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)v18,
      v34);
    operator delete(v16, (const struct std::nothrow_t *)0xBC0);
    return;
  }
  if ( a6 )
  {
    v19 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v20 = v19;
    if ( v19 )
    {
      *v19 = 0LL;
      v19[1] = 0LL;
      v19[4] = 0LL;
      v19[5] = 0LL;
      v19[2] = 0LL;
      v19[3] = 0LL;
    }
    else
    {
      v20 = 0LL;
    }
    v17 = retaddr;
    if ( v20 )
    {
      v21 = *((_QWORD *)this + 4);
      v22 = v20[2];
      v20[2] = v21;
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      *((_DWORD *)v20 + 8) = v10;
      *((_DWORD *)v20 + 9) = a2;
      v20[5] = a3;
      v23 = *((_QWORD *)this + 5);
      v24 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), _QWORD *, _QWORD *))(*(_QWORD *)v23
                                                                                                  + 144LL);
      v25 = v20[3];
      v20[3] = 0LL;
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      v26 = v24(v23, GameControllerRawInputProvider::ShellButtonRepeatCallback, v20, v20 + 3);
      if ( v26 < 0 )
      {
        v32 = 614LL;
      }
      else
      {
        v26 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v20[3] + 80LL))(
                v20[3],
                250000LL,
                250000LL);
        if ( v26 >= 0 )
        {
LABEL_20:
          v27 = (GameControllerRawInputProvider **)*((_QWORD *)this + 13);
          if ( *v27 != (GameControllerRawInputProvider *)((char *)this + 96) )
LABEL_40:
            __fastfail(3u);
          *v20 = (char *)this + 96;
          v20[1] = v27;
          *v27 = (GameControllerRawInputProvider *)v20;
          *((_QWORD *)this + 13) = v20;
          ++*((_DWORD *)this + 28);
          return;
        }
        v32 = 618LL;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v32,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerra"
                      "winputprovider.cpp",
        (const char *)(unsigned int)v26,
        v34);
      goto LABEL_20;
    }
    v33 = 604LL;
LABEL_39:
    wil::details::in1diag3::_Log_NullAlloc(v17, (void *)v33, v14, v15);
  }
}

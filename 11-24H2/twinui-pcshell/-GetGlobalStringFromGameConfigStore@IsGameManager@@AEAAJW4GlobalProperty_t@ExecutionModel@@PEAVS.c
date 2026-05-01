/*
 * XREFs of ?GetGlobalStringFromGameConfigStore@IsGameManager@@AEAAJW4GlobalProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x1800A9774
 * Callers:
 *     ?GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x1800A7830 (-GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x1800A95C0 (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJPEBGI@Z @ 0x1801B79E4 (-Initialize@String@Internal@Windows@@QEAAJPEBGI@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$make_unique_nothrow@$$BY0A@G@wil@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@wistd@@@wistd@@_K@Z @ 0x18031A4F8 (--$make_unique_nothrow@$$BY0A@G@wil@@YA-AV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@wistd@.c)
 *     ??4?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x18031A568 (--4-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IsGameManager::GetGlobalStringFromGameConfigStore(__int64 a1, __int64 a2, HSTRING *a3)
{
  unsigned __int16 *v5; // rbx
  int v6; // eax
  const struct std::nothrow_t *v7; // rdx
  __int64 unique; // rax
  const struct std::nothrow_t *v9; // rdx
  void *v10; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  void *v16; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 *v17; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v18[128]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  memset_0(v18, 0, sizeof(v18));
  v15 = 256;
  v5 = 0LL;
  v17 = 0LL;
  Windows::Internal::String::Release(a3);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int16 *, unsigned int *))(**(_QWORD **)(a1 + 16) + 80LL))(
         *(_QWORD *)(a1 + 16),
         5LL,
         v18,
         &v15);
  if ( v6 == -2147024774 )
  {
    unique = wil::make_unique_nothrow<unsigned short [0]>(&v16, (unsigned __int64)v15 >> 1);
    wistd::unique_ptr<unsigned short [0],wistd::default_delete<unsigned short [0]>>::operator=(&v17, unique);
    v10 = v16;
    v16 = 0LL;
    if ( v10 )
      operator delete(v10, v9);
    v5 = v17;
    if ( !v17 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59D,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    if ( (*(int (__fastcall **)(_QWORD, __int64, unsigned __int16 *, unsigned int *))(**(_QWORD **)(a1 + 16) + 80LL))(
           *(_QWORD *)(a1 + 16),
           5LL,
           v17,
           &v15) >= 0 )
    {
      v12 = Windows::Internal::String::Initialize((Windows::Internal::String *)a3, v5, v15);
      v13 = retaddr;
      if ( v12 < 0 )
      {
        v14 = 1441LL;
LABEL_12:
        wil::details::in1diag3::_Log_Hr(
          v13,
          (void *)v14,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v12);
      }
    }
  }
  else if ( v6 >= 0 )
  {
    v12 = Windows::Internal::String::Initialize((Windows::Internal::String *)a3, v18, v15);
    v13 = retaddr;
    if ( v12 < 0 )
    {
      v14 = 1446LL;
      goto LABEL_12;
    }
  }
  if ( v5 )
    operator delete(v5, v7);
  return 0LL;
}

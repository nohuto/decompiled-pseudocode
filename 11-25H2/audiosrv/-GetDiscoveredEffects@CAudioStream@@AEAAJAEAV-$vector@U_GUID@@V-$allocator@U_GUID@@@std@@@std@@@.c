/*
 * XREFs of ?GetDiscoveredEffects@CAudioStream@@AEAAJAEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@@Z @ 0x1800087B0
 * Callers:
 *     ?GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z @ 0x180083638 (-GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800A1CD4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U_GUID@@U?$default_delete@$$BY0A@U_GUID@@@std@@@std@@QEAA@XZ @ 0x1800A6E28 (--1-$unique_ptr@$$BY0A@U_GUID@@U-$default_delete@$$BY0A@U_GUID@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAAEAU_GUID@@AEBU2@@Z @ 0x1800C89AC (--$_Emplace_back_with_unused_capacity@AEBU_GUID@@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@s.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAPEAU_GUID@@QEAU2@AEBU2@@Z @ 0x1800C89FC (--$_Emplace_reallocate@AEBU_GUID@@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAPEAU_GU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::GetDiscoveredEffects(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rax
  char *v6; // rax
  char *v7; // rbx
  int v8; // r15d
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // esi
  const char *v13; // r9
  __int64 result; // rax
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-48h]
  int v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+34h] [rbp-34h] BYREF
  char *v19; // [rsp+38h] [rbp-30h] BYREF
  char v20[8]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = 0;
  if ( !*(_QWORD *)(a1 + 384) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x755,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004005LL,
      v16);
    return 2147500037LL;
  }
  v5 = 16LL * *(unsigned int *)(a1 + 344);
  if ( !is_mul_ok(*(unsigned int *)(a1 + 344), 0x10uLL) )
    v5 = -1LL;
  v6 = (char *)operator new[](v5, (const struct std::nothrow_t *)&std::nothrow);
  try
  {
    v7 = v6;
    v19 = v6;
    v8 = *(_DWORD *)(a1 + 344);
    v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 376) + 40LL))(*(_QWORD *)(a1 + 376), v20);
    v18 = 0;
    v17 = (int)v7;
    v10 = NtQueryWnfStateData(v9, 0LL, 0LL, &v18);
    if ( v10 >= 0 )
    {
      if ( v18 )
      {
        while ( v4 < (v8 & 0xFFFFFFFu) )
        {
          v15 = *(_QWORD *)(a2 + 8);
          if ( v15 == *(_QWORD *)(a2 + 16) )
            std::vector<_GUID>::_Emplace_reallocate<_GUID const &>(a2, v15, &v7[16 * v4]);
          else
            std::vector<_GUID>::_Emplace_back_with_unused_capacity<_GUID const &>(a2, &v7[16 * v4]);
          ++v4;
        }
        std::unique_ptr<_GUID [0]>::~unique_ptr<_GUID [0]>(&v19);
        return 0LL;
      }
    }
    else
    {
      v11 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0x2EF,
              (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
              (const char *)(unsigned int)v10,
              (int)v7);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x75A,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v11,
          v17);
        if ( v7 )
          operator delete(v7);
        return v12;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004005LL,
      v17);
    std::unique_ptr<_GUID [0]>::~unique_ptr<_GUID [0]>(&v19);
    result = 2147500037LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x765,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                           v13);
  }
  return result;
}

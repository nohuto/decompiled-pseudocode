/*
 * XREFs of ?get_GamingRelatedProcessNames@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x18003A1E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002284 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeserializeRelatedProcessArray@@YAJQEAGKAEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180014228 (-DeserializeRelatedProcessArray@@YAJQEAGKAEAV-$ComPtr@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualit.c)
 *     ?Make@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@SAJPEAPEAV12345@@Z @ 0x180016144 (-Make@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@F.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::get_GamingRelatedProcessNames(
        __int64 a1,
        _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 (__fastcall ****v5)(_QWORD, GUID *, __int64 *); // r14
  __int64 v6; // r15
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r9
  void *v11; // rax
  void *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  const struct std::nothrow_t *v15; // rdx
  const struct std::nothrow_t *v16; // rdx
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v18; // rcx
  __int64 (__fastcall ***v20)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v21)(_QWORD, GUID *, _QWORD); // rdi
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // rcx
  int v23; // eax
  unsigned int v24; // ebx
  __int64 (__fastcall ***v25)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v26; // rcx
  __int64 (__fastcall ***v27)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v29)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  unsigned int v34; // [rsp+70h] [rbp+40h] BYREF
  __int64 (__fastcall ***v35)(_QWORD, GUID *, _QWORD); // [rsp+80h] [rbp+50h] BYREF
  __int64 v36; // [rsp+88h] [rbp+58h] BYREF

  v36 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  v5 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 104);
  if ( *(_QWORD *)(a1 + 104) )
    goto LABEL_38;
  v35 = 0LL;
  v6 = *(_QWORD *)(a1 + 112);
  v34 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)v6 + 80LL))(v6, 5LL, 0LL, &v34);
  v8 = v7;
  if ( (_WORD)v7 == 2 )
  {
    if ( v35 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*v35)[2])(v35);
    v7 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::Make(&v35);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 551LL;
LABEL_7:
      v10 = (unsigned int)v7;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)v10);
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
        (const char *)v8);
      v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v35;
      if ( v35 )
      {
        v35 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v17)[2])(v17);
      }
      if ( v4 )
        LeaveCriticalSection(v4);
      v18 = v36;
      if ( v36 )
      {
        v36 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      return v8;
    }
    goto LABEL_26;
  }
  if ( v7 < 0 )
  {
    v9 = 556LL;
    goto LABEL_7;
  }
  v11 = operator new[](v34 + 2LL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( !v11 )
  {
    v8 = -2147024882;
    v10 = 2147942414LL;
    v9 = 561LL;
    goto LABEL_8;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, void *, unsigned int *))(*(_QWORD *)v6 + 80LL))(v6, 5LL, v11, &v34);
  v8 = v13;
  if ( v13 < 0 )
  {
    v14 = 563LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v13);
    operator delete(v12, v16);
    goto LABEL_18;
  }
  v13 = DeserializeRelatedProcessArray((const WCHAR *)v12, v34, &v35);
  v8 = v13;
  if ( v13 < 0 )
  {
    v14 = 564LL;
    goto LABEL_17;
  }
  operator delete(v12, v15);
LABEL_26:
  v20 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v35;
  v21 = **v35;
  v22 = *v5;
  if ( *v5 )
  {
    *v5 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v22)[2])(v22);
  }
  v23 = v21(v20, &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90, v5);
  v24 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
      (const char *)(unsigned int)v23);
    v25 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v35;
    if ( v35 )
    {
      v35 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v25)[2])(v25);
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    v26 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    return v24;
  }
  v27 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v35;
  if ( v35 )
  {
    v35 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v27)[2])(v27);
  }
LABEL_38:
  v28 = *v5;
  v29 = ***v5;
  v30 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = v29(v28, &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90, &v36);
  v24 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
      (const char *)(unsigned int)v31);
    if ( v4 )
      LeaveCriticalSection(v4);
    v32 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    return v24;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  *a2 = v36;
  return 0LL;
}

/*
 * XREFs of ??$?0PEAUIInspectable@@@?$AutoValue@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUIInspectable@@PEAJ@Z @ 0x180023C7C
 * Callers:
 *     ?Insert@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@PEAE@Z @ 0x18002AF90 (-Insert@-$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultHash@PEAUHSTRING__@@@Internal@Colle.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XWinRT::AutoValue<XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>>::AutoValue<XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>>(
        __int64 a1,
        __int64 *a2,
        HRESULT *a3)
{
  _BYTE *v5; // rsi
  __int64 v6; // r15
  HRESULT v7; // ebx
  __int64 v8; // rcx
  _DWORD *v9; // rax
  _DWORD *v10; // rdi
  LPVOID v11; // rcx
  __int64 v12; // rcx
  LPVOID ppv; // [rsp+78h] [rbp+48h] BYREF
  __int64 v15; // [rsp+80h] [rbp+50h] BYREF

  *(_QWORD *)a1 = 0LL;
  v5 = (_BYTE *)(a1 + 8);
  *(_BYTE *)(a1 + 8) = 0;
  v6 = *a2;
  if ( !*a2 )
  {
LABEL_2:
    v7 = 0;
    goto LABEL_28;
  }
  v15 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v6)(v6, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v15) >= 0 )
  {
    *v5 = 0;
    *(_QWORD *)a1 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v8 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    goto LABEL_2;
  }
  v9 = operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( v9 )
  {
    *v9 = 1;
    v9[1] = 0;
    if ( qword_180059F00 )
    {
      _InterlockedAdd((volatile signed __int32 *)&Windows::Internal::Details::_git, 1u);
    }
    else
    {
      ppv = 0LL;
      v7 = CoCreateInstance(&CLSID_StdGlobalInterfaceTable, 0LL, 1u, &GUID_00000146_0000_0000_c000_000000000046, &ppv);
      if ( v7 >= 0 )
      {
        if ( !_InterlockedCompareExchange64(&qword_180059F00, (signed __int64)ppv, 0LL) )
          ppv = 0LL;
        _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::Details::_git);
      }
      v11 = ppv;
      if ( ppv )
      {
        ppv = 0LL;
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
      }
      if ( v7 < 0 )
        goto LABEL_18;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _DWORD *))(*(_QWORD *)qword_180059F00 + 24LL))(
           qword_180059F00,
           v6,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           v10 + 1);
LABEL_18:
    if ( v7 < 0 )
    {
      if ( _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
      {
        if ( v10[1] )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180059F00 + 32LL))(qword_180059F00);
        operator delete(v10, (const struct std::nothrow_t *)8);
      }
    }
    else
    {
      *(_QWORD *)a1 = v10;
      *v5 = 1;
    }
    goto LABEL_25;
  }
  v7 = -2147024882;
LABEL_25:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v5 = (_BYTE *)(a1 + 8);
LABEL_28:
  *a3 = v7;
  if ( v7 < 0 )
  {
    *(_QWORD *)a1 = 0LL;
    *v5 = 0;
  }
  return a1;
}

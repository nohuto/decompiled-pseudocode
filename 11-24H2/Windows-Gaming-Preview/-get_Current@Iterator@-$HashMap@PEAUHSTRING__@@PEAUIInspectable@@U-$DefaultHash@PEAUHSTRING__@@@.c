/*
 * XREFs of ?get_Current@Iterator@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@456@@Z @ 0x180035270
 * Callers:
 *     <none>
 * Callees:
 *     ?Make@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@SAJAEBQEAUHSTRING__@@AEBV?$GitStorageType@UIInspectable@@@detail@XWinRT@@PEAPEAV12345@@Z @ 0x18002BDF0 (-Make@-$SimpleKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultLifetimeTraits@PEAUHSTRING.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002DCB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConf.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Iterator::get_Current(
        _QWORD *a1,
        volatile signed __int64 **a2)
{
  _DWORD *v4; // rdi
  RTL_SRWLOCK *v5; // r14
  int v6; // esi
  __int64 v7; // rcx
  volatile signed __int64 *v8; // rdx
  volatile signed __int64 *v9; // rbx
  volatile signed __int64 *v11; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = (_DWORD *)(a1[8] + 160LL);
  v5 = (RTL_SRWLOCK *)(a1[8] + 168LL);
  if ( *v4 == 1 )
  {
    if ( SLODWORD(v5->Ptr) >= 0 )
      ++LODWORD(v5->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1[8] + 168LL));
  }
  if ( *(_QWORD *)(a1[8] + 176LL) == a1[10] )
  {
    v6 = 0;
  }
  else
  {
    v6 = -2147483636;
    RoOriginateError(2147483660LL, 0LL);
  }
  v7 = a1[9];
  if ( v6 >= 0 )
  {
    if ( v7 )
    {
      v11 = 0LL;
      v6 = Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::Make(
             (HSTRING *)v7,
             (__int128 *)(v7 + 8),
             &v11);
      v8 = v11;
      if ( v6 >= 0 )
      {
        v9 = v11;
        if ( v11 )
        {
          (*(void (__fastcall **)(volatile signed __int64 *))(*v11 + 8))(v11);
          v8 = v11;
        }
        *a2 = v9;
      }
      if ( v8 )
      {
        v11 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::Release(v8);
      }
    }
    else
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
  }
  if ( v4 )
  {
    if ( *v4 == 1 )
      --LODWORD(v5->Ptr);
    else
      ReleaseSRWLockShared(v5);
  }
  return (unsigned int)v6;
}

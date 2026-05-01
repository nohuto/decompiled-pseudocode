/*
 * XREFs of ?Insert@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x18056E990
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18006A450 (-RaiseEvent@-$HashMapOptions@PEAUHSTRING__@@PEAU1@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@Inter.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18006A470 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180103250 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??$?0PEAUHSTRING__@@@?$AutoValue@PEAUHSTRING__@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUHSTRING__@@PEAJ@Z @ 0x18056ABFC (--$-0PEAUHSTRING__@@@-$AutoValue@PEAUHSTRING__@@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@Interna.c)
 *     ?ChangeVersion@TagManager@SecureVersionTag@XWinRT@@QEAAJXZ @ 0x18056C7D8 (-ChangeVersion@TagManager@SecureVersionTag@XWinRT@@QEAAJXZ.c)
 *     ?EnsureInitialized@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEBAJXZ @ 0x18056CAFC (-EnsureInitialized@-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash@PEAUHSTRING__@@@Internal@Collec.c)
 *     ?Lookup@?$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@PEAUHSTRING__@@@XWinRT@@@XWinRT@@QEAAJAEBQEAUHSTRING__@@PEAPEAVCPair@12@@Z @ 0x18056EF44 (-Lookup@-$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash.c)
 *     ?SetAt@?$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@PEAUHSTRING__@@@XWinRT@@@XWinRT@@QEAAJAEBQEAUHSTRING__@@0PEAPEAUTXPOSITION@2@@Z @ 0x1805701B0 (-SetAt@-$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Insert(
        __int64 a1,
        HSTRING a2,
        HSTRING a3,
        _BYTE *a4)
{
  int v7; // edi
  HSTRING v8; // rbx
  __int64 v9; // r14
  RTL_SRWLOCK *v10; // rcx
  HSTRING string; // [rsp+30h] [rbp-20h] BYREF
  HSTRING newString; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v14; // [rsp+40h] [rbp-10h] BYREF
  HSTRING v15; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+58h] BYREF

  v15 = a3;
  *a4 = 0;
  Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::EnsureInitialized(a1);
  newString = 0LL;
  LODWORD(v16) = WindowsDuplicateString(a2, &newString);
  v7 = v16;
  if ( (int)v16 >= 0 )
  {
    XWinRT::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>(
      &string,
      &v15,
      (HRESULT *)&v16);
    v7 = v16;
    v8 = 0LL;
    if ( (int)v16 >= 0 )
    {
      XWinRT::SerializingLockPolicy::Write(&v14, (RTL_SRWLOCK *)(a1 + 160), &v16);
      v7 = v16;
      if ( (int)v16 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v16);
        XWinRT::SecureVersionTag::TagManager::ChangeVersion((XWinRT::SecureVersionTag::Tag **)(a1 + 176));
        v16 = 0LL;
        v7 = XWinRT::XHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<HSTRING__ *>>::Lookup(
               a1 + 72,
               &newString,
               &v16);
        if ( v7 >= 0 )
        {
          v9 = v16;
          if ( v16 )
          {
            v8 = *(HSTRING *)(v16 + 8);
            WindowsDeleteString(0LL);
            *(_QWORD *)(v9 + 8) = string;
            string = 0LL;
            *a4 = 1;
          }
          else if ( *(_QWORD *)(a1 + 88) == 0x7FFFFFFFLL )
          {
            v7 = -2147024882;
          }
          else
          {
            v16 = 0LL;
            v7 = XWinRT::XHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<HSTRING__ *>>::SetAt(
                   a1 + 72,
                   &newString,
                   &string,
                   &v16);
            if ( v7 >= 0 )
            {
              newString = 0LL;
              string = 0LL;
            }
          }
        }
      }
      if ( v14 )
      {
        v10 = v14 + 1;
        if ( LODWORD(v14->Ptr) == 1 )
          LODWORD(v10->Ptr) += 0x10000000;
        else
          ReleaseSRWLockExclusive(v10);
      }
    }
    WindowsDeleteString(v8);
    WindowsDeleteString(string);
  }
  if ( v7 >= 0 )
    v7 = Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>::RaiseEvent();
  WindowsDeleteString(newString);
  return (unsigned int)v7;
}

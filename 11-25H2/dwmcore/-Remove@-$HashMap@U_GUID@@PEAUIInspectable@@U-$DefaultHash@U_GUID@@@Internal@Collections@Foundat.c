/*
 * XREFs of ?Remove@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@@Z @ 0x1802CECD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1802CA1F4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?ChangeVersion@TagManager@SecureVersionTag@XWinRT@@QEAAJXZ @ 0x1802CB45C (-ChangeVersion@TagManager@SecureVersionTag@XWinRT@@QEAAJXZ.c)
 *     ?EnsureInitialized@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEBAJXZ @ 0x1802CBFE0 (-EnsureInitialized@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collecti.c)
 *     ?FreeNode@?$XHashMap@U_GUID@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@AEAAJPEAVCNode@12@@Z @ 0x1802CC59C (-FreeNode@-$XHashMap@U_GUID@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$HashM.c)
 *     ?Lookup@?$XHashMap@U_GUID@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBU_GUID@@PEAPEAVCPair@12@@Z @ 0x1802CDC58 (-Lookup@-$XHashMap@U_GUID@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$HashMap.c)
 *     ?RaiseEvent@?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x1802CE5FC (-RaiseEvent@-$HashMapOptions@U_GUID@@PEAUIInspectable@@U-$DefaultLifetimeTraits@U_GUID@@@Interna.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ @ 0x1802CEC30 (-Release@ReferencedGitCookie@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1802CF268 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Remove(
        __int64 a1,
        __int128 *a2)
{
  int v4; // ebx
  volatile signed __int32 *v5; // rsi
  char v6; // r15
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 i; // rcx
  __int64 v13; // rcx
  RTL_SRWLOCK *v14; // rcx
  _BYTE v16[8]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+38h] [rbp-28h] BYREF
  __int128 v18; // [rsp+50h] [rbp-10h] BYREF

  v4 = Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::EnsureInitialized(a1);
  if ( v4 >= 0 )
  {
    v5 = 0LL;
    LODWORD(v17) = 0;
    v6 = 0;
    XWinRT::SerializingLockPolicy::Write(&v18, a1 + 160, &v17);
    v4 = v17;
    if ( (int)v17 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v16);
      *(_QWORD *)&v17 = 0LL;
      v7 = XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::Lookup(
             a1 + 72,
             a2,
             &v17);
      v8 = v17;
      v4 = v7;
      if ( v7 >= 0 )
      {
        if ( (_QWORD)v17 )
        {
          v4 = XWinRT::SecureVersionTag::TagManager::ChangeVersion((XWinRT::SecureVersionTag::Tag **)(a1 + 176));
          if ( v4 >= 0 )
          {
            v9 = (unsigned int)(*(_DWORD *)(v8 + 40) % *(_DWORD *)(a1 + 96));
            v10 = *(_QWORD *)(a1 + 80);
            v17 = *(_OWORD *)(v8 + 16);
            v11 = *(_QWORD *)(v10 + 8 * v9);
            if ( v8 == v11 )
            {
              v11 = 0LL;
            }
            else
            {
              for ( i = *(_QWORD *)(v11 + 32); i != v8; i = *(_QWORD *)(i + 32) )
                v11 = i;
            }
            v13 = *(_QWORD *)(v8 + 32);
            if ( v11 )
              *(_QWORD *)(v11 + 32) = v13;
            else
              *(_QWORD *)(v10 + 8 * v9) = v13;
            XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::FreeNode(
              a1 + 72,
              v8);
            v6 = BYTE8(v17);
            v4 = 0;
            v5 = (volatile signed __int32 *)v17;
          }
        }
        else
        {
          v4 = -2147483637;
          RoOriginateError(2147483659LL, 0LL);
        }
      }
    }
    if ( (_QWORD)v18 )
    {
      v14 = (RTL_SRWLOCK *)(v18 + 8);
      if ( *(_DWORD *)v18 == 1 )
        LODWORD(v14->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v14);
    }
    if ( v6 )
    {
      XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Release(v5);
    }
    else if ( v5 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  if ( v4 >= 0 )
  {
    v18 = *a2;
    return (unsigned int)Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>::RaiseEvent();
  }
  return (unsigned int)v4;
}

/*
 * XREFs of ?GetMany@Iterator@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIQEAPEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@456@PEAI@Z @ 0x180099440
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180022921 (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18008AD78 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?EnsureVersionMatches@Iterator@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x180098C88 (-EnsureVersionMatches@Iterator@-$HashMap@W4WindowPosition@ContentManagement@@IU-$DefaultHash@W4W.c)
 *     ?GetNext@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@QEAAPEAVCPair@12@AEAPEAUTXPOSITION@2@@Z @ 0x1800995DC (-GetNext@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@C.c)
 *     ?InternalRelease@?$ComPtr@V?$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@4567@$00@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18009A34C (-InternalRelease@-$ComPtr@V-$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU-$DefaultL.c)
 *     ?Make@?$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@4567@$00@Internal@Collections@Foundation@Windows@@SAJAEBW4WindowPosition@ContentManagement@@AEBIPEAPEAV12345@@Z @ 0x18009AAB8 (-Make@-$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU-$DefaultLifetimeTraits@W4Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Iterator::GetMany(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  _QWORD *v4; // rsi
  unsigned int v7; // r15d
  __int64 v8; // rbx
  unsigned int v9; // r12d
  int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rbx
  RTL_SRWLOCK *v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h] BYREF
  RTL_SRWLOCK *v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+80h] [rbp+40h] BYREF
  int v19; // [rsp+88h] [rbp+48h] BYREF
  unsigned int *v20; // [rsp+98h] [rbp+58h]

  v20 = a4;
  v4 = a3;
  v19 = 0;
  v7 = 0;
  *a4 = 0;
  if ( a2 )
    memset_0(a3, 0, 8LL * a2);
  XWinRT::SerializingLockPolicy::Read(&v17, (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 64) + 160LL), &v19);
  if ( v19 >= 0 )
    v19 = Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Iterator::EnsureVersionMatches(a1);
  v8 = *(_QWORD *)(a1 + 72);
  v15 = v8;
  v9 = 0;
  v10 = v19;
  while ( v10 >= 0 )
  {
    if ( v9 >= a2 || !v8 )
      goto LABEL_15;
    v18 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>>::InternalRelease(&v18);
    v10 = Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>::Make(
            v8,
            v8 + 4,
            &v18);
    v19 = v10;
    if ( v10 >= 0 )
    {
      v11 = v18;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      v16 = 0LL;
      v4[v9] = v11;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
      XWinRT::XHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<unsigned int>>::GetNext(
        *(_QWORD *)(a1 + 64) + 72LL,
        &v15);
      ++v7;
      v8 = v15;
      if ( !v15 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>>::InternalRelease(&v18);
LABEL_15:
        *(_QWORD *)(a1 + 72) = v8;
        *v20 = v7;
        goto LABEL_19;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>>::InternalRelease(&v18);
    ++v9;
  }
  if ( v7 )
  {
    v12 = v7;
    do
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
      *v4++ = 0LL;
      --v12;
    }
    while ( v12 );
  }
LABEL_19:
  if ( v17 )
  {
    v13 = v17 + 1;
    if ( LODWORD(v17->Ptr) == 1 )
      --LODWORD(v13->Ptr);
    else
      ReleaseSRWLockShared(v13);
  }
  return (unsigned int)v10;
}

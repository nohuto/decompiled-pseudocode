/*
 * XREFs of ?HandleChainLinkEvent@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@PEAUIChainLinkEventArgs@2345@@Z @ 0x180234190
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?ClearNextIfMatch@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x180302390 (-ClearNextIfMatch@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUICh.c)
 *     ?LockExclusive@ObjectWithIamLock@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x180303D44 (-LockExclusive@ObjectWithIamLock@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x180304794 (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::HandleChainLinkEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v6; // eax
  unsigned int v7; // esi
  RTL_SRWLOCK *v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 48LL))(a3, &v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ClearNextIfMatch(a1, a2);
      }
      else if ( v11 == 2 )
      {
        v12 = 0LL;
        ObjectWithIamLock::LockExclusive((unsigned int)(v11 - 1), v9);
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v12, (_QWORD *)(a1 + 56));
        ++*(_DWORD *)(a1 + 64);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v9);
        if ( v12 )
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 80LL))(v12, a2, a3);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
      }
    }
    else
    {
      Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainIfPreviousMatches(a1, a2);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD9,
      (int)"onecoreuap\\internal\\shell\\inc\\chaininghelpers.h",
      (const char *)(unsigned int)v6);
    return v7;
  }
}

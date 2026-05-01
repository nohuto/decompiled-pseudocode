/*
 * XREFs of ?DeliverChainLinkEventInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAXW4ChainLinkEventTypeInternal@12345@@Z @ 0x180302584
 * Callers:
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x180303D6C (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?LockExclusive@ObjectWithIamLock@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x180303D44 (-LockExclusive@ObjectWithIamLock@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::DeliverChainLinkEventInternal(
        __int64 a1,
        int a2)
{
  int v3; // edx
  char v4; // r15
  _QWORD *v5; // rsi
  __int64 *v6; // rax
  unsigned int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v10; // [rsp+68h] [rbp+20h] BYREF

  if ( a2 && (v3 = a2 - 1) != 0 )
  {
    if ( v3 == 1 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 88LL))(a1, 0LL, 2LL);
  }
  else
  {
    v4 = 0;
    v5 = (_QWORD *)(a1 + 56);
    while ( 1 )
    {
      v9 = 0LL;
      ObjectWithIamLock::LockExclusive(a1, &v10);
      if ( *(_BYTE *)(a1 + 81) )
      {
        v5 = (_QWORD *)(a1 + 56);
        if ( !v4 )
          break;
      }
      v4 = 1;
      *(_BYTE *)(a1 + 81) = 1;
      if ( !*(_BYTE *)(a1 + 80) )
        goto LABEL_15;
      *(_BYTE *)(a1 + 80) = 0;
      if ( *(_QWORD *)(a1 + 72) )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v9, (_QWORD *)(a1 + 72));
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 72));
        *(_BYTE *)(a1 + 80) = *v5 != 0LL;
        v7 = 1;
      }
      else
      {
        if ( !*v5 )
          goto LABEL_15;
        v6 = Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 72), v5);
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v9, v6);
        v7 = 0;
      }
      v8 = v9;
      if ( !v9 )
      {
LABEL_15:
        *(_BYTE *)(a1 + 81) = 0;
        break;
      }
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v8, v7);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  }
}

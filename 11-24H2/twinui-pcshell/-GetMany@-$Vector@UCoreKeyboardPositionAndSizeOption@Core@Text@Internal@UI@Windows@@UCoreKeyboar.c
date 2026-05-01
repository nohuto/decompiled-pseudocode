/*
 * XREFs of ?GetMany@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAI@Z @ 0x18048A650
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18010A780 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _OWORD *a4,
        RTL_SRWLOCK *a5)
{
  unsigned int v5; // r12d
  _OWORD *v7; // rbp
  RTL_SRWLOCK *v10; // r13
  const struct std::nothrow_t *v11; // rdx
  int v12; // ebx
  unsigned int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // rax
  RTL_SRWLOCK *v16; // rcx
  int v18; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  v18 = 0;
  v7 = a4;
  if ( a3 )
    memset_0(a4, 0, 56LL * a3);
  v10 = a5;
  LODWORD(a5->Ptr) = 0;
  XWinRT::SerializingLockPolicy::Read(&a5, (RTL_SRWLOCK *)(a1 + 80), &v18);
  v12 = v18;
  if ( v18 >= 0 )
  {
    v13 = *(_DWORD *)(a1 + 48);
    if ( a2 > v13 )
    {
      v12 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v12 >= 0 && a3 )
    {
      do
      {
        if ( a2 >= v13 )
          break;
        v12 = 0;
        v14 = 56LL * a2;
        v15 = *(_QWORD *)(a1 + 64);
        ++v5;
        ++a2;
        *v7 = *(_OWORD *)(v14 + v15);
        v7[1] = *(_OWORD *)(v14 + v15 + 16);
        v7[2] = *(_OWORD *)(v14 + v15 + 32);
        *((_QWORD *)v7 + 6) = *(_QWORD *)(v14 + v15 + 48);
        v7 = (_OWORD *)((char *)v7 + 56);
      }
      while ( v5 < a3 );
    }
  }
  if ( a5 )
  {
    v16 = a5 + 1;
    if ( LODWORD(a5->Ptr) == 1 )
      --LODWORD(v16->Ptr);
    else
      ReleaseSRWLockShared(v16);
  }
  if ( v12 >= 0 )
    LODWORD(v10->Ptr) = v5;
  operator delete(0LL, v11);
  return (unsigned int)v12;
}

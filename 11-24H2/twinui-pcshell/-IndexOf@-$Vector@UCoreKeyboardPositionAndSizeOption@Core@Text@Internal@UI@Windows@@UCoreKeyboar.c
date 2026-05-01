/*
 * XREFs of ?IndexOf@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAIPEAE@Z @ 0x18048A8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18010A780 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?IndexOfInternal@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@IU678295@PEAIPEAE@Z @ 0x18048A978 (-IndexOfInternal@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCor.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::IndexOf(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _BYTE *a4)
{
  const struct std::nothrow_t *v8; // rdx
  int v9; // ecx
  unsigned int v10; // ebx
  int v11; // r8d
  __int128 v12; // xmm1
  __int64 v13; // rdx
  __int128 v14; // xmm0
  _OWORD v16[3]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+60h] [rbp-28h]
  int v18; // [rsp+90h] [rbp+8h] BYREF
  RTL_SRWLOCK *v19; // [rsp+A0h] [rbp+18h] BYREF

  *a3 = 0;
  v18 = 0;
  *a4 = 0;
  XWinRT::SerializingLockPolicy::Read(&v19, (RTL_SRWLOCK *)(a1 + 80), &v18);
  v10 = v18;
  if ( v18 >= 0 )
  {
    v11 = *(_DWORD *)(a1 + 48);
    v12 = *(_OWORD *)(a2 + 16);
    v13 = *(_QWORD *)(a1 + 64);
    v16[0] = *(_OWORD *)a2;
    v14 = *(_OWORD *)(a2 + 32);
    v16[1] = v12;
    *(_QWORD *)&v12 = *(_QWORD *)(a2 + 48);
    v16[2] = v14;
    v17 = v12;
    v10 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::IndexOfInternal(
            v9,
            v13,
            v11,
            (unsigned int)v16,
            (__int64)a3,
            (__int64)a4);
  }
  if ( v19 )
  {
    if ( LODWORD(v19->Ptr) == 1 )
      --LODWORD(v19[1].Ptr);
    else
      ReleaseSRWLockShared(v19 + 1);
  }
  operator delete(0LL, v8);
  return v10;
}

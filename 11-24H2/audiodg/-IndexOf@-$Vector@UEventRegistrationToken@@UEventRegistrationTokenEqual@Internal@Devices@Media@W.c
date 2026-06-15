/*
 * XREFs of ?IndexOf@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUEventRegistrationToken@@PEAIPEAE@Z @ 0x14007A260
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x140045544 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?IndexOfInternal@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJPEAUEventRegistrationToken@@IU6@PEAIPEAE@Z @ 0x14007A30C (-IndexOfInternal@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  int v8; // ecx
  unsigned int v9; // edi
  int v11; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0;
  v11 = 0;
  *a4 = 0;
  XWinRT::SerializingLockPolicy::Read(&v12, (RTL_SRWLOCK *)(a1 + 80), &v11);
  v9 = v11;
  if ( v11 >= 0 )
    v9 = Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::IndexOfInternal(
           v8,
           *(_QWORD *)(a1 + 64),
           *(_DWORD *)(a1 + 48),
           a2,
           (__int64)a3,
           (__int64)a4);
  if ( v12 )
  {
    if ( LODWORD(v12->Ptr) == 1 )
      --LODWORD(v12[1].Ptr);
    else
      ReleaseSRWLockShared(v12 + 1);
  }
  operator delete(0LL);
  return v9;
}

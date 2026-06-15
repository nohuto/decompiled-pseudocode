/*
 * XREFs of ?GetMany@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUEventRegistrationToken@@PEAI@Z @ 0x14007B980
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x140045844 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        RTL_SRWLOCK *a5)
{
  unsigned int v5; // ebp
  _QWORD *v7; // r14
  RTL_SRWLOCK *v10; // r13
  int v11; // ebx
  unsigned int v12; // r12d
  __int64 v13; // rcx
  RTL_SRWLOCK *v14; // rcx
  int v16; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  v16 = 0;
  v7 = a4;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  v10 = a5;
  LODWORD(a5->Ptr) = 0;
  XWinRT::SerializingLockPolicy::Read(&a5, (RTL_SRWLOCK *)(a1 + 80), &v16);
  v11 = v16;
  if ( v16 >= 0 )
  {
    v12 = *(_DWORD *)(a1 + 48);
    if ( a2 > v12 )
    {
      v11 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v11 >= 0 && a3 )
    {
      do
      {
        if ( a2 >= v12 )
          break;
        v11 = 0;
        v13 = a2;
        ++v5;
        ++a2;
        *v7++ = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v13);
      }
      while ( v5 < a3 );
    }
  }
  if ( a5 )
  {
    v14 = a5 + 1;
    if ( LODWORD(a5->Ptr) == 1 )
      --LODWORD(v14->Ptr);
    else
      ReleaseSRWLockShared(v14);
  }
  if ( v11 >= 0 )
    LODWORD(v10->Ptr) = v5;
  operator delete(0LL);
  return (unsigned int)v11;
}

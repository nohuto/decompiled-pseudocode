/*
 * XREFs of ?SetAt@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x1804237E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180103250 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z @ 0x1804179F0 (--0-$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z.c)
 *     ??4?$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z @ 0x180418F28 (--4-$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z.c)
 *     ?RaiseEvent@?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@Internal@Collections@Foundation@Windows@@SAJAEAU?$ReentrancyGuard@$00@detail@XWinRT@@AEAV?$GitEventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@25@PEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@W4CollectionChange@345@I@Z @ 0x180421C04 (-RaiseEvent@-$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     ?hr@?$ReentrancyGuard@$00@detail@XWinRT@@QEAA?BJXZ @ 0x1804266A8 (-hr@-$ReentrancyGuard@$00@detail@XWinRT@@QEAA-BJXZ.c)
 *     memmove_s @ 0x180426910 (memmove_s.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        int a3)
{
  __int64 v4; // r14
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  RTL_SRWLOCK *v9; // rcx
  int v11; // [rsp+20h] [rbp-40h]
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp-30h] BYREF
  int v13; // [rsp+38h] [rbp-28h] BYREF
  _DWORD *v14; // [rsp+40h] [rbp-20h]
  _BYTE v15[24]; // [rsp+48h] [rbp-18h] BYREF
  int v16; // [rsp+A0h] [rbp+40h] BYREF
  int Destination; // [rsp+A8h] [rbp+48h] BYREF

  v14 = 0LL;
  v16 = 0;
  v4 = a2;
  v13 = -2147483627;
  XWinRT::SerializingLockPolicy::Write(&v12, (RTL_SRWLOCK *)(a1 + 128), &v16);
  v6 = v16;
  if ( v16 >= 0 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 96) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v16 = -2147483637;
    }
    if ( v6 >= 0 )
    {
      v7 = XWinRT::detail::ReentrancyGuard<1>::ReentrancyGuard<1>(
             (__int64)v15,
             *(_DWORD *)(a1 + 176),
             (_DWORD *)(a1 + 180));
      XWinRT::detail::ReentrancyGuard<1>::operator=((__int64)&v13, v7);
      v16 = XWinRT::detail::ReentrancyGuard<1>::hr(&v13);
      v6 = v16;
      if ( v16 >= 0 )
      {
        v8 = *(_QWORD *)(a1 + 112);
        Destination = 0;
        if ( memmove_s(&Destination, 4uLL, (const void *const)(v8 + 4 * v4), 4uLL) )
        {
          v6 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
          v16 = -2147418113;
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4 * v4) = a3;
          ++*(_DWORD *)(a1 + 144);
        }
      }
    }
  }
  if ( v12 )
  {
    v9 = v12 + 1;
    if ( LODWORD(v12->Ptr) == 1 )
      LODWORD(v9->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v9);
    v12 = 0LL;
  }
  if ( v6 >= 0 )
  {
    v11 = v4;
    v6 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>::RaiseEvent(
           (__int64)&v13,
           a1 + 152,
           (a1 + 16) & -(__int64)(a1 != 0),
           3,
           v11);
    v16 = v6;
  }
  if ( v14 )
    *v14 = 0;
  return (unsigned int)v6;
}

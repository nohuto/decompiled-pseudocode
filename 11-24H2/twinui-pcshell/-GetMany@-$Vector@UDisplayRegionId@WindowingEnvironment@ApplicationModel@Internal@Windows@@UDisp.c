/*
 * XREFs of ?GetMany@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@PEAI@Z @ 0x18041F400
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18010A780 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _DWORD *a4,
        RTL_SRWLOCK *a5)
{
  unsigned int v5; // ebp
  _DWORD *v7; // r14
  RTL_SRWLOCK *v10; // r13
  const struct std::nothrow_t *v11; // rdx
  int v12; // ebx
  unsigned int v13; // r12d
  __int64 v14; // rcx
  RTL_SRWLOCK *v15; // rcx
  int v17; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  v17 = 0;
  v7 = a4;
  if ( a3 )
    memset_0(a4, 0, 4LL * a3);
  v10 = a5;
  LODWORD(a5->Ptr) = 0;
  XWinRT::SerializingLockPolicy::Read(&a5, (RTL_SRWLOCK *)(a1 + 128), &v17);
  v12 = v17;
  if ( v17 >= 0 )
  {
    v13 = *(_DWORD *)(a1 + 96);
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
        v14 = a2;
        ++v5;
        ++a2;
        *v7++ = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4 * v14);
      }
      while ( v5 < a3 );
    }
  }
  if ( a5 )
  {
    v15 = a5 + 1;
    if ( LODWORD(a5->Ptr) == 1 )
      --LODWORD(v15->Ptr);
    else
      ReleaseSRWLockShared(v15);
  }
  if ( v12 >= 0 )
    LODWORD(v10->Ptr) = v5;
  operator delete(0LL, v11);
  return (unsigned int)v12;
}

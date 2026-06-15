/*
 * XREFs of ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x180110F80
 * Callers:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x1800CCE10 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A400 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18007E518 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$_Construct_in_place@VCStreamConnectionManagerImpl@@$$V@std@@YAXAEAVCStreamConnectionManagerImpl@@@Z @ 0x18010EF08 (--$_Construct_in_place@VCStreamConnectionManagerImpl@@$$V@std@@YAXAEAVCStreamConnectionManagerIm.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x1801116CC (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 */

// Hidden C++ exception states: #wind=4
RTL_SRWLOCK *__fastcall CStreamConnectionManagerImpl::GetInstance(RTL_SRWLOCK *a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  std::_Ref_count_base *v5; // rsi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  std::_Ref_count_base *v8; // rdi
  CMonitorManager *v9; // rcx
  std::_Ref_count_base *v10; // rcx
  volatile signed __int32 *v11; // rdi
  __int128 v12; // rax
  unsigned __int128 v13; // kr00_16
  std::_Ref_count_base *v14; // rcx
  std::_Ref_count_base *v16[2]; // [rsp+28h] [rbp-28h]
  RTL_SRWLOCK *v17; // [rsp+70h] [rbp+20h] BYREF
  _DWORD *v18; // [rsp+78h] [rbp+28h]

  v17 = a1;
  AcquireSRWLockExclusive(&CStreamConnectionManagerImpl::s_instanceLock);
  v17 = &CStreamConnectionManagerImpl::s_instanceLock;
  *(_OWORD *)v16 = 0LL;
  v2 = *((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1);
  if ( *((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1) )
  {
    v3 = *(_DWORD *)(*((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1) + 8LL);
    while ( v3 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3);
      if ( v4 == v3 )
      {
        *(_OWORD *)v16 = CStreamConnectionManagerImpl::s_weakSelf;
        break;
      }
    }
  }
  v5 = v16[0];
  if ( v16[0] )
  {
    v11 = (volatile signed __int32 *)v16[1];
  }
  else
  {
    v6 = operator new(0x20uLL);
    v7 = v6;
    v18 = v6;
    if ( v6 )
    {
      *(_OWORD *)v6 = 0LL;
      v6[2] = 1;
      v6[3] = 1;
      *(_QWORD *)v6 = &std::_Ref_count_obj2<CStreamConnectionManagerImpl>::`vftable';
      std::_Construct_in_place<CStreamConnectionManagerImpl,>((_QWORD *)v6 + 2);
    }
    else
    {
      v7 = 0LL;
    }
    v8 = (std::_Ref_count_base *)(v7 + 4);
    v9 = (CMonitorManager *)*((_QWORD *)v7 + 3);
    if ( v9 && (int)CMonitorManager::Initialize(v9, 0x12u, 9uLL, &dword_180190350) >= 0 )
    {
      if ( v7 )
      {
        _InterlockedIncrement(v7 + 2);
        v8 = (std::_Ref_count_base *)(v7 + 4);
      }
      v5 = v8;
      v16[0] = v8;
      v10 = v16[1];
      v11 = v7;
      v16[1] = (std::_Ref_count_base *)v7;
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
    }
    else
    {
      v11 = (volatile signed __int32 *)v16[1];
    }
    v12 = 0uLL;
    if ( v11 )
    {
      _InterlockedIncrement(v11 + 3);
      v13 = *(_OWORD *)v16;
      v11 = (volatile signed __int32 *)(v13 >> 64);
      v5 = (std::_Ref_count_base *)v13;
      v12 = *(_OWORD *)v16;
    }
    v14 = (std::_Ref_count_base *)*((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1);
    CStreamConnectionManagerImpl::s_weakSelf = v12;
    if ( v14 )
      std::_Ref_count_base::_Decwref(v14);
    if ( v7 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
  }
  a1->Ptr = v5;
  a1[1].Ptr = (PVOID)v11;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v17);
  return a1;
}

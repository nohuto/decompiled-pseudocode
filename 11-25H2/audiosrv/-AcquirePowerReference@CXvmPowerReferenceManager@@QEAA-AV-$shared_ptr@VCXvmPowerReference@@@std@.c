/*
 * XREFs of ?AcquirePowerReference@CXvmPowerReferenceManager@@QEAA?AV?$shared_ptr@VCXvmPowerReference@@@std@@XZ @ 0x180103D94
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180016D04 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x18001681C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelDeferredPowerReferenceRelease@CXvmPowerReferenceManager@@AEAAXXZ @ 0x180103EF8 (-CancelDeferredPowerReferenceRelease@CXvmPowerReferenceManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CXvmPowerReferenceManager::AcquirePowerReference(CXvmPowerReferenceManager *this, _QWORD *a2)
{
  _QWORD *v2; // r12
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // r15
  __int64 v6; // r14
  __int64 (__fastcall *v7)(__int64, char *, char *); // rsi
  int v8; // eax
  std::_Ref_count_base *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v12; // [rsp+80h] [rbp+8h]

  v2 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( *((_QWORD *)this + 10) )
  {
    v4 = (volatile signed __int32 *)operator new(0x18uLL);
    v5 = v4;
    if ( v4 )
    {
      *((_DWORD *)v4 + 2) = 1;
      *((_DWORD *)v4 + 3) = 1;
      *(_QWORD *)v4 = &std::_Ref_count_obj2<CXvmPowerReference>::`vftable';
      *((_QWORD *)v4 + 2) = this;
    }
    else
    {
      v5 = 0LL;
    }
    try
    {
      std::_Mutex_base::lock((CXvmPowerReferenceManager *)((char *)this + 40));
      v12 = *((_DWORD *)this + 8);
      *((_DWORD *)this + 8) = v12 + 1;
      if ( !v12 )
      {
        v6 = *((_QWORD *)this + 10);
        v7 = *(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v6 + 24LL);
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)this + 11);
        v8 = v7(v6, (char *)this + 16, (char *)this + 88);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            366LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
            (const char *)(unsigned int)v8);
      }
      _Mtx_unlock((CXvmPowerReferenceManager *)((char *)this + 40));
      if ( !v12 )
        CXvmPowerReferenceManager::CancelDeferredPowerReferenceRelease(this);
      if ( v5 )
        _InterlockedIncrement(v5 + 2);
      *v2 = v5 + 4;
      v9 = (std::_Ref_count_base *)v2[1];
      v2[1] = v5;
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      if ( v5 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        381LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
        (const char *)0x8007000ELL);
      return a2;
    }
  }
  return v2;
}

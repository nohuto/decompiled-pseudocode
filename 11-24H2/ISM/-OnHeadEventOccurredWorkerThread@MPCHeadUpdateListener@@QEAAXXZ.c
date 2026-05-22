/*
 * XREFs of ?OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ @ 0x180069E28
 * Callers:
 *     wistd::__function::__func__lambda_de6b1f6763cb8f9e5e4be32e0bbc9f12__void___cdecl(void)_::operator() @ 0x1800D18C0 (wistd--__function--__func__lambda_de6b1f6763cb8f9e5e4be32e0bbc9f12__void___cdecl(void)_--operato.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180068358 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@.c)
 *     ??0?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800782B8 (--0-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEAV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEAV23@@Z @ 0x18007A2EC (--$_Emplace_reallocate@AEAV-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@-$v.c)
 *     ??4?$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18009268C (--4-$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread(MPCHeadUpdateListener *this)
{
  MPCHeadUpdateListener *v1; // rdi
  __int64 v2; // r14
  struct _RTL_CRITICAL_SECTION *v3; // r15
  __int128 v4; // xmm6
  __int128 v5; // xmm7
  __int128 v6; // xmm8
  __int128 v7; // xmm9
  _QWORD **v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  char *v11; // r15
  __int64 **v12; // r12
  __int64 v13; // rbx
  __int64 i; // rdi
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int128 v17; // [rsp+38h] [rbp-79h] BYREF
  __int64 v18; // [rsp+48h] [rbp-69h]
  _OWORD v19[8]; // [rsp+58h] [rbp-59h] BYREF
  __int64 v20; // [rsp+118h] [rbp+67h] BYREF
  __int64 v21; // [rsp+120h] [rbp+6Fh] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+128h] [rbp+77h]

  v1 = MPCHeadUpdateListener::s_instance;
  v20 = 0LL;
  v21 = 0LL;
  v17 = 0LL;
  v2 = 0LL;
  v18 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)MPCHeadUpdateListener::s_instance + 160);
  EnterCriticalSection((LPCRITICAL_SECTION)MPCHeadUpdateListener::s_instance + 4);
  v22 = v3;
  v4 = *((_OWORD *)v1 + 6);
  v5 = *((_OWORD *)v1 + 7);
  v6 = *((_OWORD *)v1 + 8);
  v7 = *((_OWORD *)v1 + 9);
  wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::operator=(&v20, (char *)v1 + 80);
  wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::operator=(&v21, (char *)v1 + 88);
  v8 = (_QWORD **)*((_QWORD *)v1 + 2);
  v9 = *v8;
  v10 = 0LL;
  while ( v9 != v8 )
  {
    if ( v10 == v2 )
    {
      std::vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy> &>(
        &v17,
        v10,
        v9 + 3);
      v2 = v18;
      v10 = *((_QWORD *)&v17 + 1);
    }
    else
    {
      wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>(
        v10,
        v9 + 3);
      v10 += 8LL;
      *((_QWORD *)&v17 + 1) = v10;
    }
    v9 = (_QWORD *)*v9;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  v11 = (char *)v17;
  v12 = (__int64 **)v17;
  v13 = v20;
  for ( i = v21; v12 != (__int64 **)v10; ++v12 )
  {
    v15 = *v12;
    v16 = **v12;
    v19[0] = v4;
    v19[1] = v5;
    v19[2] = v6;
    v19[3] = v7;
    (*(void (__fastcall **)(__int64 *, _OWORD *, __int64, __int64))(v16 + 24))(v15, v19, v13, i);
  }
  if ( v11 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>((__int64)v11, v10);
    std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)(8 * ((v2 - (__int64)v11) >> 3)));
  }
  if ( i )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)i + 16LL))(i);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
}

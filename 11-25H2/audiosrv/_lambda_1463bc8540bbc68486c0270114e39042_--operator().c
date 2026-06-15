/*
 * XREFs of _lambda_1463bc8540bbc68486c0270114e39042_::operator() @ 0x1800C2424
 * Callers:
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800C2E70 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$_Construct_in_place@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@std@@YAXAEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@Z @ 0x1800C20FC (--$_Construct_in_place@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@std.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800C210C (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@-$vecto.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_1463bc8540bbc68486c0270114e39042_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  _DWORD *v5; // rax
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 *v7; // rbx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a2;
  if ( *(_BYTE *)(*a2 + 136) )
    return 0;
  v5 = *(_DWORD **)a1;
  if ( **(_DWORD **)a1 != -1
    && (*v5 != 1 || !*(_BYTE *)(v4 + 40))
    && (*v5 || !*(_BYTE *)(v4 + 41))
    && (*v5 != 2 || (unsigned int)(*(_DWORD *)(v4 + 428) - 2) > 1) )
  {
    return 0;
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 136LL);
  EnterCriticalSection(v6);
  v9 = v6;
  v7 = *(__int64 **)(a1 + 8);
  if ( v7[23] == v7[24] )
  {
    std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> const &>(
      v7 + 22,
      v7[23],
      (__int64)a2);
  }
  else
  {
    std::_Construct_in_place<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>,wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> const &>(
      (_QWORD *)v7[23],
      a2);
    v7[23] += 8LL;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
  return 1;
}

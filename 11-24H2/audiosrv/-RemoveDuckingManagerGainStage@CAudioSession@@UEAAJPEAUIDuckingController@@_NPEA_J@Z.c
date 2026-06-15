/*
 * XREFs of ?RemoveDuckingManagerGainStage@CAudioSession@@UEAAJPEAUIDuckingController@@_NPEA_J@Z @ 0x1800282D0
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800286F0 (-clear@-$forward_list@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@.c)
 *     std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_5fdc09f974c9fb8661da7e153f1f57b6___ @ 0x1800737E4 (std--forward_list_wil--com_ptr_t_CPBMStreamClassVolumeGainStage_wil--err_returncode_policy__std-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSession::RemoveDuckingManagerGainStage(
        CAudioSession *this,
        struct IDuckingController *a2,
        char a3,
        __int64 *a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  _QWORD *i; // rbx
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  struct IDuckingController *v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = a4;
  v14 = a2;
  if ( a4 )
    *a4 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 328);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 328));
  if ( a3 )
  {
    if ( v15 )
    {
      for ( i = (_QWORD *)*((_QWORD *)this + 46); i; i = (_QWORD *)*i )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i[1] + 56LL) + 16LL))(*(_QWORD *)(i[1] + 56LL));
        v10 = v15;
        v11 = *v15;
        if ( *v15 <= v9 )
        {
          v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i[1] + 56LL) + 16LL))(*(_QWORD *)(i[1] + 56LL));
          v10 = v15;
          v11 = v12;
        }
        *v10 = v11;
      }
    }
    std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::clear((char *)this + 368);
  }
  else
  {
    v13[0] = &v14;
    v13[1] = &v15;
    std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_5fdc09f974c9fb8661da7e153f1f57b6___(
      (char *)this + 368,
      v13);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}

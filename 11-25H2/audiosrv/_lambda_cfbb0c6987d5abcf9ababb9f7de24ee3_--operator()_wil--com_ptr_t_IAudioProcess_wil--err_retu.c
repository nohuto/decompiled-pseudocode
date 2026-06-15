/*
 * XREFs of _lambda_cfbb0c6987d5abcf9ababb9f7de24ee3_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___ @ 0x1800C1E20
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy_________lambda_cfbb0c6987d5abcf9ababb9f7de24ee3___ @ 0x1800C2284 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_IAudioPr.c)
 * Callees:
 *     ??0?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18002E118 (--0-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180079700 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall lambda_cfbb0c6987d5abcf9ababb9f7de24ee3_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___(
        __int64 **a1,
        __int64 *a2)
{
  int v4; // eax
  __int64 *v5; // rbx

  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*a2 + 248LL))(*a2) )
    return 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 40LL))(*a2);
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x27u, (__int64)&WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids, v4);
  }
  v5 = *a1;
  if ( v5[1] == v5[2] )
  {
    std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> const &>(
      v5,
      v5[1],
      (__int64)a2);
  }
  else
  {
    wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
      (__int64 *)v5[1],
      a2);
    v5[1] += 8LL;
  }
  return 1;
}

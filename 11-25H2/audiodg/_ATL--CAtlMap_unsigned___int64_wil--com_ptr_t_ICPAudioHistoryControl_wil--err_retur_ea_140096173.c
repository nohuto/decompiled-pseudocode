/*
 * XREFs of _ATL::CAtlMap_unsigned___int64_wil::com_ptr_t_ICPAudioHistoryControl_wil::err_returncode_policy__ATL::CElementTraits_unsigned___int64__ATL::CElementTraits_wil::com_ptr_t_ICPAudioHistoryControl_wil::err_returncode_policy_____::SetAt_::_1_::catch$1 @ 0x140096173
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _CxxThrowException_0 @ 0x14005A1E0 (_CxxThrowException_0.c)
 *     ?RemoveNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x140066668 (-RemoveNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

void __fastcall __noreturn ATL::CAtlMap_unsigned___int64_wil::com_ptr_t_ICPAudioHistoryControl_wil::err_returncode_policy__ATL::CElementTraits_unsigned___int64__ATL::CElementTraits_wil::com_ptr_t_ICPAudioHistoryControl_wil::err_returncode_policy_____::SetAt_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax

  v3 = *(_QWORD *)(a2 + 120);
  if ( !v3 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = *(_QWORD *)(a2 + 96);
  v5 = (unsigned int)(*(_DWORD *)(v3 + 24) % *(_DWORD *)(v4 + 16));
  if ( v3 == *(_QWORD *)(*(_QWORD *)v4 + 8 * v5) )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = *(_QWORD *)(*(_QWORD *)v4 + 8 * v5);
    if ( *(_QWORD *)(v6 + 16) != v3 )
    {
      v7 = *(_QWORD *)(v6 + 16);
      do
      {
        v6 = v7;
        v7 = *(_QWORD *)(v7 + 16);
      }
      while ( v7 != v3 );
    }
  }
  ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::RemoveNode(
    *(_QWORD *)(a2 + 96),
    v3,
    v6);
  throw;
}

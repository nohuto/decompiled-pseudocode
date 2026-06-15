/*
 * XREFs of ??1?$out_param_t@V?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1801056E0
 * Callers:
 *     ?PopulateAudioHistoryForStream@CVADServer@@UEAAJ_J00@Z @ 0x180106D20 (-PopulateAudioHistoryForStream@CVADServer@@UEAAJ_J00@Z.c)
 * Callees:
 *     ?attach@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUISubmixProxy@@@Z @ 0x180076BD4 (-attach@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUISubmixProxy@@@Z.c)
 */

__int64 __fastcall wil::details::out_param_t<wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::attach(*(__int64 **)a1, *(_QWORD *)(a1 + 8));
  return result;
}

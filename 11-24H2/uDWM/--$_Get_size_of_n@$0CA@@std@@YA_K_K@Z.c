/*
 * XREFs of ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1800952E8
 * Callers:
 *     ??$_Emplace_reallocate@AEBU_DWMCaptureWindowInformation@@@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@AEAAPEAU_DWMCaptureWindowInformation@@QEAU2@AEBU2@@Z @ 0x1800ABEC8 (--$_Emplace_reallocate@AEBU_DWMCaptureWindowInformation@@@-$vector@U_DWMCaptureWindowInformation.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180095314 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<32>(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return 32 * a1;
}

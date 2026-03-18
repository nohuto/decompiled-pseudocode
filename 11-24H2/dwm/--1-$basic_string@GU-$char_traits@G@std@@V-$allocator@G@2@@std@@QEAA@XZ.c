/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x14000D65C
 * Callers:
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000D848 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000DEB8 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 *     ??1CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA@XZ @ 0x14000E968 (--1CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA@XZ.c)
 * Callees:
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x14000E6B8 (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x14000E6F8 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 */

__int64 __fastcall std::wstring::~wstring(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rcx

  result = std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged();
  if ( (_BYTE)result )
    result = std::wstring::_Deallocate_for_capacity(v3, *v3, v3[3]);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 7LL;
  return result;
}

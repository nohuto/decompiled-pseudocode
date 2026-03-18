/*
 * XREFs of ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x1400100D8
 * Callers:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x14000F044 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000F228 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000F898 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 *     ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x1400103F0 (-TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ.c)
 *     ?copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEAG_K_K@Z @ 0x1400104BC (-copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEAG_K_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(__int64 a1)
{
  return *(_QWORD *)(a1 + 24) > 7uLL;
}

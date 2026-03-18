/*
 * XREFs of ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x14006A3E0
 * Callers:
 *     ?bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x140069C20 (-bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV-$umptr_r@U_POINTL@@@@@Z.c)
 *     ?bXformRound@EXFORMOBJR@@QEBA_NPEBU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x140069D30 (-bXformRound@EXFORMOBJR@@QEBA_NPEBU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z @ 0x140069F84 (-addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z.c)
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x14006A178 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     bCvtPts @ 0x14006A4EC (bCvtPts.c)
 *     umptr_r__POINTL_::enumerate__POINTFIX__EXFORMOBJR::bXformRound_::_8_::_lambda_1___ @ 0x14006A73C (umptr_r__POINTL_--enumerate__POINTFIX__EXFORMOBJR--bXformRound_--_8_--_lambda_1___.c)
 *     umptr_inpage_warning @ 0x1401C3A60 (umptr_inpage_warning.c)
 */

char __fastcall EXFORMOBJR::bXformRound(_BYTE *a1, _QWORD *a2, unsigned int *a3, __int64 a4)
{
  int v8; // r14d
  unsigned int *v10; // rcx

  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 32LL) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 32LL) & 0x43) == 0x43 )
    return umptr_r__POINTL_::enumerate__POINTFIX__EXFORMOBJR::bXformRound_::_8_::_lambda_1___(a2, a3, a4);
  v8 = bCvtPts(*(_QWORD *)a1, *a2 + 8LL * a2[2], a3, a4);
  if ( !v8 )
    EngSetLastError(0x216u);
  if ( a1[8] )
  {
    v10 = &a3[2 * a4];
    while ( a3 < v10 )
    {
      *a3 = (*a3 + 8) & 0xFFFFFFF0;
      a3[1] = (a3[1] + 8) & 0xFFFFFFF0;
      a3 += 2;
    }
  }
  return v8 != 0;
}

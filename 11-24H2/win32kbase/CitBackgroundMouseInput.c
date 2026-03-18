/*
 * XREFs of CitBackgroundMouseInput @ 0x1400B3C30
 * Callers:
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x14018D1A4 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x140016D60 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitIsEnabled@@YAEXZ @ 0x1400B3CFC (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400B3D28 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1400B4140 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 */

void __fastcall CitBackgroundMouseInput(struct tagPROCESSINFO *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  struct _CIT_PROCESS *v4; // rdi
  unsigned __int64 v5; // rax
  struct _CIT_INTERACTION_SUMMARY *v6; // rax

  if ( CitIsEnabled() )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v2) + 18968) + 32LL);
    if ( *(struct tagPROCESSINFO **)(v3 + 120) != a1 )
    {
      v4 = CitpProcessEnsureContext(a1);
      if ( v4 )
      {
        v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( (unsigned int)(v5 - *((_DWORD *)v4 + 22)) > 0x3E8 )
        {
          *((_DWORD *)v4 + 22) = v5;
          PsUpdateComponentPower(*(_QWORD *)a1, 9LL);
          v6 = CitpInteractionSummaryEnsure((struct _CIT_IMPACT_CONTEXT *)v3, (struct tagPROCESSINFO **)v4, 8);
          if ( v6 )
            CitpStatIncrement((unsigned __int16 *)v6 + 53, 1u);
        }
      }
    }
  }
}

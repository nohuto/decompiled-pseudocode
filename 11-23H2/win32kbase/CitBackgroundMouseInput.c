/*
 * XREFs of CitBackgroundMouseInput @ 0x1C00594B8
 * Callers:
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C005941C (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00331FC (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0033220 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C003330C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 */

void __fastcall CitBackgroundMouseInput(struct tagPROCESSINFO *a1, const char *a2)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rbx
  struct _CIT_PROCESS *v4; // rsi
  unsigned __int64 v5; // rax
  struct _CIT_INTERACTION_SUMMARY *v6; // rax

  v2 = xmmword_1C0293D20;
  if ( xmmword_1C0293D20 )
  {
    if ( *((struct tagPROCESSINFO **)xmmword_1C0293D20 + 15) != a1 )
    {
      v4 = CitpProcessEnsureContext(a1, a2);
      if ( v4 )
      {
        v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( (unsigned int)(v5 - *((_DWORD *)v4 + 22)) > 0x3E8 )
        {
          *((_DWORD *)v4 + 22) = v5;
          PsUpdateComponentPower(*(_QWORD *)a1, 9LL);
          v6 = CitpInteractionSummaryEnsure(v2, (struct tagPROCESSINFO **)v4, 8);
          if ( v6 )
            CitpStatIncrement((unsigned __int16 *)v6 + 53, 1);
        }
      }
    }
  }
}

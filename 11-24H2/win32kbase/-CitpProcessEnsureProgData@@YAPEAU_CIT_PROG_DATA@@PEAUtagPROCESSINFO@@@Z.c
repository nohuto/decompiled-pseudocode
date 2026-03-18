/*
 * XREFs of ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x14023C4B0
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x140016D60 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400B26AC (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400B3D28 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1400B5CDC (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpGetProgDataFromProcessContext@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_PROCESS@@@Z @ 0x14023C3E8 (-CitpGetProgDataFromProcessContext@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x14023C5A8 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 */

struct _CIT_PROG_DATA *__fastcall CitpProcessEnsureProgData(struct _CIT_PROCESS **a1)
{
  struct _CIT_PROG_DATA *ProgDataFromProcessContext; // rbx
  struct _CIT_IMPACT_CONTEXT *v3; // rsi
  __int64 v4; // rcx
  struct _CIT_PROCESS *v5; // rcx
  struct _CIT_PROCESS *v6; // rax
  struct _CIT_PROCESS *v7; // rdi
  struct _CIT_PROG_DATA *v8; // rax
  int v10; // [rsp+38h] [rbp+10h]

  ProgDataFromProcessContext = 0LL;
  v3 = *(struct _CIT_IMPACT_CONTEXT **)(*(_QWORD *)(W32GetUserSessionState(a1) + 18968) + 32LL);
  if ( *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(v4) + 18968) + 25LL) )
  {
    if ( !CitpProcessInfoIsValid(a1[115]) || (ProgDataFromProcessContext = CitpGetProgDataFromProcessContext(v5)) == 0LL )
    {
      v6 = CitpProcessEnsureContext((struct tagPROCESSINFO *)a1);
      v7 = v6;
      if ( v6 )
      {
        if ( *((_QWORD *)v6 + 6) )
        {
          v8 = CitpProgDataEnsure(v3, (struct _CIT_PROCESS *)((char *)v6 + 48));
          ProgDataFromProcessContext = v8;
          if ( v8 )
          {
            LOWORD(v10) = -21845 * (((__int64)v8 - *(_QWORD *)v3) >> 5);
            HIWORD(v10) = *((_WORD *)v8 + 16);
            *((_DWORD *)v7 + 10) = v10;
          }
        }
      }
    }
  }
  return ProgDataFromProcessContext;
}

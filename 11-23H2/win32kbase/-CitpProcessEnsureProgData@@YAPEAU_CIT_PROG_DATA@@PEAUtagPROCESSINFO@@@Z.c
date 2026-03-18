/*
 * XREFs of ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0233E90
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C003330C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00A3D44 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0033220 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0233F30 (-CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C0233F98 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 */

struct _CIT_PROG_DATA *__fastcall CitpProcessEnsureProgData(struct tagPROCESSINFO *a1)
{
  struct _CIT_IMPACT_CONTEXT *v1; // rsi
  struct _CIT_PROG_DATA *ProgData; // rbx
  const char *v3; // rdx
  struct tagPROCESSINFO *v4; // r11
  struct _CIT_PROCESS *v5; // rax
  struct _CIT_PROCESS *v6; // rdi
  struct _CIT_PROG_DATA *v7; // rax
  int v9; // [rsp+38h] [rbp+10h]

  v1 = xmmword_1C0293D20;
  ProgData = 0LL;
  if ( *((_BYTE *)&qword_1C0293D14 + 5) )
  {
    ProgData = CitpProcessGetProgData(a1);
    if ( !ProgData )
    {
      v5 = CitpProcessEnsureContext(v4, v3);
      v6 = v5;
      if ( v5 )
      {
        if ( *((_QWORD *)v5 + 6) )
        {
          v7 = CitpProgDataEnsure(v1, (struct _CIT_PROCESS *)((char *)v5 + 48));
          ProgData = v7;
          if ( v7 )
          {
            LOWORD(v9) = -21845 * (((__int64)v7 - *(_QWORD *)v1) >> 5);
            HIWORD(v9) = *((_WORD *)v7 + 16);
            *((_DWORD *)v6 + 10) = v9;
          }
        }
      }
    }
  }
  return ProgData;
}

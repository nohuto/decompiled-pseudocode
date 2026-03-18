/*
 * XREFs of ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z @ 0x1C003341C
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C003330C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CitpProcessGetAppSessionId(
        struct _GUID *__return_ptr retstr,
        struct tagPROCESSINFO *a2,
        unsigned int *a3,
        __int64 a4)
{
  unsigned int v4; // eax
  unsigned __int16 *v8; // rax
  struct _KPROCESS *v9; // rcx
  unsigned __int16 v10; // r9
  struct _CIT_IMPACT_CONTEXT *v11; // rax
  LONGLONG TimeQuadPart; // rax
  __int64 v13; // rcx

  v4 = *((_DWORD *)a2 + 14);
  *retstr = 0LL;
  retstr->Data1 = v4;
  v8 = (unsigned __int16 *)SGDGetUserSessionState(retstr, a2, a3, a4);
  v9 = *(struct _KPROCESS **)a2;
  v10 = *v8;
  v11 = xmmword_1C0293D20;
  retstr->Data2 = v10;
  retstr->Data3 = *((_WORD *)v11 + 58);
  TimeQuadPart = PsGetProcessCreateTimeQuadPart(v9);
  v13 = *(_QWORD *)a2;
  *(_QWORD *)retstr->Data4 = TimeQuadPart;
  *a3 = PsGetProcessSequenceNumber(v13);
  return retstr;
}

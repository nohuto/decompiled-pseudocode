/*
 * XREFs of ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1400161D4
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x140016D60 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x14019EC50 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

void __fastcall CitpInteractionSummaryAllocate(struct _CIT_INTERACTION_SUMMARY **a1)
{
  unsigned __int16 v2; // bx
  struct _CIT_INTERACTION_SUMMARY *v3; // rax
  struct _CIT_INTERACTION_SUMMARY *v4; // rdx
  __int16 v5; // ax

  v2 = *(_WORD *)(*(_QWORD *)(W32GetUserSessionState() + 18968) + 28LL);
  v3 = (struct _CIT_INTERACTION_SUMMARY *)Win32AllocPoolZInitImpl(0x100uLL, v2, 0x49637355u);
  v4 = v3;
  if ( v3 )
  {
    *((_QWORD *)v3 + 1) = v3;
    *(_QWORD *)v3 = v3;
    v5 = *((_WORD *)v3 + 50);
    *a1 = v4;
    *((_WORD *)v4 + 50) = v5 ^ (v5 ^ (4 * v2)) & 0x7FFC;
    *((_QWORD *)v4 + 20) = (char *)v4 + 176;
    *((_QWORD *)v4 + 21) = v2 - 176LL;
  }
  else
  {
    CitpLogFailureWorker(-1073741670, 0LL, 0x7CDu);
  }
}

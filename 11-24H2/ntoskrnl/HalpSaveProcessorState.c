/*
 * XREFs of HalpSaveProcessorState @ 0x1406A6EB0
 * Callers:
 *     HaliSaveProcessorContextAndSleep @ 0x1406A70F0 (HaliSaveProcessorContextAndSleep.c)
 * Callees:
 *     KasanHibernationGetStackLow @ 0x1405A6BA0 (KasanHibernationGetStackLow.c)
 *     KeSaveStateForHibernate @ 0x1406ABD10 (KeSaveStateForHibernate.c)
 */

__int64 __fastcall HalpSaveProcessorState(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char *StackLow; // r9
  _QWORD *v4; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  if ( a1 )
  {
    KeSaveStateForHibernate();
    StackLow = KasanHibernationGetStackLow(v2, v1);
    v4 = (_QWORD *)(v7 + 240);
    *(_QWORD *)(v7 + 488) = HalpResumePoint;
    v4[19] = &v7;
    v4[15] = retaddr;
    v4[16] = StackLow;
  }
  return 0LL;
}

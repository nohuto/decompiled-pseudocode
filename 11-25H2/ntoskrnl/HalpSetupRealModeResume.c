/*
 * XREFs of HalpSetupRealModeResume @ 0x14069ACF0
 * Callers:
 *     HaliAcpiSleep @ 0x14049B670 (HaliAcpiSleep.c)
 * Callees:
 *     HalpInterruptSetProcessorStartContext @ 0x14053F640 (HalpInterruptSetProcessorStartContext.c)
 *     KasanHibernationGetStackLow @ 0x1405A62A0 (KasanHibernationGetStackLow.c)
 *     KeSaveStateForHibernate @ 0x14069FAA0 (KeSaveStateForHibernate.c)
 */

__int64 __fastcall HalpSetupRealModeResume(_QWORD *a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char *StackLow; // r9
  _QWORD *v5; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  *(_DWORD *)HalpWakeVector = a2;
  HalpInterruptSetProcessorStartContext(0LL, 0LL, 0);
  KeSaveStateForHibernate(v8 + 18);
  StackLow = KasanHibernationGetStackLow(v3, v2);
  v5 = v8;
  v8[79] = HalpResumePoint;
  v5[67] = &v8;
  v5[63] = retaddr;
  v5[64] = StackLow;
  return 0LL;
}

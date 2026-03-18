/*
 * XREFs of KasanHibernationGetStackLow @ 0x1405A9C30
 * Callers:
 *     HalpSaveProcessorState @ 0x1406A5E90 (HalpSaveProcessorState.c)
 *     HalpSetupRealModeResume @ 0x1406A5F20 (HalpSetupRealModeResume.c)
 *     PopSaveHiberContextWrapper @ 0x1406B3680 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x140259BD0 (KeQueryCurrentStackInformationEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KeGetCurrentStackPointer @ 0x1406AA390 (KeGetCurrentStackPointer.c)
 */

char *__fastcall KasanHibernationGetStackLow(__int64 a1, __int64 a2)
{
  unsigned __int64 CurrentStackPointer; // rax
  bool v4; // al
  int v5; // [rsp+40h] [rbp+8h] BYREF
  char *v6; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  if ( !byte_140FCDC28 )
    return 0LL;
  CurrentStackPointer = KeGetCurrentStackPointer(a1, a2);
  v4 = KeQueryCurrentStackInformationEx(CurrentStackPointer, &v5, &v6, &v7);
  if ( !v4 )
    KeBugCheckEx(0x1F1u, 4uLL, 4uLL, 0LL, 0LL);
  if ( !v5 || v5 == 5 || v5 == 7 || (unsigned int)(v5 - 8) < 2 )
    KeBugCheckEx(0x1F1u, 4uLL, 4uLL, v4, v5);
  return v6;
}

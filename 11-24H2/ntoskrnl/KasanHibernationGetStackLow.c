/*
 * XREFs of KasanHibernationGetStackLow @ 0x1405A6BA0
 * Callers:
 *     HalpSaveProcessorState @ 0x1406A6EB0 (HalpSaveProcessorState.c)
 *     HalpSetupRealModeResume @ 0x1406A6F40 (HalpSetupRealModeResume.c)
 *     PopSaveHiberContextWrapper @ 0x1406B4620 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14028A1E0 (KeQueryCurrentStackInformationEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KeGetCurrentStackPointer @ 0x1406AB330 (KeGetCurrentStackPointer.c)
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
  if ( !byte_140FCECA8 )
    return 0LL;
  CurrentStackPointer = KeGetCurrentStackPointer(a1, a2);
  v4 = KeQueryCurrentStackInformationEx(CurrentStackPointer, &v5, &v6, &v7);
  if ( !v4 )
    KeBugCheckEx(0x1F1u, 4uLL, 4uLL, 0LL, 0LL);
  if ( !v5 || v5 == 5 || v5 == 7 || (unsigned int)(v5 - 8) < 2 )
    KeBugCheckEx(0x1F1u, 4uLL, 4uLL, v4, v5);
  return v6;
}

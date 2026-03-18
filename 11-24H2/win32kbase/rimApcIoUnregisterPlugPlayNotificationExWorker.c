/*
 * XREFs of rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x14014F08C
 * Callers:
 *     rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x14014F070 (rimNormalApcIoUnregisterPlugPlayNotificationEx.c)
 *     rimRundownApcIoUnregisterPlugPlayNotificationEx @ 0x1401EA190 (rimRundownApcIoUnregisterPlugPlayNotificationEx.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x14005AA08 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x14005AA28 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x14017DFC4 (rimHandlePnpWaitersOnOwnedDevices.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

LONG_PTR __fastcall rimApcIoUnregisterPlugPlayNotificationExWorker(char *Buffer)
{
  _BYTE *v1; // rsi
  __int64 v3; // rdi
  char v5; // [rsp+48h] [rbp+10h] BYREF

  v1 = (_BYTE *)*((_QWORD *)Buffer + 11);
  v3 = *((unsigned int *)Buffer + 24);
  RIMLockExclusive((__int64)(v1 + 104));
  rimHandlePnpWaitersOnOwnedDevices(v1, (unsigned int)v3);
  RIMUnlockExclusive((__int64)(v1 + 104));
  IoUnregisterPlugPlayNotificationEx(*(PVOID *)&v1[8 * v3 + 224]);
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v5);
  if ( !*(_QWORD *)&v1[8 * (unsigned int)v3 + 224] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1688LL);
  *(_QWORD *)&v1[8 * (unsigned int)v3 + 224] = 0LL;
  *(_DWORD *)&v1[4 * (unsigned int)v3 + 296] = 0;
  if ( v1[80] || v1[81] )
  {
    GreDeleteFastMutex(Buffer);
    *(_QWORD *)&v1[8 * (unsigned int)v3 + 312] = 0LL;
  }
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v5);
  return ObfDereferenceObject(v1);
}

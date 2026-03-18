/*
 * XREFs of ?ActivationObjectOkToClose@@YAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1401A6A24
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DAD6C (W32CalloutDispatchWorker.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ActivationObjectOkToClose(struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( ObGetObjectType(*((_QWORD *)a1 + 3)) != ExActivationObjectType )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 337);
  if ( *((_BYTE *)a1 + 40) && (unsigned int)PsGetProcessSessionIdEx(*((_QWORD *)a1 + 2)) == -1 )
    return (unsigned int)-1073741790;
  return v2;
}

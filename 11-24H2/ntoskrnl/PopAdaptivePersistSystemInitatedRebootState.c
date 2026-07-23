/*
 * XREFs of PopAdaptivePersistSystemInitatedRebootState @ 0x1405D8174
 * Callers:
 *     PopGracefulShutdown @ 0x140B5DAF8 (PopGracefulShutdown.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopDiagTraceAdaptiveBootOverridePrepared @ 0x1407535BC (PopDiagTraceAdaptiveBootOverridePrepared.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14075E214 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     BcdOpenObject @ 0x1409A4724 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1409A5C2C (BcdCloseObject.c)
 *     BcdSetElementData @ 0x1409A60DC (BcdSetElementData.c)
 *     PopBcdOpen @ 0x1409A87C0 (PopBcdOpen.c)
 *     PopBcdClose @ 0x140A819F0 (PopBcdClose.c)
 */

__int64 __fastcall PopAdaptivePersistSystemInitatedRebootState(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  NTSTATUS SystemInitiatedRebootTargetBootEntry; // ebx
  int v5; // eax
  NTSTATUS v6; // eax
  HANDLE BcdObjectHandle; // [rsp+20h] [rbp-30h] BYREF
  HANDLE BcdStoreHandle; // [rsp+28h] [rbp-28h] BYREF
  __int64 Buffer; // [rsp+30h] [rbp-20h] BYREF
  GUID Identifier; // [rsp+38h] [rbp-18h] BYREF

  Buffer = 0LL;
  v2 = -1LL;
  v3 = -1LL;
  BcdStoreHandle = (HANDLE)-1LL;
  Identifier = 0LL;
  BcdObjectHandle = (HANDLE)-1LL;
  if ( byte_140FD8200 )
  {
    v5 = PopBcdOpen(&BcdStoreHandle);
    v2 = (__int64)BcdStoreHandle;
    SystemInitiatedRebootTargetBootEntry = v5;
    if ( v5 >= 0 )
    {
      SystemInitiatedRebootTargetBootEntry = PopAdaptiveGetSystemInitiatedRebootTargetBootEntry(
                                               BcdStoreHandle,
                                               &Identifier);
      if ( SystemInitiatedRebootTargetBootEntry >= 0 )
      {
        v6 = BcdOpenObject((HANDLE)v2, &Identifier, &BcdObjectHandle);
        v3 = (__int64)BcdObjectHandle;
        SystemInitiatedRebootTargetBootEntry = v6;
        if ( v6 >= 0 )
        {
          Buffer = qword_140FD8208;
          SystemInitiatedRebootTargetBootEntry = BcdSetElementData(BcdObjectHandle, 0x2500015Au, &Buffer, 8u);
        }
      }
    }
  }
  else
  {
    SystemInitiatedRebootTargetBootEntry = 279;
  }
  LOBYTE(a2) = (Buffer & 8) != 0;
  PopDiagTraceAdaptiveBootOverridePrepared(Buffer & 7, a2, (unsigned int)SystemInitiatedRebootTargetBootEntry);
  if ( v3 != -1 )
    BcdCloseObject((HANDLE)v3);
  if ( v2 != -1 )
    PopBcdClose(v2);
  return (unsigned int)SystemInitiatedRebootTargetBootEntry;
}

/*
 * XREFs of PopDiagTraceAppPowerMessage @ 0x14094E518
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PsLookupProcessByProcessId @ 0x14094DC80 (PsLookupProcessByProcessId.c)
 */

void __fastcall PopDiagTraceAppPowerMessage(HANDLE *a1)
{
  NTSTATUS v2; // eax
  PEPROCESS v3; // rbx
  unsigned __int16 *LastRebalanceQpc; // r8
  int v5; // ecx
  __int16 v6; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+34h] [rbp-4Ch] BYREF
  PEPROCESS Process; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int16 *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]

  v6 = 0;
  v7 = 0;
  Process = 0LL;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SUSPENDAPP) )
  {
    v2 = PsLookupProcessByProcessId(*a1, &Process);
    v3 = Process;
    if ( v2 >= 0 )
    {
      LastRebalanceQpc = (unsigned __int16 *)Process[1].LastRebalanceQpc;
      v7 = *(_DWORD *)a1;
      v6 = *LastRebalanceQpc >> 1;
      UserData.Ptr = (ULONGLONG)&v7;
      v10 = &v6;
      *(_QWORD *)&UserData.Size = 4LL;
      v11 = 2LL;
      v5 = *LastRebalanceQpc;
      v12 = *((_QWORD *)LastRebalanceQpc + 1);
      v13 = v5;
      v14 = 0;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SUSPENDAPP, 0LL, 3u, &UserData);
    }
    if ( v3 )
      ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  }
}

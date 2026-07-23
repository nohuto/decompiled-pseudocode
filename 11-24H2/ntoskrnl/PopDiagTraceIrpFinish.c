/*
 * XREFs of PopDiagTraceIrpFinish @ 0x1402E64EC
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x1402BA5A0 (PopDequeueQuerySetIrp.c)
 *     PopRequestCompletion @ 0x1403A6460 (PopRequestCompletion.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x1402E66B0 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopFxAddLogEntry @ 0x1402E69B4 (PopFxAddLogEntry.c)
 *     IoFindDeviceThatFailedIrp @ 0x1402F074C (IoFindDeviceThatFailedIrp.c)
 *     RtlStringCbCopyNW @ 0x1403CC204 (RtlStringCbCopyNW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceIrpFinish(__int64 a1)
{
  BOOLEAN result; // al
  __int64 v2; // r9
  wchar_t *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 DeviceThatFailedIrp; // rax
  __int64 v11; // rax
  const wchar_t *v12; // r8
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  int *v16; // [rsp+60h] [rbp-A0h]
  __int64 v17; // [rsp+68h] [rbp-98h]
  wchar_t *v18; // [rsp+70h] [rbp-90h]
  int v19; // [rsp+78h] [rbp-88h]
  int v20; // [rsp+7Ch] [rbp-84h]
  wchar_t pszDest[64]; // [rsp+80h] [rbp-80h] BYREF

  v14 = a1;
  result = PopDiagTraceIrpFinishTelemetry();
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRPFINISH);
    if ( result )
    {
      v3 = (wchar_t *)&SourceString;
      v4 = *(_QWORD *)(v14 + 72LL * *(char *)(v14 + 66) + 200);
      v5 = *(int *)(v14 + 48);
      v13 = v5;
      LOBYTE(v2) = *(_BYTE *)(v4 + 184);
      v6 = *(_DWORD *)(v4 + 188);
      if ( (int)v5 >= 0 || v6 )
      {
        if ( v6 == 1 && (_BYTE)v2 == 2 )
        {
          v7 = *(_QWORD *)(v4 + 24);
          if ( v7 )
            v8 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL);
          else
            v8 = 0LL;
          PopFxAddLogEntry(v8, 0LL, 23LL);
        }
      }
      else
      {
        DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(v14, v5, v4, v2);
        if ( DeviceThatFailedIrp )
        {
          v11 = *(_QWORD *)(DeviceThatFailedIrp + 8);
          v12 = *(const wchar_t **)(v11 + 64);
          if ( v12 )
          {
            if ( *(_WORD *)(v11 + 56) && RtlStringCbCopyNW(pszDest, 0x80uLL, v12, *(unsigned __int16 *)(v11 + 56)) >= 0 )
              v3 = pszDest;
          }
        }
      }
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v14;
      v16 = &v13;
      v9 = -1LL;
      v17 = 4LL;
      v18 = v3;
      do
        ++v9;
      while ( v3[v9] );
      v19 = 2 * v9 + 2;
      v20 = 0;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_IRPFINISH, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return result;
}

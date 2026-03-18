/*
 * XREFs of EtwpCloseRegistrationObject @ 0x1409FD860
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall EtwpCloseRegistrationObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  BOOLEAN v5; // al
  ULONG v6; // r9d
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-48h] BYREF

  if ( a4 == 1 )
  {
    if ( (*(_BYTE *)(a2 + 98) & 2) != 0 )
    {
      v5 = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS);
      v6 = 0;
      if ( v5 )
      {
        if ( *(_QWORD *)(a2 + 32) != -40LL )
        {
          UserData.Ptr = *(_QWORD *)(a2 + 32) + 40LL;
          v6 = 1;
          *(_QWORD *)&UserData.Size = 16LL;
        }
        EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS, 0LL, v6, &UserData);
      }
    }
    _InterlockedOr16((volatile signed __int16 *)(a2 + 98), 0x20u);
  }
}

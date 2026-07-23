/*
 * XREFs of WheapAttemptArchitecturalErrorRecovery @ 0x14065A420
 * Callers:
 *     WheapAttemptErrorRecovery @ 0x14065A4C0 (WheapAttemptErrorRecovery.c)
 * Callees:
 *     WheapGetErrorSource @ 0x1404204D8 (WheapGetErrorSource.c)
 *     WheapGetErrorSourceFunction @ 0x14048678C (WheapGetErrorSourceFunction.c)
 *     WheaGetErrPacketFromErrRecord @ 0x140552990 (WheaGetErrPacketFromErrRecord.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapAttemptArchitecturalErrorRecovery(__int64 a1)
{
  unsigned int v2; // edi
  PWHEA_ERROR_PACKET ErrPacketFromErrRecord; // rax
  __int64 *ErrorSource; // rax
  __int64 v5; // r11
  __int64 *v6; // rbx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = *(_DWORD *)(a1 + 12);
  v2 = -1073741811;
  ErrPacketFromErrRecord = WheaGetErrPacketFromErrRecord((PWHEA_ERROR_RECORD)a1);
  if ( ErrPacketFromErrRecord )
  {
    if ( ErrPacketFromErrRecord->ErrorSourceType <= (unsigned int)WheaErrSrcTypeSei )
    {
      ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, ErrPacketFromErrRecord->ErrorSourceId);
      v6 = ErrorSource;
      if ( ErrorSource )
      {
        if ( *(_QWORD *)(v5 + 48) )
        {
          if ( WheapGetErrorSourceFunction((__int64)ErrorSource, 3, 0) )
            v2 = guard_dispatch_icall_no_overrides(a1, &v8);
          else
            v2 = -1073741822;
          _InterlockedDecrement((volatile signed __int32 *)v6 + 23);
          *(_DWORD *)(a1 + 12) = v8;
        }
      }
    }
  }
  return v2;
}

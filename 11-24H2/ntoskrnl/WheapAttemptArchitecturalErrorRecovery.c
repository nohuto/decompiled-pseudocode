/*
 * XREFs of WheapAttemptArchitecturalErrorRecovery @ 0x14065BD00
 * Callers:
 *     WheapAttemptErrorRecovery @ 0x14065BDA0 (WheapAttemptErrorRecovery.c)
 * Callees:
 *     WheapGetErrorSource @ 0x14042E7A8 (WheapGetErrorSource.c)
 *     WheapGetErrorSourceFunction @ 0x14048B9BC (WheapGetErrorSourceFunction.c)
 *     WheaGetErrPacketFromErrRecord @ 0x140555050 (WheaGetErrPacketFromErrRecord.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapAttemptArchitecturalErrorRecovery(__int64 a1)
{
  unsigned int v2; // edi
  PWHEA_ERROR_PACKET ErrPacketFromErrRecord; // rax
  __int64 *ErrorSource; // rax
  __int64 v5; // r11
  __int64 *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = *(_DWORD *)(a1 + 12);
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
            v2 = guard_dispatch_icall_no_overrides(a1, &v10, v7, v8);
          else
            v2 = -1073741822;
          _InterlockedDecrement((volatile signed __int32 *)v6 + 23);
          *(_DWORD *)(a1 + 12) = v10;
        }
      }
    }
  }
  return v2;
}

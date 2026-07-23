/*
 * XREFs of RtlGetSystemGlobalData @ 0x1800D99C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 */

DWORD __cdecl RtlGetSystemGlobalData(RTL_SYSTEM_GLOBAL_DATA_ID DataId, PVOID Buffer, DWORD Size)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 i; // [rsp+48h] [rbp+20h]

  if ( DataId != GlobalDataIdRngSeedVersion )
  {
    switch ( DataId )
    {
      case GlobalDataIdInterruptTime:
        if ( Size != 8 )
          return -1073741306;
        for ( i = MEMORY[0x7FFE0008]; MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010]; i = MEMORY[0x7FFE0008] )
          _mm_pause();
        goto LABEL_15;
      case GlobalDataIdTimeZoneBias:
        if ( Size != 8 )
          return -1073741306;
        if ( RtlGetCurrentServiceSessionId() )
          v6 = (__int64)NtCurrentPeb()->SharedData + 592;
        else
          v6 = 2147352608LL;
        i = *(_QWORD *)v6;
        if ( HIDWORD(*(_QWORD *)v6) == *(_DWORD *)(v6 + 8) )
        {
LABEL_15:
          *(_QWORD *)Buffer = i;
        }
        else
        {
          do
            _mm_pause();
          while ( HIDWORD(*(_QWORD *)v6) != *(_DWORD *)(v6 + 8) );
          *(_QWORD *)Buffer = *(_QWORD *)v6;
        }
        return 0;
      case GlobalDataIdImageNumberLow:
        if ( Size != 2 )
          return -1073741306;
        *(_WORD *)Buffer = MEMORY[0x7FFE002C];
        return 0;
      case GlobalDataIdImageNumberHigh:
        if ( Size != 2 )
          return -1073741306;
        *(_WORD *)Buffer = MEMORY[0x7FFE002E];
        return 0;
      case GlobalDataIdTimeZoneId:
        if ( Size != 4 )
          return -1073741306;
        if ( RtlGetCurrentServiceSessionId() )
          v5 = (__int64)NtCurrentPeb()->SharedData + 584;
        else
          v5 = 2147353152LL;
        *(_DWORD *)Buffer = *(_DWORD *)v5;
        return 0;
      case GlobalDataIdNtMajorVersion:
        if ( Size != 4 )
          return -1073741306;
        *(_DWORD *)Buffer = MEMORY[0x7FFE026C];
        return 0;
      case GlobalDataIdNtMinorVersion:
        if ( Size != 4 )
          return -1073741306;
        *(_DWORD *)Buffer = MEMORY[0x7FFE0270];
        return 0;
      case GlobalDataIdSystemExpirationDate:
        if ( Size != 8 )
          return -1073741306;
        *(_QWORD *)Buffer = MEMORY[0x7FFE02C8];
        return 0;
      case GlobalDataIdKdDebuggerEnabled:
        if ( Size != 1 )
          return -1073741306;
        *(_BYTE *)Buffer = MEMORY[0x7FFE02D4];
        return 0;
      case GlobalDataIdCyclesPerYield:
        if ( Size != 2 )
          return -1073741306;
        *(_WORD *)Buffer = MEMORY[0x7FFE02D6];
        return 0;
      case GlobalDataIdSafeBootMode:
        if ( Size != 1 )
          return -1073741306;
        *(_BYTE *)Buffer = MEMORY[0x7FFE02EC];
        return 0;
      case GlobalDataIdLastSystemRITEventTickCount:
        if ( Size != 4 )
          return -1073741306;
        *(_DWORD *)Buffer = MEMORY[0x7FFE02E4];
        return 0;
      case GlobalDataIdConsoleSharedDataFlags:
        if ( Size != 4 )
          return -1073741306;
        *(_DWORD *)Buffer = MEMORY[0x7FFE02F0];
        return 0;
      case GlobalDataIdQpcShift:
        if ( Size != 1 )
          return -1073741306;
        *(_BYTE *)Buffer = MEMORY[0x7FFE03C6];
        return 0;
      case GlobalDataIdQpcBypassEnabled:
        if ( Size != 2 )
          return -1073741306;
        *(_WORD *)Buffer = MEMORY[0x7FFE03C6];
        return 0;
      case GlobalDataIdQpcData:
        if ( Size != 8 )
          return -1073741306;
        *(_QWORD *)Buffer = MEMORY[0x7FFE03B8];
        return 0;
      default:
        return -1073741811;
    }
  }
  if ( Size != 8 )
    return -1073741306;
  *(_QWORD *)Buffer = MEMORY[0x7FFE0250];
  return 0;
}

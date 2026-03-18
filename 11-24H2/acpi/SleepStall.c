/*
 * XREFs of SleepStall @ 0x14003B4C0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     SleepQueueRequest @ 0x14003B5B0 (SleepQueueRequest.c)
 */

__int64 __fastcall SleepStall(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  unsigned __int64 v7; // rcx
  unsigned int v8; // ecx

  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "I");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2 + 80);
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL) != 8795 )
    {
      if ( *(_QWORD *)(v5 + 16) <= 0xFFuLL )
      {
        KeStallExecutionProcessor(*(_DWORD *)(v5 + 16));
        return v4;
      }
      v4 = -1072431089;
      LogError(-1072431089);
      AcpiDiagTraceAmlError(a1, -1072431089);
      v8 = 178;
LABEL_11:
      PrintDebugMessage(v8, *(const void **)(*(_QWORD *)(a2 + 80) + 16LL), 0LL, 0LL, 0LL);
      return v4;
    }
    v7 = *(_QWORD *)(v5 + 16);
    if ( v7 > 0xFFFF )
    {
      v4 = -1072431089;
      LogError(-1072431089);
      AcpiDiagTraceAmlError(a1, -1072431089);
      v8 = 177;
      goto LABEL_11;
    }
    if ( v7 )
    {
      v4 = SleepQueueRequest(a1, (unsigned int)v7);
      if ( !v4 )
        return 32772;
    }
  }
  return v4;
}

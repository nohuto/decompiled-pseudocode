/*
 * XREFs of ListTableEnd @ 0x1C00E371E
 * Callers:
 *     RIMCmActiveContactsEnd @ 0x1C00E34F0 (RIMCmActiveContactsEnd.c)
 *     ListTableIteratorNext @ 0x1C00E37BA (ListTableIteratorNext.c)
 *     RIMCmActiveContactsNext @ 0x1C01AFE4C (RIMCmActiveContactsNext.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ListTableEnd(__int64 a1, __int64 a2)
{
  if ( !*(_QWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 64);
  if ( !*(_DWORD *)(a2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 65);
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8);
  return a1;
}

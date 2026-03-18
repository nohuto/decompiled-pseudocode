/*
 * XREFs of PiUEventIsProcessFrozen @ 0x140724BE4
 * Callers:
 *     PiUEventIsClientStuck @ 0x140AC381C (PiUEventIsClientStuck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsLookupProcessByProcessId @ 0x14094DC80 (PsLookupProcessByProcessId.c)
 */

bool __fastcall PiUEventIsProcessFrozen(void *a1)
{
  bool v1; // bl
  PEPROCESS Process; // [rsp+38h] [rbp+10h] BYREF

  Process = 0LL;
  v1 = 0;
  if ( PsLookupProcessByProcessId(a1, &Process) >= 0 )
    v1 = Process->FreezeCount + ((*(_DWORD *)&Process->0 >> 3) & 1) != 0;
  if ( Process )
    ObfDereferenceObjectWithTag(Process, 0x746C6644u);
  return v1;
}

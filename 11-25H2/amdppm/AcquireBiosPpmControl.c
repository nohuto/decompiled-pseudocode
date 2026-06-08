/*
 * XREFs of AcquireBiosPpmControl @ 0x140007E34
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x140007EC0 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x14002DBF4 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  int v1; // eax

  if ( (*(_DWORD *)(a1 + 280) & 0x7F070) != 0 && dword_140014580 && byte_140014585 )
    __outbyte(dword_140014580, byte_140014585);
  v1 = *(_DWORD *)(a1 + 280);
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_140014580 )
    {
      LOBYTE(v1) = byte_140014584;
      if ( byte_140014584 )
        __outbyte(dword_140014580, byte_140014584);
    }
  }
  return v1;
}

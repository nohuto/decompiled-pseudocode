/*
 * XREFs of AcquireBiosPpmControl @ 0x14000676C
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x14000D340 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1400408BC (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  int v1; // eax

  if ( (*(_DWORD *)(a1 + 280) & 0x7F070) != 0 && dword_140019B30 && byte_140019B35 )
    __outbyte(dword_140019B30, byte_140019B35);
  v1 = *(_DWORD *)(a1 + 280);
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_140019B30 )
    {
      LOBYTE(v1) = byte_140019B34;
      if ( byte_140019B34 )
        __outbyte(dword_140019B30, byte_140019B34);
    }
  }
  return v1;
}

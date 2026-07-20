/*
 * XREFs of SmpEventWriteULONG @ 0x140009890
 * Callers:
 *     SmpNtSerializeBoot @ 0x14000D628 (SmpNtSerializeBoot.c)
 *     SmpInitializeKnownDlls @ 0x1400158F0 (SmpInitializeKnownDlls.c)
 * Callees:
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

void __fastcall SmpEventWriteULONG(PCEVENT_DESCRIPTOR EventDescriptor, int a2)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2;
  if ( SmpTraceHandle )
  {
    if ( EtwEventEnabled(SmpTraceHandle, EventDescriptor) )
    {
      v3[0] = &v4;
      v3[1] = 4LL;
      EtwEventWrite(SmpTraceHandle, EventDescriptor, 1LL, v3);
    }
  }
}

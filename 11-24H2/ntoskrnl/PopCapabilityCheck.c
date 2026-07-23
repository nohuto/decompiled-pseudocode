/*
 * XREFs of PopCapabilityCheck @ 0x1404CF480
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140A5B140 (RtlCapabilityCheck.c)
 */

BOOLEAN __fastcall PopCapabilityCheck(wchar_t *a1)
{
  char v1; // bl
  wchar_t *v2; // rax
  __int64 v3; // rdx
  NTSTATUS v4; // eax
  BOOLEAN v5; // cl
  UNICODE_STRING CapabilityName; // [rsp+20h] [rbp-18h] BYREF
  BOOLEAN HasCapability; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  HasCapability = 0;
  if ( a1 )
  {
    v2 = a1;
    CapabilityName = 0LL;
    v3 = 0x7FFFLL;
    do
    {
      if ( !*v2 )
        break;
      ++v2;
      --v3;
    }
    while ( v3 );
    if ( v3 )
    {
      CapabilityName.Buffer = a1;
      CapabilityName.Length = 2 * (0x7FFF - v3);
      CapabilityName.MaximumLength = CapabilityName.Length + 2;
      v4 = RtlCapabilityCheck(0LL, &CapabilityName, &HasCapability);
      v5 = HasCapability;
      if ( v4 < 0 )
        return 0;
      return v5;
    }
  }
  return v1;
}

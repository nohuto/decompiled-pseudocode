/*
 * XREFs of RecordCapabilityUsage @ 0x1401A6420
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCapabilityUsageReport@@YAXPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z @ 0x1401A6120 (-SendCapabilityUsageReport@@YAXPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z.c)
 */

_UNKNOWN **__fastcall RecordCapabilityUsage(__int64 a1, char a2)
{
  char v3; // dl
  _UNKNOWN **result; // rax

  if ( _bittest64((const signed __int64 *)(a1 + 816), 0x27u) )
  {
    v3 = 0;
    if ( (a2 & 1) != 0 )
      v3 = 2;
    return SendCapabilityUsageReport((__int64 *)a1, v3);
  }
  return result;
}

/*
 * XREFs of RtlSetSecurityObject @ 0x1800C6EF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x1800C6F30 (RtlpSetSecurityObject.c)
 */

__int64 __fastcall RtlSetSecurityObject(int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  return RtlpSetSecurityObject(0, a1, a2, a3, 0, 0, a4, a5);
}

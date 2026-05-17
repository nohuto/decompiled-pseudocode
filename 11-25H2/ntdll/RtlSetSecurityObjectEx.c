/*
 * XREFs of RtlSetSecurityObjectEx @ 0x1800E68A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x1800E6AA0 (RtlpSetSecurityObject.c)
 */

__int64 __fastcall RtlSetSecurityObjectEx(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  return RtlpSetSecurityObject(0, a1, a2, a3, a4, 0, a5, a6);
}

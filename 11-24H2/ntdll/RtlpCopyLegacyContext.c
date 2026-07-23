/*
 * XREFs of RtlpCopyLegacyContext @ 0x1800D8FF4
 * Callers:
 *     RtlpCopyExtendedContext @ 0x180141DF0 (RtlpCopyExtendedContext.c)
 * Callees:
 *     RtlpCopyLegacyContextX86 @ 0x1800D9040 (RtlpCopyLegacyContextX86.c)
 */

__int64 __fastcall RtlpCopyLegacyContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( (a3 & 0x10000) != 0 )
    return RtlpCopyLegacyContextX86(a1, a2, a3, a4);
  if ( (a3 & 0x100000) != 0 )
    return RtlpCopyLegacyContextAmd64(a1, a2, a3, a4);
  if ( (a3 & 0x200000) != 0 )
    return RtlpCopyLegacyContextArm(a1, a2, a3, a4);
  if ( (a3 & 0x400000) != 0 )
    return RtlpCopyLegacyContextArm64(a1, a2, a3, a4);
  return result;
}

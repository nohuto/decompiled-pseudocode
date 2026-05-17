/*
 * XREFs of RtlCreateAcl @ 0x1800CDD80
 * Callers:
 *     RtlpCreateServerAcl @ 0x1800C69DC (RtlpCreateServerAcl.c)
 *     RtlpCombineAcls @ 0x1800CB040 (RtlpCombineAcls.c)
 *     RtlpComputeMergedAcl2 @ 0x1800CD654 (RtlpComputeMergedAcl2.c)
 *     RtlDefaultNpAcl @ 0x1800CD980 (RtlDefaultNpAcl.c)
 *     RtlCreateAndSetSD @ 0x1800CE250 (RtlCreateAndSetSD.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800CE704 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpConvertAclToAutoInherit @ 0x180139B00 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCreateAcl(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  if ( a2 < 8 )
    return 3221225507LL;
  if ( (unsigned int)(a3 - 2) > 2 || a2 > 0xFFFC )
    return 3221225485LL;
  *(_BYTE *)a1 = a3;
  result = 0LL;
  *(_BYTE *)(a1 + 1) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_WORD *)(a1 + 2) = a2 & 0xFFFC;
  return result;
}

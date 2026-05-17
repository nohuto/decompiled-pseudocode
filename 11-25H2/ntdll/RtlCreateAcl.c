/*
 * XREFs of RtlCreateAcl @ 0x180065F00
 * Callers:
 *     RtlpCombineAcls @ 0x1800631C0 (RtlpCombineAcls.c)
 *     RtlpComputeMergedAcl2 @ 0x1800657D4 (RtlpComputeMergedAcl2.c)
 *     RtlDefaultNpAcl @ 0x180065B00 (RtlDefaultNpAcl.c)
 *     RtlCreateAndSetSD @ 0x180065F40 (RtlCreateAndSetSD.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800663F4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpCreateServerAcl @ 0x1800E85A8 (RtlpCreateServerAcl.c)
 *     RtlpConvertAclToAutoInherit @ 0x18013B270 (RtlpConvertAclToAutoInherit.c)
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

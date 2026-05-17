/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x1800EA010
 * Callers:
 *     RtlpSysVolTakeOwnership @ 0x1801459E0 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCreateSecurityDescriptor(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 != 1 )
    return 3221225560LL;
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)a1 = 1;
  return result;
}

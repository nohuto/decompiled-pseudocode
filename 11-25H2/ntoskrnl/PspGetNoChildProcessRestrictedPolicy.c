/*
 * XREFs of PspGetNoChildProcessRestrictedPolicy @ 0x140A0902C
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     SeTokenGetNoChildProcessRestricted @ 0x140206E6C (SeTokenGetNoChildProcessRestricted.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 */

__int64 __fastcall PspGetNoChildProcessRestrictedPolicy(__int64 a1)
{
  ULONG_PTR v2; // rbx
  bool v4; // [rsp+30h] [rbp+8h] BYREF
  bool v5; // [rsp+38h] [rbp+10h] BYREF
  bool v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v2 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u);
  SeTokenGetNoChildProcessRestricted(v2, &v4, &v5, &v6);
  ObFastDereferenceObject((__int64 *)(a1 + 584), v2, 2035381072LL);
  if ( v4 )
    return (unsigned int)v5 + 1;
  else
    return v6 ? 3 : 0;
}

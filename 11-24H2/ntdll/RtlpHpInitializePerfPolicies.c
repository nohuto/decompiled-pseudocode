/*
 * XREFs of RtlpHpInitializePerfPolicies @ 0x18010FF68
 * Callers:
 *     RtlInitializeHeapManager @ 0x18011941C (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlQueryResourcePolicy @ 0x1800A9730 (RtlQueryResourcePolicy.c)
 *     RtlGetNtProductType @ 0x1800AA990 (RtlGetNtProductType.c)
 */

__int64 __fastcall RtlpHpInitializePerfPolicies(int a1)
{
  int WowTebOffset; // edi
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  v4 = 0;
  WowTebOffset = NtCurrentTeb()->WowTebOffset;
  result = (unsigned int)RtlpHpLfhPerfFlags;
  if ( RtlpHpLfhPerfFlags )
    goto LABEL_7;
  if ( RtlGetNtProductType(&v4) && v4 != 1 )
  {
    result = 10255LL;
    goto LABEL_6;
  }
  if ( (int)RtlQueryResourcePolicy(0, 0LL, (__int64)&v5, 4LL) < 0 || v5 <= 10 )
  {
    result = 8256LL;
LABEL_6:
    RtlpHpLfhPerfFlags = result;
    goto LABEL_7;
  }
  result = 9231LL;
  RtlpHpLfhPerfFlags = 9231;
  if ( !a1 )
  {
    result = 9219LL;
    goto LABEL_6;
  }
LABEL_7:
  if ( WowTebOffset > 0 )
  {
    result = (unsigned int)result & 0xFFFFFFFB;
    RtlpHpLfhPerfFlags = result;
  }
  return result;
}

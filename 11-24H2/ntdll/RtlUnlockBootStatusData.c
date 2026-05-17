/*
 * XREFs of RtlUnlockBootStatusData @ 0x18013E730
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x180162860 (NtPowerInformation.c)
 */

__int64 __fastcall RtlUnlockBootStatusData(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[5]; // [rsp+30h] [rbp-28h] BYREF

  result = 0LL;
  if ( !a1 )
  {
    v2[0] = 38LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    return NtPowerInformation(87LL, v2);
  }
  return result;
}

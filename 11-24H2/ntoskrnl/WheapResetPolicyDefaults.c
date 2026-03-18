/*
 * XREFs of WheapResetPolicyDefaults @ 0x1407C8D20
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x14065F64C (WheapWmiExecutePolicyManagementMethod.c)
 * Callees:
 *     RtlDeleteRegistryValue @ 0x140AC0B50 (RtlDeleteRegistryValue.c)
 */

__int64 WheapResetPolicyDefaults()
{
  PCWSTR *v0; // rbx
  __int64 v1; // rdi

  v0 = (PCWSTR *)&WheaRegPolicyTable;
  v1 = 22LL;
  do
  {
    RtlDeleteRegistryValue(2u, L"WHEA\\Policy", *v0);
    v0 += 4;
    --v1;
  }
  while ( v1 );
  return 0LL;
}

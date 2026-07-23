/*
 * XREFs of IommuDeviceQueryDomainTypes @ 0x140564070
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDeviceGetDomainTypes @ 0x14054B68C (HalpIommuDeviceGetDomainTypes.c)
 */

__int64 __fastcall IommuDeviceQueryDomainTypes(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = HalpIommuDeviceGetDomainTypes(a1);
  *a2 = result;
  return result;
}

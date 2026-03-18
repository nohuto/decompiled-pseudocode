/*
 * XREFs of IommuDeviceQueryDomainTypes @ 0x140563B00
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDeviceGetDomainTypes @ 0x14054B4C8 (HalpIommuDeviceGetDomainTypes.c)
 */

__int64 __fastcall IommuDeviceQueryDomainTypes(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = HalpIommuDeviceGetDomainTypes(a1);
  *a2 = result;
  return result;
}

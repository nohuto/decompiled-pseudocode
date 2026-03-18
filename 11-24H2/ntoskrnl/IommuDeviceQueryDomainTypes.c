/*
 * XREFs of IommuDeviceQueryDomainTypes @ 0x140566370
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDeviceGetDomainTypes @ 0x14054DDE0 (HalpIommuDeviceGetDomainTypes.c)
 */

__int64 __fastcall IommuDeviceQueryDomainTypes(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = HalpIommuDeviceGetDomainTypes(a1, (__int64)a2, a3, a4);
  *a2 = result;
  return result;
}

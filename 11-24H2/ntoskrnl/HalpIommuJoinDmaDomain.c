/*
 * XREFs of HalpIommuJoinDmaDomain @ 0x1405519E8
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404B6140 (HalpIommuUnblockDevice.c)
 *     IommuDomainAttachDevice @ 0x140564090 (IommuDomainAttachDevice.c)
 *     IommuDomainAttachDeviceEx @ 0x140564290 (IommuDomainAttachDeviceEx.c)
 * Callees:
 *     HalpIommuGetHardwareDomain @ 0x1404C7308 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuIsInPermanentPassthrough @ 0x1404F8050 (HalpIommuIsInPermanentPassthrough.c)
 *     HalpIommuAttachDeviceDomain @ 0x14054F918 (HalpIommuAttachDeviceDomain.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x140551358 (HalpIommuDereferenceHardwareDomain.c)
 *     IommupHvAttachDeviceDomain @ 0x1405630BC (IommupHvAttachDeviceDomain.c)
 */

__int64 __fastcall HalpIommuJoinDmaDomain(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 result; // rax
  __int64 v6; // rbp
  int v7; // ebx
  char v8; // al
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // r14
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( *(_DWORD *)(a1 + 392) == 1 )
    return 3221225659LL;
  v6 = *(_QWORD *)(a1 + 24);
  if ( HalpHvIommu )
  {
    LOBYTE(a3) = *(_BYTE *)(a2 + 52);
    v7 = IommupHvAttachDeviceDomain(*(_QWORD *)(a1 + 32), *(unsigned int *)(a2 + 48), a3);
    if ( v7 >= 0 )
      goto LABEL_21;
    return (unsigned int)v7;
  }
  if ( a2 != HalpIommuBypassDomain && HalpIommuIsInPermanentPassthrough(a1, a2) )
  {
    v7 = 0;
LABEL_21:
    *(_QWORD *)(a1 + 24) = a2;
    return (unsigned int)v7;
  }
  v8 = *(_BYTE *)(a2 + 52);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = v8 != 0 ? 128 : 256;
  if ( (v10 & *(_DWORD *)(v9 + 472)) == v10 )
  {
    result = HalpIommuGetHardwareDomain(a2, v9, 1, 1, 0, &v12);
    if ( (int)result < 0 )
      return result;
    v11 = v12;
    v7 = HalpIommuAttachDeviceDomain(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), v12 + 32);
    if ( v7 >= 0 )
    {
      if ( v6 )
      {
        result = HalpIommuGetHardwareDomain(v6, *(_QWORD *)(a1 + 32), 0, 0, 0, &v12);
        v7 = result;
        if ( (int)result < 0 )
          return result;
        HalpIommuDereferenceHardwareDomain(v6, v12);
      }
      goto LABEL_21;
    }
    HalpIommuDereferenceHardwareDomain(a2, v11);
    return (unsigned int)v7;
  }
  if ( a3 )
    *a3 |= 1u;
  return 3221225520LL;
}

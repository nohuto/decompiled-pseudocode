/*
 * XREFs of IommuDomainDetachDeviceEx @ 0x1405645B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404AF300 (HalpIommuLeaveDmaDomain.c)
 *     IommupDeviceGetPasidDevice @ 0x14054B87C (IommupDeviceGetPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14054BD54 (IommupDomainDetachPasidDevice.c)
 *     IommupFindAndPopCachedDevice @ 0x14056500C (IommupFindAndPopCachedDevice.c)
 */

__int64 __fastcall IommuDomainDetachDeviceEx(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  if ( *(_QWORD *)(a1 + 24) && (v7 = 0LL, (unsigned __int8)IommupFindAndPopCachedDevice(a1, &v7)) )
  {
    if ( *(_BYTE *)(a1 + 274) )
    {
      if ( IommupDeviceGetPasidDevice(a1, v3, 0, &v6) )
      {
        v2 = IommupDomainDetachPasidDevice((__int64)v6);
        if ( v2 >= 0 )
        {
          *(_QWORD *)(a1 + 24) = 0LL;
LABEL_11:
          HalpMmAllocCtxFree(v4, v7);
        }
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
    else
    {
      v2 = HalpIommuLeaveDmaDomain(a1, *(_QWORD *)(a1 + 24));
      if ( v2 >= 0 )
        goto LABEL_11;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v2;
}

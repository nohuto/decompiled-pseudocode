/*
 * XREFs of IommuDomainDetachDeviceEx @ 0x1405668B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404B4B04 (HalpIommuLeaveDmaDomain.c)
 *     IommupDeviceGetPasidDevice @ 0x14054DFCC (IommupDeviceGetPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14054E420 (IommupDomainDetachPasidDevice.c)
 *     IommupFindAndPopCachedDevice @ 0x140567580 (IommupFindAndPopCachedDevice.c)
 */

__int64 __fastcall IommuDomainDetachDeviceEx(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  if ( *(_QWORD *)(a1 + 24) && (v9 = 0LL, (unsigned __int8)IommupFindAndPopCachedDevice(a1, &v9)) )
  {
    if ( *(_BYTE *)(a1 + 274) )
    {
      if ( IommupDeviceGetPasidDevice(a1, v3, 0, &v8) )
      {
        v2 = IommupDomainDetachPasidDevice((__int64)v8);
        if ( v2 >= 0 )
        {
          *(_QWORD *)(a1 + 24) = 0LL;
LABEL_11:
          HalpMmAllocCtxFree(v6, v9);
        }
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
    else
    {
      v2 = HalpIommuLeaveDmaDomain(a1, *(_QWORD *)(a1 + 24), v4, v5);
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

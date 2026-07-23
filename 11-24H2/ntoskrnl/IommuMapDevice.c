/*
 * XREFs of IommuMapDevice @ 0x1405620B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuCreateDevice @ 0x14054AEFC (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x14054B4BC (HalpIommuDeleteDevice.c)
 *     IommupMapDeviceInternal @ 0x140562A78 (IommupMapDeviceInternal.c)
 */

__int64 __fastcall IommuMapDevice(_QWORD *a1, _BYTE *a2, void *a3, __int64 a4, __int64 **a5)
{
  __int64 **v5; // rsi
  __int64 *v6; // rdi
  int Device; // eax
  int v10; // ebx
  __int64 *v11; // rax

  v5 = a5;
  v6 = 0LL;
  a5 = 0LL;
  *v5 = 0LL;
  if ( *(_DWORD *)a2 != 1 || (a2[4] & 1) != 0 || (a2[10] & 3) != 0 )
    goto LABEL_11;
  Device = HalpIommuCreateDevice(a2, a3, 0LL, 1, (__int64 *)&a5);
  v6 = (__int64 *)a5;
  v10 = Device;
  if ( Device < 0 )
    goto LABEL_12;
  if ( (HalpHvIommu || (a5[4][59] & 0x20) != 0) && ((v11 = a5[3]) == 0LL || v11 == (__int64 *)HalpIommuBypassDomain) )
  {
    v10 = IommupMapDeviceInternal(*a1, a5, a4);
    if ( v10 >= 0 )
    {
      *v5 = v6;
      return (unsigned int)v10;
    }
  }
  else
  {
LABEL_11:
    v10 = -1073741637;
  }
LABEL_12:
  if ( v6 )
    HalpIommuDeleteDevice(v6);
  return (unsigned int)v10;
}

/*
 * XREFs of IommuMapDevice @ 0x140561BE0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuCreateDevice @ 0x14054ACF8 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x14054B2F8 (HalpIommuDeleteDevice.c)
 *     Feature_Servicing_Bugfix_55181377__private_IsEnabledDeviceUsageNoInline @ 0x140560B30 (Feature_Servicing_Bugfix_55181377__private_IsEnabledDeviceUsageNoInline.c)
 *     IommupMapDeviceInternal @ 0x1405625B8 (IommupMapDeviceInternal.c)
 */

__int64 __fastcall IommuMapDevice(_QWORD *a1, _BYTE *a2, void *a3, __int64 a4, __int64 **a5)
{
  __int64 **v5; // rsi
  __int64 *v6; // rdi
  int Device; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 *v11; // rax

  v5 = a5;
  v6 = 0LL;
  a5 = 0LL;
  *v5 = 0LL;
  if ( *(_DWORD *)a2 != 1 || (a2[4] & 1) != 0 || (a2[10] & 3) != 0 )
    goto LABEL_13;
  Device = HalpIommuCreateDevice(a2, a3, 0LL, 1, (__int64 *)&a5);
  if ( Device < 0 )
  {
    v6 = (__int64 *)a5;
    goto LABEL_14;
  }
  if ( (IsEnabledDeviceUsageNoInline = Feature_Servicing_Bugfix_55181377__private_IsEnabledDeviceUsageNoInline(),
        v6 = (__int64 *)a5,
        IsEnabledDeviceUsageNoInline)
    && !HalpHvIommu
    && (a5[4][59] & 0x20) == 0
    || (v11 = a5[3]) != 0LL && v11 != (__int64 *)HalpIommuBypassDomain )
  {
LABEL_13:
    Device = -1073741637;
  }
  else
  {
    Device = IommupMapDeviceInternal(*a1, a5, a4);
    if ( Device >= 0 )
    {
      *v5 = v6;
      return (unsigned int)Device;
    }
  }
LABEL_14:
  if ( v6 )
    HalpIommuDeleteDevice(v6);
  return (unsigned int)Device;
}

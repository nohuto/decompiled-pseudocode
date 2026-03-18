/*
 * XREFs of ACPIBusAndFilterIrpQueryContainerId @ 0x14004FE24
 * Callers:
 *     ACPIFilterIrpQueryIdCompletion @ 0x14009E6C0 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIBusIrpQueryId @ 0x1400B8CC0 (ACPIBusIrpQueryId.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     memset @ 0x140070F40 (memset.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1400AE930 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIFreePhysicalDeviceLocationDescriptors @ 0x1400AF514 (ACPIFreePhysicalDeviceLocationDescriptors.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryContainerId(_QWORD *a1, __int64 *a2, __int64 a3)
{
  NTSTATUS v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  _WORD *Pool2; // rax
  _WORD *v10; // rdi
  struct _UNICODE_STRING GuidString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v13[10]; // [rsp+30h] [rbp-29h] BYREF

  memset(v13, 0, 0x48uLL);
  GuidString = 0LL;
  v6 = ACPIProcessPhysicalDeviceLocation(a3, 0LL, v13);
  if ( v6 >= 0 )
  {
    v7 = v13[7] - *(_QWORD *)&GUID_NULL.Data1;
    if ( v13[7] == *(_QWORD *)&GUID_NULL.Data1 )
      v7 = v13[8] - *(_QWORD *)GUID_NULL.Data4;
    if ( v7 )
    {
      v6 = RtlStringFromGUID((const GUID *const)&v13[7], &GuidString);
      if ( v6 >= 0 )
      {
        v8 = GuidString.Length + 2LL;
        *a2 = v8;
        Pool2 = (_WORD *)ExAllocatePool2(256LL, v8, 1399874369LL);
        v10 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, GuidString.Buffer, GuidString.Length);
          v10[(unsigned __int64)GuidString.Length >> 1] = 0;
          *a1 = v10;
        }
        else
        {
          v6 = -1073741670;
        }
        RtlFreeUnicodeString(&GuidString);
      }
    }
    else
    {
      v6 = -1073741637;
    }
    ACPIFreePhysicalDeviceLocationDescriptors(v13);
  }
  return (unsigned int)v6;
}

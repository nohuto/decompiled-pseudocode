/*
 * XREFs of ?NotifyDeviceAttachCallback@ConsumerControlNexusDevice@@CAJPEAX@Z @ 0x1800E6060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@UDeviceAttachEventArgs@ConsumerControlNexusDevice@@U?$default_delete@UDeviceAttachEventArgs@ConsumerControlNexusDevice@@@std@@@std@@QEAA@XZ @ 0x1800E5740 (--1-$unique_ptr@UDeviceAttachEventArgs@ConsumerControlNexusDevice@@U-$default_delete@UDeviceAtta.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyDeviceAttachCallback(
        ConsumerControlNexusDevice::DeviceAttachEventArgs *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r9
  __int64 v3; // rdx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ConsumerControlNexusDevice::DeviceAttachEventArgs *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  if ( a1 )
  {
    if ( *(_QWORD *)a1 )
    {
      if ( *((_QWORD *)a1 + 1) )
      {
        if ( *((_QWORD *)a1 + 2) )
        {
          v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 40LL))(*(_QWORD *)a1);
          v1 = v4;
          if ( v4 >= 0 )
          {
            v1 = 0;
            goto LABEL_13;
          }
          v2 = (unsigned int)v4;
          v3 = 350LL;
        }
        else
        {
          v1 = -2147024809;
          v2 = 2147942487LL;
          v3 = 346LL;
        }
      }
      else
      {
        v1 = -2147024809;
        v2 = 2147942487LL;
        v3 = 345LL;
      }
    }
    else
    {
      v1 = -2147024809;
      v2 = 2147942487LL;
      v3 = 344LL;
    }
  }
  else
  {
    v1 = -2147024809;
    v2 = 2147942487LL;
    v3 = 343LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
    (const char *)v2);
LABEL_13:
  std::unique_ptr<ConsumerControlNexusDevice::DeviceAttachEventArgs>::~unique_ptr<ConsumerControlNexusDevice::DeviceAttachEventArgs>(&v7);
  return v1;
}

/*
 * XREFs of UsbhGetAlternateUsbDescriptors @ 0x1C0037CEC
 * Callers:
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhGetDeviceInformation @ 0x1C00382CC (UsbhGetDeviceInformation.c)
 *     UsbhBusIf_SetMsOs20Support @ 0x1C004C294 (UsbhBusIf_SetMsOs20Support.c)
 *     UsbhValidateBOSDescriptorSet @ 0x1C00524CC (UsbhValidateBOSDescriptorSet.c)
 *     UsbhValidateDeviceDescriptor @ 0x1C0052668 (UsbhValidateDeviceDescriptor.c)
 *     UsbhGetBosDescriptor @ 0x1C005452C (UsbhGetBosDescriptor.c)
 *     UsbhGetDeviceDescriptor @ 0x1C00546D0 (UsbhGetDeviceDescriptor.c)
 */

char __fastcall UsbhGetAlternateUsbDescriptors(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  int v7; // r8d
  __int64 v8; // r9
  void *v10; // rcx
  void *v11; // rcx
  int v12; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(v12) = 0;
  v6 = PdoExt(a2);
  if ( (int)UsbhGetDeviceDescriptor(a1, a2) < 0 )
    return 0;
  if ( !(unsigned __int8)UsbhValidateDeviceDescriptor(a1, (int)v6 + 1400, v7, 0, (__int64)&v12) )
  {
    v6[705] = 1073807365;
    return 0;
  }
  if ( (_BYTE)v12 )
    v6[355] |= 0x40u;
  LOBYTE(v8) = *(_BYTE *)(*(_QWORD *)(a3 + 24) + 6LL);
  UsbhBusIf_SetMsOs20Support(a1, *((_QWORD *)v6 + 145), v6 + 350, v8);
  v10 = (void *)*((_QWORD *)v6 + 299);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)v6 + 299) = 0LL;
  }
  if ( (int)UsbhGetDeviceInformation(a1) < 0 )
    return 0;
  if ( *((_WORD *)v6 + 701) > 0x200u && (v6[358] & 0x20000) == 0 )
  {
    v12 = 0;
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_OWORD *)(a3 + 32) = 0LL;
    *(_QWORD *)(a3 + 48) = 0LL;
    v11 = (void *)*((_QWORD *)v6 + 300);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      *((_QWORD *)v6 + 300) = 0LL;
    }
    if ( (int)UsbhGetBosDescriptor(a1, a2, &v12) < 0 )
      return 1;
    if ( !(unsigned __int8)UsbhValidateBOSDescriptorSet(
                             *((_QWORD *)v6 + 148),
                             *((_QWORD *)v6 + 300),
                             (int)v6 + 1400,
                             v12,
                             a3) )
    {
      v6[705] = 1073807378;
      return 0;
    }
  }
  v6[706] |= 4u;
  return 1;
}

/*
 * XREFs of UsbhGetNextMsOs20Descriptor @ 0x1C00336F0
 * Callers:
 *     UsbhParseAndInstallRegistryValueDescriptors @ 0x1C0033A30 (UsbhParseAndInstallRegistryValueDescriptors.c)
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x1C00528D0 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20DescriptorSet @ 0x1C0052A24 (UsbhValidateMsOs20DescriptorSet.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x1C0052C20 (UsbhValidateMsOs20FunctionSubset.c)
 * Callees:
 *     <none>
 */

char __fastcall UsbhGetNextMsOs20Descriptor(unsigned __int64 a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r8
  char v3; // r9
  unsigned __int16 v4; // ax
  __int64 v5; // rax
  bool v6; // cf
  unsigned __int16 *v7; // rax

  v2 = *a2;
  v3 = 1;
  v4 = (*a2)[1];
  if ( v4 == 2 || v4 == 1 )
  {
    if ( *v2 < 8u )
      goto LABEL_12;
    v5 = v2[3];
    v6 = (unsigned int)v5 < 0xC;
  }
  else
  {
    v5 = *v2;
    v6 = (unsigned int)v5 < 4;
  }
  if ( v6 )
    goto LABEL_12;
  v7 = (unsigned __int16 *)((char *)v2 + v5);
  if ( v7 == (unsigned __int16 *)a1 )
  {
LABEL_13:
    *a2 = 0LL;
    return v3;
  }
  if ( (unsigned __int64)v7 > a1 || (unsigned __int64)(v7 + 2) > a1 || (unsigned __int64)v7 + *v7 > a1 )
  {
LABEL_12:
    v3 = 0;
    goto LABEL_13;
  }
  *a2 = v7;
  return v3;
}

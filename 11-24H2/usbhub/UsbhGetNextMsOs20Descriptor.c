/*
 * XREFs of UsbhGetNextMsOs20Descriptor @ 0x140042640
 * Callers:
 *     UsbhParseAndInstallRegistryValueDescriptors @ 0x140042994 (UsbhParseAndInstallRegistryValueDescriptors.c)
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x14005B350 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20DescriptorSet @ 0x14005B4BC (UsbhValidateMsOs20DescriptorSet.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x14005B6D0 (UsbhValidateMsOs20FunctionSubset.c)
 * Callees:
 *     UsbhValidateMsOs20CommonDescriptor @ 0x140042B10 (UsbhValidateMsOs20CommonDescriptor.c)
 */

char __fastcall UsbhGetNextMsOs20Descriptor(char *a1, unsigned __int16 **a2, __int64 a3)
{
  unsigned __int16 *v3; // rax
  _QWORD *v4; // r9
  unsigned __int16 v6; // dx
  __int64 v7; // rdx
  char *v8; // rdx
  __int64 v9; // rcx
  bool v10; // cf
  __int64 v11; // rdx

  v3 = *a2;
  v4 = a2;
  LOWORD(a3) = 1;
  v6 = (*a2)[1];
  if ( v6 == 2 )
  {
    if ( *v3 < 8u )
      goto LABEL_14;
    v7 = v3[3];
    if ( (unsigned int)v7 < 0xC )
      goto LABEL_14;
    v8 = (char *)v3 + v7;
  }
  else
  {
    if ( v6 == 1 )
    {
      if ( *v3 < 8u )
        goto LABEL_14;
      v9 = v3[3];
      v10 = (unsigned int)v9 < 0xC;
    }
    else
    {
      v9 = *v3;
      v10 = (unsigned int)v9 < 4;
    }
    if ( v10 )
      goto LABEL_14;
    v8 = (char *)v3 + v9;
  }
  if ( v8 == a1 )
  {
LABEL_15:
    *v4 = 0LL;
    return a3;
  }
  if ( !(unsigned __int8)UsbhValidateMsOs20CommonDescriptor(a1, v8, a3, v4) )
  {
LABEL_14:
    LOBYTE(a3) = 0;
    goto LABEL_15;
  }
  *v4 = v11;
  return a3;
}

/*
 * XREFs of HUBDESC_GetNextMsOs20Descriptor @ 0x1400360EC
 * Callers:
 *     HUBMISC_InstallMsOs20RegistryProperties @ 0x140030774 (HUBMISC_InstallMsOs20RegistryProperties.c)
 *     HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x14003ECD0 (HUBDESC_ValidateMsOs20ConfigurationSubset.c)
 *     HUBDESC_ValidateMsOs20DescriptorSet @ 0x14003EFC0 (HUBDESC_ValidateMsOs20DescriptorSet.c)
 *     HUBDESC_ValidateMsOs20FunctionSubset @ 0x14003F430 (HUBDESC_ValidateMsOs20FunctionSubset.c)
 * Callees:
 *     <none>
 */

char __fastcall HUBDESC_GetNextMsOs20Descriptor(unsigned __int64 a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r8
  char v4; // r9
  unsigned __int16 v5; // ax
  __int64 v6; // rax
  bool v7; // cf
  unsigned __int16 *v8; // rax
  __int64 v9; // rcx

  v2 = *a2;
  v4 = 1;
  v5 = (*a2)[1];
  if ( v5 == 2 || v5 == 1 )
  {
    if ( *v2 < 8u )
      goto LABEL_13;
    v6 = v2[3];
    v7 = (unsigned int)v6 < 0xC;
  }
  else
  {
    v6 = *v2;
    v7 = (unsigned int)v6 < 4;
  }
  if ( v7 )
    goto LABEL_13;
  v8 = (unsigned __int16 *)((char *)v2 + v6);
  if ( v8 == (unsigned __int16 *)a1 )
  {
LABEL_14:
    *a2 = 0LL;
    return v4;
  }
  if ( (unsigned __int64)v8 > a1
    || (unsigned __int64)(v8 + 2) > a1
    || (v9 = *v8, (unsigned int)v9 < 4)
    || (unsigned __int64)v8 + v9 > a1 )
  {
LABEL_13:
    v4 = 0;
    goto LABEL_14;
  }
  *a2 = v8;
  return v4;
}

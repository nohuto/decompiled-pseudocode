/*
 * XREFs of IopCreateDefaultDeviceSecurityDescriptor @ 0x14099E4FC
 * Callers:
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1409ABF7C (PipChangeDeviceObjectFromRegistryProperties.c)
 * Callees:
 *     RtlGetNtProductType @ 0x140311820 (RtlGetNtProductType.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14099EC00 (IopCreateSecurityDescriptorPerType.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

void *__fastcall IopCreateDefaultDeviceSecurityDescriptor(
        unsigned int a1,
        char a2,
        char a3,
        void *a4,
        ACL **a5,
        __int64 a6,
        _DWORD *a7)
{
  _DWORD *v7; // rdi
  __int64 v8; // r8
  void *v9; // rbp
  ACL **v11; // r12
  unsigned int v12; // r14d
  bool v14; // zf
  USHORT AclSize; // r15
  unsigned __int8 *v16; // rax
  ACL *Pool2; // rax
  ACL *v18; // rsi
  _NT_PRODUCT_TYPE NtProductType; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(NtProductType) = a3;
  v7 = a7;
  v8 = a6;
  v9 = a4;
  if ( a7 )
    *a7 = 0;
  v11 = a5;
  *a5 = 0LL;
  v12 = 4;
  if ( a1 > 0x12 )
  {
    if ( a1 == 32 || a1 == 20 || a1 == 36 || a1 == 45 )
      goto LABEL_5;
    v14 = a1 == 53;
LABEL_26:
    if ( !v14 )
    {
LABEL_6:
      if ( (int)IopCreateSecurityDescriptorPerType(a4, v12, v8, v7) < 0 )
        return 0LL;
      return v9;
    }
LABEL_5:
    v12 = 2;
    goto LABEL_6;
  }
  if ( a1 == 18 )
    goto LABEL_5;
  if ( a1 != 2 )
  {
    if ( a1 == 3 )
      goto LABEL_5;
    if ( a1 != 7 )
    {
      if ( a1 == 8 )
        goto LABEL_5;
      v14 = a1 == 9;
      goto LABEL_26;
    }
  }
  if ( a1 != 2 && (a2 & 1) == 0 )
    goto LABEL_5;
  NtProductType = 0;
  AclSize = SePublicDefaultUnrestrictedDacl->AclSize;
  if ( RtlGetNtProductType(&NtProductType) )
  {
    if ( NtProductType == NtProductWinNt )
    {
      v16 = (unsigned __int8 *)SeInteractiveSid;
    }
    else
    {
      if ( a1 != 2 )
        goto LABEL_31;
      v16 = (unsigned __int8 *)SeWorldSid;
    }
    AclSize += 4 * (v16[1] + 4);
LABEL_31:
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
    v18 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, SePublicDefaultUnrestrictedDacl, SePublicDefaultUnrestrictedDacl->AclSize);
      v14 = NtProductType == NtProductWinNt;
      v18->AclSize = AclSize;
      if ( v14 )
      {
        RtlpAddKnownAce(v18, 2u, 0, -1073676288, (unsigned __int8 *)SeInteractiveSid, 0);
      }
      else if ( a1 == 2 )
      {
        RtlpAddKnownAce(v18, 2u, 0, 0x80000000, (unsigned __int8 *)SeWorldSid, 0);
      }
      RtlCreateSecurityDescriptor(v9, 1u);
      RtlSetDaclSecurityDescriptor(v9, 1u, v18, 0);
      if ( v7 )
        *v7 |= 4u;
      *v11 = v18;
      return v9;
    }
  }
  return 0LL;
}

/*
 * XREFs of IopQuerySecureDeviceClassState @ 0x140A9FB70
 * Callers:
 *     IopCreateSecureDeviceClassSettings @ 0x140A6063C (IopCreateSecureDeviceClassSettings.c)
 * Callees:
 *     SeCaptureSecurityDescriptor @ 0x1409108D0 (SeCaptureSecurityDescriptor.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     IopGetSecurityDescriptorInformation @ 0x140A6073C (IopGetSecurityDescriptorInformation.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQuerySecureDeviceClassState(HANDLE KeyHandle, __int64 a2)
{
  PVOID v4; // r14
  NTSTATUS RegistryValue; // eax
  PVOID v6; // rbx
  int SecurityDescriptorInformation; // edi
  NTSTATUS v8; // eax
  char *v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  NTSTATUS v12; // eax
  char *v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  char *v16; // rcx
  __int64 v17; // rax
  int v18; // edx
  void *v19; // rcx
  PVOID SecurityDescriptor[2]; // [rsp+30h] [rbp-10h] BYREF
  BOOLEAN v22; // [rsp+88h] [rbp+48h] BYREF
  int v23; // [rsp+90h] [rbp+50h] BYREF
  PVOID P; // [rsp+98h] [rbp+58h] BYREF

  v22 = 0;
  *(_OWORD *)a2 = 0LL;
  v23 = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  SecurityDescriptor[0] = 0LL;
  P = 0LL;
  v4 = 0LL;
  RegistryValue = IopGetRegistryValue(KeyHandle, L"Security", 0, &P);
  v6 = P;
  SecurityDescriptorInformation = RegistryValue;
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741772 )
      goto LABEL_43;
    SecurityDescriptorInformation = 0;
  }
  else
  {
    if ( *((_DWORD *)P + 1) != 3 )
    {
      SecurityDescriptorInformation = -1073741492;
LABEL_43:
      v19 = *(void **)(a2 + 8);
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
      *(_OWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 16) = 0LL;
      goto LABEL_46;
    }
    SecurityDescriptorInformation = SeCaptureSecurityDescriptor(
                                      (__int64)P + *((unsigned int *)P + 2),
                                      0,
                                      1,
                                      1,
                                      SecurityDescriptor);
    if ( SecurityDescriptorInformation < 0 )
    {
      v4 = SecurityDescriptor[0];
      goto LABEL_40;
    }
    ExFreePoolWithTag(v6, 0);
    v4 = SecurityDescriptor[0];
    v6 = 0LL;
    P = 0LL;
    if ( SecurityDescriptor[0] )
    {
      SecurityDescriptorInformation = IopGetSecurityDescriptorInformation((_WORD *)SecurityDescriptor[0], &v22, &v23);
      if ( SecurityDescriptorInformation < 0 )
        goto LABEL_40;
      if ( !v22 )
      {
        *(_DWORD *)a2 |= 2u;
        *(_QWORD *)(a2 + 8) = v4;
        v4 = 0LL;
      }
    }
  }
  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    v8 = IopGetRegistryValue(KeyHandle, L"DeviceType", 0, &P);
    SecurityDescriptorInformation = v8;
    if ( v8 < 0 )
    {
      if ( v8 != -1073741772 )
        goto LABEL_39;
      v6 = P;
    }
    else
    {
      v9 = (char *)P;
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      {
        v10 = *((unsigned int *)P + 2);
        *(_DWORD *)a2 |= 1u;
        v11 = *(_DWORD *)&v9[v10];
      }
      else
      {
        v11 = 0;
      }
      *(_DWORD *)(a2 + 4) = v11;
      ExFreePoolWithTag(v9, 0);
      v6 = 0LL;
      P = 0LL;
    }
  }
  if ( (*(_DWORD *)a2 & 4) != 0 )
    goto LABEL_30;
  v12 = IopGetRegistryValue(KeyHandle, L"DeviceCharacteristics", 0, &P);
  SecurityDescriptorInformation = v12;
  if ( v12 < 0 )
  {
    if ( v12 == -1073741772 )
    {
      v6 = P;
      goto LABEL_30;
    }
LABEL_39:
    v6 = P;
    goto LABEL_40;
  }
  v13 = (char *)P;
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
  {
    v14 = *((unsigned int *)P + 2);
    *(_DWORD *)a2 |= 4u;
    v15 = *(_DWORD *)&v13[v14];
  }
  else
  {
    v15 = 0;
  }
  *(_DWORD *)(a2 + 16) = v15;
  ExFreePoolWithTag(v13, 0);
  v6 = 0LL;
  P = 0LL;
LABEL_30:
  if ( (*(_DWORD *)a2 & 8) != 0 )
    goto LABEL_40;
  SecurityDescriptorInformation = IopGetRegistryValue(KeyHandle, L"Exclusive", 0, &P);
  if ( SecurityDescriptorInformation < 0 )
  {
    if ( SecurityDescriptorInformation == -1073741772 )
      SecurityDescriptorInformation = 0;
    goto LABEL_39;
  }
  v16 = (char *)P;
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
  {
    v17 = *((unsigned int *)P + 2);
    *(_DWORD *)a2 |= 8u;
    v18 = *(_DWORD *)&v16[v17];
  }
  else
  {
    v18 = 0;
  }
  *(_DWORD *)(a2 + 20) = v18;
  ExFreePoolWithTag(v16, 0);
  v6 = 0LL;
LABEL_40:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( SecurityDescriptorInformation < 0 )
    goto LABEL_43;
LABEL_46:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)SecurityDescriptorInformation;
}

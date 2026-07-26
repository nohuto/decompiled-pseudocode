/*
 * XREFs of PiRegStateReadStackCreationSettingsFromKey @ 0x140158834
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1401589F8 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x14008C460 (WdmlibRtlInitUnicodeStringEx.c)
 *     SeUtilSecurityInfoFromSecurityDescriptor @ 0x140158CC4 (SeUtilSecurityInfoFromSecurityDescriptor.c)
 *     CmRegUtilUcValueGetFullBuffer @ 0x140158F5C (CmRegUtilUcValueGetFullBuffer.c)
 *     CmRegUtilWstrValueGetDword @ 0x140159224 (CmRegUtilWstrValueGetDword.c)
 */

__int64 __fastcall PiRegStateReadStackCreationSettingsFromKey(HANDLE KeyHandle, _QWORD *a2)
{
  PVOID v4; // rsi
  NTSTATUS inited; // edi
  __int64 v6; // r8
  int FullBuffer; // eax
  __int64 v8; // r9
  PVOID v9; // rax
  int Dword; // eax
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // r8
  int v14; // eax
  void *v15; // rcx
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  PVOID SecurityDescriptor; // [rsp+A8h] [rbp+58h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  SecurityDescriptor = 0LL;
  v4 = 0LL;
  P = 0LL;
  DestinationString = 0LL;
  inited = WdmlibRtlInitUnicodeStringEx(&DestinationString, L"Security");
  if ( inited < 0
    || (FullBuffer = CmRegUtilUcValueGetFullBuffer(KeyHandle, &DestinationString, (__int64)&P),
        v4 = P,
        inited = FullBuffer,
        FullBuffer < 0) )
  {
    if ( inited == -1073741772 )
      inited = 0;
  }
  else
  {
    LOBYTE(v8) = 1;
    inited = SeCaptureSecurityDescriptor((char *)P + *((unsigned int *)P + 2), 0LL, 1LL, v8, &SecurityDescriptor);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( inited < 0 )
    goto LABEL_22;
  if ( SecurityDescriptor )
  {
    inited = SeUtilSecurityInfoFromSecurityDescriptor(SecurityDescriptor);
    if ( inited < 0 )
      goto LABEL_22;
    v9 = SecurityDescriptor;
    *(_DWORD *)a2 |= 2u;
    a2[1] = v9;
  }
  Dword = CmRegUtilWstrValueGetDword(KeyHandle, L"DeviceType", v6, (char *)a2 + 4);
  inited = Dword;
  if ( Dword < 0 )
  {
    if ( Dword != -1073741772 )
      goto LABEL_22;
  }
  else
  {
    *(_DWORD *)a2 |= 1u;
  }
  v12 = CmRegUtilWstrValueGetDword(KeyHandle, L"DeviceCharacteristics", v11, a2 + 2);
  inited = v12;
  if ( v12 < 0 )
  {
    if ( v12 != -1073741772 )
      goto LABEL_22;
  }
  else
  {
    *(_DWORD *)a2 |= 4u;
  }
  v14 = CmRegUtilWstrValueGetDword(KeyHandle, L"Exclusive", v13, (char *)a2 + 20);
  inited = v14;
  if ( v14 >= 0 )
  {
    *(_DWORD *)a2 |= 8u;
    return (unsigned int)inited;
  }
  if ( v14 == -1073741772 )
    return 0;
LABEL_22:
  v15 = (void *)a2[1];
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  return (unsigned int)inited;
}

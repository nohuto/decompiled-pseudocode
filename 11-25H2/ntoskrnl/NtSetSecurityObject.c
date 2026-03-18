/*
 * XREFs of NtSetSecurityObject @ 0x14086E8B0
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140774824 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x140774CC8 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x14086ED34 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObSetSecurityObjectByPointer @ 0x14089F830 (ObSetSecurityObjectByPointer.c)
 *     SeCaptureSecurityDescriptor @ 0x14092A4A0 (SeCaptureSecurityDescriptor.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140982FF4 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepRmGlobalSaclFind @ 0x140A08700 (SepRmGlobalSaclFind.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140A23240 (RtlGetSaclSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  int v3; // r14d
  SECURITY_INFORMATION v4; // ebx
  SECURITY_INFORMATION v6; // ecx
  SECURITY_INFORMATION v7; // edx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  ACCESS_MASK v15; // edi
  KPROCESSOR_MODE PreviousMode; // r12
  int v17; // edx
  int SecurityDescriptorInfo; // esi
  int v19; // r9d
  int v20; // eax
  _QWORD *v21; // r14
  PVOID v22; // r15
  PVOID v23; // r13
  PVOID v24; // r12
  int v26; // eax
  NTSTATUS SaclSecurityDescriptor; // eax
  __int64 v28; // r9
  char v29; // al
  BOOLEAN SaclDefaulted[8]; // [rsp+70h] [rbp-19h] BYREF
  PVOID SecurityDescriptora; // [rsp+78h] [rbp-11h]
  PVOID v32; // [rsp+80h] [rbp-9h]
  PVOID v33; // [rsp+88h] [rbp-1h]
  PVOID P; // [rsp+90h] [rbp+7h]
  PVOID v35; // [rsp+98h] [rbp+Fh] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp+17h] BYREF
  PVOID Object; // [rsp+100h] [rbp+77h] BYREF
  KPROCESSOR_MODE v39; // [rsp+108h] [rbp+7Fh]

  v3 = (int)SecurityDescriptor;
  v35 = 0LL;
  v4 = SecurityInformation;
  HandleInformation = 0LL;
  v32 = 0LL;
  SecurityDescriptora = 0LL;
  P = 0LL;
  v33 = 0LL;
  if ( !SecurityDescriptor )
    return -1073741819;
  v6 = SecurityInformation & 0x100;
  v7 = SecurityInformation & 0x80;
  if ( (v4 & 0x10000) != 0 )
  {
    v26 = v4 | 0x1FF;
    v4 = v4 & 0xFFFFFE00 | 0x17F;
    if ( v7 )
      v4 = v26;
    if ( !v6 )
      v4 &= ~0x100u;
  }
  v8 = ((v4 & 0x10000) != 0 ? 0x1040000 : 0) | 0x80000;
  if ( (v4 & 0x13) == 0 )
    v8 = (v4 & 0x10000) != 0 ? 0x10C0000 : 0;
  v9 = v8 | 0x40000;
  if ( (v4 & 4) == 0 )
    v9 = v8;
  v10 = v9 | 0x40000;
  if ( (v4 & 0x20) == 0 )
    v10 = v9;
  v11 = v10 | 0x40000;
  if ( (v4 & 0x80u) == 0 )
    v11 = v10;
  v12 = v11 | 0x40000;
  if ( (v4 & 0x100) == 0 )
    v12 = v11;
  v13 = v12 | 0x1000000;
  if ( (v4 & 0x40) == 0 )
    v13 = v12;
  v14 = v13 | 0x1000000;
  if ( (v4 & 8) == 0 )
    v14 = v13;
  v15 = v14;
  if ( (v4 & 0x1F8) != 0 && (v4 & 0x50000000) != 0 )
    v15 = v14 | 0x1000000;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v39 = PreviousMode;
  SecurityDescriptorInfo = ObReferenceObjectByHandle(Handle, v15, 0LL, PreviousMode, &Object, &HandleInformation);
  if ( SecurityDescriptorInfo < 0 )
    return SecurityDescriptorInfo;
  LOBYTE(v19) = 1;
  LOBYTE(v17) = PreviousMode;
  v20 = SeCaptureSecurityDescriptor(v3, v17, 1, v19, (__int64)&v35);
  v21 = Object;
  SecurityDescriptorInfo = v20;
  if ( v20 < 0 )
  {
LABEL_41:
    ObfDereferenceObject(v21);
    return SecurityDescriptorInfo;
  }
  v22 = v35;
  if ( (*((_WORD *)v35 + 1) & 0x10) == 0 && (v4 & 0x10000) != 0 )
    v4 &= 0xFFFFFE07;
  if ( ((v4 & 1) == 0 || *((_DWORD *)v35 + 1)) && ((v4 & 2) == 0 || *((_DWORD *)v35 + 2)) )
  {
    if ( (HandleInformation.HandleAttributes & 4) == 0 )
      v15 &= 0xFFF3FFFF;
    if ( !v15 )
      goto LABEL_27;
    SecurityDescriptorInfo = ObpAllocateAndQuerySecurityDescriptorInfo((ULONG_PTR)Object);
    if ( SecurityDescriptorInfo < 0 )
    {
      v24 = v32;
    }
    else
    {
      if ( (v15 & 0xFEFFFFFF) == 0 )
      {
LABEL_27:
        v23 = SecurityDescriptora;
        goto LABEL_28;
      }
      LOBYTE(Object) = 0;
      v23 = SecurityDescriptora;
      SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                                 SecurityDescriptora,
                                 (PBOOLEAN)&Object,
                                 (PACL *)&HandleInformation,
                                 SaclDefaulted);
      SecurityDescriptorInfo = SaclSecurityDescriptor;
      v29 = (char)Object;
      if ( !(_BYTE)Object )
      {
        Object = 0LL;
        LOBYTE(v28) = 1;
        v29 = (unsigned int)SepRmGlobalSaclFind(
                              &Object,
                              0LL,
                              ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ *((_BYTE *)v21 - 24) ^ ((unsigned __int16)((_WORD)v21 - 48) >> 8))]
                            + 16,
                              v28) != -1073741772;
      }
      if ( SecurityDescriptorInfo >= 0 )
      {
        if ( !v29 )
        {
          v15 &= 0xFFF3FFFF;
LABEL_28:
          v24 = v32;
          if ( (v4 & 0x40) == 0
            || ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((_BYTE *)v21 - 24) ^ ((unsigned __int16)((_WORD)v21 - 48) >> 8))) == *((_BYTE *)IoFileObjectType + 40)
            && (*(_DWORD *)(v21[1] + 52LL) & 0x10) != 0
            || (SecurityDescriptorInfo = ObpAllocateAndQuerySecurityDescriptorInfo((ULONG_PTR)v21),
                SecurityDescriptorInfo >= 0) )
          {
            if ( (LODWORD(Object) = v4 & 0x20, (v4 & 0x20) == 0)
              || ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((_BYTE *)v21 - 24) ^ ((unsigned __int16)((_WORD)v21 - 48) >> 8))) == *((_BYTE *)IoFileObjectType + 40)
              && (*(_DWORD *)(v21[1] + 52LL) & 0x10) != 0
              || (SecurityDescriptorInfo = ObpAllocateAndQuerySecurityDescriptorInfo((ULONG_PTR)v21),
                  SecurityDescriptorInfo >= 0) )
            {
              SecurityDescriptorInfo = ObSetSecurityObjectByPointer(v21, v4, v22);
              if ( SecurityDescriptorInfo >= 0 && (v15 || (_DWORD)Object) )
                SeSecurityDescriptorChangedAuditAlarm(
                  0,
                  (_DWORD)v21,
                  LODWORD(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v21 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v21 - 48) >> 8)])
                + 16,
                  0,
                  (__int64)Handle,
                  0,
                  v15,
                  v4,
                  (__int64)v24,
                  (__int64)v23,
                  (__int64)P,
                  (__int64)v33,
                  (__int64)v22);
            }
          }
          if ( v33 )
            ExFreePoolWithTag(v33, 0);
          if ( P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_37;
        }
        SecurityDescriptorInfo = ObpAllocateAndQuerySecurityDescriptorInfo((ULONG_PTR)v21);
        if ( SecurityDescriptorInfo >= 0 )
          goto LABEL_28;
      }
      v24 = v32;
    }
LABEL_37:
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    if ( (unsigned __int8)v39 <= 1u )
      ExFreePoolWithTag(v22, 0);
    goto LABEL_41;
  }
  if ( (unsigned __int8)PreviousMode <= 1u )
    ExFreePoolWithTag(v35, 0);
  ObfDereferenceObject(Object);
  return -1073741703;
}

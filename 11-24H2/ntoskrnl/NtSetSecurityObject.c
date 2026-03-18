/*
 * XREFs of NtSetSecurityObject @ 0x14087A070
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140783AD4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x140783F78 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObSetSecurityObjectByPointer @ 0x1408587B0 (ObSetSecurityObjectByPointer.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x140879E8C (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     SepRmGlobalSaclFind @ 0x140889F14 (SepRmGlobalSaclFind.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1408F1C3C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeCaptureSecurityDescriptor @ 0x14091CE60 (SeCaptureSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140A2C790 (RtlGetSaclSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  NTSTATUS v18; // esi
  int v19; // r9d
  int v20; // eax
  _QWORD *v21; // r14
  PVOID v22; // r15
  PVOID v23; // r13
  PVOID v24; // r12
  ULONG v26; // edx
  int v27; // eax
  int v28; // r12d
  NTSTATUS SaclSecurityDescriptor; // eax
  __int64 v30; // r9
  char v31; // al
  BOOLEAN SaclDefaulted[8]; // [rsp+70h] [rbp-19h] BYREF
  PVOID SecurityDescriptora; // [rsp+78h] [rbp-11h] BYREF
  PVOID v34; // [rsp+80h] [rbp-9h] BYREF
  PVOID v35; // [rsp+88h] [rbp-1h] BYREF
  PVOID P; // [rsp+90h] [rbp+7h] BYREF
  PVOID v37; // [rsp+98h] [rbp+Fh] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp+17h] BYREF
  PVOID Object; // [rsp+100h] [rbp+77h] BYREF
  KPROCESSOR_MODE v41; // [rsp+108h] [rbp+7Fh]

  v3 = (int)SecurityDescriptor;
  v37 = 0LL;
  v4 = SecurityInformation;
  HandleInformation = 0LL;
  v34 = 0LL;
  SecurityDescriptora = 0LL;
  P = 0LL;
  v35 = 0LL;
  if ( !SecurityDescriptor )
    return -1073741819;
  v6 = SecurityInformation & 0x100;
  v7 = SecurityInformation & 0x80;
  if ( (v4 & 0x10000) != 0 )
  {
    v27 = v4 | 0x1FF;
    v4 = v4 & 0xFFFFFE00 | 0x17F;
    if ( v7 )
      v4 = v27;
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
  v41 = PreviousMode;
  v18 = ObReferenceObjectByHandle(Handle, v15, 0LL, PreviousMode, &Object, &HandleInformation);
  if ( v18 < 0 )
    return v18;
  LOBYTE(v19) = 1;
  LOBYTE(v17) = PreviousMode;
  v20 = SeCaptureSecurityDescriptor(v3, v17, 1, v19, (__int64)&v37);
  v21 = Object;
  v18 = v20;
  if ( v20 < 0 )
  {
LABEL_42:
    ObfDereferenceObject(v21);
    return v18;
  }
  v22 = v37;
  if ( (*((_BYTE *)v37 + 2) & 0x10) == 0 && (v4 & 0x10000) != 0 )
    v4 &= 0xFFFFFE07;
  if ( ((v4 & 1) == 0 || *((_DWORD *)v37 + 1)) && ((v4 & 2) == 0 || *((_DWORD *)v37 + 2)) )
  {
    if ( (HandleInformation.HandleAttributes & 4) == 0 )
      v15 &= 0xFFF3FFFF;
    if ( !v15 )
      goto LABEL_26;
    v18 = ObpAllocateAndQuerySecurityDescriptorInfo((__int64)Object, 8u, 0LL, &SecurityDescriptora);
    if ( v18 < 0 )
    {
      v24 = v34;
      v23 = SecurityDescriptora;
    }
    else
    {
      if ( (v15 & 0xFEFFFFFF) == 0 )
      {
LABEL_26:
        v23 = SecurityDescriptora;
        goto LABEL_27;
      }
      v23 = SecurityDescriptora;
      LOBYTE(Object) = 0;
      v28 = 0;
      SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                                 SecurityDescriptora,
                                 (PBOOLEAN)&Object,
                                 (PACL *)&HandleInformation,
                                 SaclDefaulted);
      v18 = SaclSecurityDescriptor;
      v31 = (char)Object;
      if ( !(_BYTE)Object )
      {
        Object = 0LL;
        LOBYTE(v30) = 1;
        v31 = (unsigned int)SepRmGlobalSaclFind(
                              &Object,
                              0LL,
                              ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ *((_BYTE *)v21 - 24) ^ ((unsigned __int16)((_WORD)v21 - 48) >> 8))]
                            + 16,
                              v30) != -1073741772;
      }
      if ( v18 >= 0 )
      {
        if ( !v31 )
        {
          v15 &= 0xFFF3FFFF;
LABEL_27:
          v24 = v34;
          if ( (v4 & 0x40) == 0
            || ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((_BYTE *)v21 - 24) ^ ((unsigned __int16)((_WORD)v21 - 48) >> 8))) == *((_BYTE *)IoFileObjectType + 40)
            && (*(_DWORD *)(v21[1] + 52LL) & 0x10) != 0
            || (v18 = ObpAllocateAndQuerySecurityDescriptorInfo((__int64)v21, 0x40u, 0LL, &v35), v18 >= 0) )
          {
            if ( (LODWORD(Object) = v4 & 0x20, (v4 & 0x20) == 0)
              || ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((_BYTE *)v21 - 24) ^ ((unsigned __int16)((_WORD)v21 - 48) >> 8))) == *((_BYTE *)IoFileObjectType + 40)
              && (*(_DWORD *)(v21[1] + 52LL) & 0x10) != 0
              || (v18 = ObpAllocateAndQuerySecurityDescriptorInfo((__int64)v21, 0x20u, 0LL, &P), v18 >= 0) )
            {
              v18 = ObSetSecurityObjectByPointer((__int64)v21, v4, (unsigned __int64)v22);
              if ( v18 >= 0 && (v15 || (_DWORD)Object) )
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
                  (__int64)v35,
                  (__int64)v22);
            }
          }
          if ( v35 )
            ExFreePoolWithTag(v35, 0);
          if ( P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_36;
        }
        if ( (v15 & 0x80000) != 0 )
          v28 = v4 & 0x13;
        v26 = v28 | 4;
        if ( (v15 & 0x40000) == 0 )
          v26 = v28;
        v18 = ObpAllocateAndQuerySecurityDescriptorInfo((__int64)v21, v26, 0LL, &v34);
        if ( v18 >= 0 )
          goto LABEL_27;
      }
      v24 = v34;
    }
LABEL_36:
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    if ( (unsigned __int8)v41 <= 1u )
      ExFreePoolWithTag(v22, 0);
    goto LABEL_42;
  }
  if ( (unsigned __int8)PreviousMode <= 1u )
    ExFreePoolWithTag(v37, 0);
  ObfDereferenceObject(Object);
  return -1073741703;
}

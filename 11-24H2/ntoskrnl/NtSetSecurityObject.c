/*
 * XREFs of NtSetSecurityObject @ 0x1409118E0
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140783A04 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x140783EA8 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObSetSecurityObjectByPointer @ 0x140854A90 (ObSetSecurityObjectByPointer.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x14087E1BC (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     SepRmGlobalSaclFind @ 0x14088DDC4 (SepRmGlobalSaclFind.c)
 *     SeCaptureSecurityDescriptor @ 0x1409108D0 (SeCaptureSecurityDescriptor.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140912CF0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140A211D0 (RtlGetSaclSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  DWORD v4; // ebx
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
  NTSTATUS SaclSecurityDescriptor; // esi
  int v18; // eax
  _QWORD *v19; // r14
  PVOID v20; // r15
  PVOID v21; // r13
  PVOID v22; // r12
  DWORD v24; // edx
  int v25; // eax
  int v26; // r12d
  char v27; // al
  BOOLEAN SaclDefaulted[8]; // [rsp+70h] [rbp-19h] BYREF
  PVOID SecurityDescriptora; // [rsp+78h] [rbp-11h] BYREF
  PVOID v30; // [rsp+80h] [rbp-9h] BYREF
  PVOID v31; // [rsp+88h] [rbp-1h] BYREF
  PVOID P; // [rsp+90h] [rbp+7h] BYREF
  PVOID v33; // [rsp+98h] [rbp+Fh] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp+17h] BYREF
  PVOID Object; // [rsp+100h] [rbp+77h] BYREF
  KPROCESSOR_MODE v37; // [rsp+108h] [rbp+7Fh]

  v33 = 0LL;
  v4 = SecurityInformation;
  HandleInformation = 0LL;
  v30 = 0LL;
  SecurityDescriptora = 0LL;
  P = 0LL;
  v31 = 0LL;
  if ( !SecurityDescriptor )
    return -1073741819;
  v6 = SecurityInformation & 0x100;
  v7 = SecurityInformation & 0x80;
  if ( (v4 & 0x10000) != 0 )
  {
    v25 = v4 | 0x1FF;
    v4 = v4 & 0xFFFFFE00 | 0x17F;
    if ( v7 )
      v4 = v25;
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
  v37 = PreviousMode;
  SaclSecurityDescriptor = ObReferenceObjectByHandle(Handle, v15, 0LL, PreviousMode, &Object, &HandleInformation);
  if ( SaclSecurityDescriptor < 0 )
    return SaclSecurityDescriptor;
  v18 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, PreviousMode, 1, 1, &v33);
  v19 = Object;
  SaclSecurityDescriptor = v18;
  if ( v18 < 0 )
  {
LABEL_42:
    ObfDereferenceObject(v19);
    return SaclSecurityDescriptor;
  }
  v20 = v33;
  if ( (*((_BYTE *)v33 + 2) & 0x10) == 0 && (v4 & 0x10000) != 0 )
    v4 &= 0xFFFFFE07;
  if ( ((v4 & 1) == 0 || *((_DWORD *)v33 + 1)) && ((v4 & 2) == 0 || *((_DWORD *)v33 + 2)) )
  {
    if ( (HandleInformation.HandleAttributes & 4) == 0 )
      v15 &= 0xFFF3FFFF;
    if ( !v15 )
      goto LABEL_26;
    SaclSecurityDescriptor = ObpAllocateAndQuerySecurityDescriptorInfo((__int64)Object, 8u, 0LL, &SecurityDescriptora);
    if ( SaclSecurityDescriptor < 0 )
    {
      v22 = v30;
      v21 = SecurityDescriptora;
    }
    else
    {
      if ( (v15 & 0xFEFFFFFF) == 0 )
      {
LABEL_26:
        v21 = SecurityDescriptora;
        goto LABEL_27;
      }
      v21 = SecurityDescriptora;
      LOBYTE(Object) = 0;
      v26 = 0;
      SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                                 SecurityDescriptora,
                                 (PBOOLEAN)&Object,
                                 (PACL *)&HandleInformation,
                                 SaclDefaulted);
      v27 = (char)Object;
      if ( !(_BYTE)Object )
      {
        Object = 0LL;
        v27 = (unsigned int)SepRmGlobalSaclFind(
                              (__int64 **)&Object,
                              0LL,
                              (PCWCH *)(ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ *((_BYTE *)v19 - 24) ^ ((unsigned __int16)((_WORD)v19 - 48) >> 8))]
                                      + 16),
                              1) != -1073741772;
      }
      if ( SaclSecurityDescriptor >= 0 )
      {
        if ( !v27 )
        {
          v15 &= 0xFFF3FFFF;
LABEL_27:
          v22 = v30;
          if ( (v4 & 0x40) == 0
            || ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((_BYTE *)v19 - 24) ^ ((unsigned __int16)((_WORD)v19 - 48) >> 8))) == *((_BYTE *)IoFileObjectType + 40)
            && (*(_DWORD *)(v19[1] + 52LL) & 0x10) != 0
            || (SaclSecurityDescriptor = ObpAllocateAndQuerySecurityDescriptorInfo((__int64)v19, 0x40u, 0LL, &v31),
                SaclSecurityDescriptor >= 0) )
          {
            if ( (LODWORD(Object) = v4 & 0x20, (v4 & 0x20) == 0)
              || ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((_BYTE *)v19 - 24) ^ ((unsigned __int16)((_WORD)v19 - 48) >> 8))) == *((_BYTE *)IoFileObjectType + 40)
              && (*(_DWORD *)(v19[1] + 52LL) & 0x10) != 0
              || (SaclSecurityDescriptor = ObpAllocateAndQuerySecurityDescriptorInfo((__int64)v19, 0x20u, 0LL, &P),
                  SaclSecurityDescriptor >= 0) )
            {
              SaclSecurityDescriptor = ObSetSecurityObjectByPointer((__int64)v19, v4, (unsigned __int64)v20);
              if ( SaclSecurityDescriptor >= 0 && (v15 || (_DWORD)Object) )
                SeSecurityDescriptorChangedAuditAlarm(
                  0,
                  (_DWORD)v19,
                  LODWORD(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v19 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v19 - 48) >> 8)])
                + 16,
                  0,
                  (__int64)Handle,
                  0,
                  v15,
                  v4,
                  (__int64)v22,
                  (__int64)v21,
                  (__int64)P,
                  (__int64)v31,
                  (__int64)v20);
            }
          }
          if ( v31 )
            ExFreePoolWithTag(v31, 0);
          if ( P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_36;
        }
        if ( (v15 & 0x80000) != 0 )
          v26 = v4 & 0x13;
        v24 = v26 | 4;
        if ( (v15 & 0x40000) == 0 )
          v24 = v26;
        SaclSecurityDescriptor = ObpAllocateAndQuerySecurityDescriptorInfo((__int64)v19, v24, 0LL, &v30);
        if ( SaclSecurityDescriptor >= 0 )
          goto LABEL_27;
      }
      v22 = v30;
    }
LABEL_36:
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    if ( (unsigned __int8)v37 <= 1u )
      ExFreePoolWithTag(v20, 0);
    goto LABEL_42;
  }
  if ( (unsigned __int8)PreviousMode <= 1u )
    ExFreePoolWithTag(v33, 0);
  ObfDereferenceObject(Object);
  return -1073741703;
}

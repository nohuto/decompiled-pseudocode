/*
 * XREFs of PiDevCfgGetKeySecurityDescriptor @ 0x14094D4D0
 * Callers:
 *     PiDevCfgCopyDeviceKeys @ 0x14094C678 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x14094C804 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     RtlGetAce @ 0x1404044D0 (RtlGetAce.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140457450 (RtlGetDaclSecurityDescriptor.c)
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQuerySecurityObject @ 0x14069DE40 (ZwQuerySecurityObject.c)
 *     RtlGetAcesBufferSize @ 0x140770FD0 (RtlGetAcesBufferSize.c)
 *     RtlValidSecurityDescriptor @ 0x140919740 (RtlValidSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14091B2A0 (RtlLengthSecurityDescriptor.c)
 *     RtlAddAce @ 0x14092B010 (RtlAddAce.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1409E93F0 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140A75A50 (RtlGetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgGetKeySecurityDescriptor(HANDLE Handle, _QWORD *a2)
{
  ACL *v3; // r12
  void *v4; // rdi
  NTSTATUS v5; // eax
  int GroupSecurityDescriptor; // ebx
  ULONG v7; // ebx
  ULONG v8; // r15d
  _BYTE *Pool2; // r14
  NTSTATUS v10; // eax
  PACL v11; // rsi
  char v12; // r13
  ULONG i; // r15d
  ULONG v14; // ebx
  ACL *v15; // rax
  void *v16; // rax
  BOOLEAN DaclPresent; // [rsp+30h] [rbp-79h] BYREF
  BOOLEAN GroupDefaulted[3]; // [rsp+31h] [rbp-78h] BYREF
  ULONG AceListLength; // [rsp+34h] [rbp-75h] BYREF
  ULONG LengthNeeded; // [rsp+38h] [rbp-71h] BYREF
  PSID Group; // [rsp+40h] [rbp-69h] BYREF
  PACL Dacl; // [rsp+48h] [rbp-61h] BYREF
  PVOID Ace; // [rsp+50h] [rbp-59h] BYREF
  PVOID AceList; // [rsp+58h] [rbp-51h] BYREF
  _QWORD *v26; // [rsp+60h] [rbp-49h]
  _OWORD AbsoluteSecurityDescriptor[2]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v28; // [rsp+88h] [rbp-21h]
  _BYTE SecurityDescriptor[56]; // [rsp+90h] [rbp-19h] BYREF

  v26 = a2;
  *a2 = 0LL;
  LengthNeeded = 0;
  v28 = 0LL;
  Group = 0LL;
  DaclPresent = 0;
  Dacl = 0LL;
  Ace = 0LL;
  AceList = 0LL;
  v3 = 0LL;
  AceListLength = 0;
  memset(AbsoluteSecurityDescriptor, 0, sizeof(AbsoluteSecurityDescriptor));
  v4 = 0LL;
  v5 = ZwQuerySecurityObject(Handle, 2u, SecurityDescriptor, 0x34u, &LengthNeeded);
  GroupSecurityDescriptor = v5;
  if ( v5 == -1073741789 )
    return (unsigned int)-1073741720;
  if ( v5 >= 0 )
  {
    GroupSecurityDescriptor = RtlGetGroupSecurityDescriptor(SecurityDescriptor, &Group, GroupDefaulted);
    if ( GroupSecurityDescriptor >= 0 )
    {
      if ( !Group )
        return (unsigned int)-1073741722;
      if ( !RtlEqualSid(Group, PiDevCfgNullSid) )
        return (unsigned int)-1073741720;
      v7 = 240;
      while ( 1 )
      {
        v8 = v7;
        Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        v10 = ZwQuerySecurityObject(Handle, 4u, Pool2, v7, &LengthNeeded);
        GroupSecurityDescriptor = v10;
        if ( v10 != -1073741789 )
          break;
        v7 = LengthNeeded;
        if ( LengthNeeded <= v8 )
          goto LABEL_36;
        ExFreePoolWithTag(Pool2, 0);
      }
      if ( v10 >= 0 )
      {
        GroupSecurityDescriptor = RtlGetDaclSecurityDescriptor(Pool2, &DaclPresent, &Dacl, GroupDefaulted);
        if ( GroupSecurityDescriptor >= 0 )
        {
          if ( DaclPresent && (v11 = Dacl) != 0LL )
          {
            v12 = 0;
            for ( i = 0; i < v11->AceCount; ++i )
            {
              GroupSecurityDescriptor = RtlGetAce(v11, i, &Ace);
              if ( GroupSecurityDescriptor < 0 )
                goto LABEL_43;
              if ( !*(_BYTE *)Ace
                && (*((_DWORD *)Ace + 1) & 0xF003F) == 0xF003F
                && RtlEqualSid((char *)Ace + 8, SeLocalSystemSid) )
              {
                v12 = 1;
                break;
              }
            }
            if ( v12 )
            {
              *v26 = Pool2;
              return (unsigned int)GroupSecurityDescriptor;
            }
            v14 = RtlLengthSid(SeLocalSystemSid) + v11->AclSize + 8;
            v15 = (ACL *)ExAllocatePool2(0x100uLL);
            v3 = v15;
            if ( !v15 )
              goto LABEL_27;
            GroupSecurityDescriptor = RtlCreateAcl(v15, v14, 2u);
            if ( GroupSecurityDescriptor >= 0 )
            {
              GroupSecurityDescriptor = RtlGetAce(v11, 0, &AceList);
              if ( GroupSecurityDescriptor >= 0 )
              {
                GroupSecurityDescriptor = RtlGetAcesBufferSize((__int64)v11, &AceListLength);
                if ( GroupSecurityDescriptor >= 0 )
                {
                  GroupSecurityDescriptor = RtlAddAce(v3, 2u, 0, AceList, AceListLength);
                  if ( GroupSecurityDescriptor >= 0 )
                  {
                    GroupSecurityDescriptor = RtlpAddKnownAce(v3, 2u, 2, 983103, (unsigned __int8 *)SeLocalSystemSid, 0);
                    if ( GroupSecurityDescriptor >= 0 )
                    {
                      GroupSecurityDescriptor = RtlCreateSecurityDescriptor(AbsoluteSecurityDescriptor, 1u);
                      if ( GroupSecurityDescriptor >= 0 )
                      {
                        GroupSecurityDescriptor = RtlSetDaclSecurityDescriptor(AbsoluteSecurityDescriptor, 1u, v3, 0);
                        if ( GroupSecurityDescriptor >= 0 )
                        {
                          if ( RtlValidSecurityDescriptor(AbsoluteSecurityDescriptor)
                            && (AceListLength = RtlLengthSecurityDescriptor(AbsoluteSecurityDescriptor),
                                AceListLength >= 0x28) )
                          {
                            v16 = (void *)ExAllocatePool2(0x100uLL);
                            v4 = v16;
                            if ( !v16 )
                            {
LABEL_27:
                              GroupSecurityDescriptor = -1073741670;
                              goto LABEL_43;
                            }
                            GroupSecurityDescriptor = RtlAbsoluteToSelfRelativeSD(
                                                        AbsoluteSecurityDescriptor,
                                                        v16,
                                                        &AceListLength);
                            if ( GroupSecurityDescriptor >= 0 )
                            {
                              *v26 = v4;
                              v4 = 0LL;
                            }
                          }
                          else
                          {
LABEL_36:
                            GroupSecurityDescriptor = -1073741595;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            GroupSecurityDescriptor = -1073741275;
          }
        }
      }
LABEL_43:
      if ( Pool2 != SecurityDescriptor )
        ExFreePoolWithTag(Pool2, 0);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
    }
  }
  return (unsigned int)GroupSecurityDescriptor;
}

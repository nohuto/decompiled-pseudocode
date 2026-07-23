/*
 * XREFs of PiDevCfgGetKeySecurityDescriptor @ 0x1409CEE40
 * Callers:
 *     PiDevCfgCopyDeviceKeys @ 0x1409CDFE8 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x1409CE174 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     RtlGetAce @ 0x140404120 (RtlGetAce.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140449130 (RtlGetDaclSecurityDescriptor.c)
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQuerySecurityObject @ 0x1406AA0B0 (ZwQuerySecurityObject.c)
 *     RtlGetAcesBufferSize @ 0x140780150 (RtlGetAcesBufferSize.c)
 *     RtlLengthSecurityDescriptor @ 0x1408565C0 (RtlLengthSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140867160 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlValidSecurityDescriptor @ 0x14086BB60 (RtlValidSecurityDescriptor.c)
 *     RtlAddAce @ 0x140910700 (RtlAddAce.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140A71F80 (RtlGetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgGetKeySecurityDescriptor(HANDLE Handle, _QWORD *a2)
{
  ACL *v3; // r12
  void *v4; // rdi
  NTSTATUS v5; // eax
  int GroupSecurityDescriptor; // ebx
  ULONG v7; // ebx
  ULONG v8; // esi
  ULONG v9; // r15d
  _BYTE *Pool2; // r14
  NTSTATUS v11; // eax
  PACL v12; // rsi
  char v13; // r13
  ULONG i; // r15d
  ULONG v15; // ebx
  ACL *v16; // rax
  ULONG v17; // eax
  void *v18; // rax
  BOOLEAN DaclPresent; // [rsp+30h] [rbp-79h] BYREF
  BOOLEAN GroupDefaulted[3]; // [rsp+31h] [rbp-78h] BYREF
  ULONG AceListLength; // [rsp+34h] [rbp-75h] BYREF
  ULONG LengthNeeded; // [rsp+38h] [rbp-71h] BYREF
  PSID Group; // [rsp+40h] [rbp-69h] BYREF
  PACL Dacl; // [rsp+48h] [rbp-61h] BYREF
  PVOID Ace; // [rsp+50h] [rbp-59h] BYREF
  PVOID AceList; // [rsp+58h] [rbp-51h] BYREF
  _QWORD *v28; // [rsp+60h] [rbp-49h]
  _OWORD AbsoluteSecurityDescriptor[2]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v30; // [rsp+88h] [rbp-21h]
  _BYTE SecurityDescriptor[56]; // [rsp+90h] [rbp-19h] BYREF

  v28 = a2;
  *a2 = 0LL;
  LengthNeeded = 0;
  v30 = 0LL;
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
      v8 = 240;
      while ( 1 )
      {
        v9 = v7;
        Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL, v8, 0x63647050u);
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        v11 = ZwQuerySecurityObject(Handle, 4u, Pool2, v7, &LengthNeeded);
        GroupSecurityDescriptor = v11;
        if ( v11 != -1073741789 )
          break;
        v7 = LengthNeeded;
        if ( LengthNeeded <= v9 )
          goto LABEL_36;
        v8 = LengthNeeded;
        ExFreePoolWithTag(Pool2, 0);
      }
      if ( v11 >= 0 )
      {
        GroupSecurityDescriptor = RtlGetDaclSecurityDescriptor(Pool2, &DaclPresent, &Dacl, GroupDefaulted);
        if ( GroupSecurityDescriptor >= 0 )
        {
          if ( DaclPresent && (v12 = Dacl) != 0LL )
          {
            v13 = 0;
            for ( i = 0; i < v12->AceCount; ++i )
            {
              GroupSecurityDescriptor = RtlGetAce(v12, i, &Ace);
              if ( GroupSecurityDescriptor < 0 )
                goto LABEL_43;
              if ( !*(_BYTE *)Ace
                && (*((_DWORD *)Ace + 1) & 0xF003F) == 0xF003F
                && RtlEqualSid((char *)Ace + 8, SeLocalSystemSid) )
              {
                v13 = 1;
                break;
              }
            }
            if ( v13 )
            {
              *v28 = Pool2;
              return (unsigned int)GroupSecurityDescriptor;
            }
            v15 = RtlLengthSid(SeLocalSystemSid) + v12->AclSize + 8;
            v16 = (ACL *)ExAllocatePool2(0x100uLL, v15, 0x63647050u);
            v3 = v16;
            if ( !v16 )
              goto LABEL_27;
            GroupSecurityDescriptor = RtlCreateAcl(v16, v15, 2u);
            if ( GroupSecurityDescriptor >= 0 )
            {
              GroupSecurityDescriptor = RtlGetAce(v12, 0, &AceList);
              if ( GroupSecurityDescriptor >= 0 )
              {
                GroupSecurityDescriptor = RtlGetAcesBufferSize((__int64)v12, &AceListLength);
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
                            && (v17 = RtlLengthSecurityDescriptor(AbsoluteSecurityDescriptor),
                                AceListLength = v17,
                                v17 >= 0x28) )
                          {
                            v18 = (void *)ExAllocatePool2(0x100uLL, v17, 0x63647050u);
                            v4 = v18;
                            if ( !v18 )
                            {
LABEL_27:
                              GroupSecurityDescriptor = -1073741670;
                              goto LABEL_43;
                            }
                            GroupSecurityDescriptor = RtlAbsoluteToSelfRelativeSD(
                                                        AbsoluteSecurityDescriptor,
                                                        v18,
                                                        &AceListLength);
                            if ( GroupSecurityDescriptor >= 0 )
                            {
                              *v28 = v4;
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

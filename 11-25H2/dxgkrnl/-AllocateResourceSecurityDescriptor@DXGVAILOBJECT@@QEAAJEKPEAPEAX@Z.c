/*
 * XREFs of ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x1401FF50C
 * Callers:
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1402000D0 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?InitializeDWMSid@DXGVAILOBJECT@@QEAAXKPEAX@Z @ 0x140200A10 (-InitializeDWMSid@DXGVAILOBJECT@@QEAAXKPEAX@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::AllocateResourceSecurityDescriptor(
        DXGVAILOBJECT *this,
        char a2,
        ACCESS_MASK a3,
        void **a4)
{
  int v5; // r13d
  ULONG v6; // esi
  ULONG v7; // r15d
  unsigned int ProcessSessionId; // r14d
  NTSTATUS ObjectSecurity; // eax
  int v11; // ebx
  NTSTATUS DaclSecurityDescriptor; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  NTSTATUS OwnerSecurityDescriptor; // eax
  NTSTATUS GroupSecurityDescriptor; // eax
  WORD i; // di
  NTSTATUS v18; // eax
  ULONG v19; // r12d
  __int64 v20; // r9
  char *v21; // rax
  char *v22; // rdi
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  NTSTATUS v25; // eax
  struct _ACL *v26; // r14
  NTSTATUS Acl; // eax
  WORD j; // si
  NTSTATUS v29; // eax
  NTSTATUS v30; // eax
  NTSTATUS v31; // eax
  NTSTATUS v32; // eax
  unsigned __int8 DaclPresent; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int8 DaclDefaulted; // [rsp+31h] [rbp-58h] BYREF
  unsigned __int8 MemoryAllocated; // [rsp+32h] [rbp-57h] BYREF
  unsigned __int8 OwnerDefaulted; // [rsp+33h] [rbp-56h] BYREF
  unsigned __int8 GroupDefaulted[4]; // [rsp+34h] [rbp-55h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+38h] [rbp-51h] BYREF
  ACCESS_MASK AccessMask; // [rsp+40h] [rbp-49h]
  PSID Owner; // [rsp+48h] [rbp-41h] BYREF
  PSID Group; // [rsp+50h] [rbp-39h] BYREF
  PACL Dacl; // [rsp+58h] [rbp-31h] BYREF
  PVOID Ace; // [rsp+60h] [rbp-29h] BYREF
  PVOID AceList; // [rsp+68h] [rbp-21h] BYREF
  void **v46; // [rsp+70h] [rbp-19h]
  _BYTE v47[16]; // [rsp+78h] [rbp-11h] BYREF
  _BYTE Sid[24]; // [rsp+88h] [rbp-1h] BYREF

  AccessMask = a3;
  SecurityDescriptor = 0LL;
  Dacl = 0LL;
  MemoryAllocated = 0;
  v5 = 0;
  Owner = 0LL;
  v6 = 0;
  Group = 0LL;
  v7 = 0;
  v46 = a4;
  ProcessSessionId = -1;
  ObjectSecurity = ObGetObjectSecurity(this, &SecurityDescriptor, &MemoryAllocated);
  v11 = ObjectSecurity;
  if ( !SecurityDescriptor )
  {
    v11 = -1073741786;
    WdLogSingleEntry1(3LL, -1073741786LL);
    WdLogGlobalForLineNumber = 374;
    goto LABEL_56;
  }
  if ( ObjectSecurity >= 0 )
  {
    DaclPresent = 0;
    DaclDefaulted = 0;
    DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted);
    v11 = DaclSecurityDescriptor;
    if ( DaclSecurityDescriptor < 0 )
    {
      WdLogSingleEntry1(3LL, DaclSecurityDescriptor);
      WdLogGlobalForLineNumber = 391;
      goto LABEL_56;
    }
    if ( !DaclPresent || DaclDefaulted )
    {
      v11 = -1073741786;
      WdLogSingleEntry1(3LL, -1073741786LL);
      WdLogGlobalForLineNumber = 400;
    }
    else
    {
      v11 = 0;
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v47, (DXGVAILOBJECT *)((char *)this + 40), 1);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
      v13 = *((_QWORD *)this + 12);
      if ( v13 )
        ProcessSessionId = PsGetProcessSessionIdEx(v13);
      else
        v11 = -1073741275;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v47);
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(3LL, v11);
        WdLogGlobalForLineNumber = 412;
        goto LABEL_56;
      }
      v14 = *((_DWORD *)this + 34);
      if ( v14 != ProcessSessionId )
      {
        v11 = -1073741790;
        WdLogSingleEntry3(3LL, -1073741790LL, v14, ProcessSessionId);
        WdLogGlobalForLineNumber = 421;
        goto LABEL_56;
      }
      if ( a2 )
      {
        OwnerDefaulted = 0;
        OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &OwnerDefaulted);
        v11 = OwnerSecurityDescriptor;
        if ( OwnerSecurityDescriptor < 0 )
        {
          WdLogSingleEntry1(3LL, OwnerSecurityDescriptor);
          WdLogGlobalForLineNumber = 437;
          goto LABEL_56;
        }
        if ( Owner )
          v6 = RtlLengthSid(Owner);
        GroupDefaulted[0] = 0;
        GroupSecurityDescriptor = RtlGetGroupSecurityDescriptor(SecurityDescriptor, &Group, GroupDefaulted);
        v11 = GroupSecurityDescriptor;
        if ( GroupSecurityDescriptor < 0 )
        {
          WdLogSingleEntry1(3LL, GroupSecurityDescriptor);
          WdLogGlobalForLineNumber = 458;
          goto LABEL_56;
        }
        if ( Group )
          v7 = RtlLengthSid(Group);
      }
      Ace = 0LL;
      for ( i = 0; i < Dacl->AceCount; ++i )
      {
        v18 = RtlGetAce(Dacl, i, &Ace);
        v11 = v18;
        if ( v18 < 0 )
        {
          WdLogSingleEntry1(3LL, v18);
          WdLogGlobalForLineNumber = 480;
          goto LABEL_56;
        }
        v5 += RtlLengthSid((char *)Ace + 8) + 12;
      }
      DXGVAILOBJECT::InitializeDWMSid((DXGVAILOBJECT *)Dacl, ProcessSessionId, Sid);
      v19 = v5 + RtlLengthSid(Sid) + 12;
      v21 = (char *)operator new[](v19 + v7 + v6 + 48, 0x4B677844u, 256LL, v20);
      v22 = v21;
      if ( !v21 )
      {
        v11 = -1073741801;
        WdLogSingleEntry2(3LL, v19 + v7 + v6 + 48, -1073741801LL);
        WdLogGlobalForLineNumber = 518;
        goto LABEL_56;
      }
      v23 = RtlCreateSecurityDescriptor(v21, 1u);
      v11 = v23;
      if ( v23 < 0 )
      {
        WdLogSingleEntry1(3LL, v23);
        WdLogGlobalForLineNumber = 530;
LABEL_33:
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v22);
        goto LABEL_56;
      }
      if ( Owner )
      {
        RtlCopySid(v6, v22 + 40, Owner);
        v24 = RtlSetOwnerSecurityDescriptor(v22, v22 + 40, 0);
        v11 = v24;
        if ( v24 < 0 )
        {
          WdLogSingleEntry1(3LL, v24);
          WdLogGlobalForLineNumber = 548;
          goto LABEL_33;
        }
      }
      if ( Group )
      {
        RtlCopySid(v7, &v22[v6 + 40], Group);
        v25 = RtlSetGroupSecurityDescriptor(v22, &v22[v6 + 40], 0);
        v11 = v25;
        if ( v25 < 0 )
        {
          WdLogSingleEntry1(3LL, v25);
          WdLogGlobalForLineNumber = 566;
          goto LABEL_33;
        }
      }
      else if ( v11 < 0 )
      {
        goto LABEL_33;
      }
      v26 = (struct _ACL *)&v22[v7 + 40 + v6];
      Acl = RtlCreateAcl(v26, v19, 4u);
      v11 = Acl;
      if ( Acl < 0 )
      {
        WdLogSingleEntry1(3LL, Acl);
        WdLogGlobalForLineNumber = 582;
        goto LABEL_33;
      }
      AceList = 0LL;
      for ( j = 0; j < Dacl->AceCount; ++j )
      {
        v29 = RtlGetAce(Dacl, j, &AceList);
        v11 = v29;
        if ( v29 < 0 )
        {
          WdLogSingleEntry1(3LL, v29);
          WdLogGlobalForLineNumber = 599;
          goto LABEL_33;
        }
        v30 = RtlAddAce(v26, 4u, 0, AceList, *((unsigned __int16 *)AceList + 1));
        v11 = v30;
        if ( v30 < 0 )
        {
          WdLogSingleEntry1(3LL, v30);
          WdLogGlobalForLineNumber = 607;
          goto LABEL_33;
        }
      }
      v31 = RtlAddAccessAllowedAce(v26, 4u, AccessMask, Sid);
      v11 = v31;
      if ( v31 < 0 )
      {
        WdLogSingleEntry1(3LL, v31);
        WdLogGlobalForLineNumber = 625;
        goto LABEL_33;
      }
      v32 = RtlSetDaclSecurityDescriptor(v22, 1u, v26, 0);
      v11 = v32;
      if ( v32 < 0 )
      {
        WdLogSingleEntry1(3LL, v32);
        WdLogGlobalForLineNumber = 638;
        goto LABEL_33;
      }
      *v46 = v22;
    }
  }
LABEL_56:
  if ( SecurityDescriptor )
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
  return (unsigned int)v11;
}

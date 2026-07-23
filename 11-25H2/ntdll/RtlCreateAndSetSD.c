/*
 * XREFs of RtlCreateAndSetSD @ 0x180065F40
 * Callers:
 *     RtlCreateUserSecurityObject @ 0x180135330 (RtlCreateUserSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlAddAce @ 0x18005EFC0 (RtlAddAce.c)
 *     RtlCopySid @ 0x180060CD0 (RtlCopySid.c)
 *     RtlCreateAcl @ 0x180065F00 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1800662F0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180066340 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x180066390 (RtlSetSaclSecurityDescriptor.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlCreateAndSetSD(
        PRTL_ACE_DATA AceData,
        ULONG AceCount,
        PSID OwnerSid,
        PSID GroupSid,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor)
{
  int v6; // ebx
  unsigned int v7; // r12d
  _DWORD *v8; // r14
  void *ProcessHeap; // r10
  ULONG v10; // esi
  ULONG v11; // ebp
  ULONG i; // r9d
  int v13; // r8d
  unsigned int v14; // eax
  unsigned int v15; // ecx
  ACL *Heap; // rax
  ACL *v17; // rdi
  ACL *v18; // r15
  ULONG j; // esi
  ACL *v20; // r15
  unsigned __int8 *v21; // r9
  ULONG AceListLength; // ebp
  ACCESS_MASK AccessMask; // edx
  UCHAR AceFlags; // al
  int InheritFlags; // ecx
  __int16 AclSize; // ax
  __int16 v27; // ax
  ACL *Sacl; // [rsp+30h] [rbp-58h]
  PVOID HeapHandle; // [rsp+38h] [rbp-50h]
  PACL Acl; // [rsp+40h] [rbp-48h]
  ULONG v32; // [rsp+98h] [rbp+10h]

  v32 = AceCount;
  Acl = 0LL;
  v6 = 0;
  Sacl = 0LL;
  v7 = 0;
  v8 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v10 = 8;
  v11 = 8;
  HeapHandle = ProcessHeap;
  for ( i = 0; i < AceCount; ++i )
  {
    v13 = 4 * *((unsigned __int8 *)*AceData[i].Sid + 1);
    if ( !AceData[i].AceType || AceData[i].AceType == 1 )
    {
      v14 = v13 + 20;
      if ( v13 + 20 + v10 < v10 )
        return -1073741801;
      v10 += v13 + 20;
    }
    else
    {
      if ( AceData[i].AceType != 2 )
        return -1073741811;
      v14 = v13 + 20;
      if ( v13 + 20 + v11 < v11 )
        return -1073741801;
      v11 += v13 + 20;
    }
    AceCount = v32;
    if ( v7 > v14 )
      v14 = v7;
    v7 = v14;
  }
  v15 = 40;
  if ( v10 != 8 )
  {
    if ( v10 + 40 < 0x28 )
      return -1073741801;
    v15 = v10 + 40;
  }
  if ( v11 == 8 )
    goto LABEL_19;
  if ( v15 + v11 < v15 )
    return -1073741801;
  v15 += v11;
LABEL_19:
  Heap = (ACL *)RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v15);
  v17 = Heap;
  if ( !Heap )
    return -1073741801;
  v18 = Heap + 5;
  if ( v10 != 8 )
  {
    Acl = Heap + 5;
    v18 = (ACL *)((char *)v18 + v10);
    v6 = RtlCreateAcl(Heap + 5, v10, 2u);
    if ( v6 < 0 )
      goto LABEL_43;
  }
  if ( v11 != 8 )
  {
    Sacl = v18;
    v6 = RtlCreateAcl(v18, v11, 2u);
    if ( v6 < 0 )
      goto LABEL_43;
  }
  v8 = RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v7);
  if ( !v8 )
  {
    v6 = -1073741801;
    goto LABEL_43;
  }
  for ( j = 0; j < v32; ++j )
  {
    v20 = 0LL;
    v21 = (unsigned __int8 *)*AceData[j].Sid;
    AceListLength = 4 * v21[1] + 8;
    if ( !AceData[j].AceType )
    {
      AccessMask = AceData[j].AccessMask;
      AceFlags = AceData[j].AceFlags;
      LOBYTE(InheritFlags) = AceData[j].InheritFlags;
      *(_BYTE *)v8 = 0;
      goto LABEL_29;
    }
    if ( AceData[j].AceType == 1 )
    {
      AccessMask = AceData[j].AccessMask;
      AceFlags = AceData[j].AceFlags;
      InheritFlags = AceData[j].InheritFlags;
      *(_BYTE *)v8 = 1;
LABEL_29:
      v20 = Acl;
      goto LABEL_30;
    }
    if ( AceData[j].AceType != 2 )
      goto LABEL_31;
    AccessMask = AceData[j].AccessMask;
    AceFlags = AceData[j].AceFlags;
    LOBYTE(InheritFlags) = AceData[j].InheritFlags;
    v20 = Sacl;
    *(_BYTE *)v8 = 2;
LABEL_30:
    v8[1] = AccessMask;
    *((_BYTE *)v8 + 1) = AceFlags | InheritFlags;
    AceListLength += 12;
    *((_WORD *)v8 + 1) = AceListLength;
    v6 = RtlCopySid(4 * v21[1] + 8, v8 + 2, v21);
LABEL_31:
    if ( v6 >= 0 )
    {
      v6 = RtlAddAce(v20, 2u, 0xFFFFFFFF, v8, AceListLength);
      if ( v6 >= 0 )
        continue;
    }
    goto LABEL_43;
  }
  *(_OWORD *)&v17->AclRevision = 0LL;
  *(_OWORD *)&v17[2].AclRevision = 0LL;
  v17[4] = 0LL;
  v17->AclRevision = 1;
  v6 = RtlSetOwnerSecurityDescriptor(v17, OwnerSid, 0);
  if ( v6 >= 0 )
  {
    v6 = RtlSetGroupSecurityDescriptor(v17, GroupSid, 0);
    if ( v6 >= 0 )
    {
      if ( v17->AclRevision == 1 )
      {
        AclSize = v17->AclSize;
        if ( AclSize < 0 )
        {
          v6 = -1073741703;
        }
        else
        {
          v27 = AclSize | 4;
          v17[4] = 0LL;
          if ( Acl )
            v17[4] = (ACL)Acl;
          v17->AclSize = v27 & 0xFFF7;
          v6 = RtlSetSaclSecurityDescriptor(v17, Sacl != 0LL, Sacl, 0);
          if ( v6 >= 0 )
          {
            v6 = 0;
            *NewSecurityDescriptor = v17;
            goto LABEL_44;
          }
        }
      }
      else
      {
        v6 = -1073741736;
      }
    }
  }
LABEL_43:
  RtlFreeHeap(HeapHandle, 0, v17);
  if ( v8 )
LABEL_44:
    RtlFreeHeap(HeapHandle, 0, v8);
  return v6;
}

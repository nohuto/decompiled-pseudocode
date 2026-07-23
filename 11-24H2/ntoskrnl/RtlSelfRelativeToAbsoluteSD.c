/*
 * XREFs of RtlSelfRelativeToAbsoluteSD @ 0x140A70E40
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

NTSTATUS __stdcall RtlSelfRelativeToAbsoluteSD(
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PULONG AbsoluteSecurityDescriptorSize,
        PACL Dacl,
        PULONG DaclSize,
        PACL Sacl,
        PULONG SaclSize,
        PSID Owner,
        PULONG OwnerSize,
        PSID PrimaryGroup,
        PULONG PrimaryGroupSize)
{
  __int16 v11; // r10
  __int64 v14; // rax
  unsigned __int8 *v15; // rbx
  NTSTATUS result; // eax
  unsigned __int16 *v17; // rsi
  unsigned int v18; // eax
  PULONG v19; // r10
  unsigned int v20; // r8d
  unsigned int v21; // eax
  unsigned __int16 *v22; // rdi
  unsigned int v23; // edx
  __int64 v24; // rax
  unsigned __int8 *v25; // rbp
  ULONG v26; // r9d
  __int64 v27; // rax

  v11 = *((_WORD *)SelfRelativeSecurityDescriptor + 1);
  if ( v11 >= 0 )
    return -1073741593;
  v14 = *((unsigned int *)SelfRelativeSecurityDescriptor + 1);
  if ( (_DWORD)v14 )
  {
    v15 = (unsigned __int8 *)SelfRelativeSecurityDescriptor + v14;
    if ( (char *)SelfRelativeSecurityDescriptor + v14 )
    {
      v20 = (4 * v15[1] + 11) & 0xFFFFFFFC;
      goto LABEL_13;
    }
  }
  else
  {
    v15 = 0LL;
  }
  v20 = 0;
LABEL_13:
  if ( (v11 & 4) != 0 && (v21 = *((_DWORD *)SelfRelativeSecurityDescriptor + 4)) != 0 )
  {
    v22 = (unsigned __int16 *)((char *)SelfRelativeSecurityDescriptor + v21);
    if ( v22 )
    {
      v23 = (v22[1] + 3) & 0xFFFFFFFC;
      goto LABEL_17;
    }
  }
  else
  {
    v22 = 0LL;
  }
  v23 = 0;
LABEL_17:
  v24 = *((unsigned int *)SelfRelativeSecurityDescriptor + 2);
  if ( (_DWORD)v24 )
  {
    v25 = (unsigned __int8 *)SelfRelativeSecurityDescriptor + v24;
    if ( (char *)SelfRelativeSecurityDescriptor + v24 )
    {
      v26 = (4 * v25[1] + 11) & 0xFFFFFFFC;
      goto LABEL_23;
    }
  }
  else
  {
    v25 = 0LL;
  }
  v26 = 0;
LABEL_23:
  if ( (v11 & 0x10) == 0 || (v27 = *((unsigned int *)SelfRelativeSecurityDescriptor + 3), !(_DWORD)v27) )
  {
    v17 = 0LL;
    goto LABEL_25;
  }
  v17 = (unsigned __int16 *)((char *)SelfRelativeSecurityDescriptor + v27);
  if ( !((char *)SelfRelativeSecurityDescriptor + v27) )
  {
LABEL_25:
    v18 = 0;
    goto LABEL_7;
  }
  v18 = (v17[1] + 3) & 0xFFFFFFFC;
LABEL_7:
  v19 = PrimaryGroupSize;
  if ( AbsoluteSecurityDescriptor
    && (v19 = PrimaryGroupSize, *AbsoluteSecurityDescriptorSize >= 0x28)
    && v20 <= *OwnerSize
    && v23 <= *DaclSize
    && v18 <= *SaclSize
    && v26 <= *PrimaryGroupSize )
  {
    memmove(AbsoluteSecurityDescriptor, SelfRelativeSecurityDescriptor, 0x14uLL);
    *((_WORD *)AbsoluteSecurityDescriptor + 1) &= ~0x8000u;
    *((_QWORD *)AbsoluteSecurityDescriptor + 1) = 0LL;
    *((_QWORD *)AbsoluteSecurityDescriptor + 2) = 0LL;
    *((_QWORD *)AbsoluteSecurityDescriptor + 3) = 0LL;
    *((_QWORD *)AbsoluteSecurityDescriptor + 4) = 0LL;
    if ( v15 )
    {
      memmove(Owner, v15, 4LL * v15[1] + 8);
      *((_QWORD *)AbsoluteSecurityDescriptor + 1) = Owner;
    }
    if ( v25 )
    {
      memmove(PrimaryGroup, v25, 4LL * v25[1] + 8);
      *((_QWORD *)AbsoluteSecurityDescriptor + 2) = PrimaryGroup;
    }
    if ( v17 )
    {
      memmove(Sacl, v17, v17[1]);
      *((_QWORD *)AbsoluteSecurityDescriptor + 3) = Sacl;
    }
    if ( v22 )
    {
      memmove(Dacl, v22, v22[1]);
      *((_QWORD *)AbsoluteSecurityDescriptor + 4) = Dacl;
    }
    return 0;
  }
  else
  {
    *AbsoluteSecurityDescriptorSize = 40;
    *v19 = v26;
    *OwnerSize = v20;
    *SaclSize = v18;
    result = -1073741789;
    *DaclSize = v23;
  }
  return result;
}

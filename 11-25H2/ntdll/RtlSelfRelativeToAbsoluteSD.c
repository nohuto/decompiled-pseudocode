/*
 * XREFs of RtlSelfRelativeToAbsoluteSD @ 0x1800ED660
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __cdecl RtlSelfRelativeToAbsoluteSD(
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
  unsigned int v12; // eax
  unsigned __int8 *v15; // rbx
  unsigned int v16; // r8d
  unsigned __int16 *v17; // rdi
  unsigned int v18; // edx
  unsigned __int8 *v19; // rbp
  ULONG v20; // r9d
  unsigned __int16 *v21; // rsi
  PULONG v22; // r10
  NTSTATUS result; // eax

  v11 = *((_WORD *)SelfRelativeSecurityDescriptor + 1);
  v12 = 0;
  if ( v11 >= 0 )
    return -1073741593;
  if ( !*((_DWORD *)SelfRelativeSecurityDescriptor + 1) )
  {
    v15 = 0LL;
    goto LABEL_39;
  }
  v15 = (unsigned __int8 *)SelfRelativeSecurityDescriptor + *((unsigned int *)SelfRelativeSecurityDescriptor + 1);
  if ( !v15 )
  {
LABEL_39:
    v16 = 0;
    goto LABEL_5;
  }
  v16 = (4 * v15[1] + 11) & 0xFFFFFFFC;
  v12 = 0;
LABEL_5:
  if ( (v11 & 4) == 0 || !*((_DWORD *)SelfRelativeSecurityDescriptor + 4) )
  {
    v17 = 0LL;
LABEL_7:
    v18 = 0;
    goto LABEL_11;
  }
  v17 = (unsigned __int16 *)((char *)SelfRelativeSecurityDescriptor
                           + *((unsigned int *)SelfRelativeSecurityDescriptor + 4));
  if ( !v17 )
    goto LABEL_7;
  v18 = (v17[1] + 3) & 0xFFFFFFFC;
LABEL_11:
  if ( *((_DWORD *)SelfRelativeSecurityDescriptor + 2) )
  {
    v19 = (unsigned __int8 *)SelfRelativeSecurityDescriptor + *((unsigned int *)SelfRelativeSecurityDescriptor + 2);
    if ( v19 )
    {
      v20 = (4 * v19[1] + 11) & 0xFFFFFFFC;
      v12 = 0;
      goto LABEL_14;
    }
  }
  else
  {
    v19 = 0LL;
  }
  v20 = 0;
LABEL_14:
  if ( (v11 & 0x10) != 0 && *((_DWORD *)SelfRelativeSecurityDescriptor + 3) )
  {
    v21 = (unsigned __int16 *)((char *)SelfRelativeSecurityDescriptor
                             + *((unsigned int *)SelfRelativeSecurityDescriptor + 3));
    if ( v21 )
      v12 = (v21[1] + 3) & 0xFFFFFFFC;
  }
  else
  {
    v21 = 0LL;
  }
  v22 = PrimaryGroupSize;
  if ( AbsoluteSecurityDescriptor
    && (v22 = PrimaryGroupSize, *AbsoluteSecurityDescriptorSize >= 0x28)
    && v16 <= *OwnerSize
    && v18 <= *DaclSize
    && v12 <= *SaclSize
    && v20 <= *PrimaryGroupSize )
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
    if ( v19 )
    {
      memmove(PrimaryGroup, v19, 4LL * v19[1] + 8);
      *((_QWORD *)AbsoluteSecurityDescriptor + 2) = PrimaryGroup;
    }
    if ( v21 )
    {
      memmove(Sacl, v21, v21[1]);
      *((_QWORD *)AbsoluteSecurityDescriptor + 3) = Sacl;
    }
    if ( v17 )
    {
      memmove(Dacl, v17, v17[1]);
      *((_QWORD *)AbsoluteSecurityDescriptor + 4) = Dacl;
    }
    return 0;
  }
  else
  {
    *AbsoluteSecurityDescriptorSize = 40;
    *v22 = v20;
    *OwnerSize = v16;
    *SaclSize = v12;
    result = -1073741789;
    *DaclSize = v18;
  }
  return result;
}

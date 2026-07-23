/*
 * XREFs of RtlNormalizeSecurityDescriptor @ 0x1404AACB0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SeValidSecurityDescriptor @ 0x140835560 (SeValidSecurityDescriptor.c)
 *     RtlpNormalizeAcl @ 0x140856694 (RtlpNormalizeAcl.c)
 *     RtlLengthRequiredSid @ 0x14086B5A0 (RtlLengthRequiredSid.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

BOOLEAN __cdecl RtlNormalizeSecurityDescriptor(
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        ULONG SecurityDescriptorLength,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
        PULONG NewSecurityDescriptorLength,
        BOOLEAN CheckOnly)
{
  _DWORD *v5; // rbp
  ULONG_PTR v6; // rbx
  _DWORD *Pool2; // rdi
  BOOLEAN v9; // r14
  __int64 v10; // rcx
  ULONG v11; // ebx
  char *v12; // r13
  __int16 v13; // dx
  unsigned int v14; // r12d
  char *v16; // r15
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  char *v19; // r12
  char *v20; // r15
  int v21; // eax
  unsigned __int8 *v22; // r15
  ULONG v23; // eax
  ULONG v24; // r12d
  int v25; // eax
  unsigned __int8 *v26; // r15
  ULONG v27; // eax
  ULONG v28; // r12d
  PSECURITY_DESCRIPTOR *v29; // rax
  char v31; // [rsp+78h] [rbp+10h]

  v5 = *SecurityDescriptor;
  v6 = SecurityDescriptorLength;
  v31 = 0;
  Pool2 = 0LL;
  v9 = 0;
  if ( SeValidSecurityDescriptor(SecurityDescriptorLength, *SecurityDescriptor) )
  {
    if ( CheckOnly )
      goto LABEL_8;
    if ( NewSecurityDescriptor )
    {
      Pool2 = *NewSecurityDescriptor;
      if ( *NewSecurityDescriptor )
      {
LABEL_7:
        *(_OWORD *)Pool2 = *(_OWORD *)v5;
        Pool2[4] = v5[4];
LABEL_8:
        v10 = (unsigned int)v5[3];
        v11 = 20;
        if ( (_DWORD)v10 )
        {
          v12 = (char *)v5 + v10;
          v13 = *(_WORD *)((char *)v5 + v10 + 4);
          v14 = v13 != 0 ? 0x14 : 0;
          v9 = v14 != (_DWORD)v10;
          if ( v14 != (_DWORD)v10 && CheckOnly )
          {
LABEL_11:
            if ( !v9 )
              goto LABEL_12;
LABEL_51:
            if ( !CheckOnly )
            {
              v29 = NewSecurityDescriptor;
              if ( NewSecurityDescriptor )
              {
                if ( !v31 )
                {
LABEL_57:
                  if ( NewSecurityDescriptorLength )
                    *NewSecurityDescriptorLength = v11;
                  return v9;
                }
              }
              else
              {
                ExFreePoolWithTag(v5, 0);
                v29 = SecurityDescriptor;
              }
              *v29 = Pool2;
              goto LABEL_57;
            }
LABEL_12:
            if ( v31 )
              ExFreePoolWithTag(Pool2, 0);
            return v9;
          }
          if ( v13 )
          {
            if ( CheckOnly )
              v16 = 0LL;
            else
              v16 = (char *)Pool2 + v14;
            v9 |= RtlpNormalizeAcl(v16, (char *)v5 + v10, 0LL);
            if ( v9 && CheckOnly )
              goto LABEL_51;
            if ( CheckOnly )
            {
              v17 = *((_WORD *)v12 + 1);
            }
            else
            {
              Pool2[3] = v14;
              v17 = *((_WORD *)v16 + 1);
            }
            v11 = v17 + 20;
          }
          else
          {
            v9 = 1;
            if ( CheckOnly )
              goto LABEL_12;
            Pool2[3] = 0;
          }
        }
        v18 = (unsigned int)v5[4];
        if ( (_DWORD)v18 )
        {
          v9 |= v11 != (_DWORD)v18;
          if ( v9 && CheckOnly )
            goto LABEL_12;
          v19 = (char *)v5 + v18;
          v20 = CheckOnly ? 0LL : (char *)Pool2 + v11;
          v9 |= RtlpNormalizeAcl(v20, (char *)v5 + v18, 0LL);
          if ( v9 )
          {
            if ( CheckOnly )
              goto LABEL_12;
          }
          if ( CheckOnly )
          {
            v21 = *((unsigned __int16 *)v19 + 1);
          }
          else
          {
            Pool2[4] = v11;
            v21 = *((unsigned __int16 *)v20 + 1);
          }
          v11 += v21;
        }
        if ( v11 != v5[1] )
        {
          v9 = 1;
          if ( CheckOnly )
            goto LABEL_12;
          Pool2[1] = v11;
        }
        v22 = (unsigned __int8 *)v5 + (unsigned int)v5[1];
        v23 = RtlLengthRequiredSid(v22[1]);
        v24 = v23;
        if ( !CheckOnly )
          memmove((char *)Pool2 + (unsigned int)Pool2[1], v22, v23);
        v25 = v5[2];
        v11 += v24;
        if ( v25 )
        {
          if ( v11 != v25 )
          {
            v9 = 1;
            if ( CheckOnly )
              goto LABEL_12;
            Pool2[2] = v11;
          }
          v26 = (unsigned __int8 *)v5 + (unsigned int)v5[2];
          v27 = RtlLengthRequiredSid(v26[1]);
          v28 = v27;
          if ( !CheckOnly )
            memmove((char *)Pool2 + (unsigned int)Pool2[2], v26, v27);
          v11 += v28;
        }
        goto LABEL_11;
      }
    }
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, v6, 0x64536553u);
    if ( Pool2 )
    {
      v31 = 1;
      goto LABEL_7;
    }
  }
  return 0;
}

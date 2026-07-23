/*
 * XREFs of RtlNormalizeSecurityDescriptor @ 0x1404AF6B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlLengthRequiredSid @ 0x140918FE0 (RtlLengthRequiredSid.c)
 *     RtlpNormalizeAcl @ 0x14091B380 (RtlpNormalizeAcl.c)
 *     SeValidSecurityDescriptor @ 0x1409EFAF0 (SeValidSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

BOOLEAN __cdecl RtlNormalizeSecurityDescriptor(
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        ULONG SecurityDescriptorLength,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
        PULONG NewSecurityDescriptorLength,
        BOOLEAN CheckOnly)
{
  _DWORD *v5; // rbp
  _DWORD *Pool2; // rdi
  BOOLEAN v8; // r14
  __int64 v9; // rcx
  ULONG v10; // ebx
  char *v11; // r13
  __int16 v12; // dx
  unsigned int v13; // r12d
  char *v15; // r15
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  char *v18; // r12
  char *v19; // r15
  int v20; // eax
  unsigned __int8 *v21; // r15
  ULONG v22; // eax
  ULONG v23; // r12d
  int v24; // eax
  unsigned __int8 *v25; // r15
  ULONG v26; // eax
  ULONG v27; // r12d
  PSECURITY_DESCRIPTOR *v28; // rax
  char v30; // [rsp+78h] [rbp+10h]

  v5 = *SecurityDescriptor;
  v30 = 0;
  Pool2 = 0LL;
  v8 = 0;
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
        v9 = (unsigned int)v5[3];
        v10 = 20;
        if ( (_DWORD)v9 )
        {
          v11 = (char *)v5 + v9;
          v12 = *(_WORD *)((char *)v5 + v9 + 4);
          v13 = v12 != 0 ? 0x14 : 0;
          v8 = v13 != (_DWORD)v9;
          if ( v13 != (_DWORD)v9 && CheckOnly )
          {
LABEL_11:
            if ( !v8 )
              goto LABEL_12;
LABEL_51:
            if ( !CheckOnly )
            {
              v28 = NewSecurityDescriptor;
              if ( NewSecurityDescriptor )
              {
                if ( !v30 )
                {
LABEL_57:
                  if ( NewSecurityDescriptorLength )
                    *NewSecurityDescriptorLength = v10;
                  return v8;
                }
              }
              else
              {
                ExFreePoolWithTag(v5, 0);
                v28 = SecurityDescriptor;
              }
              *v28 = Pool2;
              goto LABEL_57;
            }
LABEL_12:
            if ( v30 )
              ExFreePoolWithTag(Pool2, 0);
            return v8;
          }
          if ( v12 )
          {
            if ( CheckOnly )
              v15 = 0LL;
            else
              v15 = (char *)Pool2 + v13;
            v8 |= RtlpNormalizeAcl(v15, (char *)v5 + v9, 0LL);
            if ( v8 && CheckOnly )
              goto LABEL_51;
            if ( CheckOnly )
            {
              v16 = *((_WORD *)v11 + 1);
            }
            else
            {
              Pool2[3] = v13;
              v16 = *((_WORD *)v15 + 1);
            }
            v10 = v16 + 20;
          }
          else
          {
            v8 = 1;
            if ( CheckOnly )
              goto LABEL_12;
            Pool2[3] = 0;
          }
        }
        v17 = (unsigned int)v5[4];
        if ( (_DWORD)v17 )
        {
          v8 |= v10 != (_DWORD)v17;
          if ( v8 && CheckOnly )
            goto LABEL_12;
          v18 = (char *)v5 + v17;
          v19 = CheckOnly ? 0LL : (char *)Pool2 + v10;
          v8 |= RtlpNormalizeAcl(v19, (char *)v5 + v17, 0LL);
          if ( v8 )
          {
            if ( CheckOnly )
              goto LABEL_12;
          }
          if ( CheckOnly )
          {
            v20 = *((unsigned __int16 *)v18 + 1);
          }
          else
          {
            Pool2[4] = v10;
            v20 = *((unsigned __int16 *)v19 + 1);
          }
          v10 += v20;
        }
        if ( v10 != v5[1] )
        {
          v8 = 1;
          if ( CheckOnly )
            goto LABEL_12;
          Pool2[1] = v10;
        }
        v21 = (unsigned __int8 *)v5 + (unsigned int)v5[1];
        v22 = RtlLengthRequiredSid(v21[1]);
        v23 = v22;
        if ( !CheckOnly )
          memmove((char *)Pool2 + (unsigned int)Pool2[1], v21, v22);
        v24 = v5[2];
        v10 += v23;
        if ( v24 )
        {
          if ( v10 != v24 )
          {
            v8 = 1;
            if ( CheckOnly )
              goto LABEL_12;
            Pool2[2] = v10;
          }
          v25 = (unsigned __int8 *)v5 + (unsigned int)v5[2];
          v26 = RtlLengthRequiredSid(v25[1]);
          v27 = v26;
          if ( !CheckOnly )
            memmove((char *)Pool2 + (unsigned int)Pool2[2], v25, v26);
          v10 += v27;
        }
        goto LABEL_11;
      }
    }
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v30 = 1;
      goto LABEL_7;
    }
  }
  return 0;
}

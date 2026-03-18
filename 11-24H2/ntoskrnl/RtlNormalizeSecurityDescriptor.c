/*
 * XREFs of RtlNormalizeSecurityDescriptor @ 0x1404B0420
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlpNormalizeAcl @ 0x14085A3B4 (RtlpNormalizeAcl.c)
 *     RtlLengthRequiredSid @ 0x140867110 (RtlLengthRequiredSid.c)
 *     SeValidSecurityDescriptor @ 0x1409EA4E0 (SeValidSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

char __fastcall RtlNormalizeSecurityDescriptor(
        PSECURITY_DESCRIPTOR *a1,
        ULONG a2,
        PSECURITY_DESCRIPTOR *a3,
        unsigned int *a4,
        char a5)
{
  _DWORD *v5; // rbp
  _DWORD *Pool2; // rdi
  char v8; // r14
  __int64 v9; // rcx
  unsigned int v10; // ebx
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

  v5 = *a1;
  v30 = 0;
  Pool2 = 0LL;
  v8 = 0;
  if ( SeValidSecurityDescriptor(a2, *a1) )
  {
    if ( a5 )
      goto LABEL_8;
    if ( a3 )
    {
      Pool2 = *a3;
      if ( *a3 )
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
          if ( v13 != (_DWORD)v9 && a5 )
          {
LABEL_11:
            if ( !v8 )
              goto LABEL_12;
LABEL_51:
            if ( !a5 )
            {
              v28 = a3;
              if ( a3 )
              {
                if ( !v30 )
                {
LABEL_57:
                  if ( a4 )
                    *a4 = v10;
                  return v8;
                }
              }
              else
              {
                ExFreePoolWithTag(v5, 0);
                v28 = a1;
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
            if ( a5 )
              v15 = 0LL;
            else
              v15 = (char *)Pool2 + v13;
            v8 |= RtlpNormalizeAcl(v15, (char *)v5 + v9, 0LL);
            if ( v8 && a5 )
              goto LABEL_51;
            if ( a5 )
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
            if ( a5 )
              goto LABEL_12;
            Pool2[3] = 0;
          }
        }
        v17 = (unsigned int)v5[4];
        if ( (_DWORD)v17 )
        {
          v8 |= v10 != (_DWORD)v17;
          if ( v8 && a5 )
            goto LABEL_12;
          v18 = (char *)v5 + v17;
          v19 = a5 ? 0LL : (char *)Pool2 + v10;
          v8 |= RtlpNormalizeAcl(v19, (char *)v5 + v17, 0LL);
          if ( v8 )
          {
            if ( a5 )
              goto LABEL_12;
          }
          if ( a5 )
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
          if ( a5 )
            goto LABEL_12;
          Pool2[1] = v10;
        }
        v21 = (unsigned __int8 *)v5 + (unsigned int)v5[1];
        v22 = RtlLengthRequiredSid(v21[1]);
        v23 = v22;
        if ( !a5 )
          memmove((char *)Pool2 + (unsigned int)Pool2[1], v21, v22);
        v24 = v5[2];
        v10 += v23;
        if ( v24 )
        {
          if ( v10 != v24 )
          {
            v8 = 1;
            if ( a5 )
              goto LABEL_12;
            Pool2[2] = v10;
          }
          v25 = (unsigned __int8 *)v5 + (unsigned int)v5[2];
          v26 = RtlLengthRequiredSid(v25[1]);
          v27 = v26;
          if ( !a5 )
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

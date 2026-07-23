/*
 * XREFs of SeQuerySecurityDescriptorInfo @ 0x14087CD40
 * Callers:
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 *     SeDefaultObjectMethod @ 0x140854470 (SeDefaultObjectMethod.c)
 *     ObQuerySecurityDescriptorInfo @ 0x14087D604 (ObQuerySecurityDescriptorInfo.c)
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x14087E1BC (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14094649C (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlpFilterSacl @ 0x14087D1CC (RtlpFilterSacl.c)
 */

NTSTATUS __stdcall SeQuerySecurityDescriptorInfo(
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PULONG Length,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor)
{
  PSECURITY_INFORMATION v6; // r8
  unsigned int v7; // r13d
  unsigned int v8; // r15d
  ULONG v9; // ecx
  unsigned int *v10; // rax
  __int16 v11; // cx
  __int64 v12; // rdx
  unsigned __int8 *v13; // r10
  __int64 v14; // rdx
  unsigned __int8 *v15; // r12
  __int64 v16; // rdx
  unsigned __int16 *v17; // rbx
  char *v18; // r11
  __int16 v19; // r14
  ULONG v20; // edi
  DWORD v21; // r9d
  int v22; // eax
  int v23; // ecx
  char v24; // al
  __int16 v25; // cx
  char *v26; // rdi
  __int64 v27; // rcx
  NTSTATUS result; // eax
  int v29; // [rsp+24h] [rbp-94h] BYREF
  size_t Size; // [rsp+28h] [rbp-90h]
  char *v31; // [rsp+30h] [rbp-88h]
  char *v32; // [rsp+38h] [rbp-80h]
  ULONG v33; // [rsp+40h] [rbp-78h]
  unsigned __int8 *v34; // [rsp+48h] [rbp-70h]
  __int128 v35; // [rsp+50h] [rbp-68h]
  unsigned __int8 *v36; // [rsp+60h] [rbp-58h]
  char *v37; // [rsp+68h] [rbp-50h]
  unsigned __int16 *v38; // [rsp+70h] [rbp-48h]
  char v40; // [rsp+C8h] [rbp+10h]

  v6 = SecurityInformation;
  v7 = 0;
  LODWORD(Size) = 0;
  v8 = 0;
  v29 = 0;
  v9 = *Length;
  v33 = *Length;
  v10 = (unsigned int *)*ObjectsSecurityDescriptor;
  if ( !*ObjectsSecurityDescriptor )
  {
    *Length = 20;
    if ( v9 < 0x14 )
      return -1073741789;
    result = 0;
    *(_OWORD *)SecurityDescriptor = 0LL;
    *((_DWORD *)SecurityDescriptor + 4) = 0;
    *(_BYTE *)SecurityDescriptor = 1;
    *((_WORD *)SecurityDescriptor + 1) |= 0x8000u;
    return result;
  }
  v35 = *(_OWORD *)v10;
  LODWORD(v36) = v10[4];
  v11 = *((_WORD *)v10 + 1);
  if ( v11 >= 0 )
  {
    v13 = (unsigned __int8 *)*((_QWORD *)v10 + 1);
    goto LABEL_5;
  }
  v12 = v10[1];
  if ( (_DWORD)v12 )
  {
    v13 = (unsigned __int8 *)v10 + v12;
LABEL_5:
    v34 = v13;
    goto LABEL_6;
  }
  v13 = 0LL;
  v34 = 0LL;
LABEL_6:
  *((_QWORD *)&v35 + 1) = v13;
  if ( v11 >= 0 )
  {
    v15 = (unsigned __int8 *)*((_QWORD *)v10 + 2);
  }
  else
  {
    v14 = v10[2];
    if ( (_DWORD)v14 )
      v15 = (unsigned __int8 *)v10 + v14;
    else
      v15 = 0LL;
  }
  v36 = v15;
  if ( (v11 & 4) != 0 )
  {
    if ( v11 >= 0 )
    {
      v17 = (unsigned __int16 *)*((_QWORD *)v10 + 4);
    }
    else
    {
      v16 = v10[4];
      if ( (_DWORD)v16 )
        v17 = (unsigned __int16 *)((char *)v10 + v16);
      else
        v17 = 0LL;
    }
  }
  else
  {
    v17 = 0LL;
  }
  v38 = v17;
  if ( (v11 & 0x10) != 0 )
  {
    if ( v11 >= 0 )
    {
      v18 = (char *)*((_QWORD *)v10 + 3);
    }
    else
    {
      v27 = v10[3];
      if ( !(_DWORD)v27 )
      {
        v18 = 0LL;
        v31 = 0LL;
        goto LABEL_15;
      }
      v18 = (char *)v10 + v27;
    }
    v31 = v18;
  }
  else
  {
    v18 = 0LL;
    v31 = 0LL;
  }
LABEL_15:
  v37 = v18;
  v19 = WORD1(v35) & 0x7FFF;
  WORD1(v35) &= ~0x8000u;
  v20 = 20;
  v21 = *v6;
  v22 = *v6 & 0x80;
  v23 = *v6 & 0x100;
  if ( (*v6 & 0x10000) != 0 )
  {
    v21 |= 0x1FFu;
    *v6 = v21;
    if ( !v22 )
    {
      v21 &= ~0x80u;
      *v6 = v21;
    }
    if ( !v23 )
    {
      v21 &= ~0x100u;
      *v6 = v21;
    }
  }
  if ( (v21 & 1) != 0 && v13 )
  {
    v7 = 4 * v13[1] + 8;
    v20 = 4 * v13[1] + 28;
  }
  if ( (v21 & 2) != 0 && v15 )
  {
    LODWORD(Size) = 4 * v15[1] + 8;
    v20 += Size;
  }
  if ( (v21 & 4) != 0 )
  {
    v24 = v19;
    v40 = v19;
    if ( (v19 & 4) != 0 && v17 )
    {
      v8 = (v17[1] + 3) & 0xFFFFFFFC;
      v20 += v8;
    }
  }
  else
  {
    v24 = v19;
    v40 = v19;
  }
  if ( (v21 & 0x1F8) != 0 && (v24 & 0x10) != 0 && v18 )
  {
    RtlpFilterSacl(v18, 0LL, &v29);
    v20 += v29;
    v13 = v34;
    v6 = SecurityInformation;
  }
  *Length = v20;
  if ( v20 > v33 )
    return -1073741789;
  *(_OWORD *)SecurityDescriptor = 0LL;
  *((_DWORD *)SecurityDescriptor + 4) = 0;
  *(_BYTE *)SecurityDescriptor = 1;
  v25 = *((_WORD *)SecurityDescriptor + 1) | 0x8000;
  *((_WORD *)SecurityDescriptor + 1) = v25;
  v26 = (char *)(((unsigned __int64)SecurityDescriptor + 23) & 0xFFFFFFFFFFFFFFFCuLL);
  v32 = v26;
  if ( (*v6 & 1) != 0 && v13 )
  {
    memmove((void *)(((unsigned __int64)SecurityDescriptor + 23) & 0xFFFFFFFFFFFFFFFCuLL), v13, v7);
    *((_DWORD *)SecurityDescriptor + 1) = (_DWORD)v26 - (_DWORD)SecurityDescriptor;
    v25 = *((_WORD *)SecurityDescriptor + 1) | v19 & 1;
    *((_WORD *)SecurityDescriptor + 1) = v25;
    v26 += (v7 + 3) & 0xFFFFFFFC;
    v32 = v26;
    v6 = SecurityInformation;
  }
  if ( (*v6 & 2) != 0 && v15 )
  {
    memmove(v26, v15, (unsigned int)Size);
    *((_DWORD *)SecurityDescriptor + 2) = (_DWORD)v26 - (_DWORD)SecurityDescriptor;
    v25 = *((_WORD *)SecurityDescriptor + 1) | v19 & 2;
    *((_WORD *)SecurityDescriptor + 1) = v25;
    v26 += ((_DWORD)Size + 3) & 0xFFFFFFFC;
    v32 = v26;
    v6 = SecurityInformation;
  }
  if ( (*v6 & 4) != 0 )
  {
    *((_WORD *)SecurityDescriptor + 1) = v25 | v19 & 0x140C;
    if ( (v40 & 4) != 0 )
    {
      if ( v17 )
      {
        memmove(v26, v17, v17[1]);
        *((_DWORD *)SecurityDescriptor + 4) = (_DWORD)v26 - (_DWORD)SecurityDescriptor;
        v26 += v8;
        v32 = v26;
        v6 = SecurityInformation;
      }
    }
  }
  if ( (*v6 & 0x1F8) != 0 )
  {
    *((_WORD *)SecurityDescriptor + 1) |= v19 & 0x2830;
    if ( (v40 & 0x10) != 0 )
    {
      if ( v31 )
      {
        RtlpFilterSacl(v31, v26, &v29);
        *((_DWORD *)SecurityDescriptor + 3) = (_DWORD)v26 - (_DWORD)SecurityDescriptor;
        v32 = &v26[v29];
      }
    }
  }
  return 0;
}

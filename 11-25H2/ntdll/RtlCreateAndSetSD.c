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

__int64 __fastcall RtlCreateAndSetSD(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 *a5)
{
  int Acl; // ebx
  unsigned int v7; // r12d
  __int64 v8; // r14
  char *ProcessHeap; // r10
  unsigned int v10; // esi
  unsigned int v11; // ebp
  unsigned int i; // r9d
  int v13; // r8d
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 Heap; // rax
  __int64 v17; // rdi
  __int64 v18; // r15
  unsigned int j; // esi
  char *v20; // r15
  unsigned __int8 *v21; // r9
  unsigned int v22; // ebp
  int v23; // edx
  char v24; // al
  char v25; // cl
  __int64 v26; // rdx
  __int16 v27; // ax
  __int16 v28; // ax
  char *v30; // [rsp+30h] [rbp-58h]
  char *v31; // [rsp+38h] [rbp-50h]
  char *v32; // [rsp+40h] [rbp-48h]
  unsigned int v33; // [rsp+98h] [rbp+10h]

  v33 = a2;
  v32 = 0LL;
  Acl = 0;
  v30 = 0LL;
  v7 = 0;
  v8 = 0LL;
  ProcessHeap = (char *)NtCurrentPeb()->ProcessHeap;
  v10 = 8;
  v11 = 8;
  v31 = ProcessHeap;
  for ( i = 0; i < a2; ++i )
  {
    v13 = 4 * *(unsigned __int8 *)(**(_QWORD **)(a1 + 16LL * i + 8) + 1LL);
    if ( !*(_BYTE *)(a1 + 16LL * i) || *(_BYTE *)(a1 + 16LL * i) == 1 )
    {
      v14 = v13 + 20;
      if ( v13 + 20 + v10 < v10 )
        return (unsigned int)-1073741801;
      v10 += v13 + 20;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 16LL * i) != 2 )
        return 3221225485LL;
      v14 = v13 + 20;
      if ( v13 + 20 + v11 < v11 )
        return (unsigned int)-1073741801;
      v11 += v13 + 20;
    }
    a2 = v33;
    if ( v7 > v14 )
      v14 = v7;
    v7 = v14;
  }
  v15 = 40;
  if ( v10 != 8 )
  {
    if ( v10 + 40 < 0x28 )
      return (unsigned int)-1073741801;
    v15 = v10 + 40;
  }
  if ( v11 == 8 )
    goto LABEL_19;
  if ( v15 + v11 < v15 )
    return (unsigned int)-1073741801;
  v15 += v11;
LABEL_19:
  Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v15);
  v17 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  v18 = Heap + 40;
  if ( v10 != 8 )
  {
    v32 = (char *)(Heap + 40);
    v18 += v10;
    Acl = RtlCreateAcl(Heap + 40, v10, 2);
    if ( Acl < 0 )
      goto LABEL_43;
  }
  if ( v11 != 8 )
  {
    v30 = (char *)v18;
    Acl = RtlCreateAcl(v18, v11, 2);
    if ( Acl < 0 )
      goto LABEL_43;
  }
  v8 = RtlAllocateHeap(v31, NtdllBaseTag + 1310720, v7);
  if ( !v8 )
  {
    Acl = -1073741801;
    goto LABEL_43;
  }
  for ( j = 0; j < v33; ++j )
  {
    v20 = 0LL;
    v21 = **(unsigned __int8 ***)(a1 + 16LL * j + 8);
    v22 = 4 * v21[1] + 8;
    if ( !*(_BYTE *)(a1 + 16LL * j) )
    {
      v23 = *(_DWORD *)(a1 + 16LL * j + 4);
      v24 = *(_BYTE *)(a1 + 16LL * j + 2);
      v25 = *(_BYTE *)(a1 + 16LL * j + 1);
      *(_BYTE *)v8 = 0;
      goto LABEL_29;
    }
    if ( *(_BYTE *)(a1 + 16LL * j) == 1 )
    {
      v23 = *(_DWORD *)(a1 + 16LL * j + 4);
      v24 = *(_BYTE *)(a1 + 16LL * j + 2);
      v25 = *(_BYTE *)(a1 + 16LL * j + 1);
      *(_BYTE *)v8 = 1;
LABEL_29:
      v20 = v32;
      goto LABEL_30;
    }
    if ( *(_BYTE *)(a1 + 16LL * j) != 2 )
      goto LABEL_31;
    v23 = *(_DWORD *)(a1 + 16LL * j + 4);
    v24 = *(_BYTE *)(a1 + 16LL * j + 2);
    v25 = *(_BYTE *)(a1 + 16LL * j + 1);
    v20 = v30;
    *(_BYTE *)v8 = 2;
LABEL_30:
    *(_DWORD *)(v8 + 4) = v23;
    *(_BYTE *)(v8 + 1) = v24 | v25;
    v22 += 12;
    *(_WORD *)(v8 + 2) = v22;
    Acl = RtlCopySid(4 * (unsigned int)v21[1] + 8, (void *)(v8 + 8), v21);
LABEL_31:
    if ( Acl >= 0 )
    {
      Acl = RtlAddAce(v20, 2u, 0xFFFFFFFF, (char *)v8, v22);
      if ( Acl >= 0 )
        continue;
    }
    goto LABEL_43;
  }
  *(_OWORD *)v17 = 0LL;
  *(_OWORD *)(v17 + 16) = 0LL;
  *(_QWORD *)(v17 + 32) = 0LL;
  *(_BYTE *)v17 = 1;
  Acl = RtlSetOwnerSecurityDescriptor(v17, a3, 0LL);
  if ( Acl >= 0 )
  {
    Acl = RtlSetGroupSecurityDescriptor(v17, a4, 0LL);
    if ( Acl >= 0 )
    {
      if ( *(_BYTE *)v17 == 1 )
      {
        v27 = *(_WORD *)(v17 + 2);
        if ( v27 < 0 )
        {
          Acl = -1073741703;
        }
        else
        {
          v28 = v27 | 4;
          *(_QWORD *)(v17 + 32) = 0LL;
          if ( v32 )
            *(_QWORD *)(v17 + 32) = v32;
          *(_WORD *)(v17 + 2) = v28 & 0xFFF7;
          LOBYTE(v26) = v30 != 0LL;
          Acl = RtlSetSaclSecurityDescriptor(v17, v26, v30, 0LL);
          if ( Acl >= 0 )
          {
            Acl = 0;
            *a5 = v17;
            goto LABEL_44;
          }
        }
      }
      else
      {
        Acl = -1073741736;
      }
    }
  }
LABEL_43:
  RtlFreeHeap(v31, 0LL, v17);
  if ( v8 )
LABEL_44:
    RtlFreeHeap(v31, 0LL, v8);
  return (unsigned int)Acl;
}

/*
 * XREFs of SepCreateImpersonationTokenDacl @ 0x140852130
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140851680 (NtOpenThreadTokenEx.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlCopySid @ 0x1408E7870 (RtlCopySid.c)
 *     RtlValidAcl @ 0x140910580 (RtlValidAcl.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepCreateImpersonationTokenDacl(__int64 a1, __int64 a2, ACL **a3)
{
  unsigned __int8 *v5; // rdi
  unsigned __int8 *v6; // rsi
  unsigned __int8 *v7; // r15
  unsigned __int8 *v8; // r14
  unsigned int v9; // ebp
  ACL *Pool2; // rbx
  char AclRevision; // bp
  ACL *v12; // rdx
  unsigned int i; // ecx
  ACL *v14; // r8
  USHORT v15; // cx
  char v16; // bp
  ACL *v17; // rdx
  unsigned int j; // ecx
  ACL *v19; // r8
  USHORT v20; // cx
  unsigned __int8 *v21; // r14
  char v22; // bp
  ACL *v23; // rdx
  unsigned int k; // ecx
  ACL *v25; // r8
  USHORT v26; // cx
  unsigned __int8 *v27; // r14
  char v28; // bp
  ACL *v29; // rdx
  unsigned int m; // ecx
  ACL *v31; // r8
  USHORT v32; // cx
  char v33; // bp
  ACL *v34; // rdx
  unsigned int n; // ecx
  ACL *v36; // r8
  USHORT v37; // cx
  char v38; // di
  ACL *v39; // rdx
  unsigned int ii; // ecx
  ACL *v41; // r8
  USHORT v42; // cx

  v5 = 0LL;
  v6 = 0LL;
  v7 = **(unsigned __int8 ***)(a2 + 152);
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
    v6 = *(unsigned __int8 **)(a2 + 784);
  v8 = **(unsigned __int8 ***)(a1 + 152);
  if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
    v5 = *(unsigned __int8 **)(a1 + 784);
  v9 = 4
     * (v7[1]
      + v8[1]
      + *((unsigned __int8 *)SeLocalSystemSid + 1)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *((unsigned __int8 *)SeRestrictedSid + 1))
     + 88;
  if ( v5 )
    v9 += 4 * v5[1] + 16;
  if ( v6 )
  {
    if ( v5 && RtlEqualSid(v6, v5) )
      v6 = 0LL;
    else
      v9 += 4 * v6[1] + 16;
  }
  Pool2 = (ACL *)ExAllocatePool2(0x100uLL, v9, 0x20206553u);
  if ( Pool2 )
  {
    if ( v9 - 8 <= 0xFFF4 )
    {
      memset_0(Pool2, 0, v9);
      *(_WORD *)&Pool2->AclRevision = 2;
      *(_DWORD *)&Pool2->AceCount = 0;
      Pool2->AclSize = v9;
    }
    if ( (unsigned __int64)v7 > 0x7FFFFFFF0000LL && (*v7 & 0xF) == 1 && v7[1] <= 0xFu )
    {
      AclRevision = Pool2->AclRevision;
      if ( Pool2->AclRevision <= 4u )
      {
        if ( (unsigned __int8)AclRevision <= 2u )
          AclRevision = 2;
        if ( RtlValidAcl(Pool2) )
        {
          v12 = Pool2 + 1;
          for ( i = 0; i < Pool2->AceCount; ++i )
          {
            if ( v12 >= (ACL *)((char *)Pool2 + Pool2->AclSize) )
              goto LABEL_25;
            v12 = (ACL *)((char *)v12 + v12->AclSize);
          }
          v14 = (ACL *)((char *)Pool2 + Pool2->AclSize);
          if ( v12 > v14 )
            v12 = 0LL;
          v15 = 4 * (v7[1] + 4);
          if ( v12 && (ACL *)((char *)v12 + v15) <= v14 )
          {
            v12->AclSize = v15;
            *(_WORD *)&v12->AclRevision = 0;
            *(_DWORD *)&v12->AceCount = 983551;
            RtlCopySid(4 * v7[1] + 8, &v12[1], v7);
            ++Pool2->AceCount;
            Pool2->AclRevision = AclRevision;
          }
        }
      }
    }
LABEL_25:
    if ( (unsigned __int64)v8 > 0x7FFFFFFF0000LL && (*v8 & 0xF) == 1 && v8[1] <= 0xFu )
    {
      v16 = Pool2->AclRevision;
      if ( Pool2->AclRevision <= 4u )
      {
        if ( (unsigned __int8)v16 <= 2u )
          v16 = 2;
        if ( RtlValidAcl(Pool2) )
        {
          v17 = Pool2 + 1;
          for ( j = 0; j < Pool2->AceCount; ++j )
          {
            if ( v17 >= (ACL *)((char *)Pool2 + Pool2->AclSize) )
              goto LABEL_39;
            v17 = (ACL *)((char *)v17 + v17->AclSize);
          }
          v19 = (ACL *)((char *)Pool2 + Pool2->AclSize);
          if ( v17 > v19 )
            v17 = 0LL;
          v20 = 4 * (v8[1] + 4);
          if ( v17 && (ACL *)((char *)v17 + v20) <= v19 )
          {
            v17->AclSize = v20;
            *(_WORD *)&v17->AclRevision = 0;
            *(_DWORD *)&v17->AceCount = 983551;
            RtlCopySid(4 * v8[1] + 8, &v17[1], v8);
            ++Pool2->AceCount;
            Pool2->AclRevision = v16;
          }
        }
      }
    }
LABEL_39:
    v21 = (unsigned __int8 *)SeAliasAdminsSid;
    if ( (unsigned __int64)SeAliasAdminsSid > 0x7FFFFFFF0000LL
      && (*(_BYTE *)SeAliasAdminsSid & 0xF) == 1
      && *((_BYTE *)SeAliasAdminsSid + 1) <= 0xFu )
    {
      v22 = Pool2->AclRevision;
      if ( Pool2->AclRevision <= 4u )
      {
        if ( (unsigned __int8)v22 <= 2u )
          v22 = 2;
        if ( RtlValidAcl(Pool2) )
        {
          v23 = Pool2 + 1;
          for ( k = 0; k < Pool2->AceCount; ++k )
          {
            if ( v23 >= (ACL *)((char *)Pool2 + Pool2->AclSize) )
              goto LABEL_53;
            v23 = (ACL *)((char *)v23 + v23->AclSize);
          }
          v25 = (ACL *)((char *)Pool2 + Pool2->AclSize);
          if ( v23 > v25 )
            v23 = 0LL;
          v26 = 4 * (v21[1] + 4);
          if ( v23 && (ACL *)((char *)v23 + v26) <= v25 )
          {
            v23->AclSize = v26;
            *(_WORD *)&v23->AclRevision = 0;
            *(_DWORD *)&v23->AceCount = 983551;
            RtlCopySid(4 * v21[1] + 8, &v23[1], v21);
            ++Pool2->AceCount;
            Pool2->AclRevision = v22;
          }
        }
      }
    }
LABEL_53:
    v27 = (unsigned __int8 *)SeLocalSystemSid;
    if ( (unsigned __int64)SeLocalSystemSid > 0x7FFFFFFF0000LL
      && (*(_BYTE *)SeLocalSystemSid & 0xF) == 1
      && *((_BYTE *)SeLocalSystemSid + 1) <= 0xFu )
    {
      v28 = Pool2->AclRevision;
      if ( Pool2->AclRevision <= 4u )
      {
        if ( (unsigned __int8)v28 <= 2u )
          v28 = 2;
        if ( RtlValidAcl(Pool2) )
        {
          v29 = Pool2 + 1;
          for ( m = 0; m < Pool2->AceCount; ++m )
          {
            if ( v29 >= (ACL *)((char *)Pool2 + Pool2->AclSize) )
              goto LABEL_67;
            v29 = (ACL *)((char *)v29 + v29->AclSize);
          }
          v31 = (ACL *)((char *)Pool2 + Pool2->AclSize);
          if ( v29 > v31 )
            v29 = 0LL;
          v32 = 4 * (v27[1] + 4);
          if ( v29 && (ACL *)((char *)v29 + v32) <= v31 )
          {
            v29->AclSize = v32;
            *(_WORD *)&v29->AclRevision = 0;
            *(_DWORD *)&v29->AceCount = 983551;
            RtlCopySid(4 * v27[1] + 8, &v29[1], v27);
            ++Pool2->AceCount;
            Pool2->AclRevision = v28;
          }
        }
      }
    }
LABEL_67:
    if ( (unsigned __int64)v5 >= 0x7FFFFFFF0001LL && (*v5 & 0xF) == 1 && v5[1] <= 0xFu )
    {
      v33 = Pool2->AclRevision;
      if ( Pool2->AclRevision <= 4u )
      {
        if ( (unsigned __int8)v33 <= 2u )
          v33 = 2;
        if ( RtlValidAcl(Pool2) )
        {
          v34 = Pool2 + 1;
          for ( n = 0; n < Pool2->AceCount; ++n )
          {
            if ( v34 >= (ACL *)((char *)Pool2 + Pool2->AclSize) )
              goto LABEL_81;
            v34 = (ACL *)((char *)v34 + v34->AclSize);
          }
          v36 = (ACL *)((char *)Pool2 + Pool2->AclSize);
          if ( v34 > v36 )
            v34 = 0LL;
          v37 = 4 * (v5[1] + 4);
          if ( v34 && (ACL *)((char *)v34 + v37) <= v36 )
          {
            v34->AclSize = v37;
            *(_WORD *)&v34->AclRevision = 0;
            *(_DWORD *)&v34->AceCount = 983551;
            RtlCopySid(4 * v5[1] + 8, &v34[1], v5);
            ++Pool2->AceCount;
            Pool2->AclRevision = v33;
          }
        }
      }
    }
LABEL_81:
    if ( (unsigned __int64)v6 >= 0x7FFFFFFF0001LL && (*v6 & 0xF) == 1 && v6[1] <= 0xFu )
    {
      v38 = Pool2->AclRevision;
      if ( Pool2->AclRevision <= 4u )
      {
        if ( (unsigned __int8)v38 <= 2u )
          v38 = 2;
        if ( RtlValidAcl(Pool2) )
        {
          v39 = Pool2 + 1;
          for ( ii = 0; ii < Pool2->AceCount; ++ii )
          {
            if ( v39 >= (ACL *)((char *)Pool2 + Pool2->AclSize) )
              goto LABEL_95;
            v39 = (ACL *)((char *)v39 + v39->AclSize);
          }
          v41 = (ACL *)((char *)Pool2 + Pool2->AclSize);
          if ( v39 > v41 )
            v39 = 0LL;
          v42 = 4 * (v6[1] + 4);
          if ( v39 && (ACL *)((char *)v39 + v42) <= v41 )
          {
            v39->AclSize = v42;
            *(_WORD *)&v39->AclRevision = 0;
            *(_DWORD *)&v39->AceCount = 983551;
            RtlCopySid(4 * v6[1] + 8, &v39[1], v6);
            ++Pool2->AceCount;
            Pool2->AclRevision = v38;
          }
        }
      }
    }
LABEL_95:
    if ( *(_QWORD *)(a2 + 160) || *(_QWORD *)(a1 + 160) )
      RtlpAddKnownAce((int)Pool2, 2, 0, 983551, SeRestrictedSid, 0);
    *a3 = Pool2;
    return 0LL;
  }
  else
  {
    *a3 = 0LL;
    return 3221225626LL;
  }
}

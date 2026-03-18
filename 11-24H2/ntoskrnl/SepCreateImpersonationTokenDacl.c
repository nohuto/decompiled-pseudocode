/*
 * XREFs of SepCreateImpersonationTokenDacl @ 0x140855E70
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1408553C0 (NtOpenThreadTokenEx.c)
 * Callees:
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlCopySid @ 0x140910120 (RtlCopySid.c)
 *     RtlValidAcl @ 0x14091CB10 (RtlValidAcl.c)
 *     RtlpAddKnownAce @ 0x14091DA10 (RtlpAddKnownAce.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepCreateImpersonationTokenDacl(__int64 a1, __int64 a2, char **a3)
{
  unsigned __int8 *v5; // rdi
  unsigned __int8 *v6; // rsi
  unsigned __int8 *v7; // r15
  unsigned __int8 *v8; // r14
  unsigned int v9; // ebp
  char *Pool2; // rbx
  char v11; // bp
  char *v12; // rdx
  unsigned int i; // ecx
  char *v14; // r8
  unsigned __int16 v15; // cx
  char v16; // bp
  char *v17; // rdx
  unsigned int j; // ecx
  char *v19; // r8
  unsigned __int16 v20; // cx
  unsigned __int8 *v21; // r14
  char v22; // bp
  char *v23; // rdx
  unsigned int k; // ecx
  char *v25; // r8
  unsigned __int16 v26; // cx
  unsigned __int8 *v27; // r14
  char v28; // bp
  char *v29; // rdx
  unsigned int m; // ecx
  char *v31; // r8
  unsigned __int16 v32; // cx
  char v33; // bp
  char *v34; // rdx
  unsigned int n; // ecx
  char *v36; // r8
  unsigned __int16 v37; // cx
  char v38; // di
  char *v39; // rdx
  unsigned int ii; // ecx
  char *v41; // r8
  unsigned __int16 v42; // cx

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
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    if ( v9 - 8 <= 0xFFF4 )
    {
      memset_0(Pool2, 0, v9);
      *(_WORD *)Pool2 = 2;
      *((_DWORD *)Pool2 + 1) = 0;
      *((_WORD *)Pool2 + 1) = v9;
    }
    if ( (unsigned __int64)v7 > 0x7FFFFFFF0000LL && (*v7 & 0xF) == 1 && v7[1] <= 0xFu )
    {
      v11 = *Pool2;
      if ( (unsigned __int8)*Pool2 <= 4u )
      {
        if ( (unsigned __int8)v11 <= 2u )
          v11 = 2;
        if ( (unsigned __int8)RtlValidAcl(Pool2) )
        {
          v12 = Pool2 + 8;
          for ( i = 0; i < *((unsigned __int16 *)Pool2 + 2); ++i )
          {
            if ( v12 >= &Pool2[*((unsigned __int16 *)Pool2 + 1)] )
              goto LABEL_25;
            v12 += *((unsigned __int16 *)v12 + 1);
          }
          v14 = &Pool2[*((unsigned __int16 *)Pool2 + 1)];
          if ( v12 > v14 )
            v12 = 0LL;
          v15 = 4 * (v7[1] + 4);
          if ( v12 && &v12[v15] <= v14 )
          {
            *((_WORD *)v12 + 1) = v15;
            *(_WORD *)v12 = 0;
            *((_DWORD *)v12 + 1) = 983551;
            RtlCopySid(4 * v7[1] + 8, v12 + 8, v7);
            ++*((_WORD *)Pool2 + 2);
            *Pool2 = v11;
          }
        }
      }
    }
LABEL_25:
    if ( (unsigned __int64)v8 > 0x7FFFFFFF0000LL && (*v8 & 0xF) == 1 && v8[1] <= 0xFu )
    {
      v16 = *Pool2;
      if ( (unsigned __int8)*Pool2 <= 4u )
      {
        if ( (unsigned __int8)v16 <= 2u )
          v16 = 2;
        if ( (unsigned __int8)RtlValidAcl(Pool2) )
        {
          v17 = Pool2 + 8;
          for ( j = 0; j < *((unsigned __int16 *)Pool2 + 2); ++j )
          {
            if ( v17 >= &Pool2[*((unsigned __int16 *)Pool2 + 1)] )
              goto LABEL_39;
            v17 += *((unsigned __int16 *)v17 + 1);
          }
          v19 = &Pool2[*((unsigned __int16 *)Pool2 + 1)];
          if ( v17 > v19 )
            v17 = 0LL;
          v20 = 4 * (v8[1] + 4);
          if ( v17 && &v17[v20] <= v19 )
          {
            *((_WORD *)v17 + 1) = v20;
            *(_WORD *)v17 = 0;
            *((_DWORD *)v17 + 1) = 983551;
            RtlCopySid(4 * v8[1] + 8, v17 + 8, v8);
            ++*((_WORD *)Pool2 + 2);
            *Pool2 = v16;
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
      v22 = *Pool2;
      if ( (unsigned __int8)*Pool2 <= 4u )
      {
        if ( (unsigned __int8)v22 <= 2u )
          v22 = 2;
        if ( (unsigned __int8)RtlValidAcl(Pool2) )
        {
          v23 = Pool2 + 8;
          for ( k = 0; k < *((unsigned __int16 *)Pool2 + 2); ++k )
          {
            if ( v23 >= &Pool2[*((unsigned __int16 *)Pool2 + 1)] )
              goto LABEL_53;
            v23 += *((unsigned __int16 *)v23 + 1);
          }
          v25 = &Pool2[*((unsigned __int16 *)Pool2 + 1)];
          if ( v23 > v25 )
            v23 = 0LL;
          v26 = 4 * (v21[1] + 4);
          if ( v23 && &v23[v26] <= v25 )
          {
            *((_WORD *)v23 + 1) = v26;
            *(_WORD *)v23 = 0;
            *((_DWORD *)v23 + 1) = 983551;
            RtlCopySid(4 * v21[1] + 8, v23 + 8, v21);
            ++*((_WORD *)Pool2 + 2);
            *Pool2 = v22;
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
      v28 = *Pool2;
      if ( (unsigned __int8)*Pool2 <= 4u )
      {
        if ( (unsigned __int8)v28 <= 2u )
          v28 = 2;
        if ( (unsigned __int8)RtlValidAcl(Pool2) )
        {
          v29 = Pool2 + 8;
          for ( m = 0; m < *((unsigned __int16 *)Pool2 + 2); ++m )
          {
            if ( v29 >= &Pool2[*((unsigned __int16 *)Pool2 + 1)] )
              goto LABEL_67;
            v29 += *((unsigned __int16 *)v29 + 1);
          }
          v31 = &Pool2[*((unsigned __int16 *)Pool2 + 1)];
          if ( v29 > v31 )
            v29 = 0LL;
          v32 = 4 * (v27[1] + 4);
          if ( v29 && &v29[v32] <= v31 )
          {
            *((_WORD *)v29 + 1) = v32;
            *(_WORD *)v29 = 0;
            *((_DWORD *)v29 + 1) = 983551;
            RtlCopySid(4 * v27[1] + 8, v29 + 8, v27);
            ++*((_WORD *)Pool2 + 2);
            *Pool2 = v28;
          }
        }
      }
    }
LABEL_67:
    if ( (unsigned __int64)v5 >= 0x7FFFFFFF0001LL && (*v5 & 0xF) == 1 && v5[1] <= 0xFu )
    {
      v33 = *Pool2;
      if ( (unsigned __int8)*Pool2 <= 4u )
      {
        if ( (unsigned __int8)v33 <= 2u )
          v33 = 2;
        if ( (unsigned __int8)RtlValidAcl(Pool2) )
        {
          v34 = Pool2 + 8;
          for ( n = 0; n < *((unsigned __int16 *)Pool2 + 2); ++n )
          {
            if ( v34 >= &Pool2[*((unsigned __int16 *)Pool2 + 1)] )
              goto LABEL_81;
            v34 += *((unsigned __int16 *)v34 + 1);
          }
          v36 = &Pool2[*((unsigned __int16 *)Pool2 + 1)];
          if ( v34 > v36 )
            v34 = 0LL;
          v37 = 4 * (v5[1] + 4);
          if ( v34 && &v34[v37] <= v36 )
          {
            *((_WORD *)v34 + 1) = v37;
            *(_WORD *)v34 = 0;
            *((_DWORD *)v34 + 1) = 983551;
            RtlCopySid(4 * v5[1] + 8, v34 + 8, v5);
            ++*((_WORD *)Pool2 + 2);
            *Pool2 = v33;
          }
        }
      }
    }
LABEL_81:
    if ( (unsigned __int64)v6 >= 0x7FFFFFFF0001LL && (*v6 & 0xF) == 1 && v6[1] <= 0xFu )
    {
      v38 = *Pool2;
      if ( (unsigned __int8)*Pool2 <= 4u )
      {
        if ( (unsigned __int8)v38 <= 2u )
          v38 = 2;
        if ( (unsigned __int8)RtlValidAcl(Pool2) )
        {
          v39 = Pool2 + 8;
          for ( ii = 0; ii < *((unsigned __int16 *)Pool2 + 2); ++ii )
          {
            if ( v39 >= &Pool2[*((unsigned __int16 *)Pool2 + 1)] )
              goto LABEL_95;
            v39 += *((unsigned __int16 *)v39 + 1);
          }
          v41 = &Pool2[*((unsigned __int16 *)Pool2 + 1)];
          if ( v39 > v41 )
            v39 = 0LL;
          v42 = 4 * (v6[1] + 4);
          if ( v39 && &v39[v42] <= v41 )
          {
            *((_WORD *)v39 + 1) = v42;
            *(_WORD *)v39 = 0;
            *((_DWORD *)v39 + 1) = 983551;
            RtlCopySid(4 * v6[1] + 8, v39 + 8, v6);
            ++*((_WORD *)Pool2 + 2);
            *Pool2 = v38;
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

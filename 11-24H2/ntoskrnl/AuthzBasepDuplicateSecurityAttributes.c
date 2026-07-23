/*
 * XREFs of AuthzBasepDuplicateSecurityAttributes @ 0x1403BA310
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepGetAnonymousToken @ 0x1403B977C (SepGetAnonymousToken.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1404F4AFC (SepValidateAndCopyGlobalEntry.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     SepDuplicateClaimAttributes @ 0x140A565F0 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x1403BAA30 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1403BAD50 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140697D2C (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDuplicateSecurityAttributes(__int64 a1, __int64 a2, char a3)
{
  __int64 *v3; // r14
  __int64 *v4; // rax
  char v5; // bp
  int v7; // r15d
  ULONG_PTR v8; // rcx
  char *Pool2; // rax
  char *v10; // rdi
  unsigned int v11; // eax
  const void *v12; // rdx
  unsigned __int64 v13; // rbx
  int v14; // ecx
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  __int64 *i; // rsi
  ULONG_PTR v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  void **v21; // rcx
  _QWORD *v22; // rdx
  _QWORD **v23; // rdi
  _QWORD *v24; // rcx
  char *v25; // rbx
  char v26; // r14
  __int64 v27; // rdx
  _QWORD *v28; // rax
  int v29; // ecx
  char **v30; // rcx
  _QWORD *v31; // rsi
  _QWORD *v32; // rcx
  _QWORD *v33; // r8
  int v34; // edx
  int v35; // eax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v39; // rcx
  void **v40; // rax
  void **v41; // rsi
  _QWORD *v42; // rcx
  _QWORD *v43; // rdx
  void **v44; // rax
  __int64 *v45; // rbp
  _WORD *v46; // rsi
  ULONG_PTR v47; // rcx
  char *v48; // rax
  char *v49; // rbx
  const void *v50; // rdx
  unsigned int v51; // eax
  unsigned __int64 v52; // rsi
  void **v53; // rcx
  _QWORD *v54; // rdx
  char *v55; // r14
  _QWORD **v56; // r8
  void **v57; // rdx
  __int64 *v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rbx
  void **v61; // rcx
  _QWORD *v62; // rdx
  void **v63; // rcx
  __int64 v64; // r9
  _QWORD *v65; // rax
  __int64 *v66; // rsi
  __int64 SecurityAttributeValue; // rax
  __int64 v68; // rbx
  void *v69; // rcx
  unsigned int v70; // eax
  void **v71; // rcx
  _QWORD *v72; // rdx
  int v73; // eax
  char *v74; // r11
  PVOID v75; // r11
  __int64 *v77; // [rsp+78h] [rbp+20h]

  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a1 + 8);
  v77 = (__int64 *)(a1 + 8);
  v5 = a3;
  v7 = 0;
  while ( v3 != v4 )
  {
    if ( !v5 || (*((_DWORD *)v3 + 13) & 1) == 0 )
    {
      v8 = 256LL;
      if ( KeGetCurrentIrql() >= 2u )
        v8 = 64LL;
      Pool2 = (char *)ExAllocatePool2(v8, *((unsigned __int16 *)v3 + 16) + 112LL, 0x74416553u);
      v10 = Pool2;
      if ( !Pool2 )
      {
LABEL_24:
        v7 = -1073741670;
        break;
      }
      memset_0(Pool2, 0, 0x70uLL);
      *((_WORD *)v10 + 17) = *((_WORD *)v3 + 16);
      *((_QWORD *)v10 + 5) = v10 + 112;
      v11 = *((unsigned __int16 *)v10 + 17);
      v12 = (const void *)v3[5];
      if ( *((_WORD *)v3 + 16) <= (unsigned __int16)v11 )
        v11 = *((unsigned __int16 *)v3 + 16);
      v13 = v11;
      *((_WORD *)v10 + 16) = v11;
      memmove(v10 + 112, v12, v11);
      if ( (unsigned __int64)*((unsigned __int16 *)v10 + 16) + 2 <= *((unsigned __int16 *)v10 + 17) )
        *(_WORD *)&v10[2 * (v13 >> 1) + 112] = 0;
      *((_QWORD *)v10 + 10) = v10 + 72;
      *((_QWORD *)v10 + 9) = v10 + 72;
      *((_QWORD *)v10 + 13) = v10 + 96;
      *((_QWORD *)v10 + 12) = v10 + 96;
      v14 = *((_DWORD *)v3 + 13);
      *((_DWORD *)v10 + 13) = v14;
      if ( v5 && (*((_DWORD *)v3 + 13) & 0x80u) != 0 )
        *((_DWORD *)v10 + 13) = v14 & 0xFFFFFF7E | 1;
      *((_WORD *)v10 + 24) = *((_WORD *)v3 + 24);
      if ( (*((_DWORD *)v10 + 14) & 2) == 0 )
      {
        v15 = *(_QWORD **)(a2 + 40);
        v16 = v10 + 16;
        if ( *v15 != a2 + 32 )
LABEL_23:
          __fastfail(3u);
        *v16 = a2 + 32;
        *((_QWORD *)v10 + 3) = v15;
        *v15 = v16;
        *(_QWORD *)(a2 + 40) = v16;
        *((_DWORD *)v10 + 14) |= 2u;
        ++*(_DWORD *)(a2 + 24);
      }
      if ( *((_WORD *)v3 + 24) == 6 )
      {
LABEL_16:
        for ( i = (__int64 *)v3[9]; i != v3 + 9; i = (__int64 *)*i )
        {
          v18 = 256LL;
          if ( KeGetCurrentIrql() >= 2u )
            v18 = 64LL;
          v19 = (_QWORD *)ExAllocatePool2(v18, 0x40uLL, 0x74416553u);
          v20 = v19;
          if ( !v19 )
            goto LABEL_24;
          memset_0(v19, 0, 0x40uLL);
          v20[5] = i[5];
          if ( (v20[4] & 2) == 0 )
          {
            v21 = (void **)*((_QWORD *)v10 + 13);
            v22 = v20 + 2;
            if ( *v21 != v10 + 96 )
              goto LABEL_23;
            *v22 = v10 + 96;
            v20[3] = v21;
            *v21 = v22;
            *((_QWORD *)v10 + 13) = v22;
            *((_DWORD *)v20 + 8) |= 2u;
            ++*((_DWORD *)v10 + 22);
          }
        }
      }
      else
      {
        switch ( *((_WORD *)v3 + 24) )
        {
          case 1:
          case 2:
            goto LABEL_16;
          case 3:
            v45 = (__int64 *)v3[9];
            while ( 2 )
            {
              if ( v45 == v3 + 9 )
                goto LABEL_48;
              v46 = v45 + 5;
              v47 = 256LL;
              if ( KeGetCurrentIrql() >= 2u )
                v47 = 64LL;
              v48 = (char *)ExAllocatePool2(v47, *((unsigned __int16 *)v45 + 20) + 64LL, 0x74416553u);
              v49 = v48;
              if ( !v48 )
                goto LABEL_24;
              memset_0(v48, 0, 0x40uLL);
              *((_WORD *)v49 + 20) = 0;
              *((_WORD *)v49 + 21) = *v46;
              *((_QWORD *)v49 + 6) = v49 + 64;
              if ( v45 != (__int64 *)-40LL )
              {
                v50 = (const void *)v45[6];
                v51 = *((unsigned __int16 *)v49 + 21);
                if ( *v46 <= (unsigned __int16)v51 )
                  v51 = (unsigned __int16)*v46;
                v52 = v51;
                *((_WORD *)v49 + 20) = v51;
                memmove(v49 + 64, v50, v51);
                if ( (unsigned __int64)*((unsigned __int16 *)v49 + 20) + 2 <= *((unsigned __int16 *)v49 + 21) )
                  *(_WORD *)&v49[2 * (v52 >> 1) + 64] = 0;
              }
              if ( (*((_DWORD *)v49 + 8) & 2) != 0 )
                goto LABEL_78;
              v53 = (void **)*((_QWORD *)v10 + 13);
              v54 = v49 + 16;
              if ( *v53 == v10 + 96 )
              {
                *v54 = v10 + 96;
                *((_QWORD *)v49 + 3) = v53;
                *v53 = v54;
                *((_QWORD *)v10 + 13) = v54;
                *((_DWORD *)v49 + 8) |= 2u;
                ++*((_DWORD *)v10 + 22);
LABEL_78:
                v45 = (__int64 *)*v45;
                continue;
              }
              goto LABEL_23;
            }
          case 4:
            v66 = (__int64 *)v3[9];
            while ( 2 )
            {
              if ( v66 == v3 + 9 )
                goto LABEL_48;
              SecurityAttributeValue = AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v66 + 24));
              v68 = SecurityAttributeValue;
              if ( !SecurityAttributeValue )
                goto LABEL_24;
              v69 = (void *)(SecurityAttributeValue + 64);
              *(_QWORD *)(SecurityAttributeValue + 40) = v66[5];
              v70 = *((unsigned __int16 *)v66 + 24);
              *(_WORD *)(v68 + 48) = v70;
              *(_QWORD *)(v68 + 56) = v68 + 64;
              memmove(v69, (const void *)v66[7], v70);
              if ( (*(_DWORD *)(v68 + 32) & 2) != 0 )
                goto LABEL_110;
              v71 = (void **)*((_QWORD *)v10 + 13);
              v72 = (_QWORD *)(v68 + 16);
              if ( *v71 == v10 + 96 )
              {
                *v72 = v10 + 96;
                *(_QWORD *)(v68 + 24) = v71;
                *v71 = v72;
                *((_QWORD *)v10 + 13) = v72;
                *(_DWORD *)(v68 + 32) |= 2u;
                ++*((_DWORD *)v10 + 22);
LABEL_110:
                v66 = (__int64 *)*v66;
                continue;
              }
              goto LABEL_23;
            }
          case 5:
          case 0x10:
            v58 = (__int64 *)v3[9];
            break;
          default:
            v7 = -1073741811;
            goto LABEL_25;
        }
        while ( v58 != v3 + 9 )
        {
          v59 = AuthzBasepAllocateSecurityAttributeValue(*((unsigned int *)v58 + 12));
          v60 = v59;
          if ( !v59 )
            goto LABEL_24;
          *(_QWORD *)(v59 + 40) = v59 + 64;
          *(_DWORD *)(v59 + 48) = *((_DWORD *)v58 + 12);
          memmove((void *)(v59 + 64), (const void *)v58[5], *((unsigned int *)v58 + 12));
          if ( (*(_DWORD *)(v60 + 32) & 2) == 0 )
          {
            v61 = (void **)*((_QWORD *)v10 + 13);
            v62 = (_QWORD *)(v60 + 16);
            if ( *v61 != v10 + 96 )
              goto LABEL_23;
            *v62 = v10 + 96;
            *(_QWORD *)(v60 + 24) = v61;
            *v61 = v62;
            *((_QWORD *)v10 + 13) = v62;
            *(_DWORD *)(v60 + 32) |= 2u;
            ++*((_DWORD *)v10 + 22);
          }
          v58 = (__int64 *)*v58;
        }
      }
LABEL_48:
      v5 = a3;
    }
    v3 = (__int64 *)*v3;
    v4 = v77;
  }
LABEL_25:
  v23 = (_QWORD **)(a2 + 32);
  while ( 1 )
  {
    v24 = *v23;
    if ( *v23 == v23 )
      return (unsigned int)v7;
    v25 = (char *)(v24 - 2);
    if ( v7 < 0 )
    {
      v26 = AuthzBasepRollbackSecurityAttributeChanges(a2, v24 - 2);
    }
    else
    {
      v26 = 0;
      if ( (*((_DWORD *)v25 + 14) & 2) != 0 )
      {
        v27 = *v24;
        if ( *(_QWORD **)(*v24 + 8LL) != v24 )
          goto LABEL_23;
        v28 = (_QWORD *)v24[1];
        if ( (_QWORD *)*v28 != v24 )
          goto LABEL_23;
        *v28 = v27;
        *(_QWORD *)(v27 + 8) = v28;
        *((_DWORD *)v25 + 14) &= ~2u;
        if ( a2 )
          --*(_DWORD *)(a2 + 24);
      }
      v29 = *((_DWORD *)v25 + 14) & 1;
      if ( (*((_DWORD *)v25 + 14) & 4) != 0 )
      {
        if ( v29 )
        {
          v39 = *(_QWORD **)v25;
          if ( *(char **)(*(_QWORD *)v25 + 8LL) != v25 )
            goto LABEL_23;
          v40 = (void **)*((_QWORD *)v25 + 1);
          if ( *v40 != v25 )
            goto LABEL_23;
          *v40 = v39;
          v39[1] = v40;
          *((_DWORD *)v25 + 14) &= ~1u;
          if ( a2 )
            --*(_DWORD *)a2;
        }
        v41 = (void **)(v25 + 72);
        while ( 1 )
        {
          v42 = *v41;
          if ( *v41 == v41 )
            break;
          if ( (v42[4] & 2) != 0 )
          {
            v56 = (_QWORD **)v42[2];
            if ( v56[1] != v42 + 2 )
              goto LABEL_23;
            v57 = (void **)v42[3];
            if ( *v57 != v42 + 2 )
              goto LABEL_23;
            *v57 = v56;
            v56[1] = v57;
            *((_DWORD *)v42 + 8) &= ~2u;
            --*((_DWORD *)v25 + 22);
          }
          if ( (v42[4] & 1) != 0 )
          {
            v43 = (_QWORD *)*v42;
            if ( *(_QWORD **)(*v42 + 8LL) != v42 )
              goto LABEL_23;
            v44 = (void **)v42[1];
            if ( *v44 != v42 )
              goto LABEL_23;
            *v44 = v43;
            v43[1] = v44;
            *((_DWORD *)v42 + 8) &= ~1u;
            --*((_DWORD *)v25 + 15);
            if ( (v42[4] & 4) != 0 )
              --*((_DWORD *)v25 + 16);
          }
          ExFreePoolWithTag(v42, 0);
        }
        v55 = (char *)*((_QWORD *)v25 + 12);
        while ( v55 != v25 + 96 )
        {
          v73 = *((_DWORD *)v55 + 4);
          v74 = v55 - 16;
          v55 = *(char **)v55;
          if ( (v73 & 1) == 0 )
          {
            AuthzBasepRemoveSecurityAttributeValueFromLists(v25, v74, 0LL);
            ExFreePoolWithTag(v75, 0);
          }
        }
        v26 = 1;
      }
      else
      {
        if ( !v29 )
        {
          v30 = *(char ***)(a2 + 16);
          if ( *v30 != (char *)(a2 + 8) )
            goto LABEL_23;
          *(_QWORD *)v25 = a2 + 8;
          *((_QWORD *)v25 + 1) = v30;
          *v30 = v25;
          *(_QWORD *)(a2 + 16) = v25;
          *((_DWORD *)v25 + 14) |= 1u;
          ++*(_DWORD *)a2;
        }
        v31 = v25 + 96;
        while ( 1 )
        {
          v32 = (_QWORD *)*v31;
          if ( (_QWORD *)*v31 == v31 )
            break;
          v33 = v32 - 2;
          v34 = v32[2] & 4;
          if ( (v32[2] & 2) != 0 )
          {
            v64 = *v32;
            if ( *(_QWORD **)(*v32 + 8LL) != v32 )
              goto LABEL_23;
            v65 = (_QWORD *)v32[1];
            if ( (_QWORD *)*v65 != v32 )
              goto LABEL_23;
            *v65 = v64;
            *(_QWORD *)(v64 + 8) = v65;
            *((_DWORD *)v33 + 8) &= ~2u;
            --*((_DWORD *)v25 + 22);
          }
          v35 = v33[4] & 1;
          if ( v34 )
          {
            if ( v35 )
            {
              v36 = *v33;
              if ( *(_QWORD **)(*v33 + 8LL) != v33 )
                goto LABEL_23;
              v37 = (_QWORD *)v33[1];
              if ( (_QWORD *)*v37 != v33 )
                goto LABEL_23;
              *v37 = v36;
              *(_QWORD *)(v36 + 8) = v37;
              *((_DWORD *)v33 + 8) &= ~1u;
              --*((_DWORD *)v25 + 15);
              if ( (v33[4] & 4) != 0 )
                --*((_DWORD *)v25 + 16);
            }
            ExFreePoolWithTag(v33, 0);
          }
          else if ( !v35 )
          {
            v63 = (void **)*((_QWORD *)v25 + 10);
            if ( *v63 != v25 + 72 )
              goto LABEL_23;
            *v33 = v25 + 72;
            v33[1] = v63;
            *v63 = v33;
            *((_QWORD *)v25 + 10) = v33;
            *((_DWORD *)v33 + 8) |= 1u;
            ++*((_DWORD *)v25 + 15);
          }
        }
      }
    }
    if ( v26 )
      ExFreePoolWithTag(v25, 0);
  }
}

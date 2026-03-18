/*
 * XREFs of AuthzBasepDuplicateSecurityAttributes @ 0x140290A60
 * Callers:
 *     SepGetAnonymousToken @ 0x1402905D8 (SepGetAnonymousToken.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14035FF40 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1404F4924 (SepValidateAndCopyGlobalEntry.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140997EFC (SepFilterToken.c)
 *     SepDuplicateClaimAttributes @ 0x140999D24 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x140291150 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x140291470 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x14068B90C (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDuplicateSecurityAttributes(__int64 a1, __int64 a2, char a3)
{
  __int64 *v3; // r14
  __int64 *v4; // rax
  char v5; // r15
  int v7; // ebp
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
  char v26; // r15
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
  __int64 *v45; // r15
  _WORD *v46; // rsi
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v48; // rcx
  char *v49; // rax
  char *v50; // rbx
  const void *v51; // rdx
  unsigned int v52; // eax
  unsigned __int64 v53; // rsi
  void **v54; // rcx
  _QWORD *v55; // rdx
  char *v56; // r15
  _QWORD **v57; // r8
  void **v58; // rdx
  void **v59; // rcx
  __int64 v60; // r9
  _QWORD *v61; // rax
  __int64 *v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rbx
  void **v65; // rcx
  _QWORD *v66; // rdx
  __int64 *v67; // rsi
  __int64 SecurityAttributeValue; // rax
  __int64 v69; // rbx
  void *v70; // rcx
  unsigned int v71; // eax
  void **v72; // rcx
  _QWORD *v73; // rdx
  int v74; // eax
  char *v75; // r11
  PVOID v76; // r11
  __int64 *v78; // [rsp+78h] [rbp+20h]

  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a1 + 8);
  v78 = (__int64 *)(a1 + 8);
  v5 = a3;
  v7 = 0;
  while ( v3 != v4 )
  {
    if ( !v5 || (*((_DWORD *)v3 + 13) & 1) == 0 )
    {
      v8 = 64LL;
      if ( KeGetCurrentIrql() < 2u )
        v8 = 256LL;
      Pool2 = (char *)ExAllocatePool2(v8);
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
          v18 = 64LL;
          if ( KeGetCurrentIrql() < 2u )
            v18 = 256LL;
          v19 = (_QWORD *)ExAllocatePool2(v18);
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
              CurrentIrql = KeGetCurrentIrql();
              v48 = 64LL;
              if ( CurrentIrql < 2u )
                v48 = 256LL;
              v49 = (char *)ExAllocatePool2(v48);
              v50 = v49;
              if ( !v49 )
                goto LABEL_24;
              memset_0(v49, 0, 0x40uLL);
              *((_WORD *)v50 + 20) = 0;
              *((_WORD *)v50 + 21) = *v46;
              *((_QWORD *)v50 + 6) = v50 + 64;
              if ( v45 != (__int64 *)-40LL )
              {
                v51 = (const void *)v45[6];
                v52 = *((unsigned __int16 *)v50 + 21);
                if ( *v46 <= (unsigned __int16)v52 )
                  v52 = (unsigned __int16)*v46;
                v53 = v52;
                *((_WORD *)v50 + 20) = v52;
                memmove(v50 + 64, v51, v52);
                if ( (unsigned __int64)*((unsigned __int16 *)v50 + 20) + 2 <= *((unsigned __int16 *)v50 + 21) )
                  *(_WORD *)&v50[2 * (v53 >> 1) + 64] = 0;
              }
              if ( (*((_DWORD *)v50 + 8) & 2) != 0 )
                goto LABEL_78;
              v54 = (void **)*((_QWORD *)v10 + 13);
              v55 = v50 + 16;
              if ( *v54 == v10 + 96 )
              {
                *v55 = v10 + 96;
                *((_QWORD *)v50 + 3) = v54;
                *v54 = v55;
                *((_QWORD *)v10 + 13) = v55;
                *((_DWORD *)v50 + 8) |= 2u;
                ++*((_DWORD *)v10 + 22);
LABEL_78:
                v45 = (__int64 *)*v45;
                continue;
              }
              goto LABEL_23;
            }
          case 4:
            v67 = (__int64 *)v3[9];
            while ( 2 )
            {
              if ( v67 == v3 + 9 )
                goto LABEL_48;
              SecurityAttributeValue = AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v67 + 24));
              v69 = SecurityAttributeValue;
              if ( !SecurityAttributeValue )
                goto LABEL_24;
              v70 = (void *)(SecurityAttributeValue + 64);
              *(_QWORD *)(SecurityAttributeValue + 40) = v67[5];
              v71 = *((unsigned __int16 *)v67 + 24);
              *(_WORD *)(v69 + 48) = v71;
              *(_QWORD *)(v69 + 56) = v69 + 64;
              memmove(v70, (const void *)v67[7], v71);
              if ( (*(_DWORD *)(v69 + 32) & 2) != 0 )
                goto LABEL_110;
              v72 = (void **)*((_QWORD *)v10 + 13);
              v73 = (_QWORD *)(v69 + 16);
              if ( *v72 == v10 + 96 )
              {
                *v73 = v10 + 96;
                *(_QWORD *)(v69 + 24) = v72;
                *v72 = v73;
                *((_QWORD *)v10 + 13) = v73;
                *(_DWORD *)(v69 + 32) |= 2u;
                ++*((_DWORD *)v10 + 22);
LABEL_110:
                v67 = (__int64 *)*v67;
                continue;
              }
              goto LABEL_23;
            }
          case 5:
          case 0x10:
            v62 = (__int64 *)v3[9];
            break;
          default:
            v7 = -1073741811;
            goto LABEL_25;
        }
        while ( v62 != v3 + 9 )
        {
          v63 = AuthzBasepAllocateSecurityAttributeValue(*((unsigned int *)v62 + 12));
          v64 = v63;
          if ( !v63 )
            goto LABEL_24;
          *(_QWORD *)(v63 + 40) = v63 + 64;
          *(_DWORD *)(v63 + 48) = *((_DWORD *)v62 + 12);
          memmove((void *)(v63 + 64), (const void *)v62[5], *((unsigned int *)v62 + 12));
          if ( (*(_DWORD *)(v64 + 32) & 2) == 0 )
          {
            v65 = (void **)*((_QWORD *)v10 + 13);
            v66 = (_QWORD *)(v64 + 16);
            if ( *v65 != v10 + 96 )
              goto LABEL_23;
            *v66 = v10 + 96;
            *(_QWORD *)(v64 + 24) = v65;
            *v65 = v66;
            *((_QWORD *)v10 + 13) = v66;
            *(_DWORD *)(v64 + 32) |= 2u;
            ++*((_DWORD *)v10 + 22);
          }
          v62 = (__int64 *)*v62;
        }
      }
LABEL_48:
      v5 = a3;
    }
    v3 = (__int64 *)*v3;
    v4 = v78;
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
            v57 = (_QWORD **)v42[2];
            if ( v57[1] != v42 + 2 )
              goto LABEL_23;
            v58 = (void **)v42[3];
            if ( *v58 != v42 + 2 )
              goto LABEL_23;
            *v58 = v57;
            v57[1] = v58;
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
        v56 = (char *)*((_QWORD *)v25 + 12);
        while ( v56 != v25 + 96 )
        {
          v74 = *((_DWORD *)v56 + 4);
          v75 = v56 - 16;
          v56 = *(char **)v56;
          if ( (v74 & 1) == 0 )
          {
            AuthzBasepRemoveSecurityAttributeValueFromLists(v25, v75, 0LL);
            ExFreePoolWithTag(v76, 0);
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
            v60 = *v32;
            if ( *(_QWORD **)(*v32 + 8LL) != v32 )
              goto LABEL_23;
            v61 = (_QWORD *)v32[1];
            if ( (_QWORD *)*v61 != v32 )
              goto LABEL_23;
            *v61 = v60;
            *(_QWORD *)(v60 + 8) = v61;
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
            v59 = (void **)*((_QWORD *)v25 + 10);
            if ( *v59 != v25 + 72 )
              goto LABEL_23;
            *v33 = v25 + 72;
            v33[1] = v59;
            *v59 = v33;
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

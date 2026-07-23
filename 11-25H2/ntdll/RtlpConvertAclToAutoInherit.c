/*
 * XREFs of RtlpConvertAclToAutoInherit @ 0x18013B270
 * Callers:
 *     RtlpConvertToAutoInheritSecurityObject @ 0x18013BAB0 (RtlpConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlValidAcl @ 0x18005FD10 (RtlValidAcl.c)
 *     RtlpInheritAcl @ 0x1800638E0 (RtlpInheritAcl.c)
 *     RtlCreateAcl @ 0x180065F00 (RtlCreateAcl.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpCompareAces @ 0x180084C50 (RtlpCompareAces.c)
 *     RtlInitializeSid @ 0x1800CEE70 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpConvertAclToAutoInherit(
        PACL Acl,
        ACL *Src,
        __int64 a3,
        unsigned __int8 a4,
        void *a5,
        void *a6,
        _DWORD *a7,
        PVOID *a8,
        _DWORD *a9)
{
  _DWORD *v10; // r12
  PVOID *v11; // r15
  _DWORD *v13; // rdi
  void *ProcessHeap; // r14
  NTSTATUS v15; // ebx
  int v16; // eax
  int *v17; // rax
  int v18; // r11d
  int v19; // esi
  ACL *v20; // rbx
  int *v21; // r8
  int v22; // ecx
  int v23; // edx
  int v24; // edx
  char v25; // cl
  int v26; // r10d
  int v27; // eax
  int v28; // eax
  unsigned __int16 *v29; // rsi
  ACL *v30; // r11
  int v31; // r10d
  char *v32; // r14
  int v33; // ecx
  int v34; // edx
  int v35; // edx
  int v36; // eax
  char v37; // cl
  ACL *v38; // r15
  int v39; // r8d
  int v40; // r9d
  int v41; // ebx
  int v42; // edi
  _DWORD *v43; // rsi
  int v44; // r12d
  int AceCount; // eax
  __int64 v46; // rax
  ACL *v47; // rcx
  _DWORD *v48; // r8
  char v49; // dl
  char v50; // r11
  int v51; // esi
  int i; // r10d
  __int64 v53; // rax
  __int64 AclRevision; // rax
  int v55; // eax
  unsigned __int16 *v56; // rbx
  ACL *v57; // rax
  PVOID v58; // r8
  ULONG v60; // r8d
  ACL *v61; // rsi
  _BYTE *v62; // r14
  int v63; // ecx
  ACL **v64; // rdi
  _DWORD *v65; // r15
  int v66; // ebx
  _BYTE *v67; // rdx
  int v68; // ecx
  int j; // ebx
  int v70; // eax
  int v71; // eax
  _WORD *v72; // rsi
  PVOID Heap; // rax
  char v74; // [rsp+90h] [rbp-80h] BYREF
  unsigned __int8 v75; // [rsp+91h] [rbp-7Fh]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+94h] [rbp-7Ch] BYREF
  _DWORD v77[3]; // [rsp+9Ch] [rbp-74h] BYREF
  ACL **v78; // [rsp+A8h] [rbp-68h]
  PVOID HeapHandle; // [rsp+B0h] [rbp-60h]
  PVOID BaseAddress; // [rsp+B8h] [rbp-58h]
  PVOID v81; // [rsp+C0h] [rbp-50h] BYREF
  int v82; // [rsp+C8h] [rbp-48h]
  int v83; // [rsp+CCh] [rbp-44h]
  PVOID v84; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v85; // [rsp+D8h] [rbp-38h] BYREF
  int v86; // [rsp+E0h] [rbp-30h]
  int v87; // [rsp+E4h] [rbp-2Ch]
  _DWORD *v88; // [rsp+E8h] [rbp-28h]
  void *v89; // [rsp+F0h] [rbp-20h]
  void *v90; // [rsp+F8h] [rbp-18h]
  _DWORD *v91; // [rsp+100h] [rbp-10h]
  PACL v92; // [rsp+108h] [rbp-8h]
  char v93[8]; // [rsp+110h] [rbp+0h] BYREF
  int v94; // [rsp+118h] [rbp+8h]
  char Sid[8]; // [rsp+140h] [rbp+30h] BYREF
  int v96; // [rsp+148h] [rbp+38h]

  v10 = a7;
  v11 = a8;
  v13 = a9;
  v90 = a5;
  v85 = a3;
  v89 = a6;
  v81 = 0LL;
  v84 = 0LL;
  v74 = 0;
  v77[0] = 0;
  BaseAddress = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v92 = Acl;
  v75 = a4;
  v91 = a7;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  v78 = (ACL **)a8;
  v88 = a9;
  *(_WORD *)&IdentifierAuthority.Value[4] = 768;
  v15 = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v96 = 0;
  v15 = RtlInitializeSid(v93, &IdentifierAuthority, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  *a9 = 1024;
  *a8 = 0LL;
  v94 = 1;
  if ( Acl && !RtlValidAcl(Acl) || !RtlValidAcl(Src) )
    return (unsigned int)-1073741705;
  v16 = RtlpInheritAcl(
          (__int64)Acl,
          0,
          0,
          v75,
          1,
          0,
          (__int64)Sid,
          (__int64)v93,
          (__int64)Sid,
          (__int64)v93,
          (__int64)a7,
          2,
          (unsigned __int64)&v85 & -(__int64)(v85 != 0),
          v85 != 0,
          &v81,
          &v74,
          v77);
  v15 = v16;
  if ( v16 == -2147483637 )
  {
    *a9 |= 0x1000u;
LABEL_110:
    v15 = 0;
LABEL_111:
    if ( (*v13 & 0x1000) != 0 )
    {
      if ( *v11 )
      {
        RtlFreeHeap(ProcessHeap, 0, *v11);
        *v11 = 0LL;
      }
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, Src->AclSize);
      *v11 = Heap;
      if ( Heap )
        memmove(Heap, Src, Src->AclSize);
      else
        v15 = -1073741801;
    }
    v58 = BaseAddress;
    if ( BaseAddress )
LABEL_79:
      RtlFreeHeap(ProcessHeap, 0, v58);
    goto LABEL_80;
  }
  if ( v16 >= 0 )
  {
    v17 = (int *)RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 24LL * Src->AceCount);
    v18 = 0;
    BaseAddress = v17;
    if ( v17 )
    {
      v19 = 0;
      v20 = Src + 1;
      v21 = v17 + 1;
      while ( v19 < Src->AceCount )
      {
        if ( v20->AclRevision > 8u || v20->AclRevision == 4 )
          goto LABEL_34;
        v22 = *(_DWORD *)&v20->AceCount;
        if ( v22 < 0 )
          v22 |= *a7;
        if ( (v22 & 0x40000000) != 0 )
          v22 |= a7[1];
        if ( (v22 & 0x20000000) != 0 )
          v22 |= a7[2];
        if ( (v22 & 0x10000000) != 0 )
          v22 |= a7[3];
        if ( (unsigned __int8)(v20->AclRevision - 2) <= 2u || v20->AclRevision >= 7u )
          v23 = a7[3] | 0x1000000;
        else
          v23 = a7[3];
        v24 = v22 & v23 & 0xFFFFFFF;
        v25 = v20->Sbz1 & 3 | ~v20->Sbz1 & 8;
        if ( (v20->Sbz1 & 2) != 0 )
        {
          v26 = v24;
          v18 = v24;
        }
        else
        {
          v26 = 0;
        }
        *(v21 - 1) = v18;
        v18 = 0;
        v21[2] = v26;
        v27 = v24;
        if ( (v25 & 1) == 0 )
          v27 = 0;
        *v21 = v27;
        v21[3] = v27;
        ++v19;
        v28 = (v25 & 8) != 0 ? v24 : 0;
        v21[1] = v28;
        v21[4] = v28;
        v21 += 6;
        v20 = (ACL *)((char *)v20 + v20->AclSize);
      }
      v29 = (unsigned __int16 *)v81;
      v30 = Src + 1;
      v31 = 0;
      v83 = 0;
      v32 = (char *)v81 + 8;
      while ( v31 < v29[2] )
      {
        if ( (unsigned __int8)*v32 > 8u || *v32 == 4 )
        {
LABEL_62:
          *v13 |= 0x1000u;
          v15 = 0;
          v11 = (PVOID *)v78;
          ProcessHeap = HeapHandle;
          goto LABEL_111;
        }
        v33 = *((_DWORD *)v32 + 1);
        if ( v33 < 0 )
          v33 |= *v10;
        if ( (v33 & 0x40000000) != 0 )
          v33 |= v10[1];
        if ( (v33 & 0x20000000) != 0 )
          v33 |= v10[2];
        if ( (v33 & 0x10000000) != 0 )
          v33 |= v10[3];
        if ( (unsigned __int8)(*v32 - 2) <= 2u || (unsigned __int8)*v32 >= 7u )
          v34 = v10[3] | 0x1000000;
        else
          v34 = v10[3];
        v35 = v33 & v34 & 0xFFFFFFF;
        if ( v35 )
        {
          v36 = v32[1] & 3;
          v37 = v36 | ~v32[1] & 8;
          if ( v36 | ~v32[1] & 8 )
          {
            v82 = 0;
            v38 = v30;
            v39 = (v37 & 2) != 0 ? v35 : 0;
            v87 = v39;
            v40 = (v37 & 1) != 0 ? v35 : 0;
            *(_DWORD *)IdentifierAuthority.Value = v40;
            v41 = (v37 & 8) != 0 ? v35 : 0;
            v86 = v41;
            if ( Src->AceCount )
            {
              v42 = (v37 & 2) != 0 ? v35 : 0;
              v43 = (char *)BaseAddress + 20;
              v44 = (v37 & 1) != 0 ? v35 : 0;
              do
              {
                if ( RtlpCompareAces((unsigned __int8 *)v32, (unsigned __int8 *)v38, v90, v89) )
                {
                  v41 &= ~*(v43 - 3);
                  v42 &= ~*(v43 - 5);
                  v44 &= ~*(v43 - 4);
                  *v43 &= ~v86;
                  *(v43 - 2) &= ~v87;
                  *(v43 - 1) &= ~*(_DWORD *)IdentifierAuthority.Value;
                }
                v43 += 6;
                v38 = (ACL *)((char *)v38 + v38->AclSize);
                AceCount = Src->AceCount;
                ++v82;
              }
              while ( v82 < AceCount );
              v31 = v83;
              v30 = Src + 1;
              v29 = (unsigned __int16 *)v81;
              v77[2] = v44;
              v40 = v44;
              v10 = v91;
              v77[1] = v42;
              v39 = v42;
              v13 = v88;
            }
            if ( v39 | v40 | v41 )
            {
              *v13 |= 0x1000u;
              v11 = (PVOID *)v78;
              goto LABEL_109;
            }
          }
        }
        v46 = *((unsigned __int16 *)v32 + 1);
        v83 = ++v31;
        v32 += v46;
      }
      v47 = Src + 1;
      v48 = (char *)BaseAddress + 16;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      for ( i = 0; i < Src->AceCount; ++i )
      {
        if ( *v48 | v48[1] | *(v48 - 1) )
        {
          v51 += v47->AclSize;
          AclRevision = v47->AclRevision;
          if ( !RtlBaseAceType[AclRevision] && v50 || RtlBaseAceType[AclRevision] == 1 && v49 )
            goto LABEL_62;
        }
        else
        {
          v53 = v47->AclRevision;
          if ( RtlBaseAceType[v53] )
          {
            v13 = v88;
            if ( RtlBaseAceType[v53] == 1 )
              v50 = 1;
          }
          else
          {
            v49 = 1;
          }
        }
        v48 += 6;
        v47 = (ACL *)((char *)v47 + v47->AclSize);
      }
      v55 = RtlpInheritAcl(
              (__int64)v92,
              0,
              0,
              v75,
              1,
              0,
              (__int64)v90,
              (__int64)v89,
              (__int64)v90,
              (__int64)v89,
              (__int64)v10,
              2,
              (unsigned __int64)&v85 & -(__int64)(v85 != 0),
              v85 != 0,
              &v84,
              &v74,
              v77);
      ProcessHeap = HeapHandle;
      v15 = v55;
      if ( v55 >= 0 )
      {
        v56 = (unsigned __int16 *)v84;
        v57 = (ACL *)RtlAllocateHeap(
                       HeapHandle,
                       NtdllBaseTag + 1310720,
                       v51 + (unsigned int)*((unsigned __int16 *)v84 + 1));
        v11 = (PVOID *)v78;
        *v78 = v57;
        if ( v57 )
        {
          v60 = *(unsigned __int8 *)v84;
          if ( (unsigned __int8)v60 <= Src->AclRevision )
            v60 = Src->AclRevision;
          if ( RtlCreateAcl(v57, v51 + v56[1], v60) < 0 )
          {
LABEL_34:
            *v13 |= 0x1000u;
          }
          else
          {
            v61 = Src + 1;
            v62 = (char *)*v11 + 8;
            v63 = 0;
            v77[0] = 0;
            if ( Src->AceCount )
            {
              v64 = v78;
              v65 = (char *)BaseAddress + 16;
              do
              {
                v66 = *v65 | v65[1] | *(v65 - 1);
                if ( v66 )
                {
                  memmove(v62, v61, v61->AclSize);
                  v62[1] &= ~0x10u;
                  v67 = v62;
                  v62 += v61->AclSize;
                  ++(*v64)->AceCount;
                  v68 = 0x80000000;
                  *((_DWORD *)v67 + 1) = *(_DWORD *)&v61->AceCount & v66;
                  for ( j = ~*(_DWORD *)&v61->AceCount & v66; j; v68 = (unsigned int)v68 >> 1 )
                  {
                    if ( (unsigned int)v68 < 0x10000000 )
                      break;
                    if ( (v68 & *(_DWORD *)&v61->AceCount) != 0 )
                    {
                      v70 = v68;
                      if ( v68 < 0 )
                        v70 = *v10 | v68;
                      if ( (v70 & 0x40000000) != 0 )
                        v70 |= v10[1];
                      if ( (v70 & 0x20000000) != 0 )
                        v70 |= v10[2];
                      if ( (v70 & 0x10000000) != 0 )
                        v70 |= v10[3];
                      v71 = v70 & 0xFFFFFFF;
                      if ( (v71 & j) != 0 )
                      {
                        *((_DWORD *)v67 + 1) |= v68;
                        j &= ~v71;
                      }
                    }
                  }
                  *((_DWORD *)v67 + 1) |= j;
                  v63 = v77[0];
                }
                ++v63;
                v61 = (ACL *)((char *)v61 + v61->AclSize);
                v77[0] = v63;
                v65 += 6;
              }
              while ( v63 < Src->AceCount );
              v13 = v88;
              v11 = (PVOID *)v78;
            }
            v72 = v84;
            memmove(v62, (char *)v84 + 8, (unsigned int)*((unsigned __int16 *)v84 + 1) - 8);
            *((_WORD *)*v11 + 2) += v72[2];
LABEL_109:
            ProcessHeap = HeapHandle;
          }
          goto LABEL_110;
        }
        v15 = -1073741801;
      }
      v58 = BaseAddress;
      goto LABEL_79;
    }
    v15 = -1073741801;
  }
LABEL_80:
  if ( v81 )
    RtlFreeHeap(ProcessHeap, 0, v81);
  if ( v84 )
    RtlFreeHeap(ProcessHeap, 0, v84);
  return (unsigned int)v15;
}

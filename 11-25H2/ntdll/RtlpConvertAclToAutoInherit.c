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
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 *a8,
        _DWORD *a9)
{
  _DWORD *v10; // r12
  __int64 *v11; // r15
  _DWORD *v13; // rdi
  char *ProcessHeap; // r14
  int v15; // ebx
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // r11d
  int v20; // esi
  unsigned __int16 *v21; // rbx
  int *v22; // r8
  int v23; // ecx
  int v24; // edx
  int v25; // edx
  char v26; // cl
  int v27; // r10d
  int v28; // eax
  int v29; // eax
  __int64 v30; // rsi
  unsigned __int16 *v31; // r11
  int v32; // r10d
  __int64 v33; // r14
  int v34; // ecx
  int v35; // edx
  int v36; // edx
  int v37; // eax
  char v38; // cl
  unsigned __int16 *v39; // r15
  int v40; // r8d
  int v41; // ebx
  int v42; // edi
  _DWORD *v43; // rsi
  unsigned int v44; // r12d
  int v45; // eax
  __int64 v46; // rax
  unsigned __int8 *v47; // rcx
  _DWORD *v48; // r8
  char v49; // dl
  char v50; // r11
  int v51; // esi
  int i; // r10d
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // eax
  unsigned __int8 *v56; // rbx
  __int64 v57; // rax
  __int64 v58; // r8
  int v60; // r8d
  unsigned __int16 *v61; // rsi
  _BYTE *v62; // r14
  int v63; // ecx
  __int64 *v64; // rdi
  _DWORD *v65; // r15
  int v66; // ebx
  _BYTE *v67; // rdx
  int v68; // ecx
  int j; // ebx
  int v70; // eax
  int v71; // eax
  unsigned __int8 *v72; // rsi
  void *Heap; // rax
  char v74; // [rsp+90h] [rbp-80h] BYREF
  unsigned __int8 v75; // [rsp+91h] [rbp-7Fh]
  int v76; // [rsp+94h] [rbp-7Ch] BYREF
  __int16 v77; // [rsp+98h] [rbp-78h]
  _DWORD v78[3]; // [rsp+9Ch] [rbp-74h] BYREF
  __int64 *v79; // [rsp+A8h] [rbp-68h]
  char *v80; // [rsp+B0h] [rbp-60h]
  __int64 v81; // [rsp+B8h] [rbp-58h]
  __int64 v82; // [rsp+C0h] [rbp-50h] BYREF
  int v83; // [rsp+C8h] [rbp-48h]
  int v84; // [rsp+CCh] [rbp-44h]
  unsigned __int8 *v85; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v86; // [rsp+D8h] [rbp-38h] BYREF
  int v87; // [rsp+E0h] [rbp-30h]
  int v88; // [rsp+E4h] [rbp-2Ch]
  _DWORD *v89; // [rsp+E8h] [rbp-28h]
  __int64 v90; // [rsp+F0h] [rbp-20h]
  __int64 v91; // [rsp+F8h] [rbp-18h]
  _DWORD *v92; // [rsp+100h] [rbp-10h]
  __int64 v93; // [rsp+108h] [rbp-8h]
  char v94[8]; // [rsp+110h] [rbp+0h] BYREF
  int v95; // [rsp+118h] [rbp+8h]
  char v96[8]; // [rsp+140h] [rbp+30h] BYREF
  int v97; // [rsp+148h] [rbp+38h]

  v10 = a7;
  v11 = a8;
  v13 = a9;
  v91 = a5;
  v86 = a3;
  v90 = a6;
  v82 = 0LL;
  v85 = 0LL;
  v74 = 0;
  v78[0] = 0;
  v81 = 0LL;
  v76 = 0;
  v93 = a1;
  v75 = a4;
  v92 = a7;
  ProcessHeap = (char *)NtCurrentPeb()->ProcessHeap;
  v80 = ProcessHeap;
  v79 = a8;
  v89 = a9;
  v77 = 768;
  v15 = RtlInitializeSid((__int64)v96, (__int64)&v76, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v97 = 0;
  v15 = RtlInitializeSid((__int64)v94, (__int64)&v76, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  *a9 = 1024;
  *a8 = 0LL;
  v95 = 1;
  if ( a1 && !RtlValidAcl(a1) || !RtlValidAcl((__int64)a2) )
    return (unsigned int)-1073741705;
  v16 = RtlpInheritAcl(
          a1,
          0,
          0,
          v75,
          1,
          0,
          (__int64)v96,
          (__int64)v94,
          (__int64)v96,
          (__int64)v94,
          (__int64)a7,
          2,
          (unsigned __int64)&v86 & -(__int64)(v86 != 0),
          v86 != 0,
          &v82,
          &v74,
          v78);
  v15 = v16;
  if ( v16 == -2147483637 )
  {
    *a9 |= 0x1000u;
LABEL_111:
    v15 = 0;
LABEL_112:
    if ( (*v13 & 0x1000) != 0 )
    {
      if ( *v11 )
      {
        RtlFreeHeap((__int64)ProcessHeap, 0, *v11, v17);
        *v11 = 0LL;
      }
      Heap = (void *)RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, a2[1]);
      *v11 = (__int64)Heap;
      if ( Heap )
        memmove(Heap, a2, a2[1]);
      else
        v15 = -1073741801;
    }
    v58 = v81;
    if ( v81 )
LABEL_80:
      RtlFreeHeap((__int64)ProcessHeap, 0, v58, v17);
    goto LABEL_81;
  }
  if ( v16 >= 0 )
  {
    v18 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 24LL * a2[2]);
    v19 = 0;
    v81 = v18;
    if ( v18 )
    {
      v20 = 0;
      v21 = a2 + 4;
      v22 = (int *)(v18 + 4);
      v17 = 1LL;
      while ( v20 < a2[2] )
      {
        if ( *(_BYTE *)v21 > 8u || *(_BYTE *)v21 == 4 )
          goto LABEL_34;
        v23 = *((_DWORD *)v21 + 1);
        if ( v23 < 0 )
          v23 |= *a7;
        if ( (v23 & 0x40000000) != 0 )
          v23 |= a7[1];
        if ( (v23 & 0x20000000) != 0 )
          v23 |= a7[2];
        if ( (v23 & 0x10000000) != 0 )
          v23 |= a7[3];
        if ( (unsigned __int8)(*(_BYTE *)v21 - 2) <= 2u || *(_BYTE *)v21 >= 7u )
          v24 = a7[3] | 0x1000000;
        else
          v24 = a7[3];
        v25 = v23 & v24 & 0xFFFFFFF;
        v26 = *((_BYTE *)v21 + 1) & 3 | ~*((_BYTE *)v21 + 1) & 8;
        if ( (*((_BYTE *)v21 + 1) & 2) != 0 )
        {
          v27 = v25;
          v19 = v25;
        }
        else
        {
          v27 = 0;
        }
        *(v22 - 1) = v19;
        v19 = 0;
        v22[2] = v27;
        v28 = v25;
        if ( (v26 & 1) == 0 )
          v28 = 0;
        *v22 = v28;
        v22[3] = v28;
        v17 = 1LL;
        ++v20;
        v29 = (v26 & 8) != 0 ? v25 : 0;
        v22[1] = v29;
        v22[4] = v29;
        v22 += 6;
        v21 = (unsigned __int16 *)((char *)v21 + v21[1]);
      }
      v30 = v82;
      v31 = a2 + 4;
      v32 = 0;
      v84 = 0;
      v33 = v82 + 8;
      while ( v32 < *(unsigned __int16 *)(v30 + 4) )
      {
        if ( *(_BYTE *)v33 > 8u || *(_BYTE *)v33 == 4 )
        {
LABEL_63:
          *v13 |= 0x1000u;
          v15 = 0;
          v11 = v79;
          ProcessHeap = v80;
          goto LABEL_112;
        }
        v34 = *(_DWORD *)(v33 + 4);
        if ( v34 < 0 )
          v34 |= *v10;
        if ( (v34 & 0x40000000) != 0 )
          v34 |= v10[1];
        if ( (v34 & 0x20000000) != 0 )
          v34 |= v10[2];
        if ( (v34 & 0x10000000) != 0 )
          v34 |= v10[3];
        if ( (unsigned __int8)(*(_BYTE *)v33 - 2) <= 2u || *(_BYTE *)v33 >= 7u )
          v35 = v10[3] | 0x1000000;
        else
          v35 = v10[3];
        v36 = v34 & v35 & 0xFFFFFFF;
        if ( v36 )
        {
          v37 = *(_BYTE *)(v33 + 1) & 3;
          v38 = v37 | ~*(_BYTE *)(v33 + 1) & 8;
          if ( v37 | ~*(_BYTE *)(v33 + 1) & 8 )
          {
            v83 = 0;
            v39 = v31;
            v40 = (v38 & 2) != 0 ? v36 : 0;
            v88 = v40;
            v17 = v36 & (unsigned int)-((v38 & 1) != 0);
            v76 = (v38 & 1) != 0 ? v36 : 0;
            v41 = (v38 & 8) != 0 ? v36 : 0;
            v87 = v41;
            if ( a2[2] )
            {
              v42 = (v38 & 2) != 0 ? v36 : 0;
              v43 = (_DWORD *)(v81 + 20);
              v44 = (v38 & 1) != 0 ? v36 : 0;
              do
              {
                if ( RtlpCompareAces((unsigned __int8 *)v33, (unsigned __int8 *)v39, v91, v90) )
                {
                  v41 &= ~*(v43 - 3);
                  v42 &= ~*(v43 - 5);
                  v44 &= ~*(v43 - 4);
                  *v43 &= ~v87;
                  *(v43 - 2) &= ~v88;
                  *(v43 - 1) &= ~v76;
                }
                v43 += 6;
                v39 = (unsigned __int16 *)((char *)v39 + v39[1]);
                v45 = a2[2];
                ++v83;
              }
              while ( v83 < v45 );
              v32 = v84;
              v31 = a2 + 4;
              v30 = v82;
              v78[2] = v44;
              v17 = v44;
              v10 = v92;
              v78[1] = v42;
              v40 = v42;
              v13 = v89;
            }
            if ( v40 | (unsigned int)v17 | v41 )
            {
              *v13 |= 0x1000u;
              v11 = v79;
              goto LABEL_110;
            }
            v17 = 1LL;
          }
        }
        v46 = *(unsigned __int16 *)(v33 + 2);
        v84 = ++v32;
        v33 += v46;
      }
      v47 = (unsigned __int8 *)(a2 + 4);
      v48 = (_DWORD *)(v81 + 16);
      v49 = 0;
      v50 = 0;
      v51 = 0;
      for ( i = 0; i < a2[2]; ++i )
      {
        if ( *v48 | v48[1] | *(v48 - 1) )
        {
          v17 = (__int64)RtlBaseAceType;
          v51 += *((unsigned __int16 *)v47 + 1);
          v54 = *v47;
          if ( !RtlBaseAceType[v54] && v50 || RtlBaseAceType[v54] == 1 && v49 )
            goto LABEL_63;
        }
        else
        {
          v53 = *v47;
          if ( RtlBaseAceType[v53] )
          {
            v13 = v89;
            if ( RtlBaseAceType[v53] == 1 )
              v50 = 1;
          }
          else
          {
            v49 = 1;
          }
        }
        v48 += 6;
        v47 += *((unsigned __int16 *)v47 + 1);
      }
      v55 = RtlpInheritAcl(
              v93,
              0,
              0,
              v75,
              1,
              0,
              v91,
              v90,
              v91,
              v90,
              (__int64)v10,
              2,
              (unsigned __int64)&v86 & -(__int64)(v86 != 0),
              v86 != 0,
              (__int64 *)&v85,
              &v74,
              v78);
      ProcessHeap = v80;
      v15 = v55;
      if ( v55 >= 0 )
      {
        v56 = v85;
        v57 = RtlAllocateHeap(v80, NtdllBaseTag + 1310720, v51 + (unsigned int)*((unsigned __int16 *)v85 + 1));
        v11 = v79;
        *v79 = v57;
        if ( v57 )
        {
          v60 = *v85;
          if ( (unsigned __int8)v60 <= *(_BYTE *)a2 )
            v60 = *(unsigned __int8 *)a2;
          if ( (int)RtlCreateAcl(v57, v51 + (unsigned int)*((unsigned __int16 *)v56 + 1), v60) < 0 )
          {
LABEL_34:
            *v13 |= 0x1000u;
          }
          else
          {
            v61 = a2 + 4;
            v62 = (_BYTE *)(*v11 + 8);
            v63 = 0;
            v78[0] = 0;
            if ( a2[2] )
            {
              v64 = v79;
              v65 = (_DWORD *)(v81 + 16);
              do
              {
                v66 = *v65 | v65[1] | *(v65 - 1);
                if ( v66 )
                {
                  memmove(v62, v61, v61[1]);
                  v62[1] &= ~0x10u;
                  v67 = v62;
                  v62 += v61[1];
                  ++*(_WORD *)(*v64 + 4);
                  v68 = 0x80000000;
                  *((_DWORD *)v67 + 1) = *((_DWORD *)v61 + 1) & v66;
                  for ( j = ~*((_DWORD *)v61 + 1) & v66; j; v68 = (unsigned int)v68 >> 1 )
                  {
                    if ( (unsigned int)v68 < 0x10000000 )
                      break;
                    if ( (v68 & *((_DWORD *)v61 + 1)) != 0 )
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
                  v63 = v78[0];
                }
                ++v63;
                v61 = (unsigned __int16 *)((char *)v61 + v61[1]);
                v78[0] = v63;
                v65 += 6;
              }
              while ( v63 < a2[2] );
              v13 = v89;
              v11 = v79;
            }
            v72 = v85;
            memmove(v62, v85 + 8, (unsigned int)*((unsigned __int16 *)v85 + 1) - 8);
            *(_WORD *)(*v11 + 4) += *((_WORD *)v72 + 2);
LABEL_110:
            ProcessHeap = v80;
          }
          goto LABEL_111;
        }
        v15 = -1073741801;
      }
      v58 = v81;
      goto LABEL_80;
    }
    v15 = -1073741801;
  }
LABEL_81:
  if ( v82 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v82, v17);
  if ( v85 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v85, v17);
  return (unsigned int)v15;
}

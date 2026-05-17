/*
 * XREFs of RtlpConvertAclToAutoInherit @ 0x180139B00
 * Callers:
 *     RtlpConvertToAutoInheritSecurityObject @ 0x18013A340 (RtlpConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlInitializeSid @ 0x180001010 (RtlInitializeSid.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlValidAcl @ 0x180039260 (RtlValidAcl.c)
 *     RtlpInheritAcl @ 0x1800CB760 (RtlpInheritAcl.c)
 *     RtlCreateAcl @ 0x1800CDD80 (RtlCreateAcl.c)
 *     RtlpCompareAces @ 0x1800CE000 (RtlpCompareAces.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpConvertAclToAutoInherit(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        unsigned __int64 *a8,
        _DWORD *a9)
{
  _DWORD *v10; // r12
  unsigned __int64 *v11; // r15
  _DWORD *v13; // rdi
  void *ProcessHeap; // r14
  int v15; // ebx
  int v16; // eax
  __int64 v17; // rax
  int v18; // r11d
  int v19; // esi
  unsigned __int16 *v20; // rbx
  int *v21; // r8
  int v22; // ecx
  int v23; // edx
  int v24; // edx
  char v25; // cl
  int v26; // r10d
  int v27; // eax
  int v28; // eax
  unsigned __int64 v29; // rsi
  unsigned __int16 *v30; // r11
  int v31; // r10d
  __int64 v32; // r14
  int v33; // ecx
  int v34; // edx
  int v35; // edx
  int v36; // eax
  char v37; // cl
  unsigned __int16 *v38; // r15
  int v39; // r8d
  int v40; // r9d
  int v41; // ebx
  int v42; // edi
  _DWORD *v43; // rsi
  int v44; // r12d
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
  unsigned __int64 v58; // r8
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
  void *v80; // [rsp+B0h] [rbp-60h]
  unsigned __int64 v81; // [rsp+B8h] [rbp-58h]
  unsigned __int64 v82; // [rsp+C0h] [rbp-50h] BYREF
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
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v80 = ProcessHeap;
  v79 = (__int64 *)a8;
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
LABEL_110:
    v15 = 0;
LABEL_111:
    if ( (*v13 & 0x1000) != 0 )
    {
      if ( *v11 )
      {
        RtlFreeHeap((__int64)ProcessHeap, 0, *v11);
        *v11 = 0LL;
      }
      Heap = (void *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, a2[1]);
      *v11 = (unsigned __int64)Heap;
      if ( Heap )
        memmove(Heap, a2, a2[1]);
      else
        v15 = -1073741801;
    }
    v58 = v81;
    if ( v81 )
LABEL_79:
      RtlFreeHeap((__int64)ProcessHeap, 0, v58);
    goto LABEL_80;
  }
  if ( v16 >= 0 )
  {
    v17 = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, 24LL * a2[2]);
    v18 = 0;
    v81 = v17;
    if ( v17 )
    {
      v19 = 0;
      v20 = a2 + 4;
      v21 = (int *)(v17 + 4);
      while ( v19 < a2[2] )
      {
        if ( *(_BYTE *)v20 > 8u || *(_BYTE *)v20 == 4 )
          goto LABEL_34;
        v22 = *((_DWORD *)v20 + 1);
        if ( v22 < 0 )
          v22 |= *a7;
        if ( (v22 & 0x40000000) != 0 )
          v22 |= a7[1];
        if ( (v22 & 0x20000000) != 0 )
          v22 |= a7[2];
        if ( (v22 & 0x10000000) != 0 )
          v22 |= a7[3];
        if ( (unsigned __int8)(*(_BYTE *)v20 - 2) <= 2u || *(_BYTE *)v20 >= 7u )
          v23 = a7[3] | 0x1000000;
        else
          v23 = a7[3];
        v24 = v22 & v23 & 0xFFFFFFF;
        v25 = *((_BYTE *)v20 + 1) & 3 | ~*((_BYTE *)v20 + 1) & 8;
        if ( (*((_BYTE *)v20 + 1) & 2) != 0 )
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
        v20 = (unsigned __int16 *)((char *)v20 + v20[1]);
      }
      v29 = v82;
      v30 = a2 + 4;
      v31 = 0;
      v84 = 0;
      v32 = v82 + 8;
      while ( v31 < *(unsigned __int16 *)(v29 + 4) )
      {
        if ( *(_BYTE *)v32 > 8u || *(_BYTE *)v32 == 4 )
        {
LABEL_62:
          *v13 |= 0x1000u;
          v15 = 0;
          v11 = (unsigned __int64 *)v79;
          ProcessHeap = v80;
          goto LABEL_111;
        }
        v33 = *(_DWORD *)(v32 + 4);
        if ( v33 < 0 )
          v33 |= *v10;
        if ( (v33 & 0x40000000) != 0 )
          v33 |= v10[1];
        if ( (v33 & 0x20000000) != 0 )
          v33 |= v10[2];
        if ( (v33 & 0x10000000) != 0 )
          v33 |= v10[3];
        if ( (unsigned __int8)(*(_BYTE *)v32 - 2) <= 2u || *(_BYTE *)v32 >= 7u )
          v34 = v10[3] | 0x1000000;
        else
          v34 = v10[3];
        v35 = v33 & v34 & 0xFFFFFFF;
        if ( v35 )
        {
          v36 = *(_BYTE *)(v32 + 1) & 3;
          v37 = v36 | ~*(_BYTE *)(v32 + 1) & 8;
          if ( v36 | ~*(_BYTE *)(v32 + 1) & 8 )
          {
            v83 = 0;
            v38 = v30;
            v39 = (v37 & 2) != 0 ? v35 : 0;
            v88 = v39;
            v40 = (v37 & 1) != 0 ? v35 : 0;
            v76 = v40;
            v41 = (v37 & 8) != 0 ? v35 : 0;
            v87 = v41;
            if ( a2[2] )
            {
              v42 = (v37 & 2) != 0 ? v35 : 0;
              v43 = (_DWORD *)(v81 + 20);
              v44 = (v37 & 1) != 0 ? v35 : 0;
              do
              {
                if ( RtlpCompareAces((unsigned __int8 *)v32, (unsigned __int8 *)v38, v91, v90) )
                {
                  v41 &= ~*(v43 - 3);
                  v42 &= ~*(v43 - 5);
                  v44 &= ~*(v43 - 4);
                  *v43 &= ~v87;
                  *(v43 - 2) &= ~v88;
                  *(v43 - 1) &= ~v76;
                }
                v43 += 6;
                v38 = (unsigned __int16 *)((char *)v38 + v38[1]);
                v45 = a2[2];
                ++v83;
              }
              while ( v83 < v45 );
              v31 = v84;
              v30 = a2 + 4;
              v29 = v82;
              v78[2] = v44;
              v40 = v44;
              v10 = v92;
              v78[1] = v42;
              v39 = v42;
              v13 = v89;
            }
            if ( v39 | v40 | v41 )
            {
              *v13 |= 0x1000u;
              v11 = (unsigned __int64 *)v79;
              goto LABEL_109;
            }
          }
        }
        v46 = *(unsigned __int16 *)(v32 + 2);
        v84 = ++v31;
        v32 += v46;
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
          v51 += *((unsigned __int16 *)v47 + 1);
          v54 = *v47;
          if ( !RtlBaseAceType[v54] && v50 || RtlBaseAceType[v54] == 1 && v49 )
            goto LABEL_62;
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
              (unsigned __int64 *)&v85,
              &v74,
              v78);
      ProcessHeap = v80;
      v15 = v55;
      if ( v55 >= 0 )
      {
        v56 = v85;
        v57 = RtlAllocateHeap((__int64)v80, NtdllBaseTag + 1310720, v51 + (unsigned int)*((unsigned __int16 *)v85 + 1));
        v11 = (unsigned __int64 *)v79;
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
              v11 = (unsigned __int64 *)v79;
            }
            v72 = v85;
            memmove(v62, v85 + 8, (unsigned int)*((unsigned __int16 *)v85 + 1) - 8);
            *(_WORD *)(*v11 + 4) += *((_WORD *)v72 + 2);
LABEL_109:
            ProcessHeap = v80;
          }
          goto LABEL_110;
        }
        v15 = -1073741801;
      }
      v58 = v81;
      goto LABEL_79;
    }
    v15 = -1073741801;
  }
LABEL_80:
  if ( v82 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v82);
  if ( v85 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v85);
  return (unsigned int)v15;
}

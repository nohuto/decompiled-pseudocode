/*
 * XREFs of ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1400174D0
 * Callers:
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1400172FC (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 * Callees:
 *     ?GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140017140 (-GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z @ 0x140017C08 (-Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z.c)
 *     ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x140019184 (-CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x140019614 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x14005C0F0 (-IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareIncrementalUpdateForUser(
        CEndpointResourceStateManager **this,
        struct CFlipPresentUpdate *a2)
{
  CEndpointResourceStateManager *v2; // rdx
  signed int v3; // esi
  unsigned int v4; // r9d
  unsigned int v5; // r8d
  CEndpointResourceStateManager *v6; // r12
  __int64 v7; // rax
  char v8; // bl
  unsigned int v9; // r10d
  _QWORD *v10; // r9
  unsigned int v11; // r11d
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  bool v19; // cf
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  bool v26; // cf
  __int64 v27; // rax
  char *v28; // r15
  unsigned int v29; // r13d
  char *j; // r12
  __int64 v31; // rbx
  char *v32; // r15
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  char v37; // cl
  __int64 v38; // rax
  char v39; // cl
  __int64 v40; // rax
  char **v41; // rdi
  _DWORD *v42; // rcx
  CEndpointResourceStateManager **v43; // rdi
  _DWORD *v44; // rsi
  _DWORD *v45; // r15
  CEndpointResourceStateManager *v46; // r8
  __int64 v47; // rax
  char v48; // cl
  _DWORD *v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r14
  int v54; // eax
  _DWORD *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r14
  int v61; // eax
  _DWORD *v62; // rdx
  __int64 v63; // r15
  __int64 v64; // rax
  __int64 v65; // rax
  char v66; // cl
  __int64 v67; // rax
  unsigned int v68; // eax
  bool v69; // cf
  __int64 v70; // rax
  unsigned int v71; // r8d
  __int64 v72; // rcx
  signed int v73; // eax
  unsigned int v74; // eax
  bool v75; // cf
  char *v76; // r13
  unsigned int v77; // r12d
  char *v78; // rsi
  __int64 v79; // rbx
  char *v80; // r13
  __int64 v81; // rcx
  __int64 v82; // rax
  _DWORD *v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  char v86; // cl
  __int64 v87; // rax
  char v88; // cl
  __int64 v89; // rcx
  __int64 v90; // r14
  int v91; // eax
  _DWORD *v92; // rdx
  __int64 v93; // rsi
  __int64 v94; // rax
  char *v95; // r15
  unsigned int v96; // r13d
  char *i; // r12
  __int64 v98; // rbx
  char *v99; // r15
  __int64 v100; // rcx
  __int64 v101; // rax
  char v102; // cl
  __int64 v103; // rax
  char v104; // cl
  _DWORD *v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  char v109; // cl
  __int64 v110; // rax
  char v111; // cl
  _DWORD *v112; // [rsp+20h] [rbp-59h]
  CEndpointResourceStateManager *v113; // [rsp+28h] [rbp-51h]
  char *v114; // [rsp+28h] [rbp-51h]
  char *v115; // [rsp+30h] [rbp-49h]
  PVOID P; // [rsp+40h] [rbp-39h] BYREF
  int v117; // [rsp+48h] [rbp-31h]
  __int128 v118; // [rsp+50h] [rbp-29h]
  __int128 v119; // [rsp+60h] [rbp-19h]
  _DWORD *v120; // [rsp+70h] [rbp-9h]
  __int64 v121; // [rsp+78h] [rbp-1h]
  int v122; // [rsp+80h] [rbp+7h]
  __int64 v123; // [rsp+84h] [rbp+Bh]
  int v126; // [rsp+F0h] [rbp+77h]
  _DWORD *v127; // [rsp+F8h] [rbp+7Fh]

  v2 = *this;
  v3 = 0;
  P = 0LL;
  v117 = 0;
  v4 = 0;
  v120 = 0LL;
  v122 = 0;
  v123 = 0LL;
  v5 = 0;
  v118 = 0LL;
  v119 = 0LL;
  v6 = (CEndpointResourceStateManager *)this;
  v121 = 0LL;
  do
  {
    if ( v2 == v6 )
      break;
    v7 = (__int64)v2 + 24;
    if ( !v2 )
      v7 = 32LL;
    v8 = *(_BYTE *)v7;
    if ( (*(_BYTE *)v7 & 1) != 0 )
    {
      v21 = (__int64)v2 + 16;
      if ( !v2 )
        v21 = 24LL;
      v22 = *(_QWORD *)(*(_QWORD *)v21 + 32LL);
      v23 = 0;
      if ( v22 )
        v23 = *(_DWORD *)(v22 + 32);
      v24 = v23 + 24;
      if ( v24 < 0x18 )
      {
        v3 = -1073741675;
      }
      else
      {
        v25 = v4 + v24;
        v26 = v25 < v4;
        v4 = -1;
        if ( !v26 )
          v4 = v25;
        v3 = v26 ? 0xC0000095 : 0;
        LODWORD(v121) = v4;
      }
    }
    if ( v3 >= 0 && (v8 & 2) != 0 )
    {
      v68 = v5 + 16;
      v69 = v5 + 16 < v5;
      v5 = -1;
      if ( !v69 )
        v5 = v68;
      v3 = v69 ? 0xC0000095 : 0;
      HIDWORD(v121) = v5;
    }
    v2 = *(CEndpointResourceStateManager **)v2;
  }
  while ( v3 >= 0 );
  v9 = 0;
  v10 = (_QWORD *)*((_QWORD *)v6 + 2);
  v11 = 0;
  if ( v3 >= 0 )
  {
    while ( v10 != (_QWORD *)((char *)v6 + 16) )
    {
      v12 = (__int64)(v10 + 3);
      if ( !v10 )
        v12 = 32LL;
      if ( (*(_BYTE *)v12 & 1) != 0 )
      {
        v70 = (__int64)(v10 + 2);
        if ( !v10 )
          v70 = 24LL;
        v71 = 0;
        v72 = *(_QWORD *)(*(_QWORD *)v70 + 32LL);
        if ( v72 )
          v71 = *(_DWORD *)(v72 + 32);
        v73 = CResourceStateUpdateSerializer::IncreaseAddedContentSize((CResourceStateUpdateSerializer *)&P, 0x18u, v71);
        v11 = HIDWORD(v123);
        v9 = v123;
        v3 = v73;
      }
      if ( v3 >= 0 )
      {
        v13 = (__int64)(v10 + 7);
        if ( !v10 )
          v13 = 64LL;
        if ( (*(_BYTE *)v13 & 1) == 0 )
          goto LABEL_27;
        v14 = (__int64)(v10 + 4);
        if ( !v10 )
          v14 = 40LL;
        v15 = *(_QWORD *)v14;
        v16 = 0;
        if ( v15 )
          v16 = *(_DWORD *)(v15 + 32);
        v17 = v16 + 32;
        if ( v17 < 0x20 )
        {
          v3 = -1073741675;
        }
        else
        {
          v18 = v11 + v17;
          v19 = v18 < v11;
          v11 = -1;
          if ( !v19 )
            v11 = v18;
          v3 = v19 ? 0xC0000095 : 0;
          HIDWORD(v123) = v11;
        }
        if ( v3 >= 0 )
        {
LABEL_27:
          if ( (*(_BYTE *)v12 & 2) != 0 )
          {
            v74 = v9 + 16;
            v75 = v9 + 16 < v9;
            v9 = -1;
            if ( !v75 )
              v9 = v74;
            v3 = v75 ? 0xC0000095 : 0;
            LODWORD(v123) = v9;
          }
        }
      }
      v10 = (_QWORD *)*v10;
      if ( v3 < 0 )
        goto LABEL_31;
    }
    v126 = CResourceStateUpdateSerializer::Allocate((CResourceStateUpdateSerializer *)&P, 0x75754346u);
    v3 = v126;
    if ( v126 >= 0 )
    {
      v43 = *(CEndpointResourceStateManager ***)v6;
      if ( *(CEndpointResourceStateManager **)v6 != v6 )
      {
        v44 = (_DWORD *)*((_QWORD *)&v118 + 1);
        v45 = (_DWORD *)v118;
        do
        {
          v46 = *v43;
          v47 = (__int64)(v43 + 3);
          v113 = *v43;
          if ( !v43 )
            v47 = 32LL;
          v48 = *(_BYTE *)v47;
          if ( (*(_BYTE *)v47 & 1) != 0 )
          {
            v59 = (__int64)(v43 + 2);
            if ( !v43 )
              v59 = 24LL;
            v60 = *(_QWORD *)(*(_QWORD *)v59 + 32LL);
            v61 = 0;
            if ( v60 )
              v61 = *(_DWORD *)(v60 + 32);
            *v45 = 2;
            v62 = v45;
            v63 = (unsigned int)(v61 + 24);
            v64 = *(_QWORD *)v59;
            v45 = (_DWORD *)((char *)v62 + v63);
            *(_QWORD *)&v118 = v45;
            *((_QWORD *)v62 + 1) = *(_QWORD *)(v64 + 40);
            if ( v60 )
            {
              v76 = (char *)(v62 + 6);
              v62[4] = *(_DWORD *)(v60 + 32);
              if ( *(_DWORD *)(v60 + 12) )
              {
                v77 = 0;
                v78 = *(char **)(v60 + 24);
                do
                {
                  v79 = 32LL * v77;
                  *(_OWORD *)v76 = *(_OWORD *)(*(_QWORD *)(v60 + 16) + v79);
                  *((_DWORD *)v76 + 4) = *(_DWORD *)(*(_QWORD *)(v60 + 16) + v79 + 16);
                  v80 = v76 + 20;
                  memmove(v80, v78, *(unsigned int *)(*(_QWORD *)(v60 + 16) + v79 + 16));
                  ++v77;
                  v81 = *(unsigned int *)(*(_QWORD *)(v60 + 16) + v79 + 16);
                  v76 = &v80[v81];
                  v78 += v81;
                }
                while ( v77 < *(_DWORD *)(v60 + 12) );
                v6 = (CEndpointResourceStateManager *)this;
                v44 = (_DWORD *)*((_QWORD *)&v118 + 1);
              }
            }
            else
            {
              v62[4] = 0;
            }
            v46 = v113;
            v65 = (__int64)(v43 + 3);
            if ( !v43 )
              v65 = 32LL;
            v66 = *(_BYTE *)v65;
            v67 = (__int64)(v43 + 3);
            v48 = v66 | 4;
            if ( !v43 )
              v67 = 32LL;
            *(_BYTE *)v67 = v48;
          }
          if ( (v48 & 2) != 0 )
          {
            *v44 = 0;
            v82 = (__int64)(v43 + 2);
            v83 = v44;
            v44 += 4;
            *((_QWORD *)&v118 + 1) = v44;
            if ( !v43 )
              v82 = 24LL;
            v84 = *(_QWORD *)(*(_QWORD *)v82 + 40LL);
            v85 = (__int64)(v43 + 3);
            if ( !v43 )
              v85 = 32LL;
            *((_QWORD *)v83 + 1) = v84;
            v86 = *(_BYTE *)v85;
            v87 = (__int64)(v43 + 3);
            v88 = v86 | 8;
            if ( !v43 )
              v87 = 32LL;
            *(_BYTE *)v87 = v88;
          }
          v43 = (CEndpointResourceStateManager **)v46;
        }
        while ( v46 != v6 );
        v3 = v126;
      }
      v41 = (char **)*((_QWORD *)v6 + 2);
      v115 = (char *)v6 + 16;
      if ( v41 != (char **)((char *)v6 + 16) )
      {
        v42 = v120;
        v49 = (_DWORD *)v119;
        v127 = v120;
        v112 = (_DWORD *)*((_QWORD *)&v119 + 1);
        do
        {
          v114 = *v41;
          v50 = (__int64)(v41 + 3);
          if ( !v41 )
            v50 = 32LL;
          if ( (*(_BYTE *)v50 & 1) != 0 )
          {
            v89 = (__int64)(v41 + 2);
            if ( !v41 )
              v89 = 24LL;
            v90 = *(_QWORD *)(*(_QWORD *)v89 + 32LL);
            v91 = 0;
            if ( v90 )
              v91 = *(_DWORD *)(v90 + 32);
            *v49 = 3;
            v92 = v49;
            v93 = (unsigned int)(v91 + 24);
            v94 = *(_QWORD *)v89;
            v49 = (_DWORD *)((char *)v92 + v93);
            *(_QWORD *)&v119 = v49;
            *((_QWORD *)v92 + 1) = *(_QWORD *)(v94 + 40);
            if ( v90 )
            {
              v95 = (char *)(v92 + 6);
              v92[4] = *(_DWORD *)(v90 + 32);
              v96 = 0;
              for ( i = *(char **)(v90 + 24); v96 < *(_DWORD *)(v90 + 12); i += v100 )
              {
                v98 = 32LL * v96;
                *(_OWORD *)v95 = *(_OWORD *)(*(_QWORD *)(v90 + 16) + v98);
                *((_DWORD *)v95 + 4) = *(_DWORD *)(*(_QWORD *)(v90 + 16) + v98 + 16);
                v99 = v95 + 20;
                memmove(v99, i, *(unsigned int *)(*(_QWORD *)(v90 + 16) + v98 + 16));
                ++v96;
                v100 = *(unsigned int *)(*(_QWORD *)(v90 + 16) + v98 + 16);
                v95 = &v99[v100];
              }
            }
            else
            {
              v92[4] = 0;
            }
            v101 = (__int64)(v41 + 3);
            if ( !v41 )
              v101 = 32LL;
            v102 = *(_BYTE *)v101;
            v103 = (__int64)(v41 + 3);
            v104 = v102 | 4;
            if ( !v41 )
              v103 = 32LL;
            *(_BYTE *)v103 = v104;
            v42 = v127;
          }
          v51 = (__int64)(v41 + 7);
          if ( !v41 )
            v51 = 64LL;
          if ( (*(_BYTE *)v51 & 1) != 0 )
          {
            v52 = (__int64)(v41 + 4);
            if ( !v41 )
              v52 = 40LL;
            v53 = *(_QWORD *)v52;
            v54 = 0;
            if ( v53 )
              v54 = *(_DWORD *)(v53 + 32);
            *v42 = 4;
            v55 = v42;
            v127 = (_DWORD *)((char *)v42 + (unsigned int)(v54 + 32));
            v120 = v127;
            v56 = (__int64)(v41 + 2);
            if ( !v41 )
              v56 = 24LL;
            v57 = *(_QWORD *)(*(_QWORD *)v56 + 40LL);
            v58 = (__int64)(v41 + 5);
            if ( !v41 )
              v58 = 48LL;
            *((_QWORD *)v55 + 1) = v57;
            v27 = *(_QWORD *)v58;
            if ( v27 )
              v27 = *(_QWORD *)(v27 + 40);
            *((_QWORD *)v55 + 2) = v27;
            if ( v53 )
            {
              v28 = (char *)(v55 + 8);
              v55[6] = *(_DWORD *)(v53 + 32);
              v29 = 0;
              for ( j = *(char **)(v53 + 24); v29 < *(_DWORD *)(v53 + 12); j += v33 )
              {
                v31 = 32LL * v29;
                *(_OWORD *)v28 = *(_OWORD *)(*(_QWORD *)(v53 + 16) + v31);
                *((_DWORD *)v28 + 4) = *(_DWORD *)(*(_QWORD *)(v53 + 16) + v31 + 16);
                v32 = v28 + 20;
                memmove(v32, j, *(unsigned int *)(*(_QWORD *)(v53 + 16) + v31 + 16));
                ++v29;
                v33 = *(unsigned int *)(*(_QWORD *)(v53 + 16) + v31 + 16);
                v28 = &v32[v33];
              }
            }
            else
            {
              v55[6] = 0;
            }
            v34 = (__int64)(v41 + 5);
            if ( !v41 )
              v34 = 48LL;
            if ( *(_QWORD *)v34 )
            {
              CFlipResource::Release(*(CFlipResource **)v34);
              v35 = (__int64)(v41 + 5);
              if ( !v41 )
                v35 = 48LL;
              *(_QWORD *)v35 = 0LL;
            }
            v36 = (__int64)(v41 + 7);
            if ( !v41 )
              v36 = 64LL;
            v37 = *(_BYTE *)v36;
            v38 = (__int64)(v41 + 7);
            v39 = v37 | 2;
            if ( !v41 )
              v38 = 64LL;
            *(_BYTE *)v38 = v39;
          }
          v40 = (__int64)(v41 + 3);
          if ( !v41 )
            v40 = 32LL;
          if ( (*(_BYTE *)v40 & 2) != 0 )
          {
            v105 = v112;
            *v112 = 1;
            v106 = (__int64)(v41 + 2);
            v112 += 4;
            if ( !v41 )
              v106 = 24LL;
            *((_QWORD *)&v119 + 1) = v105 + 4;
            v107 = *(_QWORD *)(*(_QWORD *)v106 + 40LL);
            v108 = (__int64)(v41 + 3);
            if ( !v41 )
              v108 = 32LL;
            *((_QWORD *)v105 + 1) = v107;
            v109 = *(_BYTE *)v108;
            v110 = (__int64)(v41 + 3);
            v111 = v109 | 8;
            if ( !v41 )
              v110 = 32LL;
            *(_BYTE *)v110 = v111;
          }
          v41 = (char **)v114;
          v42 = v127;
        }
        while ( v114 != v115 );
        v3 = v126;
        v6 = (CEndpointResourceStateManager *)this;
      }
      CResourceStateUpdateSerializer::GetSerializedUpdate((CResourceStateUpdateSerializer *)&P, a2);
      CEndpointResourceStateManager::CommitPendingUpdates(v6);
    }
  }
LABEL_31:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v3;
}

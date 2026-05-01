/*
 * XREFs of AslEnvBuildBasic @ 0x180136F3C
 * Callers:
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x18013875C (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 * Callees:
 *     AslRegistryGetStringExpand @ 0x180138500 (AslRegistryGetStringExpand.c)
 *     AslRegistryGetString @ 0x180138F90 (AslRegistryGetString.c)
 *     AslFree @ 0x180139254 (AslFree.c)
 *     RtlDownlevelGetNtSystemRoot @ 0x180139478 (RtlDownlevelGetNtSystemRoot.c)
 *     AslRegistryOpenKey @ 0x180139504 (AslRegistryOpenKey.c)
 *     AslLogCallPrintf @ 0x1802CE2E0 (AslLogCallPrintf.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

__int64 __fastcall AslEnvBuildBasic(_QWORD *a1, size_t *a2)
{
  PVOID v2; // r12
  PVOID ProcessHeap; // r13
  _OWORD *Heap; // rax
  _OWORD *v5; // rsi
  unsigned __int64 v6; // rbx
  SIZE_T v7; // rdi
  unsigned __int64 v8; // r12
  __int64 NtSystemRoot; // r15
  __int64 v10; // rcx
  void *v11; // rax
  __int64 v12; // r14
  __int64 v13; // rcx
  size_t v14; // r14
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rdi
  _OWORD *v17; // rax
  _OWORD *v18; // rax
  int v19; // ebx
  SIZE_T v20; // r14
  SIZE_T v21; // rdi
  _OWORD *v22; // rax
  _OWORD *v23; // r15
  int v24; // r8d
  SIZE_T v25; // r15
  SIZE_T v26; // rdi
  _OWORD *v27; // rax
  _OWORD *v28; // rbx
  _DWORD *v29; // rax
  SIZE_T v30; // rbx
  SIZE_T v31; // rdi
  _OWORD *v32; // rax
  _OWORD *v33; // r14
  __int64 v34; // rcx
  SIZE_T v35; // r14
  SIZE_T v36; // rdi
  _OWORD *v37; // rax
  _OWORD *v38; // r15
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rdi
  _OWORD *v41; // rax
  _OWORD *v42; // r15
  __int64 v43; // r15
  __int64 v44; // rcx
  void *v45; // rax
  __int64 v46; // r14
  size_t v47; // r14
  SIZE_T v48; // r15
  SIZE_T v49; // rdi
  _OWORD *v50; // rax
  _OWORD *v51; // rax
  size_t v52; // r15
  size_t v53; // rdi
  _OWORD *v54; // rax
  _OWORD *v55; // r14
  unsigned int i; // eax
  __int64 v57; // rbx
  wchar_t *v58; // rax
  __int64 v59; // rbx
  size_t v60; // rbx
  SIZE_T v61; // rax
  SIZE_T v62; // rdi
  PVOID v63; // rax
  _OWORD *v64; // rax
  SIZE_T v65; // rbx
  SIZE_T v66; // rdi
  PVOID v67; // rax
  _WORD *v68; // rcx
  __int64 v69; // rax
  bool v70; // zf
  char *v71; // rax
  char *v72; // r15
  unsigned __int64 v73; // rdi
  SIZE_T v74; // rdi
  PVOID v75; // rax
  _OWORD *v76; // rax
  char *v77; // r12
  size_t v78; // rdi
  _OWORD *v79; // rax
  _OWORD *v80; // rbx
  unsigned int j; // eax
  __int64 v82; // rbx
  wchar_t *v83; // rax
  __int64 v84; // rbx
  size_t v85; // rbx
  SIZE_T v86; // rax
  SIZE_T v87; // rdi
  PVOID v88; // rax
  _OWORD *v89; // rax
  char *v90; // rbx
  unsigned __int64 v91; // rdi
  PVOID v92; // rax
  _WORD *v93; // rax
  __int64 v94; // r15
  size_t v95; // r15
  char *v96; // rax
  unsigned __int64 v97; // rdi
  PVOID v98; // rax
  _OWORD *v99; // rax
  size_t v100; // rdi
  PVOID v101; // rax
  size_t v102; // r15
  PVOID v103; // rax
  int v104; // r8d
  size_t v105; // rdi
  unsigned int v106; // eax
  SIZE_T v107; // rbx
  __int64 v108; // r12
  wchar_t *v109; // rax
  __int64 v110; // r12
  size_t v111; // r12
  SIZE_T v112; // rax
  SIZE_T v113; // rbx
  PVOID v114; // rax
  _OWORD *v115; // rax
  size_t v116; // r12
  size_t v117; // rbx
  PVOID v118; // rax
  _WORD *v119; // rcx
  __int64 v120; // rax
  char *v121; // rax
  char *v122; // rdi
  unsigned __int64 v123; // rbx
  SIZE_T v124; // rbx
  PVOID v125; // rax
  _OWORD *v126; // rax
  char *v127; // r12
  size_t v128; // rbx
  _OWORD *v129; // rax
  _OWORD *v130; // r15
  bool v131; // cc
  size_t v132; // rdi
  size_t v133; // rbx
  PVOID v134; // rax
  PVOID P; // [rsp+30h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-41h] BYREF
  PVOID v138; // [rsp+40h] [rbp-39h]
  void *Src; // [rsp+48h] [rbp-31h]
  PVOID v140; // [rsp+50h] [rbp-29h]
  PVOID HeapHandle; // [rsp+58h] [rbp-21h]
  size_t Size; // [rsp+60h] [rbp-19h]
  unsigned __int64 v143; // [rsp+68h] [rbp-11h]
  __int64 v144; // [rsp+70h] [rbp-9h]
  char *v145; // [rsp+78h] [rbp-1h]
  PVOID Ptr; // [rsp+80h] [rbp+7h]
  _OWORD *v149; // [rsp+F0h] [rbp+77h]
  _DWORD *v150; // [rsp+F0h] [rbp+77h]
  _OWORD *v151; // [rsp+F0h] [rbp+77h]
  unsigned int v152; // [rsp+F0h] [rbp+77h]
  unsigned int v153; // [rsp+F0h] [rbp+77h]
  unsigned int v154; // [rsp+F0h] [rbp+77h]
  PVOID v155; // [rsp+F8h] [rbp+7Fh]

  Handle = 0LL;
  P = 0LL;
  v2 = 0LL;
  v155 = 0LL;
  v143 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  v144 = 1024LL;
  Ptr = 0LL;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x400uLL);
  v5 = Heap;
  if ( !Heap )
  {
    v19 = -1073741801;
    AslLogCallPrintf(1, (unsigned int)"AslEnvBuildBasic", 1191, (unsigned int)"Out of memory");
    ProcessHeap = 0LL;
    v5 = (_OWORD *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    goto LABEL_366;
  }
  memset_0(Heap, 0, 0x400uLL);
  Ptr = v5;
  v6 = 22LL;
  v143 = 1024LL;
  v7 = 1024LL;
  v8 = 22LL;
  *v5 = *(_OWORD *)L"SystemRoot=";
  *((_DWORD *)v5 + 4) = *(_DWORD *)L"ot=";
  *((_WORD *)v5 + 10) = aSystemroot_0[10];
  NtSystemRoot = RtlDownlevelGetNtSystemRoot(0LL);
  v11 = (void *)RtlDownlevelGetNtSystemRoot(v10);
  v12 = -1LL;
  v138 = v11;
  v13 = 0LL;
  do
    ++v12;
  while ( *(_WORD *)(NtSystemRoot + 2 * v12) );
  v14 = 2 * v12;
  if ( v14 )
  {
    v15 = v14 + 22;
    if ( v14 + 22 < 0x16 )
    {
      v19 = -1073741811;
      goto LABEL_26;
    }
    if ( v15 > 0x400 )
    {
      v16 = v144 - 1 + v15;
      if ( v16 < v15 )
      {
        v19 = -1073741675;
        goto LABEL_26;
      }
      v7 = ~(v144 - 1) & v16;
      if ( v5 )
      {
        v18 = RtlReAllocateHeap(ProcessHeap, 0, v5, v7);
      }
      else
      {
        v17 = RtlAllocateHeap(ProcessHeap, 0, v7);
        v149 = v17;
        if ( !v17 )
        {
LABEL_13:
          v19 = -1073741801;
LABEL_26:
          v24 = 1201;
          goto LABEL_27;
        }
        memset_0(v17, 0, v7);
        v18 = v149;
      }
      if ( !v18 )
        goto LABEL_13;
      v5 = v18;
      Ptr = v18;
      v11 = v138;
      v143 = v7;
    }
    memcpy_0((char *)v5 + 22, v11, v14);
    v6 = v14 + 22;
    if ( v15 >= 0x16 )
      v8 = v14 + 22;
    v13 = 0LL;
  }
  v20 = v6 + 2;
  if ( v6 + 2 < v6 )
  {
    v19 = -1073741811;
    goto LABEL_364;
  }
  if ( v20 > v7 )
  {
    v21 = v144 - 1 + v20;
    if ( v21 < v20 )
    {
      v19 = -1073741675;
      goto LABEL_364;
    }
    v7 = ~(v144 - 1) & v21;
    if ( v5 )
    {
      v23 = RtlReAllocateHeap(ProcessHeap, 0, v5, v7);
    }
    else
    {
      v22 = RtlAllocateHeap(ProcessHeap, 0, v7);
      v23 = v22;
      if ( v22 )
        memset_0(v22, 0, v7);
    }
    v13 = 0LL;
    if ( !v23 )
    {
      v19 = -1073741801;
LABEL_364:
      v24 = 1205;
      goto LABEL_27;
    }
    v5 = v23;
    Ptr = v23;
    v143 = v7;
  }
  *(_WORD *)((char *)v5 + v6) = 0;
  v25 = v6 + 26;
  if ( v8 <= v20 )
    v8 = v6 + 2;
  if ( v25 < v20 )
  {
    v19 = -1073741811;
    goto LABEL_362;
  }
  if ( v25 > v7 )
  {
    v26 = v144 - 1 + v25;
    if ( v26 < v25 )
    {
      v19 = -1073741675;
      goto LABEL_362;
    }
    v7 = ~(v144 - 1) & v26;
    if ( v5 )
    {
      v28 = RtlReAllocateHeap(ProcessHeap, 0, v5, v7);
    }
    else
    {
      v27 = RtlAllocateHeap(ProcessHeap, 0, v7);
      v28 = v27;
      if ( !v27 )
      {
LABEL_44:
        v19 = -1073741801;
LABEL_362:
        v24 = 1209;
        goto LABEL_27;
      }
      memset_0(v27, 0, v7);
    }
    if ( !v28 )
      goto LABEL_44;
    v5 = v28;
    Ptr = v28;
    v143 = v7;
  }
  *(_OWORD *)((char *)v5 + v20) = *(_OWORD *)L"SystemDrive=";
  if ( v8 <= v25 )
    v8 = v20 + 24;
  *(_QWORD *)((char *)v5 + v20 + 16) = *(_QWORD *)L"ive=";
  v29 = (_DWORD *)RtlDownlevelGetNtSystemRoot(v13);
  v30 = v20 + 28;
  v150 = v29;
  if ( v20 + 28 < v20 + 24 )
  {
    v19 = -1073741811;
    goto LABEL_360;
  }
  if ( v30 <= v7 )
  {
    v34 = 0LL;
  }
  else
  {
    v31 = v144 - 1 + v30;
    if ( v31 < v30 )
    {
      v19 = -1073741675;
      goto LABEL_360;
    }
    v7 = ~(v144 - 1) & v31;
    if ( v5 )
    {
      v33 = RtlReAllocateHeap(ProcessHeap, 0, v5, v7);
    }
    else
    {
      v32 = RtlAllocateHeap(ProcessHeap, 0, v7);
      v33 = v32;
      if ( v32 )
        memset_0(v32, 0, v7);
    }
    v34 = 0LL;
    if ( !v33 )
    {
      v19 = -1073741801;
LABEL_360:
      v24 = 1213;
      goto LABEL_27;
    }
    v29 = v150;
    v5 = v33;
    Ptr = v33;
    v143 = v7;
  }
  v35 = v25 + 6;
  *(_DWORD *)((char *)v5 + v25) = *v29;
  if ( v8 <= v30 )
    v8 = v25 + 4;
  if ( v35 < v30 )
  {
    v19 = -1073741811;
    goto LABEL_358;
  }
  if ( v35 > v7 )
  {
    v36 = v35 + v144 - 1;
    if ( v36 < v35 )
    {
      v19 = -1073741675;
      goto LABEL_358;
    }
    v7 = ~(v144 - 1) & v36;
    if ( v5 )
    {
      v38 = RtlReAllocateHeap(ProcessHeap, 0, v5, v7);
    }
    else
    {
      v37 = RtlAllocateHeap(ProcessHeap, 0, v7);
      v38 = v37;
      if ( v37 )
        memset_0(v37, 0, v7);
    }
    v34 = 0LL;
    if ( !v38 )
    {
      v19 = -1073741801;
LABEL_358:
      v24 = 1219;
      goto LABEL_27;
    }
    v5 = v38;
    Ptr = v38;
    v143 = v7;
  }
  *(_WORD *)((char *)v5 + v30) = 0;
  v39 = v30 + 16;
  if ( v8 <= v35 )
    v8 = v35;
  if ( v39 < v35 )
  {
    v19 = -1073741811;
    goto LABEL_356;
  }
  if ( v39 > v7 )
  {
    v40 = v39 + v144 - 1;
    if ( v40 < v39 )
    {
      v19 = -1073741675;
      goto LABEL_356;
    }
    v7 = ~(v144 - 1) & v40;
    if ( v5 )
    {
      v42 = RtlReAllocateHeap(ProcessHeap, 0, v5, v7);
    }
    else
    {
      v41 = RtlAllocateHeap(ProcessHeap, 0, v7);
      v42 = v41;
      if ( !v41 )
      {
LABEL_84:
        v19 = -1073741801;
LABEL_356:
        v24 = 1223;
        goto LABEL_27;
      }
      memset_0(v41, 0, v7);
    }
    if ( !v42 )
      goto LABEL_84;
    v5 = v42;
    Ptr = v42;
    v143 = v7;
  }
  *(_QWORD *)((char *)v5 + v35) = *(_QWORD *)L"WinDir=";
  if ( v8 <= v39 )
    v8 = v35 + 14;
  *(_DWORD *)((char *)v5 + v35 + 8) = *(_DWORD *)L"ir=";
  *(_WORD *)((char *)v5 + v35 + 12) = aWindir_0[6];
  v43 = RtlDownlevelGetNtSystemRoot(v34);
  v45 = (void *)RtlDownlevelGetNtSystemRoot(v44);
  v46 = -1LL;
  v138 = v45;
  do
    ++v46;
  while ( *(_WORD *)(v43 + 2 * v46) );
  v47 = 2 * v46;
  if ( v47 )
  {
    v48 = v47 + v39;
    if ( v47 + v39 < v39 )
    {
      v19 = -1073741811;
      goto LABEL_112;
    }
    if ( v48 > v7 )
    {
      v49 = v48 + v144 - 1;
      if ( v49 < v48 )
      {
        v19 = -1073741675;
        goto LABEL_112;
      }
      v7 = ~(v144 - 1) & v49;
      if ( v5 )
      {
        v51 = RtlReAllocateHeap(ProcessHeap, 0, v5, v7);
      }
      else
      {
        v50 = RtlAllocateHeap(ProcessHeap, 0, v7);
        v151 = v50;
        if ( !v50 )
        {
LABEL_100:
          v19 = -1073741801;
LABEL_112:
          v24 = 1225;
          goto LABEL_27;
        }
        memset_0(v50, 0, v7);
        v51 = v151;
      }
      if ( !v51 )
        goto LABEL_100;
      v5 = v51;
      Ptr = v51;
      v45 = v138;
      v143 = v7;
    }
    memcpy_0((char *)v5 + v39, v45, v47);
    v39 += v47;
    if ( v8 <= v48 )
      v8 = v48;
  }
  v52 = v39 + 2;
  if ( v39 + 2 < v39 )
  {
    v19 = -1073741811;
    goto LABEL_354;
  }
  if ( v52 > v7 )
  {
    v53 = v52 + v144 - 1;
    if ( v53 < v52 )
    {
      v19 = -1073741675;
      goto LABEL_354;
    }
    v7 = ~(v144 - 1) & v53;
    if ( v5 )
    {
      v55 = RtlReAllocateHeap(ProcessHeap, 0, v5, v7);
    }
    else
    {
      v54 = RtlAllocateHeap(ProcessHeap, 0, v7);
      v55 = v54;
      if ( v54 )
        memset_0(v54, 0, v7);
    }
    if ( !v55 )
    {
      v19 = -1073741801;
LABEL_354:
      v24 = 1229;
      goto LABEL_27;
    }
    v5 = v55;
    Ptr = v55;
    v143 = v7;
  }
  *(_WORD *)((char *)v5 + v39) = 0;
  v145 = (char *)(v39 + 2);
  if ( v8 <= v52 )
    v8 = v39 + 2;
  Size = v8;
  if ( (int)AslRegistryOpenKey(&Handle) >= 0 )
  {
    for ( i = 0; ; i = v152 + 1 )
    {
      v152 = i;
      if ( i >= 3 )
        break;
      v57 = 2LL * i;
      if ( (int)AslRegistryGetString(&P, Handle, off_18075D6D0[2 * i]) >= 0 )
      {
        v58 = off_18075D6D8[v57];
        v59 = -1LL;
        Src = v58;
        do
          ++v59;
        while ( v58[v59] );
        v60 = 2 * v59;
        if ( v60 )
        {
          v61 = v60 + v52;
          v140 = (PVOID)(v60 + v52);
          if ( v60 + v52 < v52 )
          {
            v19 = -1073741811;
            goto LABEL_180;
          }
          if ( v61 > v7 )
          {
            v62 = v61 + v144 - 1;
            if ( v62 < v61 )
            {
              v19 = -1073741675;
              goto LABEL_180;
            }
            v7 = ~(v144 - 1) & v62;
            if ( v5 )
            {
              v64 = RtlReAllocateHeap(ProcessHeap, 0, v5, v7);
            }
            else
            {
              v63 = RtlAllocateHeap(ProcessHeap, 0, v7);
              v138 = v63;
              if ( !v63 )
                goto LABEL_177;
              memset_0(v63, 0, v7);
              v64 = v138;
            }
            if ( !v64 )
            {
LABEL_177:
              v19 = -1073741801;
LABEL_180:
              v24 = 1247;
              goto LABEL_27;
            }
            v5 = v64;
            Ptr = v64;
            v143 = v7;
          }
          memcpy_0((char *)v5 + v52, Src, v60);
          v52 = (size_t)v140;
          if ( v8 <= (unsigned __int64)v140 )
            v8 = (unsigned __int64)v140;
        }
        v65 = v52 + 2;
        if ( v52 + 2 < v52 )
        {
          v19 = -1073741811;
          goto LABEL_192;
        }
        if ( v65 > v7 )
        {
          v66 = v65 + v144 - 1;
          if ( v66 < v65 )
          {
            v19 = -1073741675;
            goto LABEL_192;
          }
          v7 = ~(v144 - 1) & v66;
          if ( v5 )
          {
            v67 = RtlReAllocateHeap(ProcessHeap, 0, v5, v7);
          }
          else
          {
            v67 = RtlAllocateHeap(ProcessHeap, 0, v7);
            v140 = v67;
            if ( v67 )
            {
              memset_0(v67, 0, v7);
              v67 = v140;
            }
          }
          if ( !v67 )
          {
            v19 = -1073741801;
LABEL_192:
            v24 = 1249;
            goto LABEL_27;
          }
          v5 = v67;
          Ptr = v67;
          v143 = v7;
        }
        v68 = P;
        *(_WORD *)((char *)v5 + v52) = 61;
        if ( v8 <= v65 )
          v8 = v52 + 2;
        v145 = (char *)(v52 + 2);
        Size = v8;
        v69 = -1LL;
        do
          ++v69;
        while ( v68[v69] );
        v70 = 2 * v69 == 0;
        v71 = (char *)(2 * v69);
        Src = v71;
        if ( !v70 )
        {
          v72 = &v71[v65];
          if ( (unsigned __int64)&v71[v65] < v65 )
          {
            v19 = -1073741811;
            goto LABEL_186;
          }
          if ( (unsigned __int64)v72 > v7 )
          {
            v73 = (unsigned __int64)&v72[v144 - 1];
            if ( v73 < (unsigned __int64)v72 )
            {
              v19 = -1073741675;
              goto LABEL_186;
            }
            v74 = ~(v144 - 1) & v73;
            if ( v5 )
            {
              v76 = RtlReAllocateHeap(ProcessHeap, 0, v5, v74);
            }
            else
            {
              v75 = RtlAllocateHeap(ProcessHeap, 0, v74);
              v140 = v75;
              if ( !v75 )
                goto LABEL_183;
              memset_0(v75, 0, v74);
              v76 = v140;
            }
            if ( !v76 )
            {
LABEL_183:
              v19 = -1073741801;
LABEL_186:
              v24 = 1251;
              goto LABEL_27;
            }
            v5 = v76;
            Ptr = v76;
            v71 = (char *)Src;
            v143 = v74;
          }
          memcpy_0((char *)v5 + v65, P, (size_t)v71);
          v145 = v72;
          if ( v8 <= (unsigned __int64)v72 )
            v8 = (unsigned __int64)v72;
          Size = v8;
        }
        AslFree(NtCurrentPeb()->ProcessHeap, P);
        v77 = v145;
        v5 = Ptr;
        ProcessHeap = HeapHandle;
        P = 0LL;
        v52 = (size_t)(v145 + 2);
        if ( v145 + 2 < v145 )
        {
          v19 = -1073741811;
          goto LABEL_190;
        }
        v7 = v143;
        if ( v52 > v143 )
        {
          v78 = v52 + v144 - 1;
          if ( v78 < v52 )
          {
            v19 = -1073741675;
            goto LABEL_190;
          }
          v7 = ~(v144 - 1) & v78;
          if ( Ptr )
          {
            v80 = RtlReAllocateHeap(HeapHandle, 0, Ptr, v7);
          }
          else
          {
            v79 = RtlAllocateHeap(HeapHandle, 0, v7);
            v80 = v79;
            if ( v79 )
              memset_0(v79, 0, v7);
          }
          if ( !v80 )
          {
            v19 = -1073741801;
LABEL_190:
            v24 = 1258;
            goto LABEL_27;
          }
          v5 = v80;
          Ptr = v80;
          v143 = v7;
        }
        *(_WORD *)((char *)v5 + (_QWORD)v77) = 0;
        v8 = Size;
        v145 = (char *)v52;
        if ( Size <= v52 )
          v8 = v52;
        Size = v8;
      }
    }
    ZwClose(Handle);
    Handle = 0LL;
  }
  v19 = AslRegistryOpenKey(&Handle);
  if ( v19 < 0 )
  {
    AslLogCallPrintf(1, (unsigned int)"AslEnvBuildBasic", 1275, (unsigned int)"Failed to open reg key [%x]");
    goto LABEL_28;
  }
  for ( j = 0; ; j = v153 + 1 )
  {
    v153 = j;
    if ( j >= 4 )
      break;
    v82 = 2LL * j;
    if ( (int)AslRegistryGetString(&P, Handle, off_18075D720[2 * j]) >= 0 )
    {
      v83 = off_18075D728[v82];
      v84 = -1LL;
      Src = v83;
      do
        ++v84;
      while ( v83[v84] );
      v85 = 2 * v84;
      if ( v85 )
      {
        v86 = v85 + v52;
        v138 = (PVOID)(v85 + v52);
        if ( v85 + v52 < v52 )
        {
          v19 = -1073741811;
          goto LABEL_257;
        }
        if ( v86 > v7 )
        {
          v87 = v86 + v144 - 1;
          if ( v87 < v86 )
          {
            v19 = -1073741675;
            goto LABEL_257;
          }
          v7 = ~(v144 - 1) & v87;
          if ( v5 )
          {
            v89 = RtlReAllocateHeap(ProcessHeap, 0, v5, v7);
          }
          else
          {
            v88 = RtlAllocateHeap(ProcessHeap, 0, v7);
            v140 = v88;
            if ( !v88 )
              goto LABEL_254;
            memset_0(v88, 0, v7);
            v89 = v140;
          }
          if ( !v89 )
          {
LABEL_254:
            v19 = -1073741801;
LABEL_257:
            v24 = 1285;
            goto LABEL_27;
          }
          v5 = v89;
          Ptr = v89;
          v143 = v7;
        }
        memcpy_0((char *)v5 + v52, Src, v85);
        v52 = (size_t)v138;
        if ( v8 <= (unsigned __int64)v138 )
          v8 = (unsigned __int64)v138;
      }
      v90 = (char *)(v52 + 2);
      if ( v52 + 2 < v52 )
      {
        v19 = -1073741811;
        goto LABEL_269;
      }
      if ( (unsigned __int64)v90 > v7 )
      {
        v91 = (unsigned __int64)&v90[v144 - 1];
        if ( v91 < (unsigned __int64)v90 )
        {
          v19 = -1073741675;
          goto LABEL_269;
        }
        v7 = ~(v144 - 1) & v91;
        if ( v5 )
        {
          v92 = RtlReAllocateHeap(ProcessHeap, 0, v5, v7);
        }
        else
        {
          v92 = RtlAllocateHeap(ProcessHeap, 0, v7);
          v140 = v92;
          if ( v92 )
          {
            memset_0(v92, 0, v7);
            v92 = v140;
          }
        }
        if ( !v92 )
        {
          v19 = -1073741801;
LABEL_269:
          v24 = 1287;
          goto LABEL_27;
        }
        v5 = v92;
        Ptr = v92;
        v143 = v7;
      }
      v93 = P;
      *(_WORD *)((char *)v5 + v52) = 61;
      if ( v8 <= (unsigned __int64)v90 )
        v8 = v52 + 2;
      v145 = (char *)(v52 + 2);
      Size = v8;
      v94 = -1LL;
      do
        ++v94;
      while ( v93[v94] );
      v95 = 2 * v94;
      if ( v95 )
      {
        v96 = &v90[v95];
        Src = &v90[v95];
        if ( &v90[v95] < v90 )
        {
          v19 = -1073741811;
          goto LABEL_263;
        }
        if ( (unsigned __int64)v96 > v7 )
        {
          v97 = (unsigned __int64)&v96[v144 - 1];
          if ( v97 < (unsigned __int64)v96 )
          {
            v19 = -1073741675;
            goto LABEL_263;
          }
          v7 = ~(v144 - 1) & v97;
          if ( v5 )
          {
            v99 = RtlReAllocateHeap(ProcessHeap, 0, v5, v7);
          }
          else
          {
            v98 = RtlAllocateHeap(ProcessHeap, 0, v7);
            v140 = v98;
            if ( !v98 )
              goto LABEL_260;
            memset_0(v98, 0, v7);
            v99 = v140;
          }
          if ( !v99 )
          {
LABEL_260:
            v19 = -1073741801;
LABEL_263:
            v24 = 1289;
            goto LABEL_27;
          }
          v5 = v99;
          Ptr = v99;
          v143 = v7;
        }
        memcpy_0((char *)v5 + (_QWORD)v90, P, v95);
        v145 = (char *)Src;
        v90 = (char *)Src;
        if ( v8 <= (unsigned __int64)Src )
          v8 = (unsigned __int64)Src;
        Size = v8;
      }
      if ( P )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
        v5 = Ptr;
        v90 = v145;
        v7 = v143;
        v8 = Size;
        ProcessHeap = HeapHandle;
      }
      v52 = (size_t)(v90 + 2);
      P = 0LL;
      if ( v90 + 2 < v90 )
      {
        v19 = -1073741811;
        goto LABEL_267;
      }
      if ( v52 > v7 )
      {
        v100 = v52 + v144 - 1;
        if ( v100 < v52 )
        {
          v19 = -1073741675;
          goto LABEL_267;
        }
        v7 = ~(v144 - 1) & v100;
        if ( v5 )
        {
          v101 = RtlReAllocateHeap(ProcessHeap, 0, v5, v7);
        }
        else
        {
          v101 = RtlAllocateHeap(ProcessHeap, 0, v7);
          v140 = v101;
          if ( v101 )
          {
            memset_0(v101, 0, v7);
            v101 = v140;
          }
        }
        if ( !v101 )
        {
          v19 = -1073741801;
LABEL_267:
          v24 = 1296;
          goto LABEL_27;
        }
        v5 = v101;
        Ptr = v101;
        v143 = v7;
      }
      *(_WORD *)((char *)v5 + (_QWORD)v90) = 0;
      v145 = v90 + 2;
      if ( v8 <= v52 )
        v8 = (unsigned __int64)(v90 + 2);
      Size = v8;
    }
  }
  ZwClose(Handle);
  Handle = 0LL;
  v102 = Size;
  v103 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size + 2);
  v155 = v103;
  v2 = v103;
  if ( !v103 )
  {
    v104 = 1311;
LABEL_272:
    v19 = -1073741801;
    AslLogCallPrintf(1, (unsigned int)"AslEnvBuildBasic", v104, (unsigned int)"Out of memory");
    v5 = Ptr;
LABEL_273:
    ProcessHeap = HeapHandle;
    goto LABEL_366;
  }
  v5 = Ptr;
  memcpy_0(v103, Ptr, v102);
  v19 = AslRegistryOpenKey(&Handle);
  if ( v19 < 0 )
  {
    AslLogCallPrintf(1, (unsigned int)"AslEnvBuildBasic", 1321, (unsigned int)"Failed to open reg key [%x]");
    goto LABEL_273;
  }
  v105 = (size_t)v145;
  v106 = 0;
  ProcessHeap = HeapHandle;
  v107 = v143;
  while ( 1 )
  {
    v154 = v106;
    if ( v106 >= 2 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v155);
      v132 = Size;
      v133 = Size + 2;
      v134 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size + 2);
      v2 = v134;
      if ( v134 )
      {
        v5 = Ptr;
        memcpy_0(v134, Ptr, v132);
        *a1 = v2;
        v2 = 0LL;
        *a2 = v133 >> 1;
        v19 = 0;
        goto LABEL_273;
      }
      v104 = 1370;
      goto LABEL_272;
    }
    v108 = 2LL * v106;
    if ( (int)AslRegistryGetStringExpand(&P, Handle, off_18075D700[2 * v106], v155) >= 0 )
      break;
LABEL_333:
    v106 = v154 + 1;
  }
  if ( wcschr((const wchar_t *)P, 0x25u) )
  {
    AslLogCallPrintf(1, (unsigned int)"AslEnvBuildBasic", 1338, (unsigned int)"Failed to expand: %ls %ls");
    AslFree(NtCurrentPeb()->ProcessHeap, P);
    v5 = Ptr;
    v105 = (size_t)v145;
    v107 = v143;
    v102 = Size;
    ProcessHeap = HeapHandle;
    P = 0LL;
    goto LABEL_333;
  }
  v109 = off_18075D708[v108];
  v110 = -1LL;
  Src = v109;
  do
    ++v110;
  while ( v109[v110] );
  v111 = 2 * v110;
  if ( v111 )
  {
    v112 = v111 + v105;
    v138 = (PVOID)(v111 + v105);
    if ( v111 + v105 < v105 )
    {
      v19 = -1073741811;
      goto LABEL_337;
    }
    if ( v112 > v107 )
    {
      v113 = v112 + v144 - 1;
      if ( v113 < v112 )
      {
        v19 = -1073741675;
        goto LABEL_337;
      }
      v107 = ~(v144 - 1) & v113;
      if ( v5 )
      {
        v115 = RtlReAllocateHeap(ProcessHeap, 0, v5, v107);
      }
      else
      {
        v114 = RtlAllocateHeap(ProcessHeap, 0, v107);
        v140 = v114;
        if ( !v114 )
          goto LABEL_334;
        memset_0(v114, 0, v107);
        v115 = v140;
      }
      if ( !v115 )
      {
LABEL_334:
        v19 = -1073741801;
LABEL_337:
        v24 = 1344;
        goto LABEL_27;
      }
      v5 = v115;
      Ptr = v115;
      v143 = v107;
    }
    memcpy_0((char *)v5 + v105, Src, v111);
    v105 = (size_t)v138;
    if ( v102 <= (unsigned __int64)v138 )
      v102 = (size_t)v138;
  }
  v116 = v105 + 2;
  if ( v105 + 2 >= v105 )
  {
    if ( v116 > v107 )
    {
      v117 = v144 - 1 + v116;
      if ( v117 < v116 )
      {
        v19 = -1073741675;
        goto LABEL_349;
      }
      v107 = ~(v144 - 1) & v117;
      if ( v5 )
      {
        v118 = RtlReAllocateHeap(ProcessHeap, 0, v5, v107);
      }
      else
      {
        v118 = RtlAllocateHeap(ProcessHeap, 0, v107);
        v140 = v118;
        if ( v118 )
        {
          memset_0(v118, 0, v107);
          v118 = v140;
        }
      }
      if ( !v118 )
      {
        v19 = -1073741801;
        goto LABEL_349;
      }
      v5 = v118;
      Ptr = v118;
      v143 = v107;
    }
    v119 = P;
    *(_WORD *)((char *)v5 + v105) = 61;
    if ( v102 <= v116 )
      v102 = v105 + 2;
    v145 = (char *)(v105 + 2);
    Size = v102;
    v120 = -1LL;
    do
      ++v120;
    while ( v119[v120] );
    v70 = 2 * v120 == 0;
    v121 = (char *)(2 * v120);
    Src = v121;
    if ( v70 )
    {
LABEL_321:
      AslFree(NtCurrentPeb()->ProcessHeap, P);
      v127 = v145;
      v5 = Ptr;
      ProcessHeap = HeapHandle;
      P = 0LL;
      v105 = (size_t)(v145 + 2);
      if ( v145 + 2 < v145 )
      {
        v19 = -1073741811;
      }
      else
      {
        v107 = v143;
        if ( v105 <= v143 )
        {
LABEL_330:
          v102 = Size;
          v131 = Size <= v105;
          *(_WORD *)((char *)v5 + (_QWORD)v127) = 0;
          v145 = (char *)v105;
          if ( v131 )
            v102 = v105;
          Size = v102;
          goto LABEL_333;
        }
        v128 = v144 - 1 + v105;
        if ( v128 < v105 )
        {
          v19 = -1073741675;
        }
        else
        {
          v107 = ~(v144 - 1) & v128;
          if ( Ptr )
          {
            v130 = RtlReAllocateHeap(HeapHandle, 0, Ptr, v107);
          }
          else
          {
            v129 = RtlAllocateHeap(HeapHandle, 0, v107);
            v130 = v129;
            if ( v129 )
              memset_0(v129, 0, v107);
          }
          if ( v130 )
          {
            v5 = v130;
            Ptr = v130;
            v143 = v107;
            goto LABEL_330;
          }
          v19 = -1073741801;
        }
      }
      v24 = 1355;
      goto LABEL_27;
    }
    v122 = &v121[v116];
    if ( (unsigned __int64)&v121[v116] < v116 )
    {
      v19 = -1073741811;
    }
    else
    {
      if ( (unsigned __int64)v122 <= v107 )
      {
LABEL_318:
        memcpy_0((char *)v5 + v116, P, (size_t)v121);
        v145 = v122;
        if ( v102 <= (unsigned __int64)v122 )
          v102 = (size_t)v122;
        Size = v102;
        goto LABEL_321;
      }
      v123 = (unsigned __int64)&v122[v144 - 1];
      if ( v123 >= (unsigned __int64)v122 )
      {
        v124 = ~(v144 - 1) & v123;
        if ( v5 )
        {
          v126 = RtlReAllocateHeap(ProcessHeap, 0, v5, v124);
        }
        else
        {
          v125 = RtlAllocateHeap(ProcessHeap, 0, v124);
          v140 = v125;
          if ( !v125 )
            goto LABEL_340;
          memset_0(v125, 0, v124);
          v126 = v140;
        }
        if ( !v126 )
        {
LABEL_340:
          v19 = -1073741801;
          goto LABEL_343;
        }
        v5 = v126;
        Ptr = v126;
        v121 = (char *)Src;
        v143 = v124;
        goto LABEL_318;
      }
      v19 = -1073741675;
    }
LABEL_343:
    v24 = 1348;
    goto LABEL_27;
  }
  v19 = -1073741811;
LABEL_349:
  v24 = 1346;
LABEL_27:
  AslLogCallPrintf(1, (unsigned int)"AslEnvBuildBasic", v24, (unsigned int)"Out of memory");
LABEL_28:
  v2 = v155;
LABEL_366:
  if ( v5 )
    RtlFreeHeap(ProcessHeap, 0, v5);
  if ( P )
    AslFree(NtCurrentPeb()->ProcessHeap, P);
  if ( v2 )
    AslFree(NtCurrentPeb()->ProcessHeap, v2);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v19;
}

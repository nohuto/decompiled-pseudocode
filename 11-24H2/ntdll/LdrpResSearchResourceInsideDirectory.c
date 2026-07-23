/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x1800969C0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180096010 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x18009856C (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     LdrpTraceLoadMUIDll @ 0x18009540C (LdrpTraceLoadMUIDll.c)
 *     LdrpResCompareResourceNames @ 0x180097BB0 (LdrpResCompareResourceNames.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x180097EA0 (LdrpSectionTableFromVirtualAddress.c)
 *     LdrpResReadFile @ 0x180098460 (LdrpResReadFile.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpResSearchResourceInsideDirectory(
        __int64 a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        int a8,
        __int64 a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11,
        int a12,
        _WORD *a13)
{
  unsigned __int64 v13; // rbx
  __int64 v15; // r13
  __int64 *v16; // r14
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // r9d
  int v20; // r12d
  bool v21; // di
  int v22; // r8d
  unsigned __int64 v23; // rsi
  unsigned int *v24; // r10
  signed __int16 *v25; // r11
  PVOID Heap; // rdi
  __int64 v27; // rax
  _DWORD *v28; // r14
  _DWORD *v29; // r15
  int v30; // r12d
  int v31; // edi
  int v32; // r15d
  __int64 result; // rax
  unsigned __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // r15
  HANDLE v37; // r14
  unsigned __int64 v38; // r11
  int v39; // ebx
  _DWORD *v40; // r13
  unsigned __int64 v41; // rax
  char *v42; // rcx
  bool v43; // zf
  char v44; // r12
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // r9d
  int v49; // ecx
  __int64 v50; // rdx
  int v51; // edx
  int v52; // edx
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rsi
  unsigned __int64 v55; // r15
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // r9
  unsigned __int64 *v60; // r8
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // r8
  __int64 v64; // rcx
  __int16 v65; // ax
  unsigned int v66; // eax
  __int64 v67; // r14
  unsigned __int64 v68; // r14
  __int64 v69; // rax
  __int64 v70; // rdi
  __int64 v71; // rax
  unsigned __int64 v72; // r9
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  int v75; // ecx
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // r13
  __int64 v78; // rcx
  int v79; // [rsp+40h] [rbp-188h]
  unsigned int v80; // [rsp+40h] [rbp-188h]
  PVOID BaseAddress; // [rsp+48h] [rbp-180h]
  bool v82; // [rsp+50h] [rbp-178h]
  char v83; // [rsp+51h] [rbp-177h]
  int v84; // [rsp+54h] [rbp-174h]
  unsigned __int16 v85; // [rsp+58h] [rbp-170h]
  unsigned int *v86; // [rsp+60h] [rbp-168h]
  unsigned __int64 v87; // [rsp+68h] [rbp-160h]
  char v88; // [rsp+70h] [rbp-158h]
  int v89; // [rsp+74h] [rbp-154h]
  int v90; // [rsp+78h] [rbp-150h]
  __int64 v91; // [rsp+80h] [rbp-148h]
  unsigned int *v92; // [rsp+88h] [rbp-140h]
  int v93; // [rsp+90h] [rbp-138h]
  signed __int16 v96; // [rsp+A8h] [rbp-120h]
  int v97; // [rsp+ACh] [rbp-11Ch]
  int v98; // [rsp+B0h] [rbp-118h] BYREF
  unsigned __int64 v99; // [rsp+B8h] [rbp-110h]
  HANDLE FileHandle; // [rsp+C0h] [rbp-108h]
  __int64 v101; // [rsp+C8h] [rbp-100h]
  _DWORD *v102; // [rsp+D0h] [rbp-F8h]
  _DWORD *v103; // [rsp+D8h] [rbp-F0h]
  __int64 v104; // [rsp+E0h] [rbp-E8h]
  __int64 v105; // [rsp+E8h] [rbp-E0h]
  int v106; // [rsp+F0h] [rbp-D8h]
  __int64 v107; // [rsp+F8h] [rbp-D0h]
  __int64 v108; // [rsp+100h] [rbp-C8h]
  __int64 v109; // [rsp+108h] [rbp-C0h]
  unsigned __int64 v110; // [rsp+110h] [rbp-B8h]
  unsigned __int64 *v111; // [rsp+118h] [rbp-B0h]
  _QWORD v112[2]; // [rsp+120h] [rbp-A8h] BYREF
  _QWORD v113[2]; // [rsp+130h] [rbp-98h] BYREF
  _DWORD *v114; // [rsp+140h] [rbp-88h]
  _WORD *v115; // [rsp+148h] [rbp-80h]
  unsigned __int64 *v116; // [rsp+150h] [rbp-78h]
  __int64 v117; // [rsp+158h] [rbp-70h]
  __int128 v118; // [rsp+160h] [rbp-68h]
  __int128 v119; // [rsp+170h] [rbp-58h] BYREF

  v13 = a4;
  FileHandle = a2;
  v15 = a1;
  v101 = a1;
  v108 = a5;
  v105 = a6;
  v16 = a7;
  v107 = (__int64)a7;
  v104 = a9;
  v111 = a10;
  v116 = a11;
  v115 = a13;
  v98 = 0;
  v118 = 0LL;
  v96 = 0;
  LOWORD(v91) = 0;
  v119 = 0LL;
  BaseAddress = 0LL;
  v93 = 0;
  v85 = 0;
  v112[0] = 5636180LL;
  v112[1] = L"LdrpResSearchResourceInsideDirectory Enter";
  v113[0] = 5505106LL;
  v113[1] = L"LdrpResSearchResourceInsideDirectory Exit";
  if ( RtlGetCurrentServiceSessionId() )
  {
    v17 = (__int64)NtCurrentPeb()->SharedData + 555;
    v93 = 0;
  }
  else
  {
    v17 = 2147353477LL;
  }
  if ( (*(_BYTE *)v17 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v78 = (__int64)NtCurrentPeb()->SharedData + 554;
      v93 = 0;
    }
    else
    {
      v78 = 2147353476LL;
    }
    LdrpTraceLoadMUIDll((unsigned __int16 *)v112, *(unsigned __int8 *)v78);
  }
  if ( !v13 )
    return 3221225485LL;
  if ( !a5 )
    return 3221225485LL;
  if ( !a7 )
    return 3221225485LL;
  v18 = a8;
  if ( (unsigned int)(a8 - 1) > 3 )
    return 3221225485LL;
  v19 = a12;
  v84 = a12;
  if ( (a12 & 0x8000) != 0 && ((char *)FileHandle - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || !v105) )
    return 3221225485LL;
  v20 = a12 & 0x1000;
  v90 = v20;
  v83 = v20 != 0;
  v21 = (a12 & 0x8800) == 34816;
  v82 = v21;
  if ( (a12 & 0x1000) != 0 && !a3 )
    return 3221225485LL;
  if ( (a12 & 0x8800) != 0x8800 && !v15 || v21 && !FileHandle )
    return 3221225485LL;
  v109 = (__int64)a7;
  v22 = a8;
  v23 = v13;
  v24 = 0LL;
  v86 = 0LL;
  v92 = 0LL;
  v87 = 0LL;
  if ( a13 )
    *a13 = 0;
  v25 = (signed __int16 *)v104;
LABEL_44:
  if ( !v23 || (v35 = v22, --v22, v97 = v22, v106 = v22, !v35) )
  {
    LOWORD(v32) = v91;
    goto LABEL_80;
  }
  v36 = *v16;
  v91 = *v16;
  if ( !v22 && v18 == 3 )
  {
    v87 = v23;
    if ( !v25 )
    {
      v80 = -1073741811;
      goto LABEL_18;
    }
    v96 = *v25;
    v93 = 0;
    v85 = 0;
    if ( (~(_BYTE)v19 & 4) != 0 )
    {
      v36 = (unsigned __int16)v25[2];
      v91 = v36;
    }
  }
  v37 = FileHandle;
  if ( v21 )
  {
    result = LdrpResReadFile(FileHandle);
    v79 = result;
    if ( (int)result < 0 )
      return result;
    v22 = v97;
    v19 = v84;
    v24 = v86;
  }
  else if ( v20 )
  {
    if ( v23 + 24 < v23 )
      goto LABEL_17;
    v38 = a3;
    if ( v23 + 24 > a3 + (v15 & 0xFFFFFFFFFFFFFFFCuLL) )
      goto LABEL_17;
    goto LABEL_51;
  }
  v38 = a3;
LABEL_51:
  if ( v21 )
    v39 = WORD6(v118);
  else
    v39 = *(unsigned __int16 *)(v23 + 12);
  v89 = v39;
  if ( v39 && v20 )
  {
    v50 = 8LL * (unsigned int)v39;
    v117 = v50;
    if ( v23 + v50 + 16 < v23 )
      goto LABEL_17;
    if ( v50 + v23 + 16 > v38 + (v15 & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      v80 = -1073741701;
      goto LABEL_18;
    }
  }
  v40 = (_DWORD *)(v23 + 16);
  v103 = (_DWORD *)(v23 + 16);
  if ( (v36 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( v39 )
    {
      if ( v20 && (_DWORD *)((char *)v40 + v39) < v40 )
      {
        v80 = -1073741701;
        goto LABEL_18;
      }
      v40 += 2 * v39;
      v103 = v40;
    }
    v39 = HIWORD(v118);
    if ( !v21 )
      v39 = *(unsigned __int16 *)(v23 + 14);
    v89 = v39;
    if ( v20 )
    {
      v41 = 8LL * (unsigned int)v39;
      v112[0] = v41;
      if ( v41 > 0xFFFFFFFF )
        goto LABEL_17;
      v42 = (char *)v40 + (unsigned int)v41;
      if ( v42 < (char *)v40 )
        goto LABEL_17;
      if ( (unsigned __int64)v42 > v38 + (v101 & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        v80 = -1073741701;
        goto LABEL_18;
      }
    }
  }
  if ( !v39 )
  {
    v99 = 0LL;
    v18 = a8;
    goto LABEL_82;
  }
  if ( !v21 )
    goto LABEL_31;
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v39 = v89;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v39);
  BaseAddress = Heap;
  if ( !Heap )
  {
    v80 = -1073741801;
    goto LABEL_19;
  }
  v39 = v89;
  result = LdrpResReadFile(v37);
  v79 = result;
  if ( (int)result >= 0 )
  {
    v40 = Heap;
    v103 = Heap;
    v19 = a12;
    v84 = a12;
    v24 = v92;
    v86 = v92;
    v107 = v109;
    v97 = v106;
    v93 = v85;
LABEL_31:
    if ( v87 && (v19 & 0x20) != 0 )
    {
      v23 = 0LL;
      v99 = 0LL;
      v47 = (unsigned int)v40[1];
      v13 = a4;
      if ( v20 )
      {
        v24 = (unsigned int *)(a4 + v47);
        v86 = (unsigned int *)(a4 + v47);
        if ( a4 + v47 < a4 )
        {
          v80 = -1073741701;
          goto LABEL_18;
        }
      }
      else
      {
        v24 = (unsigned int *)(v47 + a4);
        v86 = (unsigned int *)(v47 + a4);
      }
      v32 = *v40;
      v21 = v82;
      v22 = v97;
      v15 = v101;
      v18 = a8;
      goto LABEL_80;
    }
LABEL_32:
    v23 = 0LL;
    v99 = 0LL;
    v28 = v40;
    v103 = v40;
    v29 = &v40[2 * v39 - 2];
    v114 = v29;
    v30 = v39;
    v31 = v39;
    while ( 1 )
    {
      if ( v28 > v29 )
      {
        LOWORD(v32) = v91;
        goto LABEL_93;
      }
      v31 >>= 1;
      if ( !v31 )
      {
        LOWORD(v32) = v91;
        if ( v30 )
        {
          result = LdrpResCompareResourceNames(v101, FileHandle, a3, v91, a4, v28, v19, &v98, v79);
          v79 = result;
          if ( (int)result < 0 )
            return result;
          v20 = v90;
          if ( v98 )
            goto LABEL_38;
          v46 = (unsigned int)v28[1];
          if ( (int)v46 < 0 )
          {
            if ( !v90 )
            {
              v23 = a4 + (v46 & 0xFFFFFFFF7FFFFFFFuLL);
              v99 = v23;
              goto LABEL_38;
            }
            if ( !v87 )
            {
              LODWORD(v46) = v46 & 0x7FFFFFFF;
              v23 = a4 + v46;
              if ( a4 + v46 >= a4 )
              {
                v99 = a4 + v46;
                goto LABEL_38;
              }
              goto LABEL_17;
            }
            v80 = -1073741701;
LABEL_18:
            Heap = BaseAddress;
LABEL_19:
            if ( Heap )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
            if ( RtlGetCurrentServiceSessionId() )
              v27 = (__int64)NtCurrentPeb()->SharedData + 555;
            else
              v27 = 2147353477LL;
            if ( (*(_BYTE *)v27 & 1) != 0 )
            {
              if ( RtlGetCurrentServiceSessionId() )
                LdrpTraceLoadMUIDll((unsigned __int16 *)v113, *((unsigned __int8 *)NtCurrentPeb()->SharedData + 554));
              else
                LdrpTraceLoadMUIDll((unsigned __int16 *)v113, MEMORY[0x7FFE0384]);
            }
            return v80;
          }
          if ( !v90 )
          {
            v24 = (unsigned int *)(a4 + v46);
            v86 = (unsigned int *)(a4 + v46);
            v92 = (unsigned int *)(a4 + v46);
            goto LABEL_39;
          }
          v34 = v87;
          if ( !v87 )
          {
            v80 = -1073741701;
            goto LABEL_18;
          }
          v24 = (unsigned int *)(a4 + v46);
          v86 = (unsigned int *)(a4 + v46);
          if ( a4 + v46 < a4 )
            goto LABEL_17;
          v92 = (unsigned int *)(a4 + v46);
LABEL_40:
          v19 = v84;
LABEL_41:
          if ( !v34 || v24 )
          {
            v25 = (signed __int16 *)v104;
            goto LABEL_43;
          }
          if ( (v19 & 4) == 0 )
          {
            HIWORD(v51) = HIWORD(v93);
            LOWORD(v51) = v93 + 1;
            v93 = v51;
            v85 = v51;
            v25 = (signed __int16 *)v104;
            if ( (unsigned __int16)v51 < v96 )
            {
              v91 = *(unsigned __int16 *)(v104 + 8LL * (unsigned __int16)v51 + 4);
              goto LABEL_32;
            }
            if ( !*(_BYTE *)(v104 + 516) )
            {
              v19 |= 0x20u;
              v84 = v19;
              a12 = v19;
              goto LABEL_31;
            }
LABEL_43:
            v16 = (__int64 *)(v107 + 8);
            v107 = (__int64)v16;
            v109 = (__int64)v16;
            v21 = v82;
            v22 = v97;
            v15 = v101;
            v13 = a4;
            v18 = a8;
            goto LABEL_44;
          }
          v21 = v82;
          v22 = v97;
          v15 = v101;
          v13 = a4;
          v18 = a8;
LABEL_80:
          v48 = v19 & 2;
          if ( v24 && !v48 )
          {
            if ( v20 )
            {
              if ( (unsigned __int64)v24 <= v13
                || (v52 = a3, (unsigned __int64)(v24 + 4) > a3 + (v15 & 0xFFFFFFFFFFFFFFFCuLL)) )
              {
                v80 = -1073741701;
                goto LABEL_18;
              }
            }
            else
            {
              v52 = a3;
            }
            if ( v115 )
              *v115 = v32;
            v53 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
            if ( (v15 & 1) == 0 && !v21 )
            {
              v54 = 0LL;
              v110 = 0LL;
              v55 = a4;
              goto LABEL_110;
            }
            v65 = *(_WORD *)(v108 + 24);
            if ( v65 == 267 )
            {
              v66 = *(_DWORD *)(v108 + 136);
            }
            else if ( v65 == 523 )
            {
              v66 = *(_DWORD *)(v108 + 152);
            }
            else
            {
              v66 = 0;
            }
            if ( !v66 )
            {
              v80 = -1073741687;
              goto LABEL_18;
            }
            if ( v20 )
            {
              if ( v66 + v53 < v53 )
                goto LABEL_17;
              v55 = a4;
              if ( v66 + v53 < a4 )
              {
                v80 = -1073741701;
                goto LABEL_18;
              }
            }
            else
            {
              v55 = a4;
            }
            v54 = v53 + v66 - v55;
            v110 = v54;
            v67 = LdrpSectionTableFromVirtualAddress((unsigned int)v15 & 0xFFFFFFFC, v52, v108, v105, v66, v83);
            if ( v67 )
            {
              if ( v21 )
              {
                result = LdrpResReadFile(FileHandle);
                if ( (int)result < 0 )
                  return result;
                v24 = (unsigned int *)&v119;
                v86 = (unsigned int *)&v119;
              }
              else
              {
                v24 = v86;
              }
              if ( *v24 > *(_DWORD *)(v67 + 8) )
              {
                v68 = *(unsigned int *)(v67 + 12);
                v69 = LdrpSectionTableFromVirtualAddress((unsigned int)v15 & 0xFFFFFFFC, a3, v108, v105, *v24, v83);
                if ( !v69 )
                {
                  v80 = -1073741701;
                  goto LABEL_18;
                }
                v70 = *(unsigned int *)(v69 + 12);
                v71 = LdrpSectionTableFromVirtualAddress(
                        (unsigned int)v15 & 0xFFFFFFFC,
                        a3,
                        v108,
                        v105,
                        *(_DWORD *)(v69 + 12),
                        v83);
                if ( v71 )
                {
                  if ( v20 )
                  {
                    v72 = v53 + (unsigned int)v70 - (unsigned __int64)*(unsigned int *)(v71 + 12);
                    if ( v72 < v53 )
                      goto LABEL_17;
                    if ( v72 + *(unsigned int *)(v71 + 20) < v72 )
                    {
                      v80 = -1073741701;
                      goto LABEL_18;
                    }
                  }
                  v73 = v53 + v70 - *(unsigned int *)(v71 + 12) + *(unsigned int *)(v71 + 20);
                }
                else
                {
                  v73 = 0LL;
                }
                if ( v20 )
                {
                  v74 = *(unsigned int *)(v71 + 12);
                  if ( v74 < v68 )
                    goto LABEL_17;
                  if ( v74 - v68 < v73 - v55 )
                  {
                    v80 = -1073741701;
                    goto LABEL_18;
                  }
                }
                v54 += v55 + *(unsigned int *)(v71 + 12) - v68 - v73;
                v110 = v54;
                v24 = v86;
              }
LABEL_110:
              v56 = v24[1];
              if ( !v20 )
              {
                v58 = 0LL;
                v59 = a3;
                goto LABEL_117;
              }
              v57 = *v24;
              if ( v57 < v54 )
                goto LABEL_17;
              v58 = v57 - v54;
              if ( v58 >= v55 - v15 )
              {
                v59 = a3;
                if ( v58 <= a3 && (_DWORD)v56 && v56 <= a3 )
                {
                  if ( v58 + (unsigned int)v56 > a3 )
                  {
                    v80 = -1073741701;
                    goto LABEL_18;
                  }
LABEL_117:
                  v60 = v111;
                  if ( v111 )
                  {
                    if ( v20 )
                    {
                      v61 = v58 + v53;
                      if ( v58 + v53 < v53 )
                        goto LABEL_17;
                      if ( v61 > v59 + (v15 & 0xFFFFFFFFFFFFFFFCuLL) )
                      {
                        v80 = -1073741701;
                        goto LABEL_18;
                      }
                    }
                    else
                    {
                      v61 = v53 + *v24 - v54;
                    }
                    *v111 = v61;
                  }
                  if ( v116 )
                  {
                    if ( v20 && v60 )
                    {
                      v62 = *v60;
                      v63 = *v60 + v56;
                      if ( v63 < v62 )
                        goto LABEL_17;
                      if ( v63 > v59 + (v15 & 0xFFFFFFFFFFFFFFFCuLL) )
                      {
                        v80 = -1073741701;
                        goto LABEL_18;
                      }
                    }
                    *v116 = v56;
                  }
                  v80 = 0;
                  goto LABEL_18;
                }
              }
            }
            v80 = -1073741701;
            goto LABEL_18;
          }
          if ( v23 && v48 )
          {
            if ( v20 )
            {
              if ( v23 + 24 < v23 )
              {
                v99 = 0LL;
                v80 = -1073741701;
                goto LABEL_18;
              }
              v76 = a3;
              if ( v23 + 24 > a3 + (v15 & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                v99 = 0LL;
                v80 = -1073741701;
                goto LABEL_18;
              }
            }
            else
            {
              v76 = a3;
            }
            if ( v111 )
            {
              if ( v20 )
              {
                v77 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
                if ( v23 < v77 )
                  goto LABEL_17;
                if ( v23 > v76 + v77 )
                {
                  v80 = -1073741701;
                  goto LABEL_18;
                }
              }
              *v111 = v23;
            }
            v80 = 0;
            goto LABEL_18;
          }
LABEL_82:
          v49 = v18 - v22;
          if ( v49 == 1 )
          {
            v80 = -1073741686;
          }
          else
          {
            v75 = v49 - 2;
            if ( v75 )
            {
              if ( v75 == 1 )
                v80 = -1073741308;
              else
                v80 = -1073741811;
            }
            else
            {
              v80 = -1073741685;
            }
          }
          goto LABEL_18;
        }
LABEL_93:
        v20 = v90;
        v34 = v87;
        goto LABEL_41;
      }
      v102 = v28;
      v44 = v30 & 1;
      v43 = v44 == 0;
      v88 = v44;
      v30 = v31 - 1;
      if ( v43 )
        v45 = v30;
      else
        v45 = v31;
      v102 = &v28[2 * v45];
      result = LdrpResCompareResourceNames(v101, FileHandle, a3, v91, a4, v102, v19, &v98, v79);
      v79 = result;
      if ( (int)result < 0 )
        return result;
      if ( !v98 )
      {
        v64 = (unsigned int)v102[1];
        v20 = v90;
        if ( (int)v64 >= 0 )
        {
          v99 = 0LL;
          if ( v90 )
          {
            if ( !v87 )
            {
              v80 = -1073741701;
              goto LABEL_18;
            }
            v24 = (unsigned int *)(a4 + v64);
            v86 = (unsigned int *)(a4 + v64);
            if ( a4 + v64 < a4 )
              goto LABEL_17;
            v92 = (unsigned int *)(a4 + v64);
            LOWORD(v32) = v91;
          }
          else
          {
            v24 = (unsigned int *)(a4 + v64);
            v86 = (unsigned int *)(a4 + v64);
            v92 = (unsigned int *)(a4 + v64);
            LOWORD(v32) = v91;
          }
        }
        else
        {
          if ( v90 )
          {
            if ( v87 )
            {
              v80 = -1073741701;
            }
            else
            {
              LODWORD(v64) = v64 & 0x7FFFFFFF;
              v23 = a4 + v64;
              if ( a4 + v64 >= a4 )
              {
                v99 = a4 + v64;
                LOWORD(v32) = v91;
                goto LABEL_38;
              }
LABEL_17:
              v80 = -1073741701;
            }
            goto LABEL_18;
          }
          v23 = a4 + (v64 & 0xFFFFFFFF7FFFFFFFuLL);
          v99 = v23;
          LOWORD(v32) = v91;
LABEL_38:
          v24 = v86;
        }
LABEL_39:
        v34 = v87;
        goto LABEL_40;
      }
      if ( v98 >= 0 )
        break;
      v29 = v102 - 2;
      v114 = v102 - 2;
      if ( v88 )
        goto LABEL_69;
      --v31;
LABEL_70:
      v19 = v84;
      v24 = v86;
    }
    v28 = v102 + 2;
    v103 = v102 + 2;
LABEL_69:
    v30 = v31;
    goto LABEL_70;
  }
  return result;
}

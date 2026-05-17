/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x1800A4B20
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1800A4170 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800A66CC (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A3730 (LdrpTraceLoadMUIDll.c)
 *     LdrpResCompareResourceNames @ 0x1800A5D10 (LdrpResCompareResourceNames.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x1800A6000 (LdrpSectionTableFromVirtualAddress.c)
 *     LdrpResReadFile @ 0x1800A65C0 (LdrpResReadFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
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
        unsigned int a12,
        _WORD *a13)
{
  unsigned __int64 v13; // rbx
  __int64 v15; // r13
  __int64 *v16; // r14
  __int64 v17; // rcx
  int v18; // ecx
  unsigned __int64 v19; // r9
  int v20; // r12d
  bool v21; // di
  int v22; // r8d
  unsigned __int64 v23; // rsi
  unsigned int *v24; // r10
  signed __int16 *v25; // r11
  __int64 Heap; // rdi
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
  int v48; // ecx
  __int64 v49; // rdx
  int v50; // edx
  int v51; // edx
  unsigned __int64 v52; // rbx
  unsigned __int64 v53; // rsi
  unsigned __int64 v54; // r15
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  unsigned __int64 *v58; // r8
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // r8
  __int64 v62; // rcx
  __int16 v63; // ax
  unsigned int v64; // eax
  __int64 v65; // r14
  unsigned __int64 v66; // r14
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  int v72; // ecx
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // r13
  __int64 v75; // rcx
  int v76; // [rsp+40h] [rbp-188h]
  unsigned int v77; // [rsp+40h] [rbp-188h]
  __int64 v78; // [rsp+48h] [rbp-180h]
  bool v79; // [rsp+50h] [rbp-178h]
  char v80; // [rsp+51h] [rbp-177h]
  unsigned int v81; // [rsp+54h] [rbp-174h]
  unsigned __int16 v82; // [rsp+58h] [rbp-170h]
  unsigned int *v83; // [rsp+60h] [rbp-168h]
  unsigned __int64 v84; // [rsp+68h] [rbp-160h]
  char v85; // [rsp+70h] [rbp-158h]
  int v86; // [rsp+74h] [rbp-154h]
  int v87; // [rsp+78h] [rbp-150h]
  __int64 v88; // [rsp+80h] [rbp-148h]
  unsigned int *v89; // [rsp+88h] [rbp-140h]
  int v90; // [rsp+90h] [rbp-138h]
  signed __int16 v93; // [rsp+A8h] [rbp-120h]
  int v94; // [rsp+ACh] [rbp-11Ch]
  int v95; // [rsp+B0h] [rbp-118h] BYREF
  unsigned __int64 v96; // [rsp+B8h] [rbp-110h]
  HANDLE Handle; // [rsp+C0h] [rbp-108h]
  __int64 v98; // [rsp+C8h] [rbp-100h]
  _DWORD *v99; // [rsp+D0h] [rbp-F8h]
  _DWORD *v100; // [rsp+D8h] [rbp-F0h]
  __int64 v101; // [rsp+E0h] [rbp-E8h]
  __int64 v102; // [rsp+E8h] [rbp-E0h]
  int v103; // [rsp+F0h] [rbp-D8h]
  __int64 v104; // [rsp+F8h] [rbp-D0h]
  __int64 v105; // [rsp+100h] [rbp-C8h]
  __int64 v106; // [rsp+108h] [rbp-C0h]
  unsigned __int64 v107; // [rsp+110h] [rbp-B8h]
  unsigned __int64 *v108; // [rsp+118h] [rbp-B0h]
  _QWORD v109[2]; // [rsp+120h] [rbp-A8h] BYREF
  _QWORD v110[2]; // [rsp+130h] [rbp-98h] BYREF
  _DWORD *v111; // [rsp+140h] [rbp-88h]
  _WORD *v112; // [rsp+148h] [rbp-80h]
  unsigned __int64 *v113; // [rsp+150h] [rbp-78h]
  __int64 v114; // [rsp+158h] [rbp-70h]
  __int128 v115; // [rsp+160h] [rbp-68h]
  __int128 v116; // [rsp+170h] [rbp-58h] BYREF

  v13 = a4;
  Handle = a2;
  v15 = a1;
  v98 = a1;
  v105 = a5;
  v102 = a6;
  v16 = a7;
  v104 = (__int64)a7;
  v101 = a9;
  v108 = a10;
  v113 = a11;
  v112 = a13;
  v95 = 0;
  v115 = 0LL;
  v93 = 0;
  LOWORD(v88) = 0;
  v116 = 0LL;
  v78 = 0LL;
  v90 = 0;
  v82 = 0;
  v109[0] = 5636180LL;
  v109[1] = L"LdrpResSearchResourceInsideDirectory Enter";
  v110[0] = 5505106LL;
  v110[1] = L"LdrpResSearchResourceInsideDirectory Exit";
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v17 = (__int64)NtCurrentPeb()->SharedData + 555;
    v90 = 0;
  }
  else
  {
    v17 = 2147353477LL;
  }
  if ( (*(_BYTE *)v17 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v75 = (__int64)NtCurrentPeb()->SharedData + 554;
      v90 = 0;
    }
    else
    {
      v75 = 2147353476LL;
    }
    LdrpTraceLoadMUIDll((unsigned __int16 *)v109, *(unsigned __int8 *)v75);
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
  v81 = a12;
  if ( (a12 & 0x8000) != 0 && ((char *)Handle - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || !v102) )
    return 3221225485LL;
  v20 = a12 & 0x1000;
  v87 = v20;
  v80 = v20 != 0;
  v21 = (a12 & 0x8800) == 34816;
  v79 = v21;
  if ( (a12 & 0x1000) != 0 && !a3 )
    return 3221225485LL;
  if ( (a12 & 0x8800) != 0x8800 && !v15 || v21 && !Handle )
    return 3221225485LL;
  v106 = (__int64)a7;
  v22 = a8;
  v23 = v13;
  v24 = 0LL;
  v83 = 0LL;
  v89 = 0LL;
  v84 = 0LL;
  if ( a13 )
    *a13 = 0;
  v25 = (signed __int16 *)v101;
LABEL_44:
  if ( !v23 || (v35 = v22, --v22, v94 = v22, v103 = v22, !v35) )
  {
    LOWORD(v32) = v88;
    goto LABEL_80;
  }
  v36 = *v16;
  v88 = *v16;
  if ( !v22 && v18 == 3 )
  {
    v84 = v23;
    if ( !v25 )
    {
      v77 = -1073741811;
      goto LABEL_18;
    }
    v93 = *v25;
    v90 = 0;
    v82 = 0;
    if ( (~(_BYTE)v19 & 4) != 0 )
    {
      v36 = (unsigned __int16)v25[2];
      v88 = v36;
    }
  }
  v37 = Handle;
  if ( v21 )
  {
    result = LdrpResReadFile(Handle);
    v76 = result;
    if ( (int)result < 0 )
      return result;
    v22 = v94;
    v19 = v81;
    v24 = v83;
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
    v39 = WORD6(v115);
  else
    v39 = *(unsigned __int16 *)(v23 + 12);
  v86 = v39;
  if ( v39 && v20 )
  {
    v49 = 8LL * (unsigned int)v39;
    v114 = v49;
    if ( v23 + v49 + 16 < v23 )
      goto LABEL_17;
    if ( v49 + v23 + 16 > v38 + (v15 & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      v77 = -1073741701;
      goto LABEL_18;
    }
  }
  v40 = (_DWORD *)(v23 + 16);
  v100 = (_DWORD *)(v23 + 16);
  if ( (v36 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( v39 )
    {
      if ( v20 && (_DWORD *)((char *)v40 + v39) < v40 )
      {
        v77 = -1073741701;
        goto LABEL_18;
      }
      v40 += 2 * v39;
      v100 = v40;
    }
    v39 = HIWORD(v115);
    if ( !v21 )
      v39 = *(unsigned __int16 *)(v23 + 14);
    v86 = v39;
    if ( v20 )
    {
      v41 = 8LL * (unsigned int)v39;
      v109[0] = v41;
      if ( v41 > 0xFFFFFFFF )
        goto LABEL_17;
      v42 = (char *)v40 + (unsigned int)v41;
      if ( v42 < (char *)v40 )
        goto LABEL_17;
      if ( (unsigned __int64)v42 > v38 + (v98 & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        v77 = -1073741701;
        goto LABEL_18;
      }
    }
  }
  if ( !v39 )
  {
    v96 = 0LL;
    v18 = a8;
    goto LABEL_82;
  }
  if ( !v21 )
    goto LABEL_31;
  if ( v78 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v78, v19);
    v39 = v86;
  }
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 8LL * v39);
  v78 = Heap;
  if ( !Heap )
  {
    v77 = -1073741801;
    goto LABEL_19;
  }
  v39 = v86;
  result = LdrpResReadFile(v37);
  v76 = result;
  if ( (int)result >= 0 )
  {
    v40 = (_DWORD *)Heap;
    v100 = (_DWORD *)Heap;
    v19 = a12;
    v81 = a12;
    v24 = v89;
    v83 = v89;
    v104 = v106;
    v94 = v103;
    v90 = v82;
LABEL_31:
    if ( v84 && (v19 & 0x20) != 0 )
    {
      v23 = 0LL;
      v96 = 0LL;
      v47 = (unsigned int)v40[1];
      v13 = a4;
      if ( v20 )
      {
        v24 = (unsigned int *)(a4 + v47);
        v83 = (unsigned int *)(a4 + v47);
        if ( a4 + v47 < a4 )
        {
          v77 = -1073741701;
          goto LABEL_18;
        }
      }
      else
      {
        v24 = (unsigned int *)(v47 + a4);
        v83 = (unsigned int *)(v47 + a4);
      }
      v32 = *v40;
      v21 = v79;
      v22 = v94;
      v15 = v98;
      v18 = a8;
      goto LABEL_80;
    }
LABEL_32:
    v23 = 0LL;
    v96 = 0LL;
    v28 = v40;
    v100 = v40;
    v29 = &v40[2 * v39 - 2];
    v111 = v29;
    v30 = v39;
    v31 = v39;
    while ( 1 )
    {
      if ( v28 > v29 )
      {
        LOWORD(v32) = v88;
        goto LABEL_93;
      }
      v31 >>= 1;
      if ( !v31 )
      {
        LOWORD(v32) = v88;
        if ( v30 )
        {
          result = LdrpResCompareResourceNames(v98, Handle, a3, v88, a4, v28, v19, &v95, v76);
          v76 = result;
          if ( (int)result < 0 )
            return result;
          v20 = v87;
          if ( v95 )
            goto LABEL_38;
          v46 = (unsigned int)v28[1];
          if ( (int)v46 < 0 )
          {
            if ( !v87 )
            {
              v23 = a4 + (v46 & 0xFFFFFFFF7FFFFFFFuLL);
              v96 = v23;
              goto LABEL_38;
            }
            if ( !v84 )
            {
              LODWORD(v46) = v46 & 0x7FFFFFFF;
              v23 = a4 + v46;
              if ( a4 + v46 >= a4 )
              {
                v96 = a4 + v46;
                goto LABEL_38;
              }
              goto LABEL_17;
            }
            v77 = -1073741701;
LABEL_18:
            Heap = v78;
LABEL_19:
            if ( Heap )
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v78, v19);
            if ( (unsigned int)RtlGetCurrentServiceSessionId() )
              v27 = (__int64)NtCurrentPeb()->SharedData + 555;
            else
              v27 = 2147353477LL;
            if ( (*(_BYTE *)v27 & 1) != 0 )
            {
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                LdrpTraceLoadMUIDll((unsigned __int16 *)v110, *((unsigned __int8 *)NtCurrentPeb()->SharedData + 554));
              else
                LdrpTraceLoadMUIDll((unsigned __int16 *)v110, MEMORY[0x7FFE0384]);
            }
            return v77;
          }
          if ( !v87 )
          {
            v24 = (unsigned int *)(a4 + v46);
            v83 = (unsigned int *)(a4 + v46);
            v89 = (unsigned int *)(a4 + v46);
            goto LABEL_39;
          }
          v34 = v84;
          if ( !v84 )
          {
            v77 = -1073741701;
            goto LABEL_18;
          }
          v24 = (unsigned int *)(a4 + v46);
          v83 = (unsigned int *)(a4 + v46);
          if ( a4 + v46 < a4 )
            goto LABEL_17;
          v89 = (unsigned int *)(a4 + v46);
LABEL_40:
          v19 = v81;
LABEL_41:
          if ( !v34 || v24 )
          {
            v25 = (signed __int16 *)v101;
            goto LABEL_43;
          }
          if ( (v19 & 4) == 0 )
          {
            HIWORD(v50) = HIWORD(v90);
            LOWORD(v50) = v90 + 1;
            v90 = v50;
            v82 = v50;
            v25 = (signed __int16 *)v101;
            if ( (unsigned __int16)v50 < v93 )
            {
              v88 = *(unsigned __int16 *)(v101 + 8LL * (unsigned __int16)v50 + 4);
              goto LABEL_32;
            }
            if ( !*(_BYTE *)(v101 + 516) )
            {
              v19 = (unsigned int)v19 | 0x20;
              v81 = v19;
              a12 = v19;
              goto LABEL_31;
            }
LABEL_43:
            v16 = (__int64 *)(v104 + 8);
            v104 = (__int64)v16;
            v106 = (__int64)v16;
            v21 = v79;
            v22 = v94;
            v15 = v98;
            v13 = a4;
            v18 = a8;
            goto LABEL_44;
          }
          v21 = v79;
          v22 = v94;
          v15 = v98;
          v13 = a4;
          v18 = a8;
LABEL_80:
          v19 &= 2u;
          if ( v24 && !(_DWORD)v19 )
          {
            if ( v20 )
            {
              if ( (unsigned __int64)v24 <= v13
                || (v51 = a3, (unsigned __int64)(v24 + 4) > a3 + (v15 & 0xFFFFFFFFFFFFFFFCuLL)) )
              {
                v77 = -1073741701;
                goto LABEL_18;
              }
            }
            else
            {
              v51 = a3;
            }
            if ( v112 )
              *v112 = v32;
            v52 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
            if ( (v15 & 1) == 0 && !v21 )
            {
              v53 = 0LL;
              v107 = 0LL;
              v54 = a4;
              goto LABEL_110;
            }
            v63 = *(_WORD *)(v105 + 24);
            if ( v63 == 267 )
            {
              v64 = *(_DWORD *)(v105 + 136);
            }
            else if ( v63 == 523 )
            {
              v64 = *(_DWORD *)(v105 + 152);
            }
            else
            {
              v64 = 0;
            }
            if ( !v64 )
            {
              v77 = -1073741687;
              goto LABEL_18;
            }
            if ( v20 )
            {
              if ( v64 + v52 < v52 )
                goto LABEL_17;
              v54 = a4;
              if ( v64 + v52 < a4 )
              {
                v77 = -1073741701;
                goto LABEL_18;
              }
            }
            else
            {
              v54 = a4;
            }
            v53 = v52 + v64 - v54;
            v107 = v53;
            v65 = LdrpSectionTableFromVirtualAddress((unsigned int)v15 & 0xFFFFFFFC, v51, v105, v102, v64, v80);
            if ( v65 )
            {
              if ( v21 )
              {
                result = LdrpResReadFile(Handle);
                if ( (int)result < 0 )
                  return result;
                v24 = (unsigned int *)&v116;
                v83 = (unsigned int *)&v116;
              }
              else
              {
                v24 = v83;
              }
              if ( *v24 > *(_DWORD *)(v65 + 8) )
              {
                v66 = *(unsigned int *)(v65 + 12);
                v67 = LdrpSectionTableFromVirtualAddress((unsigned int)v15 & 0xFFFFFFFC, a3, v105, v102, *v24, v80);
                if ( !v67 )
                {
                  v77 = -1073741701;
                  goto LABEL_18;
                }
                v68 = *(unsigned int *)(v67 + 12);
                v69 = LdrpSectionTableFromVirtualAddress(
                        (unsigned int)v15 & 0xFFFFFFFC,
                        a3,
                        v105,
                        v102,
                        *(_DWORD *)(v67 + 12),
                        v80);
                if ( v69 )
                {
                  if ( v20 )
                  {
                    v19 = v52 + (unsigned int)v68 - (unsigned __int64)*(unsigned int *)(v69 + 12);
                    if ( v19 < v52 )
                      goto LABEL_17;
                    if ( v19 + *(unsigned int *)(v69 + 20) < v19 )
                    {
                      v77 = -1073741701;
                      goto LABEL_18;
                    }
                  }
                  v70 = v52 + v68 - *(unsigned int *)(v69 + 12) + *(unsigned int *)(v69 + 20);
                }
                else
                {
                  v70 = 0LL;
                }
                if ( v20 )
                {
                  v71 = *(unsigned int *)(v69 + 12);
                  if ( v71 < v66 )
                    goto LABEL_17;
                  if ( v71 - v66 < v70 - v54 )
                  {
                    v77 = -1073741701;
                    goto LABEL_18;
                  }
                }
                v53 += v54 + *(unsigned int *)(v69 + 12) - v66 - v70;
                v107 = v53;
                v24 = v83;
              }
LABEL_110:
              v55 = v24[1];
              if ( !v20 )
              {
                v57 = 0LL;
                v19 = a3;
                goto LABEL_117;
              }
              v56 = *v24;
              if ( v56 < v53 )
                goto LABEL_17;
              v57 = v56 - v53;
              if ( v57 >= v54 - v15 )
              {
                v19 = a3;
                if ( v57 <= a3 && (_DWORD)v55 && v55 <= a3 )
                {
                  if ( v57 + (unsigned int)v55 > a3 )
                  {
                    v77 = -1073741701;
                    goto LABEL_18;
                  }
LABEL_117:
                  v58 = v108;
                  if ( v108 )
                  {
                    if ( v20 )
                    {
                      v59 = v57 + v52;
                      if ( v57 + v52 < v52 )
                        goto LABEL_17;
                      if ( v59 > v19 + (v15 & 0xFFFFFFFFFFFFFFFCuLL) )
                      {
                        v77 = -1073741701;
                        goto LABEL_18;
                      }
                    }
                    else
                    {
                      v59 = v52 + *v24 - v53;
                    }
                    *v108 = v59;
                  }
                  if ( v113 )
                  {
                    if ( v20 && v58 )
                    {
                      v60 = *v58;
                      v61 = *v58 + v55;
                      if ( v61 < v60 )
                        goto LABEL_17;
                      if ( v61 > v19 + (v15 & 0xFFFFFFFFFFFFFFFCuLL) )
                      {
                        v77 = -1073741701;
                        goto LABEL_18;
                      }
                    }
                    *v113 = v55;
                  }
                  v77 = 0;
                  goto LABEL_18;
                }
              }
            }
            v77 = -1073741701;
            goto LABEL_18;
          }
          if ( v23 && (_DWORD)v19 )
          {
            if ( v20 )
            {
              if ( v23 + 24 < v23 )
              {
                v96 = 0LL;
                v77 = -1073741701;
                goto LABEL_18;
              }
              v73 = a3;
              if ( v23 + 24 > a3 + (v15 & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                v96 = 0LL;
                v77 = -1073741701;
                goto LABEL_18;
              }
            }
            else
            {
              v73 = a3;
            }
            if ( v108 )
            {
              if ( v20 )
              {
                v74 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
                if ( v23 < v74 )
                  goto LABEL_17;
                if ( v23 > v73 + v74 )
                {
                  v77 = -1073741701;
                  goto LABEL_18;
                }
              }
              *v108 = v23;
            }
            v77 = 0;
            goto LABEL_18;
          }
LABEL_82:
          v48 = v18 - v22;
          if ( v48 == 1 )
          {
            v77 = -1073741686;
          }
          else
          {
            v72 = v48 - 2;
            if ( v72 )
            {
              if ( v72 == 1 )
                v77 = -1073741308;
              else
                v77 = -1073741811;
            }
            else
            {
              v77 = -1073741685;
            }
          }
          goto LABEL_18;
        }
LABEL_93:
        v20 = v87;
        v34 = v84;
        goto LABEL_41;
      }
      v99 = v28;
      v44 = v30 & 1;
      v43 = v44 == 0;
      v85 = v44;
      v30 = v31 - 1;
      if ( v43 )
        v45 = v30;
      else
        v45 = v31;
      v99 = &v28[2 * v45];
      result = LdrpResCompareResourceNames(v98, Handle, a3, v88, a4, v99, v19, &v95, v76);
      v76 = result;
      if ( (int)result < 0 )
        return result;
      if ( !v95 )
      {
        v62 = (unsigned int)v99[1];
        v20 = v87;
        if ( (int)v62 >= 0 )
        {
          v96 = 0LL;
          if ( v87 )
          {
            if ( !v84 )
            {
              v77 = -1073741701;
              goto LABEL_18;
            }
            v24 = (unsigned int *)(a4 + v62);
            v83 = (unsigned int *)(a4 + v62);
            if ( a4 + v62 < a4 )
              goto LABEL_17;
            v89 = (unsigned int *)(a4 + v62);
            LOWORD(v32) = v88;
          }
          else
          {
            v24 = (unsigned int *)(a4 + v62);
            v83 = (unsigned int *)(a4 + v62);
            v89 = (unsigned int *)(a4 + v62);
            LOWORD(v32) = v88;
          }
        }
        else
        {
          if ( v87 )
          {
            if ( v84 )
            {
              v77 = -1073741701;
            }
            else
            {
              LODWORD(v62) = v62 & 0x7FFFFFFF;
              v23 = a4 + v62;
              if ( a4 + v62 >= a4 )
              {
                v96 = a4 + v62;
                LOWORD(v32) = v88;
                goto LABEL_38;
              }
LABEL_17:
              v77 = -1073741701;
            }
            goto LABEL_18;
          }
          v23 = a4 + (v62 & 0xFFFFFFFF7FFFFFFFuLL);
          v96 = v23;
          LOWORD(v32) = v88;
LABEL_38:
          v24 = v83;
        }
LABEL_39:
        v34 = v84;
        goto LABEL_40;
      }
      if ( v95 >= 0 )
        break;
      v29 = v99 - 2;
      v111 = v99 - 2;
      if ( v85 )
        goto LABEL_69;
      --v31;
LABEL_70:
      v19 = v81;
      v24 = v83;
    }
    v28 = v99 + 2;
    v100 = v99 + 2;
LABEL_69:
    v30 = v31;
    goto LABEL_70;
  }
  return result;
}

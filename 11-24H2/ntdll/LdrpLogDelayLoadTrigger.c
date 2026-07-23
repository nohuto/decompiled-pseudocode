/*
 * XREFs of LdrpLogDelayLoadTrigger @ 0x1800D7DA0
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x1800360B0 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetDelayloadExportDll @ 0x180036720 (LdrpGetDelayloadExportDll.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     sprintf_s @ 0x18012BA90 (sprintf_s.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     strlen @ 0x1801660A0 (strlen.c)
 */

int __fastcall LdrpLogDelayLoadTrigger(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  bool v14; // zf
  const char *v15; // rcx
  size_t v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // r9d
  char *v20; // r12
  size_t v21; // rax
  __int64 v22; // rbx
  unsigned __int16 *v23; // r14
  unsigned int v24; // r13d
  unsigned int v25; // r15d
  struct _PEB *Heap; // rax
  int v27; // ebp
  unsigned int v28; // esi
  _WORD *v29; // rdi
  __int64 v30; // r9
  unsigned __int64 v31; // rbx
  int v32; // r8d
  unsigned __int64 v33; // rcx
  __int64 v34; // r9
  _WORD *v35; // rdx
  __int16 v36; // ax
  _WORD *v37; // rax
  int v38; // edx
  int v39; // eax
  int v40; // ebx
  unsigned int v41; // ecx
  unsigned int v42; // r15d
  _WORD *v43; // rdi
  int v44; // ebx
  unsigned __int64 v45; // r10
  unsigned __int64 v46; // rax
  __int64 v47; // r9
  _WORD *v48; // rdx
  int v49; // r8d
  __int16 v50; // cx
  _WORD *v51; // rcx
  int v52; // edx
  int v53; // ecx
  int v54; // r10d
  char *v55; // rdi
  unsigned int v56; // r15d
  unsigned int v57; // ecx
  unsigned int v58; // r10d
  unsigned int v59; // edx
  __int64 v60; // rax
  unsigned int v61; // r8d
  unsigned int v62; // r11d
  __int64 v63; // rax
  __m128i v64; // xmm0
  __int64 v65; // rax
  __m128i v66; // xmm0
  __m128i v67; // xmm0
  __int64 v68; // rax
  __m128i v69; // xmm0
  __int64 v70; // rax
  __m128i v71; // xmm0
  __int64 v72; // rax
  __int64 v73; // r9
  char *v74; // rcx
  char *v75; // r8
  __int16 v76; // ax
  char *v77; // rdi
  unsigned int v78; // edx
  __int64 v79; // rax
  unsigned int v80; // r8d
  __int64 v81; // rax
  __m128i v82; // xmm0
  __int64 v83; // rax
  __m128i v84; // xmm0
  __m128i v85; // xmm0
  __int64 v86; // rax
  __m128i v87; // xmm0
  __int64 v88; // rax
  __m128i v89; // xmm0
  __int64 v90; // rax
  __int64 v91; // r9
  char *v92; // rcx
  char *v93; // r8
  __int16 v94; // ax
  _DWORD *v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rcx
  unsigned int v99; // [rsp+20h] [rbp-88h]
  unsigned int v100; // [rsp+24h] [rbp-84h]
  unsigned __int64 v101; // [rsp+28h] [rbp-80h]
  struct _PEB *Fields; // [rsp+30h] [rbp-78h]
  char Buffer[16]; // [rsp+40h] [rbp-68h] BYREF

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v9 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v9 = 2147353476LL;
  v10 = 2147353477LL;
  if ( *(_BYTE *)v9 )
  {
    v11 = NtCurrentPeb()->SharedData;
    if ( v11 && *v11 )
      v12 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v12 = 2147353477LL;
    if ( (*(_BYTE *)v12 & 0x10) != 0 )
      goto LABEL_7;
  }
  LODWORD(Heap) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)Heap )
  {
    Heap = NtCurrentPeb();
    v97 = (__int64)Heap->SharedData + 554;
  }
  else
  {
    v97 = 2147353476LL;
  }
  if ( *(_BYTE *)v97 )
  {
    Heap = NtCurrentPeb();
    if ( (Heap->TracingFlags & 4) != 0 )
    {
      LODWORD(Heap) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)Heap )
      {
        Heap = NtCurrentPeb();
        v10 = (__int64)Heap->SharedData + 555;
      }
      if ( (*(_BYTE *)v10 & 0x20) != 0 )
      {
LABEL_7:
        v13 = a2[1];
        v14 = *(_QWORD *)(a1 + 48) + v13 == 0;
        v15 = (const char *)(*(_QWORD *)(a1 + 48) + v13);
        v101 = (unsigned __int64)v15;
        if ( v14 )
        {
          LOWORD(v16) = 0;
        }
        else
        {
          v16 = strlen(v15);
          if ( v16 >= 0xFFFF )
            LOWORD(v16) = -2;
        }
        v17 = *(_QWORD *)(a1 + 48);
        v18 = *(_QWORD *)(v17 + a2[4] + 8 * ((a4 - a2[3] - v17) >> 3));
        if ( v18 < 0 )
        {
          v19 = (unsigned __int16)v18;
        }
        else
        {
          v19 = 0;
          v20 = (char *)(v18 + v17 + 2);
          if ( v20 )
            goto LABEL_13;
        }
        sprintf_s(Buffer, 0xCuLL, "#%u", v19);
        v20 = Buffer;
LABEL_13:
        LOWORD(v21) = 0;
        if ( v20 )
        {
          v21 = strlen(v20);
          if ( v21 >= 0xFFFF )
            LOWORD(v21) = -2;
        }
        v22 = a1 + 72;
        v23 = (unsigned __int16 *)(a3 + 72);
        v99 = (unsigned __int16)v21;
        v24 = (unsigned __int16)v16;
        v25 = *v23 + *(unsigned __int16 *)(a1 + 72) + 8 + 2 * ((unsigned __int16)v16 + (unsigned __int16)v21);
        v100 = v25 + 36;
        Heap = (struct _PEB *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v25 + 36);
        Fields = Heap;
        if ( Heap )
        {
          *(_WORD *)&Heap->Padding0[2] = 5334;
          v27 = 0;
          LODWORD(Heap->ProcessParameters) = 3;
          v28 = 2;
          v29 = (_WORD *)&Heap->ProcessParameters + 2;
          if ( v22 && *(_WORD *)v22 )
          {
            v30 = *(_QWORD *)(v22 + 8);
            v31 = (unsigned __int64)v25 >> 1;
            if ( v31 )
            {
              v32 = 0;
              v33 = (unsigned __int64)v25 >> 1;
              v34 = v30 - (_QWORD)v29;
              v35 = (_WORD *)&Heap->ProcessParameters + 2;
              do
              {
                if ( !(2147483646 - v31 + v33) )
                  break;
                v36 = *(_WORD *)((char *)v35 + v34);
                if ( !v36 )
                  break;
                *v35 = v36;
                ++v32;
                ++v35;
                --v33;
              }
              while ( v33 );
              v37 = v35 - 1;
              if ( v33 )
                v37 = v35;
              v38 = -2147483643;
              if ( v33 )
                v38 = 0;
              *v37 = 0;
              v39 = v32 - 1;
              if ( v33 )
                v39 = v32;
              v40 = v31 - v39;
              if ( (int)(v38 + 0x80000000) < 0 || v38 == -2147483643 )
                v27 = v40;
            }
            v41 = v25 + 2 * (1 - v27);
          }
          else if ( v25 >= 2 )
          {
            v41 = 2;
            *v29 = 0;
          }
          else
          {
            v41 = 0;
          }
          v42 = v25 - v41;
          v43 = (_WORD *)((char *)v29 + v41);
          v44 = 0;
          if ( v23 && *v23 )
          {
            v45 = (unsigned __int64)v42 >> 1;
            if ( v45 )
            {
              v46 = (unsigned __int64)v42 >> 1;
              v47 = *((_QWORD *)v23 + 1) - (_QWORD)v43;
              v48 = v43;
              v49 = 0;
              do
              {
                if ( !(2147483646 - v45 + v46) )
                  break;
                v50 = *(_WORD *)((char *)v48 + v47);
                if ( !v50 )
                  break;
                *v48 = v50;
                ++v49;
                ++v48;
                --v46;
              }
              while ( v46 );
              v51 = v48 - 1;
              if ( v46 )
                v51 = v48;
              v52 = -2147483643;
              if ( v46 )
                v52 = 0;
              *v51 = 0;
              v53 = v49 - 1;
              if ( v46 )
                v53 = v49;
              v54 = v45 - v53;
              if ( (int)(v52 + 0x80000000) < 0 || v52 == -2147483643 )
                v44 = v54;
            }
            v28 = v42 + 2 * (1 - v44);
          }
          else if ( v42 >= 2 )
          {
            *v43 = 0;
          }
          else
          {
            v28 = 0;
          }
          v55 = (char *)v43 + v28;
          v56 = v42 - v28;
          v57 = 0;
          v58 = 16;
          if ( 2 * v24 + 2 <= v56 )
          {
            v59 = 0;
            if ( v24 )
            {
              if ( v24 < 4 )
                goto LABEL_60;
              v60 = v24 - 1;
              if ( (unsigned __int64)v55 <= v101 + v60 && (unsigned __int64)&v55[2 * v60] >= v101 )
                goto LABEL_60;
              if ( v24 < 0x20 )
                goto LABEL_109;
              v61 = v24 & 0x1F;
              v62 = 16;
              do
              {
                v63 = v59;
                v59 += 32;
                v64 = _mm_loadl_epi64((const __m128i *)(v63 + v101));
                *(__m128i *)&v55[2 * v63] = _mm_srai_epi16(_mm_unpacklo_epi8(v64, v64), 8u);
                v65 = v62 - 8;
                v66 = _mm_loadl_epi64((const __m128i *)(v65 + v101));
                *(__m128i *)&v55[2 * v65] = _mm_srai_epi16(_mm_unpacklo_epi8(v66, v66), 8u);
                v67 = _mm_loadl_epi64((const __m128i *)(v62 + v101));
                *(__m128i *)&v55[2 * v62] = _mm_srai_epi16(_mm_unpacklo_epi8(v67, v67), 8u);
                v68 = v62 + 8;
                v62 += 32;
                v69 = _mm_loadl_epi64((const __m128i *)(v68 + v101));
                *(__m128i *)&v55[2 * v68] = _mm_srai_epi16(_mm_unpacklo_epi8(v69, v69), 8u);
              }
              while ( v59 < v24 - v61 );
              if ( v61 >= 4 )
              {
LABEL_109:
                do
                {
                  v70 = v59;
                  v59 += 4;
                  v71 = _mm_cvtsi32_si128(*(_DWORD *)(v70 + v101));
                  *(_QWORD *)&v55[2 * v70] = _mm_srai_epi16(_mm_unpacklo_epi8(v71, v71), 8u).m128i_u64[0];
                }
                while ( v59 < (v24 & 0xFFFC) );
              }
              if ( v59 < v24 )
              {
LABEL_60:
                v72 = v59;
                v73 = v24 - v59;
                v59 = v24;
                v74 = &v55[2 * v72];
                v75 = (char *)(v72 + v101);
                do
                {
                  v76 = *v75++;
                  *(_WORD *)v74 = v76;
                  v74 += 2;
                  --v73;
                }
                while ( v73 );
              }
            }
            v57 = 2 * v24 + 2;
            *(_WORD *)&v55[2 * v59] = 0;
          }
          v77 = &v55[v57];
          if ( 2 * v99 + 2 <= v56 - v57 )
          {
            v78 = 0;
            if ( v99 )
            {
              if ( v99 < 4 )
                goto LABEL_74;
              v79 = v99 - 1;
              if ( v77 <= &v20[v79] && &v77[2 * v79] >= v20 )
                goto LABEL_74;
              if ( v99 < 0x20 )
                goto LABEL_110;
              v80 = v99 & 0x1F;
              do
              {
                v81 = v78;
                v78 += 32;
                v82 = _mm_loadl_epi64((const __m128i *)&v20[v81]);
                *(__m128i *)&v77[2 * v81] = _mm_srai_epi16(_mm_unpacklo_epi8(v82, v82), 8u);
                v83 = v58 - 8;
                v84 = _mm_loadl_epi64((const __m128i *)&v20[v83]);
                *(__m128i *)&v77[2 * v83] = _mm_srai_epi16(_mm_unpacklo_epi8(v84, v84), 8u);
                v85 = _mm_loadl_epi64((const __m128i *)&v20[v58]);
                *(__m128i *)&v77[2 * v58] = _mm_srai_epi16(_mm_unpacklo_epi8(v85, v85), 8u);
                v86 = v58 + 8;
                v58 += 32;
                v87 = _mm_loadl_epi64((const __m128i *)&v20[v86]);
                *(__m128i *)&v77[2 * v86] = _mm_srai_epi16(_mm_unpacklo_epi8(v87, v87), 8u);
              }
              while ( v78 < v99 - v80 );
              if ( v80 >= 4 )
              {
LABEL_110:
                do
                {
                  v88 = v78;
                  v78 += 4;
                  v89 = _mm_cvtsi32_si128(*(_DWORD *)&v20[v88]);
                  *(_QWORD *)&v77[2 * v88] = _mm_srai_epi16(_mm_unpacklo_epi8(v89, v89), 8u).m128i_u64[0];
                }
                while ( v78 < (v99 & 0xFFFC) );
              }
              if ( v78 < v99 )
              {
LABEL_74:
                v90 = v78;
                v91 = v99 - v78;
                v78 = v99;
                v92 = &v77[2 * v90];
                v93 = &v20[v90];
                do
                {
                  v94 = *v93++;
                  *(_WORD *)v92 = v94;
                  v92 += 2;
                  --v91;
                }
                while ( v91 );
              }
            }
            *(_WORD *)&v77[2 * v78] = 0;
          }
          v95 = NtCurrentPeb()->SharedData;
          if ( v95 && *v95 )
            v96 = (__int64)NtCurrentPeb()->SharedData + 554;
          else
            v96 = 2147353476LL;
          NtTraceEvent((HANDLE)*(unsigned __int8 *)v96, 0x402u, v100 - 32, Fields);
          LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Fields);
        }
      }
    }
  }
  return (int)Heap;
}

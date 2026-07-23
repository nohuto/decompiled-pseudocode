/*
 * XREFs of RtlpReAllocateHeap @ 0x18002A860
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180029FF0 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpUpdateTagEntry @ 0x1800255D8 (RtlpUpdateTagEntry.c)
 *     RtlpGetExtraStuffPointer @ 0x180025F70 (RtlpGetExtraStuffPointer.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlDebugReAllocateHeap @ 0x18002B9EC (RtlDebugReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlTryEnterCriticalSection @ 0x180057970 (RtlTryEnterCriticalSection.c)
 *     RtlpAnalyzeHeapFailure @ 0x180058210 (RtlpAnalyzeHeapFailure.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpCreateSplitBlock @ 0x180058720 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180059530 (RtlpGrowBlockInPlace.c)
 *     RtlpBreakPointHeap @ 0x18005A8C0 (RtlpBreakPointHeap.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800B8DC0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpUpdateHeapRates @ 0x1800DD480 (RtlpUpdateHeapRates.c)
 *     RtlpHeapExceptionFilter @ 0x18010CF40 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapReallocateEvent @ 0x180114E34 (RtlpLogHeapReallocateEvent.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

char *__fastcall RtlpReAllocateHeap(__int64 a1, int a2, char *a3, SIZE_T a4)
{
  char *v7; // rsi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdi
  char v13; // dl
  unsigned __int64 v14; // rdx
  size_t v15; // rdi
  PVOID Heap; // rax
  _DWORD *SharedData; // rcx
  __int64 v18; // rcx
  void *v19; // rdi
  int v21; // r15d
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // edx
  _DWORD *v25; // r9
  __int64 **v26; // rcx
  _BYTE *v27; // r8
  char v28; // cl
  int v29; // eax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  _WORD *v33; // rcx
  unsigned __int64 v34; // rdi
  _BYTE *v35; // rsi
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  ULONG v38; // r15d
  char v39; // al
  char *v40; // rax
  __int64 v41; // rdi
  int v42; // edx
  size_t v43; // rcx
  SIZE_T v44; // rax
  __int64 v45; // r8
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // edx
  unsigned __int8 v49; // al
  _OWORD *ExtraStuffPointer; // rdx
  int v51; // edi
  __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int16 *v54; // rax
  int v55; // ecx
  unsigned __int64 v56; // r14
  __int64 v57; // rcx
  struct _TEB *v58; // rdi
  int v59; // eax
  struct _TEB *v60; // rdi
  __int64 v61; // rcx
  unsigned __int64 v62; // r8
  unsigned int v63; // ecx
  unsigned __int16 v64; // ax
  int v65; // eax
  struct _TEB *v66; // rdi
  NTSTATUS v67; // ecx
  int v68; // [rsp+28h] [rbp-150h]
  char v69; // [rsp+40h] [rbp-138h]
  unsigned __int64 v70; // [rsp+48h] [rbp-130h]
  unsigned __int64 v71; // [rsp+48h] [rbp-130h]
  unsigned __int64 v72; // [rsp+50h] [rbp-128h]
  unsigned __int64 v73; // [rsp+58h] [rbp-120h]
  __int64 v74; // [rsp+60h] [rbp-118h]
  int v75; // [rsp+68h] [rbp-110h]
  SIZE_T v76; // [rsp+68h] [rbp-110h]
  unsigned __int64 v77; // [rsp+78h] [rbp-100h]
  void *v78; // [rsp+80h] [rbp-F8h]
  char *v79; // [rsp+80h] [rbp-F8h]
  char *v80; // [rsp+88h] [rbp-F0h]
  _BYTE *v81; // [rsp+90h] [rbp-E8h]
  int v82[2]; // [rsp+A0h] [rbp-D8h]
  _OWORD *v83; // [rsp+A8h] [rbp-D0h]
  unsigned __int64 v84; // [rsp+A8h] [rbp-D0h]
  unsigned __int64 v85; // [rsp+B0h] [rbp-C8h]
  _WORD *v86; // [rsp+B8h] [rbp-C0h]
  int v87; // [rsp+B8h] [rbp-C0h]
  unsigned int v88; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 v89; // [rsp+C8h] [rbp-B0h] BYREF
  const void *v90; // [rsp+D0h] [rbp-A8h] BYREF
  SIZE_T v91; // [rsp+D8h] [rbp-A0h]
  unsigned __int64 v92; // [rsp+E0h] [rbp-98h]
  char *v93; // [rsp+E8h] [rbp-90h]
  unsigned int NtGlobalFlag; // [rsp+F0h] [rbp-88h]
  unsigned int v95; // [rsp+F4h] [rbp-84h]
  __int64 v96; // [rsp+F8h] [rbp-80h]
  unsigned __int64 v97; // [rsp+100h] [rbp-78h]
  __int128 v98; // [rsp+108h] [rbp-70h]
  __int128 v99; // [rsp+118h] [rbp-60h]
  _OWORD *v100; // [rsp+128h] [rbp-50h]
  __int64 v101; // [rsp+130h] [rbp-48h]
  ULONG Flagsa; // [rsp+188h] [rbp+10h]
  char *Src; // [rsp+190h] [rbp+18h]

  Src = a3;
  v7 = 0LL;
  v81 = 0LL;
  v69 = 0;
  v90 = 0LL;
  v89 = 0LL;
  v93 = 0LL;
  if ( !a3 )
  {
    v66 = NtCurrentTeb();
    v66->LastStatusValue = 0;
    v67 = 0;
    goto LABEL_203;
  }
  v8 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  v9 = v8;
  if ( *(_BYTE *)(v8 + 15) == 5 )
  {
    v9 = v8 - 16LL * *(unsigned __int8 *)(v8 + 14);
    v70 = v9;
  }
  else
  {
    v70 = v8;
  }
  if ( *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) && *(char *)(v9 + 15) < 0 )
  {
    if ( (a2 & 0x10) == 0 )
    {
      v10 = v9 >> 4;
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((v9 >> 4) ^ *(_WORD *)(v9 + 8) ^ a1) )
        v11 = 0LL;
      else
        v11 = *(_QWORD *)(v9
                        - (((unsigned int)RtlpLFHKey ^ (unsigned int)(v9 >> 4) ^ *(_DWORD *)(v9 + 8) ^ (unsigned int)a1) >> 12));
      v12 = *(unsigned __int16 *)(v11 + 36);
      v13 = *(_BYTE *)(v9 + 15);
      if ( v13 == 5 )
      {
        v14 = *(unsigned __int16 *)(v70 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v13 & 0x40) != 0 )
      {
        v14 = *(unsigned __int16 *)(v70 + 16LL * (*(_BYTE *)(v9 + 15) & 0x3F) + 12);
      }
      else if ( (v13 & 0x3F) == 0x3F )
      {
        v62 = v70;
        if ( v13 >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v65 = *(_DWORD *)(v70 + 8);
            if ( (v65 & *(_DWORD *)(a1 + 124)) != 0 )
              LOWORD(v65) = *(_WORD *)(a1 + 136) ^ v65;
            v14 = *(_QWORD *)(v70 + 16LL * (unsigned __int16)v65);
            goto LABEL_14;
          }
          v64 = *(_WORD *)(v70 + 8);
        }
        else
        {
          v63 = *(_DWORD *)(v70 + 8) ^ RtlpLFHKey ^ a1 ^ v10;
          if ( !(_WORD)v63 )
            v7 = *(char **)(v70 - (v63 >> 12));
          v64 = *((_WORD *)v7 + 18);
          v62 = v70;
        }
        v14 = *(_QWORD *)(v62 + 16LL * v64);
      }
      else
      {
        v14 = *(_BYTE *)(v9 + 15) & 0x3F;
      }
LABEL_14:
      v15 = 16 * v12 - v14;
      v75 = v15;
      Heap = RtlAllocateHeap((PVOID)a1, a2 & 0xC003FFFF, a4);
      v78 = Heap;
      if ( Heap )
      {
        if ( a4 < v15 )
          v15 = a4;
        memmove(Heap, Src, v15);
        RtlFreeHeap((PVOID)a1, a2 & 0xC003FFFF, Src);
      }
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v18 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v18 = 2147353472LL;
      if ( !*(_BYTE *)v18 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
        return (char *)v78;
      v19 = v78;
      if ( v78 )
        RtlpLogHeapReallocateEvent(a1, (_DWORD)v78, (_DWORD)Src, v75, a4, 2);
      return (char *)v19;
    }
    return 0LL;
  }
  if ( v9 == a1 )
  {
    RtlpLogHeapFailure(9, a1, v9, 0, 0LL, 0LL);
    return 0LL;
  }
  v21 = *(_DWORD *)(a1 + 116) | a2;
  Flagsa = v21;
  if ( (v21 & 0x61000000) != 0 && (v21 & 0x10000000) == 0 )
    return (char *)RtlDebugReAllocateHeap(a1);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    v66 = NtCurrentTeb();
    v66->LastStatusValue = -1073741801;
    v67 = -1073741801;
LABEL_203:
    v66->LastErrorValue = RtlNtStatusToDosErrorNoTeb(v67);
    return 0LL;
  }
  v22 = a4;
  if ( !a4 )
    v22 = 1LL;
  v23 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v22);
  if ( v23 < 0x20 )
    v23 = 32LL;
  v72 = v23;
  LODWORD(v76) = 0;
  if ( (v21 & 1) == 0 )
  {
    if ( RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
    {
      ++*(_DWORD *)(a1 + 616);
    }
    else
    {
      if ( byte_1801D4988 )
      {
        v60 = NtCurrentTeb();
        v60->LastStatusValue = -1073741420;
        v60->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741420);
        goto LABEL_170;
      }
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      RtlpUpdateHeapRates(a1, 1LL);
    }
    v69 = 1;
    v21 ^= 1u;
    Flagsa = v21;
  }
  _m_prefetchw((const void *)v8);
  if ( *(_BYTE *)(v8 + 15) == 5 )
    v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
  v71 = v8;
  v85 = v8;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v24 = *(_DWORD *)(v8 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v8 + 8) = v24;
    if ( HIBYTE(v24) != ((unsigned __int8)v24 ^ (unsigned __int8)(BYTE1(v24) ^ BYTE2(v24))) )
      RtlpAnalyzeHeapFailure(a1, v8);
  }
  v81 = (_BYTE *)v8;
  v25 = (_DWORD *)(v8 + 8);
  v86 = (_WORD *)(v8 + 8);
  v26 = *(__int64 ***)(a1 + 312);
  do
  {
    if ( *(unsigned __int16 *)(v8 + 8) < (unsigned __int64)*((unsigned int *)v26 + 2) )
      break;
    v26 = (__int64 **)*v26;
  }
  while ( v26 );
  if ( (v21 & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) || (*(_BYTE *)(v8 + 10) & 2) != 0 )
    v72 += 16LL;
  v27 = (_BYTE *)(v8 + 15);
  v28 = *(_BYTE *)(v8 + 15);
  if ( (v28 & 0x3F) == 0 )
  {
    v58 = NtCurrentTeb();
    v58->LastStatusValue = -1073741811;
    v58->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
    goto LABEL_170;
  }
  if ( v28 == 4 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v98 = 0LL;
      v29 = *(_DWORD *)(v8 + 8);
      DWORD2(v98) = v29;
      if ( (v29 & *(_DWORD *)(a1 + 124)) != 0 )
      {
        v29 ^= *(_DWORD *)(a1 + 136);
        DWORD2(v98) = v29;
      }
      v21 = Flagsa;
    }
    else
    {
      LOWORD(v29) = *(_WORD *)(v8 + 8);
    }
    v76 = *(_QWORD *)(v8 - 48 + 32) - (unsigned __int16)v29;
    v73 = (v76 + *(unsigned __int16 *)v25) >> 4;
    v74 = v73;
    v72 = (v72 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  }
  else
  {
    v31 = *(unsigned __int16 *)(v8 + 8);
    v73 = v31;
    v74 = v31;
    if ( v28 == 5 )
    {
      v32 = *(unsigned __int16 *)(v8 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v28 & 0x40) != 0 )
    {
      v32 = *(unsigned __int16 *)(v8 + 16LL * (v28 & 0x3F) + 12);
    }
    else if ( (v28 & 0x3F) == 0x3F )
    {
      if ( v28 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v99 = 0LL;
          LODWORD(v37) = *v25;
          DWORD2(v99) = v37;
          if ( ((unsigned int)v37 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            LODWORD(v37) = *(_DWORD *)(a1 + 136) ^ v37;
            DWORD2(v99) = v37;
          }
          v21 = Flagsa;
          v73 = v31;
        }
        else
        {
          LOWORD(v37) = *(_WORD *)v25;
        }
      }
      else
      {
        if ( *(_WORD *)v25 ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (v8 >> 4)) )
          v37 = 0LL;
        else
          v37 = *(_QWORD *)(v8 - ((*v25 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(v8 >> 4)) >> 12));
        LOWORD(v37) = *(_WORD *)(v37 + 36);
        v21 = Flagsa;
        v31 = *(unsigned __int16 *)(v8 + 8);
        v73 = v31;
      }
      v32 = *(_QWORD *)(v8 + 16LL * (unsigned __int16)v37);
    }
    else
    {
      v32 = *(_BYTE *)(v8 + 15) & 0x3F;
    }
    v76 = 16 * v31 - v32;
    if ( v31 < *(unsigned __int16 *)(a1 + 432) )
    {
      v73 = v74;
      if ( ((unsigned __int8)(1 << (v31 & 7)) & *(_BYTE *)((v31 >> 3) + a1 + 434)) == 0 )
      {
        v33 = (_WORD *)(*(_QWORD *)(a1 + 424) + 2 * v74);
        if ( *v33 > 1u )
          --*v33;
      }
      v21 = Flagsa;
    }
  }
  v30 = v72 >> 4;
  *(_QWORD *)v82 = v72 >> 4;
  v77 = v72 >> 4;
  if ( v72 >> 4 <= v73 )
  {
    if ( v30 + 1 == v73 )
    {
      *(_QWORD *)v82 = v30 + 1;
      v77 = v30 + 1;
      v72 += 16LL;
      ++v30;
    }
    if ( *v27 == 4 )
    {
      *(_WORD *)v25 = v72 - a4;
    }
    else
    {
      if ( (*(_BYTE *)(v8 + 10) & 2) != 0 )
      {
        v100 = (_OWORD *)(v8 + 16LL * *(unsigned __int16 *)v25 - 16);
        v84 = v8 + 16 * v30 - 16;
        *(_OWORD *)v84 = *v100;
        NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
        if ( (NtGlobalFlag & 0x800) != 0 )
        {
          *(_QWORD *)v82 = v77;
          v73 = v74;
          *(_WORD *)(v84 + 2) = RtlpUpdateTagEntry(a1, *(_WORD *)(v84 + 2), v74, v77, 4);
          goto LABEL_71;
        }
LABEL_70:
        *(_QWORD *)v82 = v77;
        v73 = v74;
LABEL_71:
        LOBYTE(v21) = Flagsa;
        goto LABEL_72;
      }
      v95 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v95 & 0x800) == 0 )
        goto LABEL_70;
      *(_QWORD *)v82 = v77;
      *(_BYTE *)(v8 + 11) = RtlpUpdateTagEntry(a1, *(unsigned __int8 *)(v8 + 11), *(unsigned __int16 *)v25, v77, 4);
      LOBYTE(v21) = Flagsa;
      v73 = v74;
    }
LABEL_72:
    if ( a4 <= v76 )
    {
LABEL_73:
      if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
        *(__m128i *)(v8 + a4 + 16) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
      v34 = *(_QWORD *)v82;
      v35 = (_BYTE *)(v8 + 15);
      if ( *(_QWORD *)v82 != v73 )
      {
        if ( *(_BYTE *)(v8 + 15) == 4 )
        {
          v56 = v8 - 48;
          v88 = NtCurrentPeb()->NtGlobalFlag;
          v57 = v88;
          v34 = v77;
          if ( (v88 & 0x800) != 0 )
            *(_WORD *)(v56 + 18) = RtlpUpdateTagEntry(a1, *(_WORD *)(v56 + 18), v74, v77, 5);
          v90 = (const void *)(v56 + v72);
          v89 = 16 * v74 - v72;
          v87 = RtlpSecMemFreeVirtualMemory(v57, &v90, &v89, 0x4000LL);
          if ( v87 >= 0 )
          {
            *(_QWORD *)(v56 + 32) -= v89;
            v8 = v71;
          }
          else
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v90, v89, v87);
            RtlpBreakPointHeap();
            v8 = v71;
            v34 = v77;
          }
        }
        else
        {
          v47 = (unsigned __int16)*v86 - (unsigned __int64)LOWORD(v82[0]);
          v101 = v47;
          *v86 = v82[0];
          v48 = *(_DWORD *)(a1 + 112) & 0x40;
          v49 = *(_BYTE *)(v8 + 14);
          if ( v49 )
            v97 = (v8 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v49 << 16) + 0x10000;
          else
            v97 = a1;
          LOWORD(v68) = v82[0];
          RtlpCreateSplitBlock(a1, v48 != 0, v68, v47);
        }
      }
      if ( *v35 != 4 )
      {
        v36 = v72 - a4;
        if ( v72 - a4 >= 0x3F )
        {
          *(_QWORD *)(v8 + 16 * v34) = v36;
          *(_BYTE *)(v85 + 15) = 63;
        }
        else
        {
          *(_BYTE *)(v85 + 15) = v36;
        }
      }
      goto LABEL_170;
    }
    if ( (v21 & 8) != 0 )
    {
      memset_thunk_772440563353939046(&Src[v76], 0, a4 - v76);
      goto LABEL_73;
    }
    if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
      goto LABEL_73;
    v44 = v76 & 3;
    v91 = v44;
    if ( (v76 & 3) != 0 )
    {
      v44 = 4 - v44;
      v91 = v44;
    }
    if ( a4 <= v44 + v76 )
      goto LABEL_73;
    if ( ((a4 - v44 - v76) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      goto LABEL_73;
    v45 = v44 + v76 + v8 + 16;
    v96 = v45;
    v46 = ((a4 - v44 - v76) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
    v92 = v46;
    if ( !v46 )
      goto LABEL_73;
    if ( (v45 & 4) != 0 )
    {
      *(_DWORD *)v45 = -1163005939;
      v92 = --v46;
      if ( !v46 )
        goto LABEL_73;
      v45 += 4LL;
      v96 = v45;
    }
    memset64((void *)v45, 0xBAADF00DBAADF00DuLL, v46 >> 1);
    if ( (v46 & 1) != 0 )
      *(_DWORD *)(v45 + 4 * v46 - 4) = -1163005939;
    goto LABEL_73;
  }
  if ( *v27 == 4 )
    goto LABEL_87;
  if ( !(unsigned __int8)RtlpGrowBlockInPlace(a1, v72 >> 4) )
  {
    v27 = (_BYTE *)(v8 + 15);
LABEL_87:
    if ( (v21 & 0x10) != 0 )
    {
LABEL_107:
      Src = v7;
      goto LABEL_170;
    }
    v38 = v21 & 0xC003FFFF;
    Flagsa = v38;
    v39 = *(_BYTE *)(v8 + 10);
    if ( (v39 & 2) != 0 )
    {
      v38 = (16 * (v39 & 0xE0 | 0x10)) | v38 & 0xFFFFF1FF;
      Flagsa = v38;
      if ( *v27 == 4 )
        v54 = (unsigned __int16 *)(v8 - 30);
      else
        v54 = (unsigned __int16 *)(v8 + 16LL * *(unsigned __int16 *)(v8 + 8) - 14);
      v55 = *v54;
      if ( (__int16)v55 > 0 )
      {
        v38 |= v55 << 18;
        Flagsa = v38;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v59 = *(unsigned __int8 *)(v8 + 11);
      if ( (_BYTE)v59 )
      {
        v38 |= v59 << 18;
        Flagsa |= v59 << 18;
      }
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v8 + 11) = *(_BYTE *)(v8 + 8) ^ *(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10);
      *(_DWORD *)(v8 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    v81 = 0LL;
    v40 = (char *)RtlAllocateHeap((PVOID)a1, v38, a4);
    v79 = v40;
    if ( !v40 )
    {
      v7 = 0LL;
LABEL_106:
      v93 = Src;
      goto LABEL_107;
    }
    v41 = (__int64)(v40 - 16);
    v80 = v40 - 16;
    _m_prefetchw(v40 - 16);
    if ( *(v40 - 1) == 5 )
    {
      v41 -= 16LL * *(unsigned __int8 *)(v41 + 14);
      v80 = (char *)v41;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      v42 = *(_DWORD *)(v41 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v41 + 8) = v42;
      if ( HIBYTE(v42) != ((unsigned __int8)v42 ^ (unsigned __int8)(BYTE1(v42) ^ BYTE2(v42))) )
        RtlpAnalyzeHeapFailure(a1, v41);
    }
    if ( (*(_BYTE *)(v41 + 10) & 2) != 0 )
    {
      ExtraStuffPointer = (_OWORD *)RtlpGetExtraStuffPointer(v41);
      v83 = ExtraStuffPointer;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v51 = *(_DWORD *)(v8 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v8 + 8) = v51;
        if ( HIBYTE(v51) != ((unsigned __int8)v51 ^ (unsigned __int8)(BYTE2(v51) ^ BYTE1(v51))) )
          RtlpAnalyzeHeapFailure(a1, v8);
        ExtraStuffPointer = v83;
        v41 = (__int64)v80;
      }
      if ( (*(_BYTE *)(v8 + 10) & 2) != 0 )
      {
        v52 = RtlpGetExtraStuffPointer(v8);
        *(_QWORD *)(v53 + 8) = *(_QWORD *)(v52 + 8);
      }
      else
      {
        *ExtraStuffPointer = 0LL;
      }
      if ( !*(_DWORD *)(a1 + 124) )
        goto LABEL_101;
      *(_BYTE *)(v8 + 11) = *(_BYTE *)(v8 + 8) ^ *(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10);
      *(_DWORD *)(v8 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v41 + 11) = *(_BYTE *)(v41 + 8) ^ *(_BYTE *)(v41 + 9) ^ *(_BYTE *)(v41 + 10);
      *(_DWORD *)(v41 + 8) ^= *(_DWORD *)(a1 + 136);
    }
LABEL_101:
    v81 = 0LL;
    if ( v69 )
    {
      RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v69 = 0;
      v38 &= ~1u;
      Flagsa = v38;
    }
    v43 = v76;
    if ( a4 < v76 )
      v43 = a4;
    v7 = v79;
    memmove(v79, Src, v43);
    RtlFreeHeap((PVOID)a1, v38, Src);
    goto LABEL_106;
  }
LABEL_170:
  if ( v81 && *(_DWORD *)(a1 + 124) )
  {
    v81[11] = v81[8] ^ v81[9] ^ v81[10];
    *((_DWORD *)v81 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v69 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  if ( RtlGetCurrentServiceSessionId() )
    v61 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v61 = 2147353472LL;
  if ( *(_BYTE *)v61 && (NtCurrentPeb()->TracingFlags & 1) != 0 && Src && (Flagsa & 0x800000) == 0 )
    RtlpLogHeapReallocateEvent(a1, (_DWORD)Src, (_DWORD)v93, v76, a4, 3);
  return Src;
}

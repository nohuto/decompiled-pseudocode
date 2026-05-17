/*
 * XREFs of RtlpReAllocateHeap @ 0x1800A18B0
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x1800A1040 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlTryEnterCriticalSection @ 0x18002EEA0 (RtlTryEnterCriticalSection.c)
 *     RtlpAnalyzeHeapFailure @ 0x18002F740 (RtlpAnalyzeHeapFailure.c)
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpCreateSplitBlock @ 0x18002FC50 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180030A60 (RtlpGrowBlockInPlace.c)
 *     RtlpBreakPointHeap @ 0x180031DF0 (RtlpBreakPointHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18008FA40 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpUpdateTagEntry @ 0x18009C630 (RtlpUpdateTagEntry.c)
 *     RtlpGetExtraStuffPointer @ 0x18009CFC0 (RtlpGetExtraStuffPointer.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlDebugReAllocateHeap @ 0x1800A2A3C (RtlDebugReAllocateHeap.c)
 *     RtlpUpdateHeapRates @ 0x1800DFE60 (RtlpUpdateHeapRates.c)
 *     RtlpHeapExceptionFilter @ 0x18010A4D0 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapReallocateEvent @ 0x180111D34 (RtlpLogHeapReallocateEvent.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpReAllocateHeap(unsigned __int16 *Src, int a2, char *a3, unsigned __int64 a4)
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
  void *Heap; // rax
  _DWORD *SharedData; // rcx
  __int64 v18; // rcx
  void *v19; // rdi
  unsigned int v21; // r15d
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
  unsigned int v38; // r15d
  char v39; // al
  __int64 v40; // rax
  unsigned __int64 v41; // rdi
  int v42; // edx
  size_t v43; // rcx
  size_t v44; // rax
  __int64 v45; // r8
  unsigned __int64 v46; // rdx
  char v47; // r9
  __int64 v48; // rcx
  int v49; // edx
  unsigned __int8 v50; // al
  unsigned __int16 *v51; // r10
  _OWORD *ExtraStuffPointer; // rdx
  int v53; // edi
  __int64 v54; // rax
  __int64 v55; // rdx
  unsigned __int16 *v56; // rax
  int v57; // ecx
  unsigned __int64 v58; // r14
  __int64 v59; // rcx
  struct _TEB *v60; // rdi
  int v61; // eax
  struct _TEB *v62; // rdi
  __int64 v63; // rcx
  unsigned __int64 v64; // r8
  unsigned int v65; // ecx
  unsigned __int16 v66; // ax
  int v67; // eax
  struct _TEB *v68; // rdi
  unsigned int v69; // ecx
  char v70; // [rsp+40h] [rbp-138h]
  unsigned __int64 v71; // [rsp+48h] [rbp-130h]
  unsigned __int64 v72; // [rsp+48h] [rbp-130h]
  unsigned __int64 v73; // [rsp+50h] [rbp-128h]
  unsigned __int64 v74; // [rsp+58h] [rbp-120h]
  __int64 v75; // [rsp+60h] [rbp-118h]
  int v76; // [rsp+68h] [rbp-110h]
  size_t v77; // [rsp+68h] [rbp-110h]
  unsigned __int64 v78; // [rsp+78h] [rbp-100h]
  void *v79; // [rsp+80h] [rbp-F8h]
  char *v80; // [rsp+80h] [rbp-F8h]
  __int64 v81; // [rsp+88h] [rbp-F0h]
  _BYTE *v82; // [rsp+90h] [rbp-E8h]
  unsigned __int64 v83; // [rsp+A0h] [rbp-D8h]
  _OWORD *v84; // [rsp+A8h] [rbp-D0h]
  unsigned __int64 v85; // [rsp+A8h] [rbp-D0h]
  unsigned __int64 v86; // [rsp+B0h] [rbp-C8h]
  _WORD *v87; // [rsp+B8h] [rbp-C0h]
  int v88; // [rsp+B8h] [rbp-C0h]
  unsigned int v89; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 v90; // [rsp+C8h] [rbp-B0h] BYREF
  const void *v91; // [rsp+D0h] [rbp-A8h] BYREF
  size_t v92; // [rsp+D8h] [rbp-A0h]
  unsigned __int64 v93; // [rsp+E0h] [rbp-98h]
  char *v94; // [rsp+E8h] [rbp-90h]
  unsigned int NtGlobalFlag; // [rsp+F0h] [rbp-88h]
  unsigned int v96; // [rsp+F4h] [rbp-84h]
  __int64 v97; // [rsp+F8h] [rbp-80h]
  unsigned __int16 *v98; // [rsp+100h] [rbp-78h]
  __int128 v99; // [rsp+108h] [rbp-70h]
  __int128 v100; // [rsp+118h] [rbp-60h]
  _OWORD *v101; // [rsp+128h] [rbp-50h]
  __int64 v102; // [rsp+130h] [rbp-48h]
  unsigned int v104; // [rsp+188h] [rbp+10h]
  char *Srca; // [rsp+190h] [rbp+18h]

  Srca = a3;
  v7 = 0LL;
  v82 = 0LL;
  v70 = 0;
  v91 = 0LL;
  v90 = 0LL;
  v94 = 0LL;
  if ( !a3 )
  {
    v68 = NtCurrentTeb();
    v68->LastStatusValue = 0;
    v69 = 0;
    goto LABEL_203;
  }
  v8 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  v9 = v8;
  if ( *(_BYTE *)(v8 + 15) == 5 )
  {
    v9 = v8 - 16LL * *(unsigned __int8 *)(v8 + 14);
    v71 = v9;
  }
  else
  {
    v71 = v8;
  }
  if ( *((_BYTE *)Src + 418) == 2 && *((_QWORD *)Src + 51) && *(char *)(v9 + 15) < 0 )
  {
    if ( (a2 & 0x10) == 0 )
    {
      v10 = v9 >> 4;
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((v9 >> 4) ^ *(_WORD *)(v9 + 8) ^ (unsigned __int16)Src) )
        v11 = 0LL;
      else
        v11 = *(_QWORD *)(v9
                        - (((unsigned int)RtlpLFHKey ^ (unsigned int)(v9 >> 4) ^ *(_DWORD *)(v9 + 8) ^ (unsigned int)Src) >> 12));
      v12 = *(unsigned __int16 *)(v11 + 36);
      v13 = *(_BYTE *)(v9 + 15);
      if ( v13 == 5 )
      {
        v14 = *(unsigned __int16 *)(v71 + 12) ^ (unsigned __int64)Src[70];
      }
      else if ( (v13 & 0x40) != 0 )
      {
        v14 = *(unsigned __int16 *)(v71 + 16LL * (*(_BYTE *)(v9 + 15) & 0x3F) + 12);
      }
      else if ( (v13 & 0x3F) == 0x3F )
      {
        v64 = v71;
        if ( v13 >= 0 )
        {
          if ( *((_DWORD *)Src + 31) )
          {
            v67 = *(_DWORD *)(v71 + 8);
            if ( (v67 & *((_DWORD *)Src + 31)) != 0 )
              LOWORD(v67) = Src[68] ^ v67;
            v14 = *(_QWORD *)(v71 + 16LL * (unsigned __int16)v67);
            goto LABEL_14;
          }
          v66 = *(_WORD *)(v71 + 8);
        }
        else
        {
          v65 = *(_DWORD *)(v71 + 8) ^ RtlpLFHKey ^ (unsigned int)Src ^ v10;
          if ( !(_WORD)v65 )
            v7 = *(char **)(v71 - (v65 >> 12));
          v66 = *((_WORD *)v7 + 18);
          v64 = v71;
        }
        v14 = *(_QWORD *)(v64 + 16LL * v66);
      }
      else
      {
        v14 = *(_BYTE *)(v9 + 15) & 0x3F;
      }
LABEL_14:
      v15 = 16 * v12 - v14;
      v76 = v15;
      Heap = (void *)RtlAllocateHeap((__int64)Src, a2 & 0xC003FFFF, a4);
      v79 = Heap;
      if ( Heap )
      {
        if ( a4 < v15 )
          v15 = a4;
        memmove(Heap, Srca, v15);
        RtlFreeHeap((__int64)Src, a2 & 0xC003FFFF, (unsigned __int64)Srca);
      }
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v18 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v18 = 2147353472LL;
      if ( !*(_BYTE *)v18 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
        return (__int64)v79;
      v19 = v79;
      if ( v79 )
        RtlpLogHeapReallocateEvent((_DWORD)Src, (_DWORD)v79, (_DWORD)Srca, v76, a4, 2);
      return (__int64)v19;
    }
    return 0LL;
  }
  if ( (unsigned __int16 *)v9 == Src )
  {
    RtlpLogHeapFailure(9, (__int64)Src, v9, 0LL, 0LL, 0LL);
    return 0LL;
  }
  v21 = *((_DWORD *)Src + 29) | a2;
  v104 = v21;
  if ( (v21 & 0x61000000) != 0 && (v21 & 0x10000000) == 0 )
    return RtlDebugReAllocateHeap(Src);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    v68 = NtCurrentTeb();
    v68->LastStatusValue = -1073741801;
    v69 = -1073741801;
LABEL_203:
    v68->LastErrorValue = RtlNtStatusToDosErrorNoTeb(v69);
    return 0LL;
  }
  v22 = a4;
  if ( !a4 )
    v22 = 1LL;
  v23 = *((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v22);
  if ( v23 < 0x20 )
    v23 = 32LL;
  v73 = v23;
  LODWORD(v77) = 0;
  if ( (v21 & 1) == 0 )
  {
    if ( (unsigned int)RtlTryEnterCriticalSection(*((_QWORD *)Src + 44)) )
    {
      ++*((_DWORD *)Src + 154);
    }
    else
    {
      if ( byte_1801D2908 )
      {
        v62 = NtCurrentTeb();
        v62->LastStatusValue = -1073741420;
        v62->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0xC0000194);
        goto LABEL_170;
      }
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      RtlpUpdateHeapRates(Src, 1LL);
    }
    v70 = 1;
    v21 ^= 1u;
    v104 = v21;
  }
  _m_prefetchw((const void *)v8);
  if ( *(_BYTE *)(v8 + 15) == 5 )
    v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
  v72 = v8;
  v86 = v8;
  if ( *((_DWORD *)Src + 31) )
  {
    v24 = *(_DWORD *)(v8 + 8) ^ *((_DWORD *)Src + 34);
    *(_DWORD *)(v8 + 8) = v24;
    if ( HIBYTE(v24) != ((unsigned __int8)v24 ^ (unsigned __int8)(BYTE1(v24) ^ BYTE2(v24))) )
      RtlpAnalyzeHeapFailure((__int64)Src, v8);
  }
  v82 = (_BYTE *)v8;
  v25 = (_DWORD *)(v8 + 8);
  v87 = (_WORD *)(v8 + 8);
  v26 = (__int64 **)*((_QWORD *)Src + 39);
  do
  {
    if ( *(unsigned __int16 *)(v8 + 8) < (unsigned __int64)*((unsigned int *)v26 + 2) )
      break;
    v26 = (__int64 **)*v26;
  }
  while ( v26 );
  if ( (v21 & 0x3C000100) != 0 || *((_QWORD *)Src + 41) || (*(_BYTE *)(v8 + 10) & 2) != 0 )
    v73 += 16LL;
  v27 = (_BYTE *)(v8 + 15);
  v28 = *(_BYTE *)(v8 + 15);
  if ( (v28 & 0x3F) == 0 )
  {
    v60 = NtCurrentTeb();
    v60->LastStatusValue = -1073741811;
    v60->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0xC000000D);
    goto LABEL_170;
  }
  if ( v28 == 4 )
  {
    if ( *((_DWORD *)Src + 31) )
    {
      v99 = 0LL;
      v29 = *(_DWORD *)(v8 + 8);
      DWORD2(v99) = v29;
      if ( (v29 & *((_DWORD *)Src + 31)) != 0 )
      {
        v29 ^= *((_DWORD *)Src + 34);
        DWORD2(v99) = v29;
      }
      v21 = v104;
    }
    else
    {
      LOWORD(v29) = *(_WORD *)(v8 + 8);
    }
    v77 = *(_QWORD *)(v8 - 48 + 32) - (unsigned __int16)v29;
    v74 = (v77 + *(unsigned __int16 *)v25) >> 4;
    v75 = v74;
    v73 = (v73 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  }
  else
  {
    v31 = *(unsigned __int16 *)(v8 + 8);
    v74 = v31;
    v75 = v31;
    if ( v28 == 5 )
    {
      v32 = *(unsigned __int16 *)(v8 + 12) ^ (unsigned __int64)Src[70];
    }
    else if ( (v28 & 0x40) != 0 )
    {
      v32 = *(unsigned __int16 *)(v8 + 16LL * (v28 & 0x3F) + 12);
    }
    else if ( (v28 & 0x3F) == 0x3F )
    {
      if ( v28 >= 0 )
      {
        if ( *((_DWORD *)Src + 31) )
        {
          v100 = 0LL;
          LODWORD(v37) = *v25;
          DWORD2(v100) = v37;
          if ( ((unsigned int)v37 & *((_DWORD *)Src + 31)) != 0 )
          {
            LODWORD(v37) = *((_DWORD *)Src + 34) ^ v37;
            DWORD2(v100) = v37;
          }
          v21 = v104;
          v74 = v31;
        }
        else
        {
          LOWORD(v37) = *(_WORD *)v25;
        }
      }
      else
      {
        if ( *(_WORD *)v25 ^ (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)Src ^ (v8 >> 4)) )
          v37 = 0LL;
        else
          v37 = *(_QWORD *)(v8 - ((*v25 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)Src ^ (unsigned int)(v8 >> 4)) >> 12));
        LOWORD(v37) = *(_WORD *)(v37 + 36);
        v21 = v104;
        v31 = *(unsigned __int16 *)(v8 + 8);
        v74 = v31;
      }
      v32 = *(_QWORD *)(v8 + 16LL * (unsigned __int16)v37);
    }
    else
    {
      v32 = *(_BYTE *)(v8 + 15) & 0x3F;
    }
    v77 = 16 * v31 - v32;
    if ( v31 < Src[216] )
    {
      v74 = v75;
      if ( ((unsigned __int8)(1 << (v31 & 7)) & *((_BYTE *)Src + (v31 >> 3) + 434)) == 0 )
      {
        v33 = (_WORD *)(*((_QWORD *)Src + 53) + 2 * v75);
        if ( *v33 > 1u )
          --*v33;
      }
      v21 = v104;
    }
  }
  v30 = v73 >> 4;
  v83 = v73 >> 4;
  v78 = v73 >> 4;
  if ( v73 >> 4 <= v74 )
  {
    if ( v30 + 1 == v74 )
    {
      v83 = v30 + 1;
      v78 = v30 + 1;
      v73 += 16LL;
      ++v30;
    }
    if ( *v27 == 4 )
    {
      *(_WORD *)v25 = v73 - a4;
    }
    else
    {
      if ( (*(_BYTE *)(v8 + 10) & 2) != 0 )
      {
        v101 = (_OWORD *)(v8 + 16LL * *(unsigned __int16 *)v25 - 16);
        v85 = v8 + 16 * v30 - 16;
        *(_OWORD *)v85 = *v101;
        NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
        if ( (NtGlobalFlag & 0x800) != 0 )
        {
          v83 = v78;
          v74 = v75;
          *(_WORD *)(v85 + 2) = RtlpUpdateTagEntry((__int64)Src, *(_WORD *)(v85 + 2), v75, v78, 4);
          goto LABEL_71;
        }
LABEL_70:
        v83 = v78;
        v74 = v75;
LABEL_71:
        LOBYTE(v21) = v104;
        goto LABEL_72;
      }
      v96 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v96 & 0x800) == 0 )
        goto LABEL_70;
      v83 = v78;
      *(_BYTE *)(v8 + 11) = RtlpUpdateTagEntry(
                              (__int64)Src,
                              *(unsigned __int8 *)(v8 + 11),
                              *(unsigned __int16 *)v25,
                              v78,
                              4);
      LOBYTE(v21) = v104;
      v74 = v75;
    }
LABEL_72:
    if ( a4 <= v77 )
    {
LABEL_73:
      if ( (Src[56] & 0x20) != 0 )
        *(__m128i *)(v8 + a4 + 16) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
      v34 = v83;
      v35 = (_BYTE *)(v8 + 15);
      if ( v83 != v74 )
      {
        v47 = *(_BYTE *)(v8 + 10) & 0xFE;
        if ( *(_BYTE *)(v8 + 15) == 4 )
        {
          v58 = v8 - 48;
          v89 = NtCurrentPeb()->NtGlobalFlag;
          v59 = v89;
          v34 = v78;
          if ( (v89 & 0x800) != 0 )
            *(_WORD *)(v58 + 18) = RtlpUpdateTagEntry((__int64)Src, *(_WORD *)(v58 + 18), v75, v78, 5);
          v91 = (const void *)(v58 + v73);
          v90 = 16 * v75 - v73;
          v88 = RtlpSecMemFreeVirtualMemory(v59, (__int64 *)&v91, (__int64 *)&v90, 0x4000LL);
          if ( v88 >= 0 )
          {
            *(_QWORD *)(v58 + 32) -= v90;
            v8 = v72;
          }
          else
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v91, v90, v88);
            RtlpBreakPointHeap();
            v8 = v72;
            v34 = v78;
          }
        }
        else
        {
          v48 = (unsigned __int16)*v87 - (unsigned __int64)(unsigned __int16)v83;
          v102 = v48;
          *v87 = v83;
          v49 = *((_DWORD *)Src + 28) & 0x40;
          v50 = *(_BYTE *)(v8 + 14);
          if ( v50 )
          {
            v51 = (unsigned __int16 *)((v8 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v50 << 16) + 0x10000);
            v98 = v51;
          }
          else
          {
            v51 = Src;
            v98 = Src;
          }
          RtlpCreateSplitBlock((__int64)Src, (__int64)v51, v8 + 16 * v83, v47, v49 != 0, v83, v48);
        }
      }
      if ( *v35 != 4 )
      {
        v36 = v73 - a4;
        if ( v73 - a4 >= 0x3F )
        {
          *(_QWORD *)(v8 + 16 * v34) = v36;
          *(_BYTE *)(v86 + 15) = 63;
        }
        else
        {
          *(_BYTE *)(v86 + 15) = v36;
        }
      }
      goto LABEL_170;
    }
    if ( (v21 & 8) != 0 )
    {
      memset_thunk_772440563353939046(&Srca[v77], 0, a4 - v77);
      goto LABEL_73;
    }
    if ( (Src[56] & 0x40) == 0 )
      goto LABEL_73;
    v44 = v77 & 3;
    v92 = v44;
    if ( (v77 & 3) != 0 )
    {
      v44 = 4 - v44;
      v92 = v44;
    }
    if ( a4 <= v44 + v77 )
      goto LABEL_73;
    if ( ((a4 - v44 - v77) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      goto LABEL_73;
    v45 = v44 + v77 + v8 + 16;
    v97 = v45;
    v46 = ((a4 - v44 - v77) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
    v93 = v46;
    if ( !v46 )
      goto LABEL_73;
    if ( (v45 & 4) != 0 )
    {
      *(_DWORD *)v45 = -1163005939;
      v93 = --v46;
      if ( !v46 )
        goto LABEL_73;
      v45 += 4LL;
      v97 = v45;
    }
    memset64((void *)v45, 0xBAADF00DBAADF00DuLL, v46 >> 1);
    if ( (v46 & 1) != 0 )
      *(_DWORD *)(v45 + 4 * v46 - 4) = -1163005939;
    goto LABEL_73;
  }
  if ( *v27 == 4 )
    goto LABEL_87;
  if ( !RtlpGrowBlockInPlace((__int64)Src, v21, v8, a4, v73 >> 4) )
  {
    v27 = (_BYTE *)(v8 + 15);
LABEL_87:
    if ( (v21 & 0x10) != 0 )
    {
LABEL_107:
      Srca = v7;
      goto LABEL_170;
    }
    v38 = v21 & 0xC003FFFF;
    v104 = v38;
    v39 = *(_BYTE *)(v8 + 10);
    if ( (v39 & 2) != 0 )
    {
      v38 = (16 * (v39 & 0xE0 | 0x10)) | v38 & 0xFFFFF1FF;
      v104 = v38;
      if ( *v27 == 4 )
        v56 = (unsigned __int16 *)(v8 - 30);
      else
        v56 = (unsigned __int16 *)(v8 + 16LL * *(unsigned __int16 *)(v8 + 8) - 14);
      v57 = *v56;
      if ( (__int16)v57 > 0 )
      {
        v38 |= v57 << 18;
        v104 = v38;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v61 = *(unsigned __int8 *)(v8 + 11);
      if ( (_BYTE)v61 )
      {
        v38 |= v61 << 18;
        v104 |= v61 << 18;
      }
    }
    if ( *((_DWORD *)Src + 31) )
    {
      *(_BYTE *)(v8 + 11) = *(_BYTE *)(v8 + 8) ^ *(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10);
      *(_DWORD *)(v8 + 8) ^= *((_DWORD *)Src + 34);
    }
    v82 = 0LL;
    v40 = RtlAllocateHeap((__int64)Src, v38, a4);
    v80 = (char *)v40;
    if ( !v40 )
    {
      v7 = 0LL;
LABEL_106:
      v94 = Srca;
      goto LABEL_107;
    }
    v41 = v40 - 16;
    v81 = v40 - 16;
    _m_prefetchw((const void *)(v40 - 16));
    if ( *(_BYTE *)(v40 - 16 + 15) == 5 )
    {
      v41 -= 16LL * *(unsigned __int8 *)(v41 + 14);
      v81 = v41;
    }
    if ( *((_DWORD *)Src + 31) )
    {
      v42 = *(_DWORD *)(v41 + 8) ^ *((_DWORD *)Src + 34);
      *(_DWORD *)(v41 + 8) = v42;
      if ( HIBYTE(v42) != ((unsigned __int8)v42 ^ (unsigned __int8)(BYTE1(v42) ^ BYTE2(v42))) )
        RtlpAnalyzeHeapFailure((__int64)Src, v41);
    }
    if ( (*(_BYTE *)(v41 + 10) & 2) != 0 )
    {
      ExtraStuffPointer = (_OWORD *)RtlpGetExtraStuffPointer(v41);
      v84 = ExtraStuffPointer;
      if ( *((_DWORD *)Src + 31) )
      {
        v53 = *(_DWORD *)(v8 + 8) ^ *((_DWORD *)Src + 34);
        *(_DWORD *)(v8 + 8) = v53;
        if ( HIBYTE(v53) != ((unsigned __int8)v53 ^ (unsigned __int8)(BYTE2(v53) ^ BYTE1(v53))) )
          RtlpAnalyzeHeapFailure((__int64)Src, v8);
        ExtraStuffPointer = v84;
        v41 = v81;
      }
      if ( (*(_BYTE *)(v8 + 10) & 2) != 0 )
      {
        v54 = RtlpGetExtraStuffPointer(v8);
        *(_QWORD *)(v55 + 8) = *(_QWORD *)(v54 + 8);
      }
      else
      {
        *ExtraStuffPointer = 0LL;
      }
      if ( !*((_DWORD *)Src + 31) )
        goto LABEL_101;
      *(_BYTE *)(v8 + 11) = *(_BYTE *)(v8 + 8) ^ *(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10);
      *(_DWORD *)(v8 + 8) ^= *((_DWORD *)Src + 34);
    }
    if ( *((_DWORD *)Src + 31) )
    {
      *(_BYTE *)(v41 + 11) = *(_BYTE *)(v41 + 8) ^ *(_BYTE *)(v41 + 9) ^ *(_BYTE *)(v41 + 10);
      *(_DWORD *)(v41 + 8) ^= *((_DWORD *)Src + 34);
    }
LABEL_101:
    v82 = 0LL;
    if ( v70 )
    {
      RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
      v70 = 0;
      v38 &= ~1u;
      v104 = v38;
    }
    v43 = v77;
    if ( a4 < v77 )
      v43 = a4;
    v7 = v80;
    memmove(v80, Srca, v43);
    RtlFreeHeap((__int64)Src, v38, (unsigned __int64)Srca);
    goto LABEL_106;
  }
LABEL_170:
  if ( v82 && *((_DWORD *)Src + 31) )
  {
    v82[11] = v82[8] ^ v82[9] ^ v82[10];
    *((_DWORD *)v82 + 2) ^= *((_DWORD *)Src + 34);
  }
  if ( v70 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v63 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v63 = 2147353472LL;
  if ( *(_BYTE *)v63 && (NtCurrentPeb()->TracingFlags & 1) != 0 && Srca && (v104 & 0x800000) == 0 )
    RtlpLogHeapReallocateEvent((_DWORD)Src, (_DWORD)Srca, (_DWORD)v94, v77, a4, 3);
  return (__int64)Srca;
}

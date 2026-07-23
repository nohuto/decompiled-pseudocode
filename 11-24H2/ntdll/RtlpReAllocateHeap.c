/*
 * XREFs of RtlpReAllocateHeap @ 0x18005B780
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18005AF10 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpBreakPointHeap @ 0x18000D5E4 (RtlpBreakPointHeap.c)
 *     RtlpGrowBlockInPlace @ 0x18000D610 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x18000DD00 (RtlpCreateSplitBlock.c)
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x18001FE30 (RtlpGetExtraStuffPointer.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028580 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlDebugReAllocateHeap @ 0x18005C7E8 (RtlDebugReAllocateHeap.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlTryEnterCriticalSection @ 0x1800A09E0 (RtlTryEnterCriticalSection.c)
 *     RtlpUpdateTagEntry @ 0x1800EE4DC (RtlpUpdateTagEntry.c)
 *     RtlpHeapExceptionFilter @ 0x180105400 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapReallocateEvent @ 0x18010D1A4 (RtlpLogHeapReallocateEvent.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

char *__fastcall RtlpReAllocateHeap(unsigned __int16 *BaseAddress, int a2, char *a3, SIZE_T a4)
{
  _WORD *v8; // rdi
  struct _TEB *v9; // rdi
  NTSTATUS v10; // ecx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  char *v14; // rdx
  unsigned __int64 v15; // r9
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // r8
  char v19; // dl
  unsigned __int64 v20; // rdx
  char *v21; // rcx
  int v22; // eax
  size_t v23; // rdi
  PVOID Heap; // rax
  _DWORD *SharedData; // rcx
  __int64 v26; // rcx
  PVOID v27; // rdi
  unsigned int v28; // esi
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  struct _TEB *v31; // rdi
  unsigned int v32; // ecx
  unsigned int v33; // eax
  unsigned __int64 v34; // r10
  _DWORD *v35; // rdx
  int v36; // edx
  unsigned __int16 *v37; // r8
  __int64 **v38; // rcx
  _BYTE *v39; // r9
  char v40; // cl
  struct _TEB *v41; // rdi
  int v42; // eax
  unsigned __int64 v43; // r12
  unsigned __int64 v44; // rcx
  int v45; // eax
  unsigned __int8 v46; // al
  int v47; // r15d
  _WORD *v48; // rcx
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // r15
  SIZE_T v51; // r8
  SIZE_T v52; // rax
  __int64 v53; // r8
  unsigned __int64 v54; // rdx
  _BYTE *v55; // rsi
  char v56; // r9
  unsigned __int64 v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // rdi
  int v60; // ecx
  unsigned __int8 v61; // al
  unsigned __int16 *v62; // rdx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rcx
  ULONG v65; // esi
  char v66; // cl
  int v67; // ecx
  int v68; // eax
  unsigned __int64 v69; // r15
  _DWORD *v70; // rdx
  int v71; // edx
  __int64 ExtraStuffPointer; // rdi
  int v73; // edi
  size_t v74; // rcx
  _DWORD *v75; // rcx
  __int64 v76; // rcx
  char *v77; // rdi
  char v78; // [rsp+40h] [rbp-138h]
  char *v79; // [rsp+48h] [rbp-130h]
  unsigned __int64 v80; // [rsp+48h] [rbp-130h]
  unsigned __int64 v81; // [rsp+50h] [rbp-128h]
  _DWORD *v82; // [rsp+58h] [rbp-120h]
  unsigned int v83; // [rsp+58h] [rbp-120h]
  unsigned __int64 v84; // [rsp+60h] [rbp-118h]
  int v85; // [rsp+68h] [rbp-110h]
  SIZE_T v86; // [rsp+68h] [rbp-110h]
  unsigned __int64 v87; // [rsp+78h] [rbp-100h]
  PVOID v88; // [rsp+80h] [rbp-F8h]
  _WORD *v89; // [rsp+80h] [rbp-F8h]
  int *v90; // [rsp+88h] [rbp-F0h]
  NTSTATUS v91; // [rsp+88h] [rbp-F0h]
  _BYTE *v92; // [rsp+90h] [rbp-E8h]
  ULONG_PTR v93; // [rsp+A0h] [rbp-D8h] BYREF
  unsigned __int64 v94; // [rsp+A8h] [rbp-D0h]
  _BYTE *v95; // [rsp+B0h] [rbp-C8h]
  unsigned __int64 v96; // [rsp+B8h] [rbp-C0h]
  PVOID v97; // [rsp+C0h] [rbp-B8h] BYREF
  unsigned __int64 v98; // [rsp+C8h] [rbp-B0h]
  unsigned __int16 *v99; // [rsp+D0h] [rbp-A8h]
  SIZE_T v100; // [rsp+D8h] [rbp-A0h]
  unsigned __int64 v101; // [rsp+E0h] [rbp-98h]
  char *v102; // [rsp+E8h] [rbp-90h]
  unsigned int NtGlobalFlag; // [rsp+F0h] [rbp-88h]
  unsigned int v104; // [rsp+F4h] [rbp-84h]
  __int64 v105; // [rsp+F8h] [rbp-80h]
  __int128 v106; // [rsp+100h] [rbp-78h]
  __int128 v107; // [rsp+110h] [rbp-68h]
  _OWORD *v108; // [rsp+120h] [rbp-58h]
  __int64 v109; // [rsp+128h] [rbp-50h]
  unsigned __int64 v110; // [rsp+130h] [rbp-48h]
  unsigned int v112; // [rsp+188h] [rbp+10h]
  char *Src; // [rsp+190h] [rbp+18h]

  Src = a3;
  v8 = 0LL;
  v92 = 0LL;
  v78 = 0;
  v97 = 0LL;
  v93 = 0LL;
  v102 = 0LL;
  if ( !a3 )
  {
    v9 = NtCurrentTeb();
    v9->LastStatusValue = 0;
    v10 = 0;
LABEL_3:
    v9->LastErrorValue = RtlNtStatusToDosErrorNoTeb(v10);
    return 0LL;
  }
  v12 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  v13 = v12;
  if ( *(_BYTE *)(v12 + 15) == 5 )
  {
    v13 = v12 - 16LL * *(unsigned __int8 *)(v12 + 14);
    v79 = (char *)v13;
  }
  else
  {
    v79 = Src - 16;
  }
  if ( *((_BYTE *)BaseAddress + 418) == 2 )
  {
    if ( *((_QWORD *)BaseAddress + 51) )
    {
      v14 = (char *)(v13 + 15);
      if ( *(char *)(v13 + 15) < 0 )
      {
        if ( (a2 & 0x10) != 0 )
          return 0LL;
        v15 = v13 >> 4;
        v16 = RtlpLFHKey ^ (v13 >> 4) ^ *(_DWORD *)(v13 + 8) ^ (unsigned int)BaseAddress;
        if ( (_WORD)v16 )
          v17 = 0LL;
        else
          v17 = *(_QWORD *)(v13 - (v16 >> 12));
        v18 = *(unsigned __int16 *)(v17 + 36);
        v19 = *v14;
        if ( v19 == 5 )
        {
          v20 = *((unsigned __int16 *)v79 + 6) ^ (unsigned __int64)BaseAddress[70];
        }
        else if ( (v19 & 0x40) != 0 )
        {
          v20 = *(unsigned __int16 *)&v79[16 * (v19 & 0x3F) + 12];
        }
        else if ( (v19 & 0x3F) == 0x3F )
        {
          v21 = v79;
          if ( v19 >= 0 )
          {
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              v22 = *((_DWORD *)v79 + 2);
              if ( (v22 & *((_DWORD *)BaseAddress + 31)) != 0 )
                LOWORD(v22) = BaseAddress[68] ^ v22;
              v21 = v79;
            }
            else
            {
              LOWORD(v22) = *((_WORD *)v79 + 4);
            }
          }
          else
          {
            if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*((_WORD *)v79 + 4) ^ v15 ^ (unsigned __int16)BaseAddress)) )
              v8 = *(_WORD **)&v79[-(((unsigned int)RtlpLFHKey ^ *((_DWORD *)v79 + 2) ^ (unsigned int)v15 ^ (unsigned int)BaseAddress) >> 12)];
            LOWORD(v22) = v8[18];
            v21 = v79;
          }
          v20 = *(_QWORD *)&v21[16 * (unsigned __int16)v22];
        }
        else
        {
          v20 = v19 & 0x3F;
        }
        v23 = 16 * v18 - v20;
        v85 = 16 * v18 - v20;
        Heap = RtlAllocateHeap(BaseAddress, a2 & 0xC003FFFF, a4);
        v88 = Heap;
        if ( Heap )
        {
          if ( a4 < v23 )
            v23 = a4;
          memmove(Heap, Src, v23);
          RtlFreeHeap(BaseAddress, a2 & 0xC003FFFF, Src);
        }
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && *SharedData )
          v26 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v26 = 2147353472LL;
        if ( !*(_BYTE *)v26 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
          return (char *)v88;
        v27 = v88;
        if ( v88 )
        {
          RtlpLogHeapReallocateEvent((_DWORD)BaseAddress, (_DWORD)v88, (_DWORD)Src, v85, a4, 2);
          return (char *)v88;
        }
        return (char *)v27;
      }
    }
  }
  if ( (unsigned __int16 *)v13 == BaseAddress )
  {
    RtlpLogHeapFailure(9, (__int64)BaseAddress, v13, 0LL, 0LL, 0LL);
    return 0LL;
  }
  v28 = *((_DWORD *)BaseAddress + 29) | a2;
  v112 = v28;
  if ( (v28 & 0x61000000) != 0 && (v28 & 0x10000000) == 0 )
    return (char *)RtlDebugReAllocateHeap(BaseAddress);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    v9 = NtCurrentTeb();
    v9->LastStatusValue = -1073741801;
    v10 = -1073741801;
    goto LABEL_3;
  }
  v29 = a4;
  if ( !a4 )
    v29 = 1LL;
  v30 = *((_QWORD *)BaseAddress + 33) & (*((_QWORD *)BaseAddress + 32) + v29);
  if ( v30 < 0x20 )
    v30 = 32LL;
  v81 = v30;
  LODWORD(v86) = 0;
  if ( (v28 & 1) == 0 )
  {
    if ( RtlTryEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44)) )
    {
      ++*((_DWORD *)BaseAddress + 156);
    }
    else
    {
      if ( byte_1801D1908 )
      {
        v31 = NtCurrentTeb();
        v31->LastStatusValue = -1073741420;
        v31->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741420);
        goto LABEL_197;
      }
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
      v32 = *((_DWORD *)BaseAddress + 156) + 1;
      *((_DWORD *)BaseAddress + 156) = v32;
      v33 = *((_DWORD *)BaseAddress + 157) + 1;
      *((_DWORD *)BaseAddress + 157) = v33;
      if ( *((_BYTE *)BaseAddress + 418) != 2 )
      {
        if ( v32 < v33 )
        {
          *((_QWORD *)BaseAddress + 78) = 0LL;
          v32 = 0;
          v33 = 0;
        }
        if ( v33 >= v32 >> 4 )
          *((_DWORD *)BaseAddress + 30) |= 0x20000000u;
      }
    }
    v78 = 1;
    v28 ^= 1u;
    v112 = v28;
  }
  _m_prefetchw((const void *)v12);
  if ( *(_BYTE *)(v12 + 15) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  v80 = v12;
  v34 = v12;
  v98 = v12;
  v35 = BaseAddress + 62;
  v82 = BaseAddress + 62;
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    v36 = *(_DWORD *)(v12 + 8) ^ *((_DWORD *)BaseAddress + 34);
    *(_DWORD *)(v12 + 8) = v36;
    if ( HIBYTE(v36) != ((unsigned __int8)v36 ^ (unsigned __int8)(BYTE1(v36) ^ BYTE2(v36))) )
    {
      RtlpAnalyzeHeapFailure((unsigned __int64)BaseAddress, v12);
      v34 = v12;
    }
    v35 = BaseAddress + 62;
  }
  v92 = (_BYTE *)v12;
  v37 = (unsigned __int16 *)(v12 + 8);
  v90 = (int *)(v12 + 8);
  v38 = (__int64 **)*((_QWORD *)BaseAddress + 39);
  do
  {
    if ( *(unsigned __int16 *)(v12 + 8) < (unsigned __int64)*((unsigned int *)v38 + 2) )
      break;
    v38 = (__int64 **)*v38;
  }
  while ( v38 );
  if ( (v28 & 0x3C000100) != 0 || *((_QWORD *)BaseAddress + 41) || (*(_BYTE *)(v12 + 10) & 2) != 0 )
    v81 += 16LL;
  v39 = (_BYTE *)(v12 + 15);
  v95 = (_BYTE *)(v12 + 15);
  v40 = *(_BYTE *)(v12 + 15);
  if ( (v40 & 0x3F) != 0 )
  {
    if ( v40 == 4 )
    {
      if ( *v35 )
      {
        v106 = 0LL;
        v42 = *(_DWORD *)(v34 + 8);
        DWORD2(v106) = v42;
        if ( (v42 & *v35) != 0 )
        {
          v42 ^= *((_DWORD *)BaseAddress + 34);
          DWORD2(v106) = v42;
        }
        v28 = v112;
      }
      else
      {
        LOWORD(v42) = *(_WORD *)(v34 + 8);
      }
      v86 = *(_QWORD *)(v12 - 48 + 32) - (unsigned __int16)v42;
      v43 = (v86 + *v37) >> 4;
      v84 = v43;
      v81 = (v81 + 4151) & 0xFFFFFFFFFFFFF000uLL;
    }
    else
    {
      v43 = *(unsigned __int16 *)(v34 + 8);
      v84 = v43;
      if ( v40 == 5 )
      {
        v44 = *(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)BaseAddress[70];
      }
      else if ( (v40 & 0x40) != 0 )
      {
        v44 = *(unsigned __int16 *)(v12 + 16LL * (v40 & 0x3F) + 12);
      }
      else if ( (v40 & 0x3F) == 0x3F )
      {
        if ( v40 >= 0 )
        {
          if ( *v35 )
          {
            v107 = 0LL;
            v45 = *(_DWORD *)v37;
            DWORD2(v107) = v45;
            if ( (v45 & *v35) != 0 )
            {
              v45 ^= *((_DWORD *)BaseAddress + 34);
              DWORD2(v107) = v45;
            }
            v28 = v112;
          }
          else
          {
            LOWORD(v45) = *v37;
          }
        }
        else
        {
          if ( *v37 ^ (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)BaseAddress ^ (v12 >> 4)) )
            LOWORD(v45) = MEMORY[0x24];
          else
            LOWORD(v45) = *(_WORD *)(*(_QWORD *)(v12
                                               - ((*(_DWORD *)v37 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ (unsigned int)(v12 >> 4)) >> 12))
                                   + 36LL);
          v28 = v112;
          v43 = *(unsigned __int16 *)(v34 + 8);
        }
        v44 = *(_QWORD *)(v12 + 16LL * (unsigned __int16)v45);
      }
      else
      {
        v44 = *(_BYTE *)(v12 + 15) & 0x3F;
      }
      v96 = v44;
      v86 = 16 * v43 - v44;
      if ( v43 < BaseAddress[216] )
      {
        v46 = *((_BYTE *)BaseAddress + (v43 >> 3) + 434);
        v47 = 1 << (v43 & 7);
        v43 = v84;
        if ( ((unsigned __int8)v47 & v46) == 0 )
        {
          v48 = (_WORD *)(*((_QWORD *)BaseAddress + 53) + 2 * v84);
          if ( *v48 > 1u )
            --*v48;
        }
        v28 = v112;
      }
    }
    v49 = v81 >> 4;
    v50 = v81 >> 4;
    v87 = v81 >> 4;
    if ( v81 >> 4 > v43 )
    {
      if ( *v39 == 4 || !RtlpGrowBlockInPlace(BaseAddress, v28, v12, a4, v81 >> 4) )
      {
        if ( (v28 & 0x10) == 0 )
        {
          v65 = v28 & 0xC003FFFF;
          v112 = v65;
          v99 = (unsigned __int16 *)(v12 + 10);
          v66 = *(_BYTE *)(v12 + 10);
          if ( (v66 & 2) != 0 )
          {
            v65 = (16 * (v66 & 0xE0 | 0x10)) | v65 & 0xFFFFF1FF;
            v112 = v65;
            v67 = *(unsigned __int16 *)(RtlpGetExtraStuffPointer(v12) + 2);
            if ( (__int16)v67 > 0 )
            {
              v65 |= v67 << 18;
              v112 = v65;
            }
          }
          else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          {
            v68 = *(unsigned __int8 *)(v12 + 11);
            if ( (_BYTE)v68 )
            {
              v65 |= v68 << 18;
              v112 |= v68 << 18;
            }
          }
          if ( *v82 )
          {
            *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
            *v90 ^= *((_DWORD *)BaseAddress + 34);
          }
          v92 = 0LL;
          v8 = RtlAllocateHeap(BaseAddress, v65, a4);
          v89 = v8;
          if ( v8 )
          {
            v69 = (unsigned __int64)(v8 - 8);
            _m_prefetchw(v8 - 8);
            if ( *((_BYTE *)v8 - 1) == 5 )
              v69 -= 16LL * *(unsigned __int8 *)(v69 + 14);
            v95 = (_BYTE *)v69;
            v70 = BaseAddress + 62;
            if ( *v82 )
            {
              v71 = *(_DWORD *)(v69 + 8) ^ *((_DWORD *)BaseAddress + 34);
              *(_DWORD *)(v69 + 8) = v71;
              if ( HIBYTE(v71) != ((unsigned __int8)v71 ^ (unsigned __int8)(BYTE1(v71) ^ BYTE2(v71))) )
                RtlpAnalyzeHeapFailure((unsigned __int64)BaseAddress, v69);
              v70 = BaseAddress + 62;
            }
            if ( (*(_BYTE *)(v69 + 10) & 2) != 0 )
            {
              ExtraStuffPointer = RtlpGetExtraStuffPointer(v69);
              v94 = ExtraStuffPointer;
              if ( *v70 )
              {
                v73 = *v90 ^ *((_DWORD *)BaseAddress + 34);
                *v90 = v73;
                if ( HIBYTE(v73) != ((unsigned __int8)v73 ^ (unsigned __int8)(BYTE1(v73) ^ BYTE2(v73))) )
                  RtlpAnalyzeHeapFailure((unsigned __int64)BaseAddress, v12);
                ExtraStuffPointer = v94;
                v70 = BaseAddress + 62;
              }
              if ( (*(_BYTE *)v99 & 2) != 0 )
                *(_QWORD *)(ExtraStuffPointer + 8) = *(_QWORD *)(RtlpGetExtraStuffPointer(v12) + 8);
              else
                *(_OWORD *)ExtraStuffPointer = 0LL;
              if ( *v70 )
              {
                *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
                *v90 ^= *((_DWORD *)BaseAddress + 34);
              }
              v8 = v89;
            }
            if ( *v70 )
            {
              *(_BYTE *)(v69 + 11) = *(_BYTE *)(v69 + 8) ^ *(_BYTE *)(v69 + 9) ^ *(_BYTE *)(v69 + 10);
              *(_DWORD *)(v69 + 8) ^= *((_DWORD *)BaseAddress + 34);
            }
            v92 = 0LL;
            if ( v78 )
            {
              RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
              v78 = 0;
              v65 &= ~1u;
              v112 = v65;
            }
            v74 = v86;
            if ( a4 < v86 )
              v74 = a4;
            memmove(v8, Src, v74);
            RtlFreeHeap(BaseAddress, v65, Src);
          }
          v102 = Src;
        }
        Src = (char *)v8;
      }
      goto LABEL_197;
    }
    if ( v49 + 1 == v43 )
    {
      v50 = v49 + 1;
      v87 = v49 + 1;
      v81 += 16LL;
      ++v49;
    }
    if ( *v39 == 4 )
    {
      *v37 = v81 - a4;
      goto LABEL_123;
    }
    if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
    {
      v108 = (_OWORD *)(v12 + 16LL * *v37 - 16);
      v94 = v12 + 16 * v49 - 16;
      *(_OWORD *)v94 = *v108;
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v50 = v87;
        v43 = v84;
        *(_WORD *)(v94 + 2) = RtlpUpdateTagEntry((_DWORD)BaseAddress, *(unsigned __int16 *)(v94 + 2), v84, v87, 4);
LABEL_122:
        LOBYTE(v28) = v112;
LABEL_123:
        v51 = a4;
        if ( a4 <= v86 )
        {
LABEL_138:
          if ( (BaseAddress[56] & 0x20) != 0 )
            *(__m128i *)(v12 + v51 + 16) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
          v55 = v95;
          if ( v50 != v43 )
          {
            v56 = *(_BYTE *)(v12 + 10) & 0xFE;
            if ( *v95 == 4 )
            {
              v57 = v12 - 48;
              v83 = NtCurrentPeb()->NtGlobalFlag;
              v58 = v83;
              v50 = v87;
              if ( (v83 & 0x800) != 0 )
                *(_WORD *)(v57 + 18) = RtlpUpdateTagEntry(
                                         (_DWORD)BaseAddress,
                                         *(unsigned __int16 *)(v57 + 18),
                                         v84,
                                         v87,
                                         5);
              v97 = (PVOID)(v57 + v81);
              v93 = 16 * v84 - v81;
              v91 = RtlpSecMemFreeVirtualMemory(v58, &v97, &v93, 0x4000u);
              if ( v91 >= 0 )
              {
                *(_QWORD *)(v57 + 32) -= v93;
                *((_QWORD *)BaseAddress + 75) -= v93;
                v12 = v80;
              }
              else
              {
                if ( NtCurrentPeb()->Ldr )
                  DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                else
                  DbgPrint("HEAP: ");
                DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v97, v93, v91);
                RtlpBreakPointHeap();
                v12 = v80;
                v50 = v87;
              }
            }
            else
            {
              v59 = *(unsigned __int16 *)v90 - (unsigned __int64)(unsigned __int16)v50;
              v109 = v59;
              *(_WORD *)v90 = v50;
              v60 = *((_DWORD *)BaseAddress + 28) & 0x40;
              v61 = *(_BYTE *)(v12 + 14);
              if ( v61 )
                v62 = (unsigned __int16 *)((v12 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v61 << 16) + 0x10000);
              else
                v62 = BaseAddress;
              v99 = v62;
              RtlpCreateSplitBlock(BaseAddress, (__int64)v62, v12 + 16 * v50, v56, v60 != 0, v50, v59);
            }
          }
          if ( *v55 != 4 )
          {
            v63 = v81 - a4;
            v110 = v81 - a4;
            v64 = v98;
            if ( v81 - a4 >= 0x3F )
            {
              *(_QWORD *)(v12 + 16 * v50) = v63;
              *(_BYTE *)(v64 + 15) = 63;
            }
            else
            {
              *(_BYTE *)(v98 + 15) = v63;
            }
          }
          goto LABEL_197;
        }
        if ( (v28 & 8) != 0 )
        {
          memset_thunk_772440563353939046(&Src[v86], 0, a4 - v86);
LABEL_137:
          v51 = a4;
          goto LABEL_138;
        }
        if ( (BaseAddress[56] & 0x40) == 0 )
          goto LABEL_138;
        v52 = v86 & 3;
        v100 = v52;
        if ( (v86 & 3) != 0 )
        {
          v52 = 4 - v52;
          v100 = v52;
        }
        if ( a4 <= v52 + v86 || ((a4 - v52 - v86) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
          goto LABEL_138;
        v53 = v52 + v86 + v12 + 16;
        v105 = v53;
        v54 = ((a4 - v52 - v86) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
        v101 = v54;
        if ( !v54 )
          goto LABEL_137;
        if ( (v53 & 4) != 0 )
        {
          *(_DWORD *)v53 = -1163005939;
          v101 = --v54;
          if ( !v54 )
            goto LABEL_137;
          v53 += 4LL;
          v105 = v53;
        }
        memset64((void *)v53, 0xBAADF00DBAADF00DuLL, v54 >> 1);
        if ( (v54 & 1) != 0 )
          *(_DWORD *)(v53 + 4 * v54 - 4) = -1163005939;
        goto LABEL_137;
      }
    }
    else
    {
      v104 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v104 & 0x800) != 0 )
      {
        v50 = v87;
        *(_BYTE *)(v12 + 11) = RtlpUpdateTagEntry((_DWORD)BaseAddress, *(unsigned __int8 *)(v12 + 11), *v37, v87, 4);
        v43 = v84;
        goto LABEL_122;
      }
    }
    v50 = v87;
    v43 = v84;
    goto LABEL_122;
  }
  v41 = NtCurrentTeb();
  v41->LastStatusValue = -1073741811;
  v41->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
LABEL_197:
  if ( v92 && *((_DWORD *)BaseAddress + 31) )
  {
    v92[11] = v92[8] ^ v92[9] ^ v92[10];
    *((_DWORD *)v92 + 2) ^= *((_DWORD *)BaseAddress + 34);
  }
  if ( v78 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
  v75 = NtCurrentPeb()->SharedData;
  if ( v75 && *v75 )
    v76 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v76 = 2147353472LL;
  if ( !*(_BYTE *)v76 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
    return Src;
  v77 = Src;
  if ( Src && (v112 & 0x800000) == 0 )
  {
    RtlpLogHeapReallocateEvent((_DWORD)BaseAddress, (_DWORD)Src, (_DWORD)v102, v86, a4, 3);
    return Src;
  }
  return v77;
}

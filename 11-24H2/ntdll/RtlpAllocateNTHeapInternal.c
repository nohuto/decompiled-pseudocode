/*
 * XREFs of RtlpAllocateNTHeapInternal @ 0x1800283A0
 * Callers:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpHpTagAllocateHeap @ 0x180094EF0 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpCallInterceptRoutine @ 0x1800280E0 (RtlpCallInterceptRoutine.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180028AA0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAnalyzeHeapFailure @ 0x18002F740 (RtlpAnalyzeHeapFailure.c)
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpAllocateHeap @ 0x18009D360 (RtlpAllocateHeap.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DF290 (RtlpHpStackTraceAddStack.c)
 *     RtlpAllocateHeapRaiseException @ 0x1801154C4 (RtlpAllocateHeapRaiseException.c)
 *     RtlpLogHeapAllocateEvent @ 0x180116248 (RtlpLogHeapAllocateEvent.c)
 */

__int64 __fastcall RtlpAllocateNTHeapInternal(void *Src, unsigned __int64 a2, int a3)
{
  int v3; // eax
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  int v9; // r13d
  __int64 v10; // r12
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 Heap; // rbp
  struct _TEB *v15; // rsi
  unsigned int v16; // r8d
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // eax
  int v22; // ecx
  _DWORD *SharedData; // rcx
  __int64 v24; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int16 v27; // dx
  unsigned __int64 v28; // r9
  char v29; // cl
  __int16 v30; // r8
  unsigned __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 *i; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r8
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // ecx
  __int16 v41; // dx
  int v42; // r8d
  __int16 v43; // cx
  _BYTE *v44; // rdx
  char v45; // r8
  __int64 v46; // rcx
  __int64 v47; // [rsp+30h] [rbp-58h]
  __int64 v48; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v49; // [rsp+98h] [rbp+10h] BYREF
  char v50; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v51; // [rsp+A8h] [rbp+20h]

  v3 = *((_DWORD *)Src + 29);
  v5 = v3 | a3;
  v6 = 0;
  v7 = a2;
  LODWORD(v48) = 0;
  v8 = 0LL;
  v49 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
  {
    LODWORD(v48) = 5;
    Heap = 0LL;
    goto LABEL_10;
  }
  v9 = *((_DWORD *)Src + 36);
  if ( v9 )
  {
    if ( (v5 & 0x3C000102) != 0 || (v3 & 0x1000000) != 0 )
    {
      v9 = 0;
    }
    else
    {
      if ( (int)RtlpCallInterceptRoutine(v9, (__int64)Src, 0LL, 1u, (__int64)&v49) < 0 )
      {
LABEL_70:
        Heap = 0LL;
        goto LABEL_10;
      }
      v26 = (v49 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      v7 += v26 + 16;
      v49 = v26 + 16;
    }
  }
  v10 = 1LL;
  if ( v7 )
    v10 = v7;
  v8 = (v10 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
  v11 = v8 >> 4;
  if ( (v5 & 0x7D810F61) != 0 )
  {
LABEL_58:
    v38 = 0LL;
LABEL_51:
    Heap = RtlpAllocateHeap(Src, v38, (__int64)&v48);
    goto LABEL_9;
  }
  if ( v7 > RtlpLargestLfhBlock
    || ((unsigned __int8)(1 << ((v8 >> 4) & 7)) & *((_BYTE *)Src + (v8 >> 7) + 434)) == 0
    || (v12 = *((_QWORD *)Src + 53),
        v13 = *((_QWORD *)Src + 51),
        LODWORD(v48) = 2,
        (Heap = RtlpLowFragHeapAllocFromContext(v13, *(unsigned __int16 *)(v12 + 2 * v11), v7, v5)) == 0) )
  {
    for ( i = (__int64 *)*((_QWORD *)Src + 39); ; i = (__int64 *)*i )
    {
      v34 = *((unsigned int *)i + 2);
      if ( v11 < v34 )
        break;
      if ( !*i )
      {
        v35 = (unsigned int)(v34 - 1);
        if ( v35 >= v34 || v11 != v35 )
          goto LABEL_58;
        break;
      }
    }
    v36 = v11 - *((unsigned int *)i + 6);
    v37 = 2 * v36;
    if ( !*((_DWORD *)i + 3) )
      v37 = v36;
    v38 = i[6] + 8 * v37;
    goto LABEL_51;
  }
LABEL_9:
  if ( Heap )
  {
    if ( !v9 )
      goto LABEL_16;
    v27 = v49;
    v28 = Heap - 16;
    v29 = *(_BYTE *)(Heap - 1);
    v7 -= v49;
    v30 = v49;
    v47 = Heap;
    v51 = v49;
    v50 = 0;
    v31 = (unsigned __int16)v49 + Heap;
    if ( v29 == 4 )
    {
      if ( ((*((_BYTE *)Src + 116) | (unsigned __int8)v5) & 1) == 0 )
      {
        RtlEnterCriticalSection(*((_QWORD *)Src + 44));
        v27 = v51;
        v28 = Heap - 16;
        v50 = 1;
      }
      if ( *((_DWORD *)Src + 31) )
      {
        v42 = *(_DWORD *)(Heap - 8) ^ *((_DWORD *)Src + 34);
        *(_DWORD *)(Heap - 8) = v42;
        if ( HIBYTE(v42) != ((unsigned __int8)v42 ^ (unsigned __int8)(BYTE1(v42) ^ BYTE2(v42))) )
        {
          RtlpAnalyzeHeapFailure(Src, v28);
          v27 = v51;
        }
      }
      v43 = *(_WORD *)(Heap - 8) + v27;
      *(_WORD *)(Heap - 8) = v43;
      *(_BYTE *)(Heap - 2) = v27 >> 4;
      if ( *((_DWORD *)Src + 31) )
      {
        *(_BYTE *)(Heap - 5) = v43 ^ *(_BYTE *)(Heap - 6) ^ HIBYTE(v43);
        *(_DWORD *)(Heap - 8) ^= *((_DWORD *)Src + 34);
      }
      *(_BYTE *)(v31 - 2) = v27 >> 4;
      *(_BYTE *)(v31 - 1) = 5;
      *(_WORD *)(v31 - 4) = v27 + v43;
      *(_DWORD *)(v31 - 8) = v9;
      if ( v50 )
        RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
    }
    else
    {
      if ( v29 == 5 )
      {
        LOWORD(v32) = *(_WORD *)(Heap - 4) ^ *((_WORD *)Src + 70);
      }
      else if ( (v29 & 0x40) != 0 )
      {
        LOWORD(v32) = *(_WORD *)(Heap + 16LL * (v29 & 0x3F) - 4);
      }
      else if ( (v29 & 0x3F) == 0x3F )
      {
        if ( v29 >= 0 )
        {
          if ( *((_DWORD *)Src + 31) )
          {
            v40 = *(_DWORD *)(Heap - 8);
            if ( (v40 & *((_DWORD *)Src + 31)) != 0 )
              LOWORD(v40) = *((_WORD *)Src + 68) ^ v40;
            v27 = v49;
          }
          else
          {
            LOWORD(v40) = *(_WORD *)(Heap - 8);
          }
        }
        else
        {
          v39 = *(_WORD *)(Heap - 8) ^ (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)Src ^ (v28 >> 4))
              ? 0LL
              : *(_QWORD *)(v28
                          - ((unsigned __int64)(*(_DWORD *)(Heap - 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)Src ^ (unsigned int)(v28 >> 4)) >> 12));
          LOWORD(v40) = *(_WORD *)(v39 + 36);
          v27 = v49;
        }
        v32 = *(_QWORD *)(Heap + 16LL * (unsigned __int16)v40 - 16);
      }
      else
      {
        LOWORD(v32) = v29 & 0x3F;
      }
      v41 = v27 >> 4;
      *(_BYTE *)(v31 - 2) = v41;
      *(_BYTE *)(Heap - 1) &= 0xC0u;
      *(_BYTE *)(Heap - 1) |= (unsigned __int8)v41 | 0x40;
      *(_BYTE *)(v31 - 1) = 5;
      *(_WORD *)(v31 - 4) = v32 + v30;
      *(_DWORD *)(v31 - 8) = v9;
    }
    Heap = v31;
    if ( (int)RtlpCallInterceptRoutine(v9, (__int64)Src, v31, 2u, v47) >= 0 )
      goto LABEL_16;
    RtlFreeHeap((__int64)Src, 0, v31);
    goto LABEL_70;
  }
LABEL_10:
  v15 = NtCurrentTeb();
  v16 = 341;
  v15->LastStatusValue = -1073741801;
  while ( 1 )
  {
    v17 = (v16 + v6) >> 1;
    v18 = 2 * v17;
    v19 = RtlpRunTable[2 * v17];
    v20 = -1073741801 - v19;
    if ( v19 > 0xC0000017 )
    {
      v16 = v17 - 1;
      goto LABEL_24;
    }
    if ( v20 < LOBYTE(RtlpRunTable[v18 + 1]) )
      break;
    v6 = v17 + 1;
LABEL_24:
    if ( v6 > v16 )
    {
      DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", -1073741801);
      DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
      DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
      v22 = 317;
      goto LABEL_15;
    }
  }
  v21 = HIWORD(RtlpRunTable[v18 + 1]);
  if ( BYTE1(RtlpRunTable[v18 + 1]) == 1 )
    v22 = (unsigned __int16)RtlpStatusTable[v20 + v21];
  else
    v22 = (unsigned __int16)RtlpStatusTable[2 * v20 + v21] | ((unsigned __int16)RtlpStatusTable[2 * v20 + 1 + v21] << 16);
LABEL_15:
  v15->LastErrorValue = v22;
  if ( (v5 & 4) != 0 )
  {
    if ( !v8 )
      v8 = v7;
    RtlpAllocateHeapRaiseException(v8);
  }
LABEL_16:
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v24 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v24 = 2147353472LL;
  if ( *(_BYTE *)v24
    && (NtCurrentPeb()->TracingFlags & 1) != 0
    && (*((_DWORD *)Src + 29) & 0x1000000) == 0
    && ((v5 & 0x61000000) == 0 || (v5 & 0x10000000) != 0)
    && (_DWORD)v48 != 5 )
  {
    if ( !Heap )
      goto LABEL_97;
    v44 = (_BYTE *)(Heap - 16);
    _m_prefetchw((const void *)(Heap - 16));
    v45 = *(_BYTE *)(Heap - 16 + 15);
    v46 = Heap - 16;
    if ( v45 == 5 )
      v46 -= 16LL * (unsigned __int8)v44[14];
    if ( *(char *)(v46 + 15) < 0 )
      goto LABEL_97;
    _m_prefetchw(v44);
    if ( v45 == 5 )
      v44 -= 16 * (unsigned __int8)v44[14];
    if ( ((v44[10] ^ (unsigned __int8)(*((_BYTE *)Src + 138) & (*((_DWORD *)Src + 31) >> 17))) & 8) == 0 )
LABEL_97:
      RtlpLogHeapAllocateEvent(Src, Heap, v7, (unsigned int)v48);
  }
  if ( (dword_1801CE8C8 & 1) != 0
    && (dword_1801CE8C8 & 2) != 0
    && NtCurrentPeb()->ProcessHeap
    && Src != (void *)qword_1801D21B8[2 * (unsigned int)dword_1801800C8[BYTE1(RtlpHpEnvHandle)]]
    && Heap
    && (v5 & 0x10000000) == 0 )
  {
    RtlpHpStackTraceAddStack(Src, Heap);
  }
  return Heap;
}

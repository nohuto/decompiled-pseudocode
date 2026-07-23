/*
 * XREFs of RtlpAllocateNTHeapInternal @ 0x180050E70
 * Callers:
 *     RtlpHpTagAllocateHeap @ 0x18002E060 (RtlpHpTagAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeap @ 0x180026310 (RtlpAllocateHeap.c)
 *     RtlpCallInterceptRoutine @ 0x18004F6D0 (RtlpCallInterceptRoutine.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180051570 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAnalyzeHeapFailure @ 0x180058210 (RtlpAnalyzeHeapFailure.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DCD90 (RtlpHpStackTraceAddStack.c)
 *     RtlpAllocateHeapRaiseException @ 0x1801186A8 (RtlpAllocateHeapRaiseException.c)
 *     RtlpLogHeapAllocateEvent @ 0x180119438 (RtlpLogHeapAllocateEvent.c)
 */

char *__fastcall RtlpAllocateNTHeapInternal(__int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // eax
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  SIZE_T v7; // rbx
  unsigned __int64 v8; // r12
  int v9; // r13d
  __int64 v10; // r12
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  char *v14; // rbp
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
  char *v28; // r9
  char v29; // cl
  __int16 v30; // r8
  char *v31; // rsi
  __int64 v32; // rcx
  __int64 *i; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r8
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 **v38; // rax
  __int64 v39; // rax
  int v40; // ecx
  __int16 v41; // dx
  int v42; // r8d
  __int16 v43; // cx
  char *v44; // rdx
  char v45; // r8
  char *v46; // rcx
  __int64 v47; // [rsp+30h] [rbp-58h]
  __int64 v48; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v49; // [rsp+98h] [rbp+10h] BYREF
  char v50; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v51; // [rsp+A8h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 116);
  v5 = v3 | a3;
  v6 = 0;
  v7 = a2;
  LODWORD(v48) = 0;
  v8 = 0LL;
  v49 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
  {
    LODWORD(v48) = 5;
    v14 = 0LL;
    goto LABEL_10;
  }
  v9 = *(_DWORD *)(a1 + 144);
  if ( v9 )
  {
    if ( (v5 & 0x3C000102) != 0 || (v3 & 0x1000000) != 0 )
    {
      v9 = 0;
    }
    else
    {
      if ( (int)RtlpCallInterceptRoutine(v9, (PVOID)a1, 0LL, 1u, (__int64)&v49) < 0 )
      {
LABEL_70:
        v14 = 0LL;
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
    v14 = RtlpAllocateHeap(a1, v5 | 2, v7, v8, v38, &v48);
    goto LABEL_9;
  }
  if ( v7 > RtlpLargestLfhBlock
    || ((unsigned __int8)(1 << ((v8 >> 4) & 7)) & *(_BYTE *)((v8 >> 7) + a1 + 434)) == 0
    || (v12 = *(_QWORD *)(a1 + 424),
        v13 = *(_QWORD *)(a1 + 408),
        LODWORD(v48) = 2,
        (v14 = (char *)RtlpLowFragHeapAllocFromContext(v13, *(unsigned __int16 *)(v12 + 2 * v11), v7, v5)) == 0LL) )
  {
    for ( i = *(__int64 **)(a1 + 312); ; i = (__int64 *)*i )
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
    v38 = (__int64 **)(i[6] + 8 * v37);
    goto LABEL_51;
  }
LABEL_9:
  if ( v14 )
  {
    if ( !v9 )
      goto LABEL_16;
    v27 = v49;
    v28 = v14 - 16;
    v29 = *(v14 - 1);
    v7 -= v49;
    v30 = v49;
    v47 = (__int64)v14;
    v51 = v49;
    v50 = 0;
    v31 = &v14[(unsigned __int16)v49];
    if ( v29 == 4 )
    {
      if ( ((*(_BYTE *)(a1 + 116) | (unsigned __int8)v5) & 1) == 0 )
      {
        RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
        v27 = v51;
        v28 = v14 - 16;
        v50 = 1;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        v42 = *((_DWORD *)v14 - 2) ^ *(_DWORD *)(a1 + 136);
        *((_DWORD *)v14 - 2) = v42;
        if ( HIBYTE(v42) != ((unsigned __int8)v42 ^ (unsigned __int8)(BYTE1(v42) ^ BYTE2(v42))) )
        {
          RtlpAnalyzeHeapFailure(a1, v28);
          v27 = v51;
        }
      }
      v43 = *((_WORD *)v14 - 4) + v27;
      *((_WORD *)v14 - 4) = v43;
      *(v14 - 2) = v27 >> 4;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(v14 - 5) = v43 ^ *(v14 - 6) ^ HIBYTE(v43);
        *((_DWORD *)v14 - 2) ^= *(_DWORD *)(a1 + 136);
      }
      *(v31 - 2) = v27 >> 4;
      *(v31 - 1) = 5;
      *((_WORD *)v31 - 2) = v27 + v43;
      *((_DWORD *)v31 - 2) = v9;
      if ( v50 )
        RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    }
    else
    {
      if ( v29 == 5 )
      {
        LOWORD(v32) = *((_WORD *)v14 - 2) ^ *(_WORD *)(a1 + 140);
      }
      else if ( (v29 & 0x40) != 0 )
      {
        LOWORD(v32) = *(_WORD *)&v14[16 * (v29 & 0x3F) - 4];
      }
      else if ( (v29 & 0x3F) == 0x3F )
      {
        if ( v29 >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v40 = *((_DWORD *)v14 - 2);
            if ( (v40 & *(_DWORD *)(a1 + 124)) != 0 )
              LOWORD(v40) = *(_WORD *)(a1 + 136) ^ v40;
            v27 = v49;
          }
          else
          {
            LOWORD(v40) = *((_WORD *)v14 - 4);
          }
        }
        else
        {
          v39 = *((_WORD *)v14 - 4) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ ((unsigned __int64)v28 >> 4))
              ? 0LL
              : *(_QWORD *)&v28[-((unsigned __int64)(*((_DWORD *)v14 - 2) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)((unsigned __int64)v28 >> 4)) >> 12)];
          LOWORD(v40) = *(_WORD *)(v39 + 36);
          v27 = v49;
        }
        v32 = *(_QWORD *)&v14[16 * (unsigned __int16)v40 - 16];
      }
      else
      {
        LOWORD(v32) = v29 & 0x3F;
      }
      v41 = v27 >> 4;
      *(v31 - 2) = v41;
      *(v14 - 1) &= 0xC0u;
      *(v14 - 1) |= v41 | 0x40;
      *(v31 - 1) = 5;
      *((_WORD *)v31 - 2) = v32 + v30;
      *((_DWORD *)v31 - 2) = v9;
    }
    v14 = v31;
    if ( (int)RtlpCallInterceptRoutine(v9, (PVOID)a1, (unsigned __int64)v31, 2u, v47) >= 0 )
      goto LABEL_16;
    RtlFreeHeap((PVOID)a1, 0, v31);
    goto LABEL_70;
  }
LABEL_10:
  v15 = NtCurrentTeb();
  v16 = 340;
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
    && (*(_DWORD *)(a1 + 116) & 0x1000000) == 0
    && ((v5 & 0x61000000) == 0 || (v5 & 0x10000000) != 0)
    && (_DWORD)v48 != 5 )
  {
    if ( !v14 )
      goto LABEL_97;
    v44 = v14 - 16;
    _m_prefetchw(v14 - 16);
    v45 = *(v14 - 1);
    v46 = v14 - 16;
    if ( v45 == 5 )
      v46 -= 16 * (unsigned __int8)v44[14];
    if ( v46[15] < 0 )
      goto LABEL_97;
    _m_prefetchw(v44);
    if ( v45 == 5 )
      v44 -= 16 * (unsigned __int8)v44[14];
    if ( (((unsigned __int8)v44[10] ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
LABEL_97:
      RtlpLogHeapAllocateEvent(a1, v14, v7, (unsigned int)v48);
  }
  if ( (dword_1801D0918 & 1) != 0
    && (dword_1801D0918 & 2) != 0
    && NtCurrentPeb()->ProcessHeap
    && a1 != qword_1801D4208[2 * (unsigned int)dword_1801816F8[BYTE1(RtlpHpEnvHandle)]]
    && v14
    && (v5 & 0x10000000) == 0 )
  {
    RtlpHpStackTraceAddStack(a1, v14);
  }
  return v14;
}

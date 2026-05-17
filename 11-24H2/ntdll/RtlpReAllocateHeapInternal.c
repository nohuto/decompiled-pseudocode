/*
 * XREFs of RtlpReAllocateHeapInternal @ 0x1800A1040
 * Callers:
 *     RtlReAllocateHeap @ 0x1800A0E30 (RtlReAllocateHeap.c)
 *     RtlpHpTagReAllocateHeap @ 0x1800A0F10 (RtlpHpTagReAllocateHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpCallInterceptRoutine @ 0x1800280E0 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x18002C980 (RtlpProbeUserBufferSafe.c)
 *     RtlpAnalyzeHeapFailure @ 0x18002F740 (RtlpAnalyzeHeapFailure.c)
 *     RtlSizeHeap @ 0x1800406D0 (RtlSizeHeap.c)
 *     RtlRaiseException @ 0x180070510 (RtlRaiseException.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpReAllocateHeap @ 0x1800A18B0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800A2A3C (RtlDebugReAllocateHeap.c)
 *     RtlpHpReAllocateHeap @ 0x1800A2F84 (RtlpHpReAllocateHeap.c)
 *     RtlpValidateLFHBlock @ 0x1800DE950 (RtlpValidateLFHBlock.c)
 *     RtlpSetupExtendedBlock @ 0x1800DF090 (RtlpSetupExtendedBlock.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DF290 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800E28F0 (RtlpHpStackTraceRemoveStack.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpReAllocateHeapInternal(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rdi
  int v9; // r13d
  int v10; // r15d
  unsigned __int64 v11; // rsi
  __int64 v12; // rsi
  int v13; // r9d
  struct _TEB *v15; // rdi
  int v16; // ecx
  __int64 Heap; // rsi
  int v18; // esi
  struct _TEB *v19; // rdi
  unsigned int v20; // edx
  int v21; // r8d
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edx
  char v26; // dl
  unsigned __int16 v27; // ax
  __int64 v28; // rcx
  char v29; // dl
  unsigned __int64 v30; // rdx
  char v31; // r8
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  char v34; // r8
  char v35; // r8
  int v36; // eax
  __int64 v37; // rax
  struct _TEB *v38; // rdi
  int v39; // r15d
  int v40; // edx
  __int16 v41; // cx
  int v42; // r9d
  unsigned __int64 v43; // rax
  unsigned __int16 v44; // [rsp+30h] [rbp-D0h]
  int v45; // [rsp+30h] [rbp-D0h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+90h] [rbp-70h] BYREF

  v4 = 0LL;
  v44 = 0;
  *(&ExceptionRecord.NumberParameters + 1) = 0;
  v6 = a3;
  v9 = 0;
  memset(&ExceptionRecord.ExceptionInformation[1], 0, 112);
  if ( a3 )
  {
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
    {
      if ( a2 )
      {
        if ( a2 == 8 )
        {
          v9 = 2;
        }
        else
        {
          v20 = (a2 >> 2) & 2 | 0x80000000;
          if ( (a2 & 4) == 0 )
            v20 = (a2 >> 2) & 2;
          v21 = v20 | 0x100;
          if ( (a2 & 0x100) == 0 )
            v21 = v20;
          v22 = v21 | a2 & 0xE00;
          if ( (a2 & 0xE00) == 0 )
            v22 = v21;
          v9 = v22 | 0x10000000;
          if ( (a2 & 0x10) == 0 )
            v9 = v22;
        }
      }
      Heap = RtlpHpReAllocateHeap(a1, (unsigned int)v9, v6);
      if ( ((Heap + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
      {
        v38 = NtCurrentTeb();
        v39 = -1073741801;
        if ( Heap )
          v39 = -1073741819;
        Heap = 0LL;
        v38->LastStatusValue = v39;
        v38->LastErrorValue = RtlNtStatusToDosErrorNoTeb(v39);
        if ( v9 < 0 || *(int *)(a1 + 20) < 0 )
        {
          ExceptionRecord.ExceptionCode = v39;
          ExceptionRecord.ExceptionAddress = RtlRaiseException;
          ExceptionRecord.ExceptionRecord = 0LL;
          ExceptionRecord.NumberParameters = 1;
          ExceptionRecord.ExceptionFlags = 0;
          ExceptionRecord.ExceptionInformation[0] = a4;
          RtlRaiseException(&ExceptionRecord);
        }
      }
      return Heap;
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 116) | a2;
      if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
      {
        if ( (*(_BYTE *)(a1 + 120) & 1) == 0 )
        {
          if ( (a3 & 0xF) != 0 )
          {
            v16 = 9;
          }
          else
          {
            v11 = a3 - 16;
            _m_prefetchw((const void *)(a3 - 16));
            if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
              v11 -= 16LL * *(unsigned __int8 *)(v11 + 14);
            if ( (*(_BYTE *)(v11 + 15) & 0x3F) != 0 )
            {
LABEL_9:
              if ( !v11 )
              {
                v18 = -1073741819;
                goto LABEL_31;
              }
              if ( *(_BYTE *)(v6 - 1) != 5 )
              {
LABEL_11:
                v12 = RtlpReAllocateHeap((void *)a1);
                if ( (dword_1801CE8C8 & 1) != 0
                  && (dword_1801CE8C8 & 2) != 0
                  && NtCurrentPeb()->ProcessHeap
                  && a1 != qword_1801D21B8[2 * (unsigned int)dword_1801800C8[BYTE1(RtlpHpEnvHandle)]] )
                {
                  if ( !v12 )
                    goto LABEL_27;
                  if ( (v10 & 0x10000000) == 0 )
                  {
                    RtlpHpStackTraceRemoveStack(a1, v6);
                    RtlpHpStackTraceAddStack(a1, v12);
                  }
                }
                else if ( !v12 )
                {
LABEL_27:
                  a4 -= v44;
                  if ( v9 )
                  {
                    RtlSizeHeap(a1, 0, v6);
                    v43 = RtlpSetupExtendedBlock(a1, v10, v6, v42, v44, v9);
                    RtlpCallInterceptRoutine(v9, a1, v43, 6u, v6);
                  }
                  v45 = -1073741801;
                  goto LABEL_30;
                }
                v4 = v12;
                if ( v9 )
                {
                  v4 = RtlpSetupExtendedBlock(a1, v10, v12, v13, v44, v9);
                  RtlpCallInterceptRoutine(v9, a1, v4, 6u, v12);
                }
                return v4;
              }
              if ( *(char *)(v11 + 15) >= 0 )
              {
                if ( !*(_DWORD *)(a1 + 124) )
                  goto LABEL_47;
                v25 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v11 + 8);
                if ( HIBYTE(v25) == ((unsigned __int8)v25 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(a1 + 136) ^ *(_WORD *)(v11 + 8)) >> 8) ^ BYTE2(v25))) )
                  goto LABEL_47;
              }
              else if ( (unsigned __int8)RtlpValidateLFHBlock(a1, v11) )
              {
LABEL_47:
                if ( *(char *)(v11 + 15) >= 0 )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    LODWORD(v23) = *(_DWORD *)(v11 + 8);
                    if ( ((unsigned int)v23 & *(_DWORD *)(a1 + 124)) != 0 )
                      LODWORD(v23) = *(_DWORD *)(a1 + 136) ^ v23;
                  }
                  else
                  {
                    LOWORD(v23) = *(_WORD *)(v11 + 8);
                  }
                }
                else
                {
                  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v11 + 8) ^ (v11 >> 4)) )
                    v23 = 0LL;
                  else
                    v23 = *(_QWORD *)(v11
                                    - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v11 + 8) ^ (unsigned int)(v11 >> 4)) >> 12));
                  LOWORD(v23) = *(_WORD *)(v23 + 36);
                }
                if ( *(_BYTE *)(v11 + 15) == 4 )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v36 = *(_DWORD *)(v11 + 8);
                    if ( (v36 & *(_DWORD *)(a1 + 124)) != 0 )
                      v36 ^= *(_DWORD *)(a1 + 136);
                  }
                  else
                  {
                    LOWORD(v36) = *(_WORD *)(v11 + 8);
                  }
                  v24 = (unsigned __int16)v23 + *(_QWORD *)(v11 - 16) - (unsigned __int16)v36;
                }
                else
                {
                  v24 = 16LL * (unsigned __int16)v23;
                }
                if ( v24 + v11 < v6 )
                  goto LABEL_54;
                v9 = *(_DWORD *)(v6 - 8);
                if ( (v10 & 0x3C000102) != 0 )
                  goto LABEL_11;
                v26 = *(_BYTE *)(v6 - 1);
                if ( v26 == 5 )
                {
                  v27 = 16 * *(unsigned __int8 *)(v6 - 2);
                  v44 = v27;
                }
                else if ( (v26 & 0x40) != 0 )
                {
                  v27 = 16 * (v26 & 0x3F);
                  v44 = v27;
                }
                else
                {
                  v27 = 0;
                  v44 = 0;
                }
                if ( a4 + v27 >= a4 )
                {
                  a4 += v27;
                  if ( v26 == 5 )
                    v28 = v6 - 16LL * *(unsigned __int8 *)(v6 - 16 + 14);
                  else
                    v28 = 0LL;
                  if ( (int)RtlpCallInterceptRoutine(v9, a1, v6, 5u, v28) < 0 )
                  {
                    v45 = -1073741819;
LABEL_30:
                    v18 = v45;
                    goto LABEL_31;
                  }
                  v29 = *(_BYTE *)(v11 + 15);
                  if ( v29 == 4 )
                  {
                    if ( ((*(_BYTE *)(a1 + 116) | (unsigned __int8)v10) & 1) == 0 )
                      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      v40 = *(_DWORD *)(v11 + 8) ^ *(_DWORD *)(a1 + 136);
                      *(_DWORD *)(v11 + 8) = v40;
                      if ( HIBYTE(v40) != ((unsigned __int8)v40 ^ (unsigned __int8)(BYTE1(v40) ^ BYTE2(v40))) )
                        RtlpAnalyzeHeapFailure(a1, v11);
                    }
                    v41 = *(_WORD *)(v11 + 8) - v44;
                    *(_WORD *)(v11 + 8) = v41;
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      *(_BYTE *)(v11 + 11) = v41 ^ *(_BYTE *)(v11 + 10) ^ HIBYTE(v41);
                      *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
                    }
                    if ( ((*(_BYTE *)(a1 + 116) | (unsigned __int8)v10) & 1) == 0 )
                      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
                    goto LABEL_84;
                  }
                  if ( v29 == 5 )
                  {
                    v30 = *(unsigned __int16 *)(v11 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
                  }
                  else if ( (v29 & 0x40) != 0 )
                  {
                    v30 = *(unsigned __int16 *)(v11 + 16LL * (*(_BYTE *)(v11 + 15) & 0x3F) + 12);
                  }
                  else if ( (v29 & 0x3F) == 0x3F )
                  {
                    if ( v29 >= 0 )
                    {
                      if ( *(_DWORD *)(a1 + 124) )
                      {
                        LODWORD(v37) = *(_DWORD *)(v11 + 8);
                        if ( ((unsigned int)v37 & *(_DWORD *)(a1 + 124)) != 0 )
                        {
                          v30 = *(_QWORD *)(v11 + 16LL * (unsigned __int16)(*(_WORD *)(a1 + 136) ^ v37));
                          goto LABEL_77;
                        }
                      }
                      else
                      {
                        LOWORD(v37) = *(_WORD *)(v11 + 8);
                      }
                    }
                    else
                    {
                      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v11 + 8) ^ (v11 >> 4)) )
                        v37 = 0LL;
                      else
                        v37 = *(_QWORD *)(v11
                                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v11 + 8) ^ (unsigned int)(v11 >> 4)) >> 12));
                      LOWORD(v37) = *(_WORD *)(v37 + 36);
                    }
                    v30 = *(_QWORD *)(v11 + 16LL * (unsigned __int16)v37);
                  }
                  else
                  {
                    v30 = *(_BYTE *)(v11 + 15) & 0x3F;
                  }
LABEL_77:
                  v31 = *(_BYTE *)(v11 + 15);
                  if ( v31 >= 0 )
                  {
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      LODWORD(v32) = *(_DWORD *)(v11 + 8);
                      if ( ((unsigned int)v32 & *(_DWORD *)(a1 + 124)) != 0 )
                        LODWORD(v32) = *(_DWORD *)(a1 + 136) ^ v32;
                    }
                    else
                    {
                      LOWORD(v32) = *(_WORD *)(v11 + 8);
                    }
                  }
                  else
                  {
                    if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v11 + 8) ^ (v11 >> 4)) )
                      v32 = 0LL;
                    else
                      v32 = *(_QWORD *)(v11
                                      - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v11 + 8) ^ (unsigned int)(v11 >> 4)) >> 12));
                    LOWORD(v32) = *(_WORD *)(v32 + 36);
                  }
                  v33 = v30 - v44;
                  v34 = v31 >> 7;
                  if ( v33 >= 0x3F )
                  {
                    v35 = (v34 & 0x80) + 63;
                    *(_QWORD *)(v11 + 16LL * (unsigned __int16)v32) = v33;
                  }
                  else
                  {
                    v35 = v33 | v34 & 0x80;
                  }
                  *(_BYTE *)(v11 + 15) = v35;
LABEL_84:
                  v6 = v11 + 16;
                  goto LABEL_11;
                }
                v18 = -1073741801;
LABEL_31:
                v19 = NtCurrentTeb();
                v19->LastStatusValue = v18;
                v19->LastErrorValue = RtlNtStatusToDosErrorNoTeb(v18);
                if ( (v10 & 4) != 0 )
                {
                  ExceptionRecord.ExceptionCode = v18;
                  ExceptionRecord.ExceptionAddress = RtlRaiseException;
                  ExceptionRecord.ExceptionRecord = 0LL;
                  ExceptionRecord.NumberParameters = 1;
                  ExceptionRecord.ExceptionFlags = 0;
                  ExceptionRecord.ExceptionInformation[0] = a4;
                  RtlRaiseException(&ExceptionRecord);
                }
                return v4;
              }
LABEL_54:
              RtlpLogHeapFailure(3, a1, v11, v6, 0LL, 0LL);
              v18 = -1073741811;
              goto LABEL_31;
            }
            a3 = v11;
            v16 = 8;
          }
          RtlpLogHeapFailure(v16, a1, a3, 0LL, 0LL, 0LL);
          v11 = 0LL;
          goto LABEL_9;
        }
        v11 = (unsigned __int64)RtlpProbeUserBufferSafe(a1, a3);
        goto LABEL_9;
      }
      return RtlDebugReAllocateHeap((void *)a1);
    }
  }
  else
  {
    v15 = NtCurrentTeb();
    v15->LastStatusValue = 0;
    v15->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0);
    return 0LL;
  }
}

/*
 * XREFs of RtlpReAllocateHeapInternal @ 0x18005AF10
 * Callers:
 *     RtlpHpTagReAllocateHeap @ 0x18005ADE0 (RtlpHpTagReAllocateHeap.c)
 *     RtlReAllocateHeap @ 0x18007A7D0 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     RtlSizeHeap @ 0x180021000 (RtlSizeHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlpCallInterceptRoutine @ 0x180054AE0 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x180059380 (RtlpProbeUserBufferSafe.c)
 *     RtlpReAllocateHeap @ 0x18005B780 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18005C7E8 (RtlDebugReAllocateHeap.c)
 *     RtlpHpReAllocateHeap @ 0x18005CD30 (RtlpHpReAllocateHeap.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     RtlpValidateLFHBlock @ 0x1800D9AC0 (RtlpValidateLFHBlock.c)
 *     RtlpSetupExtendedBlock @ 0x1800DA200 (RtlpSetupExtendedBlock.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DA400 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800DDEC0 (RtlpHpStackTraceRemoveStack.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpReAllocateHeapInternal(
        unsigned __int16 *HeapHandle,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  char *v6; // rdi
  int v9; // r13d
  int v10; // r15d
  unsigned __int64 v11; // rsi
  __int64 v12; // rsi
  int v13; // r9d
  struct _TEB *v15; // rdi
  int v16; // ecx
  __int64 Heap; // rsi
  NTSTATUS v18; // esi
  struct _TEB *v19; // rdi
  unsigned int v20; // edx
  int v21; // r8d
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edx
  char v26; // dl
  unsigned __int16 v27; // ax
  char v28; // dl
  unsigned __int64 v29; // rdx
  char v30; // r8
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  char v33; // r8
  char v34; // r8
  int v35; // eax
  __int64 v36; // rax
  struct _TEB *v37; // rdi
  NTSTATUS v38; // r15d
  int v39; // edx
  __int16 v40; // cx
  int v41; // r9d
  unsigned __int64 v42; // rax
  unsigned __int16 Status; // [rsp+30h] [rbp-D0h]
  NTSTATUS Statusa; // [rsp+30h] [rbp-D0h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+90h] [rbp-70h] BYREF

  v4 = 0LL;
  Status = 0;
  *(&ExceptionRecord.NumberParameters + 1) = 0;
  v6 = (char *)a3;
  v9 = 0;
  memset(&ExceptionRecord.ExceptionInformation[1], 0, 112);
  if ( a3 )
  {
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
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
      Heap = RtlpHpReAllocateHeap(HeapHandle, (unsigned int)v9, v6);
      if ( ((Heap + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
      {
        v37 = NtCurrentTeb();
        v38 = -1073741801;
        if ( Heap )
          v38 = -1073741819;
        Heap = 0LL;
        v37->LastStatusValue = v38;
        v37->LastErrorValue = RtlNtStatusToDosErrorNoTeb(v38);
        if ( v9 < 0 || *((int *)HeapHandle + 5) < 0 )
        {
          ExceptionRecord.ExceptionCode = v38;
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
      v10 = *((_DWORD *)HeapHandle + 29) | a2;
      if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
      {
        if ( (HeapHandle[60] & 1) == 0 )
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
              if ( *(v6 - 1) != 5 )
              {
LABEL_11:
                v12 = RtlpReAllocateHeap(HeapHandle);
                if ( (dword_1801CD8B8 & 1) != 0
                  && (dword_1801CD8B8 & 2) != 0
                  && NtCurrentPeb()->ProcessHeap
                  && HeapHandle != (unsigned __int16 *)qword_1801D11A8[2
                                                                     * (unsigned int)dword_18017E8C8[BYTE1(RtlpHpEnvHandle)]] )
                {
                  if ( !v12 )
                    goto LABEL_27;
                  if ( (v10 & 0x10000000) == 0 )
                  {
                    RtlpHpStackTraceRemoveStack(HeapHandle, v6);
                    RtlpHpStackTraceAddStack(HeapHandle, v12);
                  }
                }
                else if ( !v12 )
                {
LABEL_27:
                  a4 -= Status;
                  if ( v9 )
                  {
                    RtlSizeHeap(HeapHandle, 0, v6);
                    v42 = RtlpSetupExtendedBlock((_DWORD)HeapHandle, v10, (_DWORD)v6, v41, Status, v9);
                    RtlpCallInterceptRoutine(v9, HeapHandle, v42, 6);
                  }
                  Statusa = -1073741801;
                  goto LABEL_30;
                }
                v4 = v12;
                if ( v9 )
                {
                  v4 = RtlpSetupExtendedBlock((_DWORD)HeapHandle, v10, v12, v13, Status, v9);
                  RtlpCallInterceptRoutine(v9, HeapHandle, v4, 6);
                }
                return v4;
              }
              if ( *(char *)(v11 + 15) >= 0 )
              {
                if ( !*((_DWORD *)HeapHandle + 31) )
                  goto LABEL_47;
                v25 = *((_DWORD *)HeapHandle + 34) ^ *(_DWORD *)(v11 + 8);
                if ( HIBYTE(v25) == ((unsigned __int8)v25 ^ (unsigned __int8)(((unsigned __int16)(HeapHandle[68] ^ *(_WORD *)(v11 + 8)) >> 8) ^ BYTE2(v25))) )
                  goto LABEL_47;
              }
              else if ( (unsigned __int8)RtlpValidateLFHBlock(HeapHandle, v11) )
              {
LABEL_47:
                if ( *(char *)(v11 + 15) >= 0 )
                {
                  if ( *((_DWORD *)HeapHandle + 31) )
                  {
                    LODWORD(v23) = *(_DWORD *)(v11 + 8);
                    if ( ((unsigned int)v23 & *((_DWORD *)HeapHandle + 31)) != 0 )
                      LODWORD(v23) = *((_DWORD *)HeapHandle + 34) ^ v23;
                  }
                  else
                  {
                    LOWORD(v23) = *(_WORD *)(v11 + 8);
                  }
                }
                else
                {
                  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ *(_WORD *)(v11 + 8) ^ (v11 >> 4)) )
                    v23 = 0LL;
                  else
                    v23 = *(_QWORD *)(v11
                                    - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)HeapHandle ^ *(_DWORD *)(v11 + 8) ^ (unsigned int)(v11 >> 4)) >> 12));
                  LOWORD(v23) = *(_WORD *)(v23 + 36);
                }
                if ( *(_BYTE *)(v11 + 15) == 4 )
                {
                  if ( *((_DWORD *)HeapHandle + 31) )
                  {
                    v35 = *(_DWORD *)(v11 + 8);
                    if ( (v35 & *((_DWORD *)HeapHandle + 31)) != 0 )
                      v35 ^= *((_DWORD *)HeapHandle + 34);
                  }
                  else
                  {
                    LOWORD(v35) = *(_WORD *)(v11 + 8);
                  }
                  v24 = (unsigned __int16)v23 + *(_QWORD *)(v11 - 16) - (unsigned __int16)v35;
                }
                else
                {
                  v24 = 16LL * (unsigned __int16)v23;
                }
                if ( v24 + v11 < (unsigned __int64)v6 )
                  goto LABEL_54;
                v9 = *((_DWORD *)v6 - 2);
                if ( (v10 & 0x3C000102) != 0 )
                  goto LABEL_11;
                v26 = *(v6 - 1);
                if ( v26 == 5 )
                {
                  v27 = 16 * (unsigned __int8)*(v6 - 2);
                  Status = v27;
                }
                else if ( (v26 & 0x40) != 0 )
                {
                  v27 = 16 * (v26 & 0x3F);
                  Status = v27;
                }
                else
                {
                  v27 = 0;
                  Status = 0;
                }
                if ( a4 + v27 >= a4 )
                {
                  a4 += v27;
                  if ( (int)RtlpCallInterceptRoutine(v9, HeapHandle, (unsigned __int64)v6, 5) < 0 )
                  {
                    Statusa = -1073741819;
LABEL_30:
                    v18 = Statusa;
                    goto LABEL_31;
                  }
                  v28 = *(_BYTE *)(v11 + 15);
                  if ( v28 == 4 )
                  {
                    if ( ((*((_BYTE *)HeapHandle + 116) | (unsigned __int8)v10) & 1) == 0 )
                      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
                    if ( *((_DWORD *)HeapHandle + 31) )
                    {
                      v39 = *(_DWORD *)(v11 + 8) ^ *((_DWORD *)HeapHandle + 34);
                      *(_DWORD *)(v11 + 8) = v39;
                      if ( HIBYTE(v39) != ((unsigned __int8)v39 ^ (unsigned __int8)(BYTE1(v39) ^ BYTE2(v39))) )
                        RtlpAnalyzeHeapFailure((unsigned __int64)HeapHandle, v11);
                    }
                    v40 = *(_WORD *)(v11 + 8) - Status;
                    *(_WORD *)(v11 + 8) = v40;
                    if ( *((_DWORD *)HeapHandle + 31) )
                    {
                      *(_BYTE *)(v11 + 11) = v40 ^ *(_BYTE *)(v11 + 10) ^ HIBYTE(v40);
                      *(_DWORD *)(v11 + 8) ^= *((_DWORD *)HeapHandle + 34);
                    }
                    if ( ((*((_BYTE *)HeapHandle + 116) | (unsigned __int8)v10) & 1) == 0 )
                      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
                    goto LABEL_82;
                  }
                  if ( v28 == 5 )
                  {
                    v29 = *(unsigned __int16 *)(v11 + 12) ^ (unsigned __int64)HeapHandle[70];
                  }
                  else if ( (v28 & 0x40) != 0 )
                  {
                    v29 = *(unsigned __int16 *)(v11 + 16LL * (*(_BYTE *)(v11 + 15) & 0x3F) + 12);
                  }
                  else if ( (v28 & 0x3F) == 0x3F )
                  {
                    if ( v28 >= 0 )
                    {
                      if ( *((_DWORD *)HeapHandle + 31) )
                      {
                        LODWORD(v36) = *(_DWORD *)(v11 + 8);
                        if ( ((unsigned int)v36 & *((_DWORD *)HeapHandle + 31)) != 0 )
                        {
                          v29 = *(_QWORD *)(v11 + 16LL * (unsigned __int16)(HeapHandle[68] ^ v36));
                          goto LABEL_75;
                        }
                      }
                      else
                      {
                        LOWORD(v36) = *(_WORD *)(v11 + 8);
                      }
                    }
                    else
                    {
                      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ *(_WORD *)(v11 + 8) ^ (v11 >> 4)) )
                        v36 = 0LL;
                      else
                        v36 = *(_QWORD *)(v11
                                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)HeapHandle ^ *(_DWORD *)(v11 + 8) ^ (unsigned int)(v11 >> 4)) >> 12));
                      LOWORD(v36) = *(_WORD *)(v36 + 36);
                    }
                    v29 = *(_QWORD *)(v11 + 16LL * (unsigned __int16)v36);
                  }
                  else
                  {
                    v29 = *(_BYTE *)(v11 + 15) & 0x3F;
                  }
LABEL_75:
                  v30 = *(_BYTE *)(v11 + 15);
                  if ( v30 >= 0 )
                  {
                    if ( *((_DWORD *)HeapHandle + 31) )
                    {
                      LODWORD(v31) = *(_DWORD *)(v11 + 8);
                      if ( ((unsigned int)v31 & *((_DWORD *)HeapHandle + 31)) != 0 )
                        LODWORD(v31) = *((_DWORD *)HeapHandle + 34) ^ v31;
                    }
                    else
                    {
                      LOWORD(v31) = *(_WORD *)(v11 + 8);
                    }
                  }
                  else
                  {
                    if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ *(_WORD *)(v11 + 8) ^ (v11 >> 4)) )
                      v31 = 0LL;
                    else
                      v31 = *(_QWORD *)(v11
                                      - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)HeapHandle ^ *(_DWORD *)(v11 + 8) ^ (unsigned int)(v11 >> 4)) >> 12));
                    LOWORD(v31) = *(_WORD *)(v31 + 36);
                  }
                  v32 = v29 - Status;
                  v33 = v30 >> 7;
                  if ( v32 >= 0x3F )
                  {
                    v34 = (v33 & 0x80) + 63;
                    *(_QWORD *)(v11 + 16LL * (unsigned __int16)v31) = v32;
                  }
                  else
                  {
                    v34 = v32 | v33 & 0x80;
                  }
                  *(_BYTE *)(v11 + 15) = v34;
LABEL_82:
                  v6 = (char *)(v11 + 16);
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
              RtlpLogHeapFailure(3, (__int64)HeapHandle, v11, (__int64)v6, 0LL, 0LL);
              v18 = -1073741811;
              goto LABEL_31;
            }
            a3 = v11;
            v16 = 8;
          }
          RtlpLogHeapFailure(v16, (__int64)HeapHandle, a3, 0LL, 0LL, 0LL);
          v11 = 0LL;
          goto LABEL_9;
        }
        v11 = (unsigned __int64)RtlpProbeUserBufferSafe((__int64)HeapHandle, a3);
        goto LABEL_9;
      }
      return RtlDebugReAllocateHeap(HeapHandle);
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

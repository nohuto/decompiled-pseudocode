/*
 * XREFs of VidSchiSelectContext @ 0x1400159F0
 * Callers:
 *     VidSchiCleanupPacket_PriorityTable @ 0x1400A801C (VidSchiCleanupPacket_PriorityTable.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x140015D90 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1400171A0 (-VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x140017290 (-VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1400240F4 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiStartNodeYield @ 0x1400242C8 (VidSchiStartNodeYield.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiSelectContext(KSPIN_LOCK *a1, int a2)
{
  struct _VIDSCH_CONTEXT *v4; // rdi
  KSPIN_LOCK v5; // rax
  struct _VIDSCH_NODE *v6; // rax
  struct _VIDSCH_NODE *v7; // rbp
  __int64 v8; // rcx
  ULONGLONG v9; // rdx
  CCHAR v10; // al
  CCHAR MostSignificantBit; // al
  CCHAR v13; // al
  LARGE_INTEGER v14; // r14
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // r9
  LARGE_INTEGER v18; // r14
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  struct _VIDSCH_NODE *v23; // [rsp+58h] [rbp-50h] BYREF
  __int128 v24; // [rsp+60h] [rbp-48h]
  __int64 v25; // [rsp+70h] [rbp-38h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B0h] [rbp+8h] BYREF
  char v27; // [rsp+B8h] [rbp+10h] BYREF
  union _LARGE_INTEGER v28; // [rsp+C0h] [rbp+18h] BYREF

  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock(a1 + 248, &LockHandle);
  if ( *((_DWORD *)a1 + 194) )
  {
    v5 = a1[33];
    if ( v5 && (*(_DWORD *)(v5 + 184) & 1) != 0 )
    {
      v4 = (struct _VIDSCH_CONTEXT *)a1[33];
    }
    else
    {
      v6 = VidSchiSelectReadyNode((struct _VIDSCH_GLOBAL *)a1);
      v7 = v6;
      if ( v6 )
      {
        if ( *((_DWORD *)v6 + 473) )
        {
          v8 = *((_QWORD *)v6 + 3);
          v27 = 0;
          v25 = 0LL;
          v23 = v6;
          v24 = 0LL;
          DpSynchronizeExecution(
            *(_QWORD *)(v8 + 24),
            VidSchiUpdateNodeRunningTimeAtISR,
            &v23,
            *(unsigned int *)(v8 + 32),
            &v27);
        }
        v9 = *((unsigned int *)v7 + 472);
        if ( *((_BYTE *)v7 + 2144)
          && (v9 & 0xC0000000) == 0
          && (v9 & (0xFFFFFFFFuLL >> (31 - *(_BYTE *)(*((_QWORD *)v7 + 3) + 216LL)))) != 0 )
        {
          MostSignificantBit = RtlFindMostSignificantBit(v9 & (0xFFFFFFFFuLL >> (31
                                                                               - *(_BYTE *)(*((_QWORD *)v7 + 3) + 216LL))));
          v4 = VidSchiSelectContextFromThisPriority(v7, MostSignificantBit, 1);
          if ( v4 )
          {
            VidSchiUpdateNodeYieldStatus(v7);
          }
          else
          {
            v13 = RtlFindMostSignificantBit(*((unsigned int *)v7 + 472));
            v4 = VidSchiSelectContextFromThisPriority(v7, v13, 0);
            if ( !*((_QWORD *)v7 + 265) )
            {
              PerformanceFrequency.QuadPart = 0LL;
              v14 = KeQueryPerformanceCounter(&PerformanceFrequency);
              v15 = *(_DWORD *)(*((_QWORD *)v4 + 13) + 504LL);
              v16 = 0LL;
              if ( v15 <= *((_DWORD *)a1 + 10) )
                v16 = v15;
              v17 = *(unsigned int *)(a1[v16 + 429] + 83104);
              if ( !(_DWORD)v17 )
              {
                WdLogSingleEntry1(3LL, (unsigned int)v16);
                v17 = 16LL;
                WdLogGlobalForLineNumber = 18907;
              }
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
                v7,
                (LARGE_INTEGER)v14.QuadPart,
                (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
                v17);
            }
            VidSchiProfilePerformanceTick(20, (_DWORD)a1, (_DWORD)v7, 0, (__int64)v4, 0LL, 0LL, 1LL);
          }
        }
        else
        {
          v10 = RtlFindMostSignificantBit(v9);
          v4 = VidSchiSelectContextFromThisPriority(v7, v10, 0);
          if ( (a1[349] & 8) != 0 && *((_BYTE *)v7 + 2144) && !*((_QWORD *)v7 + 265) )
          {
            v28.QuadPart = 0LL;
            v18 = KeQueryPerformanceCounter(&v28);
            v19 = *(_DWORD *)(*((_QWORD *)v4 + 13) + 504LL);
            v20 = 0LL;
            if ( v19 <= *((_DWORD *)a1 + 10) )
              v20 = v19;
            v21 = *(unsigned int *)(a1[v20 + 429] + 83104);
            if ( !(_DWORD)v21 )
            {
              WdLogSingleEntry1(3LL, (unsigned int)v20);
              v21 = 16LL;
              WdLogGlobalForLineNumber = 18907;
            }
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
              v7,
              (LARGE_INTEGER)v18.QuadPart,
              (union _LARGE_INTEGER)v28.QuadPart,
              v21);
          }
          VidSchiProfilePerformanceTick(20, (_DWORD)a1, (_DWORD)v7, 0, (__int64)v4, 0LL, 0LL, 0LL);
        }
      }
    }
  }
  VidSchiProfilePerformanceTick(2, (_DWORD)a1, 0, 0, (__int64)v4, 0LL, 0LL, 0LL);
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}

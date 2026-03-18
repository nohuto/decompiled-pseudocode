/*
 * XREFs of VidSchSubmitWaitFromCpu @ 0x140019390
 * Callers:
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400ABC80 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 * Callees:
 *     ??_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z @ 0x14001839C (--_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x140019940 (VidSchiUnwaitMonitoredFences.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400476A8 (VidSchiUnwaitNativeFenceWaiters.c)
 *     VidSchiUpdateNativeFenceMonitoredValue @ 0x140047C8C (VidSchiUpdateNativeFenceMonitoredValue.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memmove @ 0x140056480 (memmove.c)
 *     memset @ 0x140056780 (memset.c)
 */

__int64 __fastcall VidSchSubmitWaitFromCpu(
        unsigned int a1,
        _QWORD *a2,
        const void *a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // esi
  unsigned __int64 v9; // rdi
  unsigned int v10; // ecx
  _QWORD *v12; // r13
  _BYTE *Pool2; // r14
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r15
  char v19; // cl
  char v20; // al
  char v21; // cl
  char v22; // al
  _QWORD *v23; // r8
  char v24; // dl
  unsigned __int64 *v25; // r9
  _QWORD *v26; // r13
  __int64 v27; // rcx
  __int64 *v28; // rcx
  __int64 v29; // rdx
  PVOID v31; // rcx
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // r11
  unsigned int *v34; // rax
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // r9
  int v37; // eax
  __int64 v38; // r9
  int v39; // eax
  __int64 *v40; // r13
  __int64 v41; // rax
  __int64 **v42; // rcx
  unsigned __int64 v43; // [rsp+20h] [rbp-99h]
  char v44; // [rsp+30h] [rbp-89h]
  _QWORD *v46; // [rsp+38h] [rbp-81h]
  __int64 v47; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v48[2]; // [rsp+48h] [rbp-71h] BYREF
  char v49; // [rsp+58h] [rbp-61h]
  int v50; // [rsp+5Ch] [rbp-5Dh]
  _QWORD *v51; // [rsp+60h] [rbp-59h]
  __int64 v52; // [rsp+68h] [rbp-51h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-49h] BYREF
  __int16 v54; // [rsp+88h] [rbp-31h]
  PVOID P; // [rsp+90h] [rbp-29h]
  _BYTE v56[16]; // [rsp+98h] [rbp-21h] BYREF
  int v57; // [rsp+A8h] [rbp-11h]

  v8 = 0;
  v9 = a1;
  v10 = 0;
  v51 = a2;
  v12 = a2;
  while ( v10 < (unsigned int)v9 )
  {
    v29 = v12[v10];
    if ( *(_DWORD *)(v29 + 48) == 5 && *(_BYTE *)(v29 + 29) )
      return 3221225760LL;
    ++v10;
  }
  P = 0LL;
  v57 = 0;
  if ( (unsigned int)v9 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
      goto LABEL_48;
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, 8 * v9, 945908054LL);
    P = Pool2;
  }
  else
  {
    Pool2 = v56;
    P = v56;
    if ( (_DWORD)v9 )
    {
      memset(v56, 0, 8 * v9);
      Pool2 = P;
    }
  }
  v57 = v9;
  if ( !Pool2 )
  {
LABEL_48:
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11696;
LABEL_43:
    v31 = P;
    if ( P == v56 )
      return 3221225495LL;
    goto LABEL_40;
  }
  memmove(Pool2, a3, 8 * v9);
  v14 = ExAllocatePool2(64LL, 216LL, 945908054LL);
  v15 = v14;
  if ( !v14 )
  {
    WdLogSingleEntry0(3LL);
    v31 = P;
    WdLogGlobalForLineNumber = 11707;
    if ( P == v56 )
      return 3221225495LL;
LABEL_40:
    if ( v31 )
      ExFreePoolWithTag(v31, 0);
    return 3221225495LL;
  }
  *(_QWORD *)(v14 + 32) = 0LL;
  *(_DWORD *)(v14 + 200) = 0;
  if ( (unsigned int)v9 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 0x28 )
      goto LABEL_42;
    *(_QWORD *)(v14 + 32) = ExAllocatePool2(64LL, 40 * v9, 945908054LL);
  }
  else
  {
    *(_QWORD *)(v14 + 32) = v14 + 40;
    if ( (_DWORD)v9 )
      memset((void *)(v14 + 40), 0, 40 * v9);
  }
  v16 = *(_QWORD *)(v15 + 32);
  *(_DWORD *)(v15 + 200) = v9;
  if ( !v16 )
  {
LABEL_42:
    VIDSCH_CPU_WAITER::`scalar deleting destructor'((_QWORD *)v15);
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11716;
    goto LABEL_43;
  }
  v17 = a8;
  v18 = *(_QWORD *)(*v12 + 8LL);
  v19 = (2 * a6) | a5 & 0xFD | *(_BYTE *)(v15 + 208) & 0xFC;
  *(_QWORD *)(v15 + 24) = a7;
  v20 = v19;
  v21 = v19 | 4;
  v22 = v20 & 0xFB;
  if ( !a8 )
  {
    v17 = a4;
    v21 = v22;
  }
  *(_BYTE *)(v15 + 208) = v21;
  *(_QWORD *)(v15 + 16) = v17;
  v52 = v18 + 1984;
  v54 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v18 + 1984), &LockHandle);
  LOBYTE(v54) = 1;
  v47 = v18;
  v49 = 0;
  v24 = 1;
  v50 = 1;
  v44 = 1;
  v48[1] = v48;
  v48[0] = v48;
  if ( (_DWORD)v9 )
  {
    do
    {
      v25 = (unsigned __int64 *)&Pool2[8 * v8];
      v26 = (_QWORD *)(v16 + 40LL * v8);
      v23 = &v51[v8];
      *v26 = *v23;
      v26[1] = *v25;
      v26[4] = v15;
      v27 = *v23;
      v46 = v23;
      if ( *(_DWORD *)(*v23 + 48LL) == 6 )
      {
        v32 = *v25;
        if ( !*(_BYTE *)(v27 + 28) )
        {
          v33 = **(_QWORD **)(v27 + 120);
          v34 = *(unsigned int **)(v27 + 72);
          if ( *(_DWORD *)(v27 + 48) == 6 )
          {
            v35 = *(_QWORD *)v34;
          }
          else if ( *(_BYTE *)(v27 + 30) )
          {
            v35 = *(_QWORD *)v34;
          }
          else
          {
            v35 = *v34;
          }
          if ( v32 <= v33 || v35 >= v33 )
          {
            if ( *(_BYTE *)(v27 + 28) )
            {
              v36 = *(_QWORD *)(*(_QWORD *)(v27 + 304) + 40LL);
            }
            else
            {
              v37 = *(_DWORD *)(v27 + 48);
              if ( v37 == 2 )
              {
                v36 = *(_QWORD *)(v27 + 72);
              }
              else if ( v37 == 6 )
              {
                v36 = *(_QWORD *)(v27 + 168);
              }
              else
              {
                v36 = *(_QWORD *)(v27 + 96);
              }
            }
            if ( v32 > v36 )
            {
              if ( g_NativeFenceDebugTest )
              {
                **(_QWORD **)(v27 + 120) = v32;
              }
              else
              {
                VidSchiUpdateNativeFenceMonitoredValue(*(_QWORD *)(v27 + 8), *(_QWORD *)(v27 + 160), v32);
                v24 = v44;
                v23 = v46;
              }
            }
            else
            {
              if ( *(_BYTE *)(v27 + 28) )
              {
                v38 = *(_QWORD *)(*(_QWORD *)(v27 + 304) + 40LL);
              }
              else
              {
                v39 = *(_DWORD *)(v27 + 48);
                if ( v39 == 2 )
                {
                  v38 = *(_QWORD *)(v27 + 72);
                }
                else if ( v39 == 6 )
                {
                  v38 = *(_QWORD *)(v27 + 168);
                }
                else
                {
                  v38 = *(_QWORD *)(v27 + 96);
                }
              }
              WdLogSingleEntry3(3LL, v27, v32, v38);
              v24 = v44;
              v23 = v46;
              WdLogGlobalForLineNumber = 6106;
            }
          }
          else
          {
            v43 = v35;
            WdLogSingleEntry4(3LL, v27, v32);
            v24 = v44;
            v23 = v46;
            WdLogGlobalForLineNumber = 6096;
          }
        }
        v40 = v26 + 2;
        v41 = *v23 + 224LL;
        v42 = *(__int64 ***)(*v23 + 232LL);
        if ( *v42 != (__int64 *)v41 )
          goto LABEL_20;
        *v40 = v41;
        v40[1] = (__int64)v42;
        *v42 = v40;
        *(_QWORD *)(v41 + 8) = v40;
      }
      else
      {
        v24 = 0;
        v44 = 0;
      }
      ++v8;
    }
    while ( v8 < (unsigned int)v9 );
    v12 = v51;
  }
  v28 = *(__int64 **)(v18 + 904);
  if ( *v28 != v18 + 896 )
LABEL_20:
    __fastfail(3u);
  *(_QWORD *)(v15 + 8) = v28;
  *(_QWORD *)v15 = v18 + 896;
  *v28 = v15;
  *(_QWORD *)(v18 + 904) = v15;
  if ( v24 )
    VidSchiUnwaitNativeFenceWaiters(&v47, *v12, v23, 0LL, v43);
  else
    VidSchiUnwaitMonitoredFences((HwQueueStagingList *)&v47);
  if ( !v49 && v50 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v47, 0LL);
  if ( (_BYTE)v54 )
  {
    if ( HIBYTE(v54) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    LOBYTE(v54) = 0;
  }
  if ( P != v56 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}

/*
 * XREFs of KeSetTracepoint @ 0x14073B5D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MmLockLoadedDataTableEntry @ 0x1402BBA08 (MmLockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1402BBE58 (MmUnlockLoadedDataTableEntry.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiTpWriteBreakpoint @ 0x1405C6D4C (KiTpWriteBreakpoint.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x14073BF18 (KiTpIsSupportedKernelTracepointLocation.c)
 *     KiTpCompletionContextSize @ 0x14073BFEC (KiTpCompletionContextSize.c)
 *     KiTpSetupCompletion @ 0x14073C114 (KiTpSetupCompletion.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeSetTracepoint(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _BYTE *a9)
{
  __int64 v9; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v13; // r13d
  void *v14; // r8
  char v15; // bp
  int v16; // edi
  __int64 v17; // rax
  int v18; // r14d
  __int64 v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rsi
  char *v26; // rax
  __int64 v27; // rdx
  char *v28; // rdi
  char *Pool2; // rdi
  int v30; // r14d
  __int64 v31; // r15
  __int64 *v32; // rcx
  __int64 v33; // rax
  _BYTE *v34; // rax
  __int64 v35; // r14
  __int64 *v36; // r15
  _BYTE *v37; // rcx
  __int64 v38; // rdx
  int v39; // r13d
  _BYTE *v40; // r14
  int v41; // ecx
  signed __int32 v42[8]; // [rsp+0h] [rbp-D8h] BYREF
  int v43; // [rsp+30h] [rbp-A8h]
  int v44; // [rsp+34h] [rbp-A4h]
  unsigned int v45; // [rsp+38h] [rbp-A0h]
  int v46; // [rsp+3Ch] [rbp-9Ch]
  __int64 v47; // [rsp+40h] [rbp-98h]
  _BYTE *v48; // [rsp+48h] [rbp-90h]
  unsigned __int64 v49; // [rsp+50h] [rbp-88h]
  __int64 v50; // [rsp+58h] [rbp-80h]
  char v51[48]; // [rsp+60h] [rbp-78h] BYREF

  v9 = 0LL;
  v47 = 0LL;
  v48 = a9;
  CurrentThread = KeGetCurrentThread();
  v50 = a1;
  v49 = a3;
  v13 = (int)a4;
  v14 = 0LL;
  v15 = a2;
  --CurrentThread->KernelApcDisable;
  if ( (KiDynamicTraceEnabled & 2) == 0 && (!(_BYTE)a2 || (KiDynamicTraceEnabled & 1) == 0) )
  {
LABEL_4:
    v16 = -1073741790;
    goto LABEL_32;
  }
  if ( !a1 && (_BYTE)a2 || a3 > 0x7FFFFFFEFFFFLL && (_BYTE)a2 == 1 || a3 < 0xFFFF800000000000uLL && !(_BYTE)a2 )
  {
LABEL_31:
    v16 = -1073741811;
    goto LABEL_32;
  }
  if ( a1 )
  {
    v17 = *(_QWORD *)(a1 + 368);
    if ( ((v17 & 1) != 0 || v17) && ((_BYTE)a2 || (KiDynamicTraceEnabled & 2) == 0) )
      goto LABEL_4;
  }
  if ( (unsigned int)((_DWORD)a4 - 1) <= 1 )
  {
    v46 = 1;
    v18 = 1;
    if ( (_DWORD)a4 == 2 )
      goto LABEL_21;
  }
  else
  {
    v18 = 0;
    v46 = 0;
  }
  if ( (_DWORD)a4 != 3 )
  {
    v19 = 0LL;
    goto LABEL_22;
  }
LABEL_21:
  v19 = 1LL;
LABEL_22:
  v45 = v19;
  if ( (unsigned int)((_DWORD)a4 - 4) <= 1 )
  {
    v43 = 1;
    if ( (_DWORD)a4 == 5 )
      goto LABEL_27;
  }
  else
  {
    v43 = 0;
  }
  if ( (_DWORD)a4 != 6 )
  {
    v44 = 0;
    goto LABEL_28;
  }
LABEL_27:
  v44 = 1;
LABEL_28:
  if ( !(_DWORD)v19 )
  {
    if ( a5 || a7 )
      goto LABEL_31;
    goto LABEL_43;
  }
  a4 = KiDynamicTraceCallouts;
  if ( !a5 )
  {
    v19 = a7;
    if ( !a7 )
      goto LABEL_31;
    goto LABEL_37;
  }
  v21 = 4LL;
  a2 = 48LL;
  if ( v15 )
    v21 = 6LL;
  if ( a5 != KiDynamicTraceCallouts[v21] )
    goto LABEL_4;
  v19 = a7;
  if ( a7 )
  {
LABEL_37:
    v22 = 5LL;
    a2 = 56LL;
    if ( v15 )
      v22 = 7LL;
    if ( v19 != KiDynamicTraceCallouts[v22] )
      goto LABEL_4;
  }
LABEL_43:
  if ( a3 >= 0xFFFF800000000000uLL )
  {
    v47 = MmLockLoadedDataTableEntry(a3);
    v14 = *(void **)(v47 + 48);
  }
  if ( !v18 && v13 )
    goto LABEL_54;
  if ( v14 && !(unsigned int)KiTpIsSupportedKernelTracepointLocation(v14) )
  {
    v16 = -1073741637;
    goto LABEL_124;
  }
  if ( !v18 )
  {
LABEL_54:
    v25 = v9;
    v26 = (char *)KeAbPreAcquire((__int64)&KiTpStateLock, 0LL);
    v28 = v26;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTpStateLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&KiTpStateLock, v26, (__int64)&KiTpStateLock);
    if ( v28 )
      v28[10] = 1;
    Pool2 = (char *)KiTpHashTable;
    if ( !KiTpHashTable )
    {
      Pool2 = (char *)ExAllocatePool2(0x40uLL, 0x20000uLL, 0x70727446u);
      if ( !Pool2 )
      {
LABEL_60:
        v16 = -1073741670;
LABEL_116:
        if ( v9 )
        {
          while ( KiTpActiveTrapsCount )
            _mm_pause();
          ExFreePoolWithTag((PVOID)v9, 0x70727446u);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiTpStateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&KiTpStateLock);
        KeAbPostRelease((ULONG_PTR)&KiTpStateLock);
        goto LABEL_124;
      }
      v30 = KeNumberProcessors_0;
      v31 = (unsigned int)KeNumberProcessors_0;
      v27 = ExAllocatePool2(0x40uLL, 8200LL * (unsigned int)KeNumberProcessors_0, 0x70727446u);
      if ( !v27 )
      {
        ExFreePoolWithTag(Pool2, 0);
        goto LABEL_60;
      }
      if ( v30 )
      {
        v32 = KiProcessorBlock;
        do
        {
          v33 = *v32++;
          *(_QWORD *)(v33 + 152) = v27;
          v27 += 8200LL;
          --v31;
        }
        while ( v31 );
      }
      KiTpHashTable = Pool2;
    }
    v34 = 0LL;
    v35 = (v49 >> 4) & 0x3FFF;
    v36 = (__int64 *)&Pool2[8 * v35];
    v16 = 0;
    while ( 1 )
    {
      v37 = (_BYTE *)*v36;
      if ( !*v36 )
        break;
      if ( *((_QWORD *)v37 + 1) == v49 && *((_QWORD *)v37 + 2) == v50 )
      {
        v34 = (_BYTE *)*v36;
        if ( v37[50] != v15 )
        {
          v16 = -1073741811;
          goto LABEL_116;
        }
        break;
      }
      v36 = (__int64 *)*v36;
    }
    if ( !v13 )
    {
      if ( v34 )
      {
        if ( v48 )
          *v48 = v34[51];
      }
      else
      {
        LOBYTE(v27) = v15;
        v16 = KiTpSetupCompletion(v50, v27, v49, 0, 0, (__int64)v51);
      }
      goto LABEL_116;
    }
    if ( v46 )
    {
      if ( !v34 )
      {
        LOBYTE(v27) = v15;
        v16 = KiTpSetupCompletion(v50, v27, *(_QWORD *)(v9 + 8), (int)v9 + 51, 1, v9 + 52);
        if ( v16 < 0 )
          goto LABEL_116;
        ++KiTpRegisteredCount;
        v36 = (__int64 *)((char *)KiTpHashTable + 8 * v35);
        *(_QWORD *)v9 = *v36;
        *v36 = v9;
        _InterlockedOr(v42, 0);
        v38 = v45;
        v39 = v43;
        v9 &= -(__int64)(v45 != 0);
        goto LABEL_90;
      }
      if ( v34[24] || v34[25] )
      {
        v16 = -1073740008;
        goto LABEL_116;
      }
      v39 = v43;
    }
    else
    {
      v39 = v43;
      if ( !v34 )
      {
        v16 = -1073741275;
        goto LABEL_116;
      }
    }
    v38 = v45;
    v25 = (__int64)v34;
LABEL_90:
    v40 = (_BYTE *)(v25 + 48);
    if ( (_DWORD)v38 )
    {
      if ( !*v40 )
      {
        if ( ++KiTpEnabledCount == 1 )
          _InterlockedOr(&KiDynamicTraceMask, 2u);
        LOBYTE(v38) = 1;
        v16 = KiTpWriteBreakpoint(v25, v38);
        if ( v16 < 0 )
        {
          if ( v25 == v9 )
          {
            *v36 = *(_QWORD *)v25;
            _InterlockedOr(v42, 0);
            --KiTpRegisteredCount;
          }
          --KiTpEnabledCount;
          goto LABEL_116;
        }
        *v40 = 1;
      }
      *(_QWORD *)(v25 + 32) = a6;
      *(_QWORD *)(v25 + 40) = a8;
      _InterlockedOr(v42, 0);
      v9 = 0LL;
      *(_BYTE *)(v25 + 24) = a5 != 0;
      *(_BYTE *)(v25 + 25) = a7 != 0;
    }
    v41 = v44;
    if ( v44 && *v40 )
      goto LABEL_104;
    if ( !v39 )
    {
LABEL_111:
      if ( v41 )
      {
        *v36 = *(_QWORD *)v25;
        _InterlockedOr(v42, 0);
        --KiTpRegisteredCount;
        v9 = v25;
      }
      if ( v48 )
        *v48 = *(_BYTE *)(v25 + 51);
      v16 = 0;
      goto LABEL_116;
    }
    if ( *v40 )
    {
LABEL_104:
      if ( (int)KiTpWriteBreakpoint(v25, 0LL) >= 0 )
      {
        --KiTpEnabledCount;
        v41 = v44;
        *v40 = 0;
      }
      else
      {
        v41 = 0;
      }
    }
    *(_WORD *)(v25 + 24) = 0;
    _InterlockedOr(v42, 0);
    while ( KiTpActiveTrapsCount )
      _mm_pause();
    *(_QWORD *)(v25 + 32) = 0LL;
    *(_QWORD *)(v25 + 40) = 0LL;
    goto LABEL_111;
  }
  v23 = KiTpCompletionContextSize(v19, a2, v14, a4);
  v24 = ExAllocatePool2(0x40uLL, (unsigned int)(v23 + 52), 0x70727446u);
  v9 = v24;
  if ( v24 )
  {
    *(_QWORD *)(v24 + 16) = a1;
    *(_BYTE *)(v24 + 50) = v15;
    *(_QWORD *)(v24 + 8) = a3;
    goto LABEL_54;
  }
  v16 = -1073741670;
LABEL_124:
  if ( v47 )
    MmUnlockLoadedDataTableEntry(v47);
LABEL_32:
  KeLeaveCriticalRegion();
  return (unsigned int)v16;
}

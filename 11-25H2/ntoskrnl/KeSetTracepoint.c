/*
 * XREFs of KeSetTracepoint @ 0x140731680
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MmLockLoadedDataTableEntry @ 0x14036D7C4 (MmLockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x14036E278 (MmUnlockLoadedDataTableEntry.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KiTpWriteBreakpoint @ 0x1405C4FF0 (KiTpWriteBreakpoint.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x140731FC8 (KiTpIsSupportedKernelTracepointLocation.c)
 *     KiTpCompletionContextSize @ 0x14073209C (KiTpCompletionContextSize.c)
 *     KiTpSetupCompletion @ 0x1407321C4 (KiTpSetupCompletion.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 *v27; // rdi
  char *Pool2; // rdi
  int v29; // r14d
  __int64 v30; // r15
  __int64 *v31; // rcx
  __int64 v32; // rax
  _BYTE *v33; // rax
  __int64 v34; // r14
  __int64 *v35; // r15
  _BYTE *v36; // rcx
  __int64 v37; // rdx
  int v38; // r13d
  _BYTE *v39; // r14
  int v40; // ecx
  signed __int32 v41[8]; // [rsp+0h] [rbp-D8h] BYREF
  int v42; // [rsp+30h] [rbp-A8h]
  int v43; // [rsp+34h] [rbp-A4h]
  unsigned int v44; // [rsp+38h] [rbp-A0h]
  int v45; // [rsp+3Ch] [rbp-9Ch]
  __int64 v46; // [rsp+40h] [rbp-98h]
  _BYTE *v47; // [rsp+48h] [rbp-90h]
  unsigned __int64 v48; // [rsp+50h] [rbp-88h]
  __int64 v49; // [rsp+58h] [rbp-80h]
  char v50[48]; // [rsp+60h] [rbp-78h] BYREF

  v9 = 0LL;
  v46 = 0LL;
  v47 = a9;
  CurrentThread = KeGetCurrentThread();
  v49 = a1;
  v48 = a3;
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
    v45 = 1;
    v18 = 1;
    if ( (_DWORD)a4 == 2 )
      goto LABEL_21;
  }
  else
  {
    v18 = 0;
    v45 = 0;
  }
  if ( (_DWORD)a4 != 3 )
  {
    v19 = 0LL;
    goto LABEL_22;
  }
LABEL_21:
  v19 = 1LL;
LABEL_22:
  v44 = v19;
  if ( (unsigned int)((_DWORD)a4 - 4) <= 1 )
  {
    v42 = 1;
    if ( (_DWORD)a4 == 5 )
      goto LABEL_27;
  }
  else
  {
    v42 = 0;
  }
  if ( (_DWORD)a4 != 6 )
  {
    v43 = 0;
    goto LABEL_28;
  }
LABEL_27:
  v43 = 1;
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
    v46 = MmLockLoadedDataTableEntry(a3);
    v14 = *(void **)(v46 + 48);
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
    v24 = v9;
    v25 = KeAbPreAcquire((__int64)&KiTpStateLock, 0LL);
    v27 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTpStateLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&KiTpStateLock, v25, (__int64)&KiTpStateLock);
    if ( v27 )
      *((_BYTE *)v27 + 10) = 1;
    Pool2 = (char *)KiTpHashTable;
    if ( !KiTpHashTable )
    {
      Pool2 = (char *)ExAllocatePool2(0x40uLL);
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
      v29 = KeNumberProcessors_0;
      v30 = (unsigned int)KeNumberProcessors_0;
      v26 = ExAllocatePool2(0x40uLL);
      if ( !v26 )
      {
        ExFreePoolWithTag(Pool2, 0);
        goto LABEL_60;
      }
      if ( v29 )
      {
        v31 = KiProcessorBlock;
        do
        {
          v32 = *v31++;
          *(_QWORD *)(v32 + 152) = v26;
          v26 += 8200LL;
          --v30;
        }
        while ( v30 );
      }
      KiTpHashTable = Pool2;
    }
    v33 = 0LL;
    v34 = (v48 >> 4) & 0x3FFF;
    v35 = (__int64 *)&Pool2[8 * v34];
    v16 = 0;
    while ( 1 )
    {
      v36 = (_BYTE *)*v35;
      if ( !*v35 )
        break;
      if ( *((_QWORD *)v36 + 1) == v48 && *((_QWORD *)v36 + 2) == v49 )
      {
        v33 = (_BYTE *)*v35;
        if ( v36[50] != v15 )
        {
          v16 = -1073741811;
          goto LABEL_116;
        }
        break;
      }
      v35 = (__int64 *)*v35;
    }
    if ( !v13 )
    {
      if ( v33 )
      {
        if ( v47 )
          *v47 = v33[51];
      }
      else
      {
        LOBYTE(v26) = v15;
        v16 = KiTpSetupCompletion(v49, v26, v48, 0, 0, (__int64)v50);
      }
      goto LABEL_116;
    }
    if ( v45 )
    {
      if ( !v33 )
      {
        LOBYTE(v26) = v15;
        v16 = KiTpSetupCompletion(v49, v26, *(_QWORD *)(v9 + 8), (int)v9 + 51, 1, v9 + 52);
        if ( v16 < 0 )
          goto LABEL_116;
        ++KiTpRegisteredCount;
        v35 = (__int64 *)((char *)KiTpHashTable + 8 * v34);
        *(_QWORD *)v9 = *v35;
        *v35 = v9;
        _InterlockedOr(v41, 0);
        v37 = v44;
        v38 = v42;
        v9 &= -(__int64)(v44 != 0);
        goto LABEL_90;
      }
      if ( v33[24] || v33[25] )
      {
        v16 = -1073740008;
        goto LABEL_116;
      }
      v38 = v42;
    }
    else
    {
      v38 = v42;
      if ( !v33 )
      {
        v16 = -1073741275;
        goto LABEL_116;
      }
    }
    v37 = v44;
    v24 = (__int64)v33;
LABEL_90:
    v39 = (_BYTE *)(v24 + 48);
    if ( (_DWORD)v37 )
    {
      if ( !*v39 )
      {
        if ( ++KiTpEnabledCount == 1 )
          _InterlockedOr(&KiDynamicTraceMask, 2u);
        LOBYTE(v37) = 1;
        v16 = KiTpWriteBreakpoint(v24, v37);
        if ( v16 < 0 )
        {
          if ( v24 == v9 )
          {
            *v35 = *(_QWORD *)v24;
            _InterlockedOr(v41, 0);
            --KiTpRegisteredCount;
          }
          --KiTpEnabledCount;
          goto LABEL_116;
        }
        *v39 = 1;
      }
      *(_QWORD *)(v24 + 32) = a6;
      *(_QWORD *)(v24 + 40) = a8;
      _InterlockedOr(v41, 0);
      v9 = 0LL;
      *(_BYTE *)(v24 + 24) = a5 != 0;
      *(_BYTE *)(v24 + 25) = a7 != 0;
    }
    v40 = v43;
    if ( v43 && *v39 )
      goto LABEL_104;
    if ( !v38 )
    {
LABEL_111:
      if ( v40 )
      {
        *v35 = *(_QWORD *)v24;
        _InterlockedOr(v41, 0);
        --KiTpRegisteredCount;
        v9 = v24;
      }
      if ( v47 )
        *v47 = *(_BYTE *)(v24 + 51);
      v16 = 0;
      goto LABEL_116;
    }
    if ( *v39 )
    {
LABEL_104:
      if ( (int)KiTpWriteBreakpoint(v24, 0LL) >= 0 )
      {
        --KiTpEnabledCount;
        v40 = v43;
        *v39 = 0;
      }
      else
      {
        v40 = 0;
      }
    }
    *(_WORD *)(v24 + 24) = 0;
    _InterlockedOr(v41, 0);
    while ( KiTpActiveTrapsCount )
      _mm_pause();
    *(_QWORD *)(v24 + 32) = 0LL;
    *(_QWORD *)(v24 + 40) = 0LL;
    goto LABEL_111;
  }
  KiTpCompletionContextSize(v19, a2, v14, a4);
  v23 = ExAllocatePool2(0x40uLL);
  v9 = v23;
  if ( v23 )
  {
    *(_QWORD *)(v23 + 16) = a1;
    *(_BYTE *)(v23 + 50) = v15;
    *(_QWORD *)(v23 + 8) = a3;
    goto LABEL_54;
  }
  v16 = -1073741670;
LABEL_124:
  if ( v46 )
    MmUnlockLoadedDataTableEntry(v46);
LABEL_32:
  KeLeaveCriticalRegion();
  return (unsigned int)v16;
}

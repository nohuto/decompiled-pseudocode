/*
 * XREFs of PspPostFreezeOperationWorker @ 0x140A783C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwTraceWin32kFreezeChangeNotifyStart @ 0x1407A9C70 (EtwTraceWin32kFreezeChangeNotifyStart.c)
 *     EtwTraceWin32kFreezeChangeNotifyStop @ 0x1407A9D2C (EtwTraceWin32kFreezeChangeNotifyStop.c)
 *     PspWin32kProcessFreezeNotify @ 0x140A8A968 (PspWin32kProcessFreezeNotify.c)
 */

void __fastcall PspPostFreezeOperationWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v3; // rsi
  unsigned int v4; // r12d
  char *v5; // rax
  char *v6; // rdi
  _QWORD **v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  struct _KPROCESS *v10; // r15
  _QWORD *v11; // rcx
  __int64 v12; // rdi
  char v13; // r14
  _DWORD *v14; // r15
  PVOID *v15; // r14
  struct _KTHREAD *v16; // rax
  char *v17; // rax
  char *v18; // rdi
  unsigned int SessionId; // eax
  int v20; // r14d
  unsigned int v21; // edi
  __int64 v22; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD **v23; // [rsp+30h] [rbp-D8h]
  _QWORD *v24; // [rsp+38h] [rbp-D0h]
  _DWORD v25[128]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v26[128]; // [rsp+248h] [rbp+140h] BYREF

  v24 = (_QWORD *)a1;
  memset_0(v26, 0, sizeof(v26));
  memset_0(v25, 0, sizeof(v25));
  CurrentThread = KeGetCurrentThread();
  v3 = (volatile signed __int64 *)(a1 + 8);
  LODWORD(v22) = 0;
  v4 = -1;
  --CurrentThread->KernelApcDisable;
  v5 = (char *)KeAbPreAcquire(a1 + 8, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 8), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 8), v5, a1 + 8);
  if ( v6 )
    v6[10] = 1;
  v7 = (_QWORD **)(a1 + 16);
  v23 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 != v7 && (_DWORD)v22 != 128 )
    {
      v9 = *v8;
      v10 = (struct _KPROCESS *)(v8 - 257);
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v11 = (_QWORD *)v8[1], (_QWORD *)*v11 != v8) )
        __fastfail(3u);
      *v11 = v9;
      *(_QWORD *)(v9 + 8) = v11;
      *(_OWORD *)v8 = 0LL;
      if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v3);
      KeAbPostRelease((ULONG_PTR)v3);
      KeLeaveCriticalRegion();
      if ( !v10[1].Padding[2] )
        goto LABEL_35;
      SessionId = PsGetSessionIdEx((__int64)v10);
      v20 = v22;
      v21 = SessionId;
      if ( (_DWORD)v22 )
      {
        if ( v4 == SessionId )
        {
LABEL_34:
          PsReferenceSiloContext(v10);
          v26[v20] = v10;
          v25[v20] = (unsigned int)PsGetProcessId(v10);
          LODWORD(v22) = v20 + 1;
LABEL_35:
          ObfDereferenceObject(v10);
          goto LABEL_25;
        }
        PspWin32kProcessFreezeNotify(v4, v26, v25, &v22);
        v20 = v22;
      }
      v4 = v21;
      goto LABEL_34;
    }
    if ( !(_DWORD)v22 )
      break;
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    KeLeaveCriticalRegion();
    v12 = (unsigned int)v22;
    if ( (unsigned int)dword_140E09160 > 5 && (qword_140E09170 & 4) != 0 && (qword_140E09178 & 4) == qword_140E09178 )
    {
      v13 = 1;
      EtwTraceWin32kFreezeChangeNotifyStart();
    }
    else
    {
      v13 = 0;
    }
    Win32kProcessFreezeChangeNotify(v4, v26, (unsigned int)v12);
    if ( v13 )
      EtwTraceWin32kFreezeChangeNotifyStop(v4, (__int64)v25, v12);
    if ( (_DWORD)v12 )
    {
      v14 = v25;
      v15 = (PVOID *)v26;
      do
      {
        ObfDereferenceObject(*v15);
        *v15++ = 0LL;
        *v14++ = 0;
        --v12;
      }
      while ( v12 );
    }
    LODWORD(v22) = 0;
LABEL_25:
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = (char *)KeAbPreAcquire((__int64)v3, 0LL);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v3, v17, (__int64)v3);
    v7 = v23;
    if ( v18 )
      v18[10] = 1;
  }
  *v24 &= ~1uLL;
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
}

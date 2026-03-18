/*
 * XREFs of PspPostFreezeOperationWorker @ 0x14076A810
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PsGetProcessId @ 0x140438AF0 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PspWin32kProcessFreezeNotify @ 0x14076AAAC (PspWin32kProcessFreezeNotify.c)
 */

void __fastcall PspPostFreezeOperationWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v3; // rsi
  unsigned int v4; // r13d
  __int64 *v5; // rax
  __int64 *v6; // rdi
  _QWORD **v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  struct _KPROCESS *v10; // r15
  _QWORD *v11; // rcx
  unsigned int SessionId; // eax
  int v13; // r14d
  unsigned int v14; // edi
  struct _KTHREAD *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD **v19; // [rsp+30h] [rbp-D8h]
  _QWORD *v20; // [rsp+38h] [rbp-D0h]
  _DWORD v21[128]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v22[128]; // [rsp+248h] [rbp+140h] BYREF

  v20 = (_QWORD *)a1;
  memset_0(v22, 0, sizeof(v22));
  memset_0(v21, 0, sizeof(v21));
  CurrentThread = KeGetCurrentThread();
  v3 = (volatile signed __int64 *)(a1 + 8);
  LODWORD(v18) = 0;
  v4 = -1;
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire(a1 + 8, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 8), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 8), v5, a1 + 8);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = (_QWORD **)(a1 + 16);
  v19 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 != v7 && (_DWORD)v18 != 128 )
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
        goto LABEL_18;
      SessionId = PsGetSessionIdEx((__int64)v10);
      v13 = v18;
      v14 = SessionId;
      if ( (_DWORD)v18 )
      {
        if ( v4 == SessionId )
        {
LABEL_17:
          PsReferenceSiloContext(v10);
          v22[v13] = v10;
          v21[v13] = (unsigned int)PsGetProcessId(v10);
          LODWORD(v18) = v13 + 1;
LABEL_18:
          ObfDereferenceObject(v10);
          goto LABEL_23;
        }
        PspWin32kProcessFreezeNotify(v4, v22, v21, &v18);
        v13 = v18;
      }
      v4 = v14;
      goto LABEL_17;
    }
    if ( !(_DWORD)v18 )
      break;
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    KeLeaveCriticalRegion();
    PspWin32kProcessFreezeNotify(v4, v22, v21, &v18);
LABEL_23:
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    v16 = KeAbPreAcquire((__int64)v3, 0LL);
    v17 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v3, v16, (__int64)v3);
    v7 = v19;
    if ( v17 )
      *((_BYTE *)v17 + 10) = 1;
  }
  *v20 &= ~1uLL;
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
}

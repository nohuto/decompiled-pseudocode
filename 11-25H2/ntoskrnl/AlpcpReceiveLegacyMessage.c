/*
 * XREFs of AlpcpReceiveLegacyMessage @ 0x1408AC320
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x1408AC130 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectSafe @ 0x140420490 (ObReferenceObjectSafe.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpReceiveMessagePort @ 0x1408A6F40 (AlpcpReceiveMessagePort.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpAvailableBufferSize @ 0x1408AC6E0 (AlpcpAvailableBufferSize.c)
 *     AlpcpCancelMessage @ 0x1408AC700 (AlpcpCancelMessage.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x14098E8E8 (AlpcpGetDataFromUserVaSafe.c)
 */

__int64 __fastcall AlpcpReceiveLegacyMessage(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  _QWORD *v5; // r14
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 PreviousMode; // r13
  void *v8; // rcx
  LARGE_INTEGER *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // r12
  unsigned int v14; // r14d
  ULONG_PTR v15; // rdi
  _QWORD *v16; // rsi
  size_t v17; // rax
  size_t v18; // r13
  const void *v19; // rdx
  void *v20; // rcx
  void **v22; // r12
  signed __int64 *v23; // rdi
  __int64 *v24; // rsi
  _DWORD *v25; // [rsp+30h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-70h] BYREF
  __int64 v27; // [rsp+40h] [rbp-68h] BYREF
  void *v28; // [rsp+48h] [rbp-60h]
  void *v29; // [rsp+50h] [rbp-58h]
  struct _KTHREAD *v30; // [rsp+58h] [rbp-50h]
  ULONG_PTR v31; // [rsp+60h] [rbp-48h]
  size_t v33; // [rsp+B0h] [rbp+8h]
  LARGE_INTEGER *v34; // [rsp+C0h] [rbp+18h]

  v34 = (LARGE_INTEGER *)a3;
  v5 = a1;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v30 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v27 = 0LL;
  v8 = (void *)*a1;
  v25 = v8;
  v29 = v8;
  if ( PreviousMode )
  {
    v9 = (LARGE_INTEGER *)a3;
    v10 = 0x7FFFFFFF0000LL;
    if ( a3 )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( a3 < 0x7FFFFFFF0000LL )
        v11 = a3;
      v27 = *(_QWORD *)v11;
      v9 = (LARGE_INTEGER *)&v27;
      v34 = (LARGE_INTEGER *)&v27;
    }
    if ( a2 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = 0x7FFFFFFF0000LL;
      if ( a2 < 0x7FFFFFFF0000LL )
        v12 = a2;
      *(_BYTE *)v12 = *(_BYTE *)v12;
      *(_BYTE *)(v12 + 39) = *(_BYTE *)(v12 + 39);
      v9 = v34;
      v8 = v25;
    }
    if ( a4 )
    {
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a4;
      *(_QWORD *)v10 = *(_QWORD *)v10;
      v9 = v34;
    }
  }
  else
  {
    PreviousMode = (CurrentThread->MiscFlags & 0x400) != 0;
    v9 = (LARGE_INTEGER *)a3;
  }
  v13 = 0LL;
  v28 = 0LL;
  if ( (*((_BYTE *)v8 + 416) & 6) == 6 )
  {
    v22 = (void **)*((_QWORD *)v8 + 2);
    v23 = (signed __int64 *)(v22 - 2);
    v24 = KeAbPreAcquire((__int64)(v22 - 2), 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v22 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v22 - 2, 0, v24, (unsigned __int64)(v22 - 2));
    if ( v24 )
      *((_BYTE *)v24 + 10) = 1;
    v13 = *v22;
    v28 = v13;
    if ( v13 && ObReferenceObjectSafe((__int64)v13) )
    {
      if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v23);
      KeAbPostRelease((ULONG_PTR)v23);
      v25 = v13;
      v29 = v13;
      *v5 = v13;
      v9 = v34;
      goto LABEL_17;
    }
    if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v23);
    KeAbPostRelease((ULONG_PTR)v23);
    return 3221225527LL;
  }
  else
  {
LABEL_17:
    while ( 1 )
    {
      v14 = AlpcpReceiveMessagePort((__int64)v5, PreviousMode, v9, &BugCheckParameter2, 0);
      if ( v14 )
        break;
      v15 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) == 0 )
      {
        v16 = (_QWORD *)(BugCheckParameter2 + 200);
        v31 = BugCheckParameter2 + 200;
        *(_QWORD *)(BugCheckParameter2 + 200) = v30;
        if ( a2 )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v15 + 240);
          *(_OWORD *)(a2 + 16) = *(_OWORD *)(v15 + 256);
          *(_QWORD *)(a2 + 32) = *(_QWORD *)(v15 + 272);
          if ( (v25[64] & 0x1000) != 0 )
            *(_WORD *)(a2 + 4) = *(_WORD *)(v15 + 244) & 0xC00F;
          if ( *(_QWORD *)(v15 + 176) )
          {
            AlpcpGetDataFromUserVaSafe(v15, a2 + 40);
          }
          else
          {
            v17 = AlpcpAvailableBufferSize(v15);
            v33 = v17;
            v18 = *(unsigned __int16 *)(v15 + 240);
            v19 = (const void *)(v15 + 280);
            v20 = (void *)(a2 + 40);
            if ( v18 > v17 )
            {
              memmove(v20, v19, v17);
              v18 -= v33;
              v20 = (void *)(a2 + v33 + 40);
              v19 = *(const void **)(v15 + 224);
            }
            memmove(v20, v19, v18);
          }
        }
        if ( a4 )
          *a4 = *(_QWORD *)(v15 + 120);
        if ( a2 )
        {
          AlpcpUnlockMessage(v15);
        }
        else
        {
          *v16 = 0LL;
          AlpcpCancelMessage(v25, v15, 0x10000LL);
        }
        break;
      }
      if ( *(_DWORD **)(BugCheckParameter2 + 64) == v25 )
      {
        *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
        *(_QWORD *)(v15 + 56) = 0LL;
      }
      AlpcpCancelMessage(v25, v15, 0x10000LL);
      BugCheckParameter2 = 0LL;
      v5 = a1;
    }
    if ( v13 )
      ObfDereferenceObject(v13);
    return v14;
  }
}

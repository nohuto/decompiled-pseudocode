/*
 * XREFs of AlpcpReceiveLegacyMessage @ 0x14089D780
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x14089D590 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140411C00 (ObReferenceObjectSafe.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     AlpcpCancelMessage @ 0x14089C73C (AlpcpCancelMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14089DB00 (AlpcpReceiveMessagePort.c)
 *     AlpcpAvailableBufferSize @ 0x14089E820 (AlpcpAvailableBufferSize.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1409908B4 (AlpcpGetDataFromUserVaSafe.c)
 */

__int64 __fastcall AlpcpReceiveLegacyMessage(__int64 *a1, unsigned __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 *v6; // r12
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 PreviousMode; // cl
  __int64 v9; // r8
  signed __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  void *v14; // r14
  __int64 v15; // rdx
  unsigned int v16; // r12d
  ULONG_PTR v17; // rdi
  _QWORD *v18; // rsi
  size_t v19; // rax
  const void *v20; // rdx
  size_t v21; // r8
  void *v22; // rcx
  void **v24; // r14
  char *v25; // rdi
  unsigned __int8 v26; // [rsp+30h] [rbp-78h]
  __int64 v27; // [rsp+38h] [rbp-70h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-68h] BYREF
  __int64 v29; // [rsp+48h] [rbp-60h] BYREF
  void *v30; // [rsp+50h] [rbp-58h]
  __int64 v31; // [rsp+58h] [rbp-50h]
  size_t v32; // [rsp+60h] [rbp-48h]
  int v33; // [rsp+B0h] [rbp+8h]
  size_t v34; // [rsp+B0h] [rbp+8h]

  v33 = (int)a1;
  v6 = a1;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v32 = (size_t)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v26 = PreviousMode;
  v29 = 0LL;
  v9 = *v6;
  v27 = *v6;
  v31 = *v6;
  if ( PreviousMode )
  {
    LODWORD(v10) = (_DWORD)a3;
    v11 = 0x7FFFFFFF0000LL;
    if ( a3 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a3;
      v29 = *(_QWORD *)v12;
      v10 = &v29;
      a3 = &v29;
    }
    if ( a2 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = 0x7FFFFFFF0000LL;
      if ( a2 < 0x7FFFFFFF0000LL )
        v13 = a2;
      *(_BYTE *)v13 = *(_BYTE *)v13;
      *(_BYTE *)(v13 + 39) = *(_BYTE *)(v13 + 39);
      LODWORD(v10) = (_DWORD)a3;
      PreviousMode = v26;
    }
    if ( a4 )
    {
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a4;
      *(_QWORD *)v11 = *(_QWORD *)v11;
      LODWORD(v10) = (_DWORD)a3;
    }
  }
  else
  {
    PreviousMode = (CurrentThread->MiscFlags & 0x400) != 0;
    v26 = PreviousMode;
    LODWORD(v10) = (_DWORD)a3;
  }
  v14 = 0LL;
  v30 = 0LL;
  if ( (*(_BYTE *)(v9 + 416) & 6) == 6 )
  {
    v24 = *(void ***)(v9 + 16);
    v10 = (signed __int64 *)(v24 - 2);
    v25 = (char *)KeAbPreAcquire((__int64)(v24 - 2), 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v24 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v24 - 2, 0, v25, (__int64)(v24 - 2));
    if ( v25 )
      v25[10] = 1;
    v14 = *v24;
    v30 = v14;
    if ( v14 && ObReferenceObjectSafe((__int64)v14) )
    {
      if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      v27 = (__int64)v14;
      v31 = (__int64)v14;
      *v6 = (__int64)v14;
      LODWORD(v10) = (_DWORD)a3;
      PreviousMode = v26;
      goto LABEL_17;
    }
    if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    return 3221225527LL;
  }
  else
  {
LABEL_17:
    while ( 1 )
    {
      v16 = AlpcpReceiveMessagePort((_DWORD)v6, PreviousMode, (_DWORD)v10, (unsigned int)&BugCheckParameter2, 0);
      if ( v16 )
        break;
      v17 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) == 0 )
      {
        v18 = (_QWORD *)(BugCheckParameter2 + 200);
        *(_QWORD *)(BugCheckParameter2 + 200) = v32;
        if ( a2 )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v17 + 240);
          *(_OWORD *)(a2 + 16) = *(_OWORD *)(v17 + 256);
          *(_QWORD *)(a2 + 32) = *(_QWORD *)(v17 + 272);
          if ( (*(_DWORD *)(v27 + 256) & 0x1000) != 0 )
            *(_WORD *)(a2 + 4) = *(_WORD *)(v17 + 244) & 0xC00F;
          if ( *(_QWORD *)(v17 + 176) )
          {
            AlpcpGetDataFromUserVaSafe(v17, a2 + 40);
          }
          else
          {
            v19 = AlpcpAvailableBufferSize(v17, v15);
            v32 = v19;
            v34 = *(unsigned __int16 *)(v17 + 240);
            v20 = (const void *)(v17 + 280);
            if ( v34 > v19 )
            {
              memmove((void *)(a2 + 40), v20, v19);
              v21 = v34 - v32;
              v22 = (void *)(a2 + v32 + 40);
              v20 = *(const void **)(v17 + 224);
            }
            else
            {
              v21 = *(unsigned __int16 *)(v17 + 240);
              v22 = (void *)(a2 + 40);
            }
            memmove(v22, v20, v21);
          }
        }
        if ( a4 )
          *a4 = *(_QWORD *)(v17 + 120);
        if ( a2 )
        {
          AlpcpUnlockMessage(v17);
        }
        else
        {
          *v18 = 0LL;
          AlpcpCancelMessage(v27, v17, 0x10000);
        }
        break;
      }
      if ( *(_QWORD *)(BugCheckParameter2 + 64) == v27 )
      {
        *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
        *(_QWORD *)(v17 + 56) = 0LL;
      }
      AlpcpCancelMessage(v27, v17, 0x10000);
      BugCheckParameter2 = 0LL;
      PreviousMode = v26;
      LODWORD(v6) = v33;
    }
    if ( v14 )
      ObfDereferenceObject(v14);
    return v16;
  }
}

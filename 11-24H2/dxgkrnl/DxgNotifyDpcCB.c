/*
 * XREFs of DxgNotifyDpcCB @ 0x14002A460
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     DpSynchronizeExecution @ 0x140026180 (DpSynchronizeExecution.c)
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14003727C (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x14007E784 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x14007EAA0 (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     DpiMiracastStopMiracastSessionAsync @ 0x14007F9B0 (DpiMiracastStopMiracastSessionAsync.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall DxgNotifyDpcCB(__int64 a1)
{
  __int64 v2; // rax
  struct DXGADAPTER *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  DXGDODPRESENT *v7; // rcx
  unsigned int v8; // r9d
  unsigned int v9; // r9d
  struct MIRACAST_CHUNK *i; // rax
  struct _KEVENT *v11; // rcx
  _QWORD v12[2]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v13[2]; // [rsp+60h] [rbp-9h] BYREF
  int v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+74h] [rbp+Bh]
  __int128 v16; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp+27h] BYREF
  BOOLEAN v19; // [rsp+D0h] [rbp+67h] BYREF

  if ( KeGetCurrentIrql() != 2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 81;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"KeGetCurrentIrql() == DISPATCH_LEVEL",
      81LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 64) + 4056LL), 0, 0) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 64);
    if ( v2 && *(_DWORD *)(v2 + 16) == 1953656900 && *(_DWORD *)(v2 + 20) == 2 )
    {
      v3 = *(struct DXGADAPTER **)(v2 + 4032);
      if ( v3 )
      {
        v4 = *((_QWORD *)v3 + 391);
        if ( v4 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v4 + 736) + 8LL) + 16LL))(a1);
        }
        else
        {
          v7 = *(DXGDODPRESENT **)(*((_QWORD *)v3 + 390) + 464LL);
          if ( v7 )
            DXGDODPRESENT::NotifyDpc(v7, v3);
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 2066;
    }
  }
  v5 = *(_QWORD *)(a1 + 64);
  v17 = 0LL;
  v16 = 0LL;
  if ( v5 && *(_DWORD *)(v5 + 16) == 1953656900 && *(_DWORD *)(v5 + 20) == 2 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v6 = *(_QWORD *)(v5 + 3368);
    if ( v6 )
    {
      *(_QWORD *)&v16 = v5;
      *((_QWORD *)&v16 + 1) = *(_QWORD *)(v6 + 488);
      v8 = *(_DWORD *)(v5 + 4044);
      v19 = 0;
      DpSynchronizeExecution(a1, (KSYNCHRONIZE_ROUTINE *)MiracastProcessPendingDPCChunks, &v16, v8, &v19);
      if ( BYTE1(v17) )
      {
        DpiMiracastStopMiracastSessionAsync((PVOID)v6);
      }
      else
      {
        if ( (_BYTE)v17 )
          *(_BYTE *)(v6 + 588) = 1;
        if ( HIDWORD(v17) < 0x14 && *(_DWORD *)(v5 + 3388) + 5 < 40 )
        {
          v15 = *(_DWORD *)(v5 + 3352);
          v14 = 0;
          v13[1] = v13;
          v13[0] = v13;
          if ( MIRACAST_CHUNK_LIST::AllocateNewChunks((MIRACAST_CHUNK_LIST *)v13, 5u) )
          {
            v9 = *(_DWORD *)(v5 + 4044);
            v12[0] = v13;
            v12[1] = *(_QWORD *)(v5 + 3392);
            DpSynchronizeExecution(a1, (KSYNCHRONIZE_ROUTINE *)DpiMiracastMoveChunkList, v12, v9, &v19);
            *(_DWORD *)(v5 + 3388) += 5;
          }
          else
          {
            WdLogSingleEntry1(6LL, -1073741801LL);
            WdLogGlobalForLineNumber = 8494;
          }
          for ( i = MIRACAST_CHUNK_LIST::RemoveHead((MIRACAST_CHUNK_LIST *)v13);
                i;
                i = MIRACAST_CHUNK_LIST::RemoveHead((MIRACAST_CHUNK_LIST *)v13) )
          {
            ExFreePoolWithTag(i, 0);
          }
        }
        if ( BYTE2(v17) || (_BYTE)v17 )
        {
          v11 = *(struct _KEVENT **)(v6 + 496);
          if ( v11 )
            KeSetEvent(v11, 1, 0);
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    WdLogSingleEntry2(2LL, v5, -1073741585LL);
    WdLogGlobalForLineNumber = 8371;
  }
}

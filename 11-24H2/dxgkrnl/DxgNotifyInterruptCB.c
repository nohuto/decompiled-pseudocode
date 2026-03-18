/*
 * XREFs of DxgNotifyInterruptCB @ 0x14002D6A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z @ 0x1400569FC (-NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x14007EAA0 (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     McTemplateK0xqqqqqqqq_EtwWriteTransfer @ 0x1400823B0 (McTemplateK0xqqqqqqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

void __fastcall DxgNotifyInterruptCB(__int64 a1, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2)
{
  int v4; // r8d
  int v5; // ebp
  __int64 v6; // rdi
  __int64 v7; // rax
  struct DXGADAPTER *v8; // rdx
  __int64 v9; // rax
  DXGDODPRESENT *v10; // rcx
  struct MIRACAST_CHUNK *v11; // rax
  struct MIRACAST_CHUNK *v12; // rbx
  __int64 v13; // rax
  struct MIRACAST_CHUNK **v14; // rcx

  v5 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 28;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"KeGetCurrentIrql() >= DISPATCH_LEVEL",
      28LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = *(_QWORD *)(a1 + 64);
  if ( a2->InterruptType == DXGK_INTERRUPT_MICACAST_CHUNK_PROCESSING_COMPLETE )
  {
    if ( v6 && *(_DWORD *)(v6 + 16) == 1953656900 && *(_DWORD *)(v6 + 20) == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
        McTemplateK0xqqqqqqqq_EtwWriteTransfer(
          a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkId.Value >> 40,
          a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkId.Value,
          v4,
          *(_QWORD *)(v6 + 3376),
          a2->DmaCompleted.SubmissionFenceId,
          a2->DmaCompleted.EngineOrdinal,
          a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkId.Value,
          (unsigned __int16)WORD2(a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkId.Value) >> 8,
          a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime,
          a2->MiracastEncodeChunkCompleted.ChunkInfo.EncodeRate,
          a2->MiracastEncodeChunkCompleted.PrivateDataDriverSize,
          a2->MiracastEncodeChunkCompleted.Status);
      if ( *(_QWORD *)(v6 + 3368) && !*(_BYTE *)(v6 + 3385) )
      {
        if ( a2->DmaCompleted.SubmissionFenceId == *(_DWORD *)(v6 + 3360) )
        {
          if ( a2->MiracastEncodeChunkCompleted.PrivateDataDriverSize <= *(_DWORD *)(v6 + 3352) )
          {
            v11 = MIRACAST_CHUNK_LIST::RemoveHead(*(MIRACAST_CHUNK_LIST **)(v6 + 3392));
            v12 = v11;
            if ( v11 )
            {
              *((_OWORD *)v11 + 1) = *(_OWORD *)&a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkType;
              *((_QWORD *)v11 + 4) = a2->CrtcVsyncWithMultiPlaneOverlay2.GpuFrequency;
              *((_DWORD *)v11 + 10) = a2->MiracastEncodeChunkCompleted.PrivateDataDriverSize;
              memmove(
                (char *)v11 + 44,
                a2->MiracastEncodeChunkCompleted.pPrivateDriverData,
                a2->MiracastEncodeChunkCompleted.PrivateDataDriverSize);
              v13 = *(_QWORD *)(v6 + 3400);
              v14 = *(struct MIRACAST_CHUNK ***)(v13 + 8);
              if ( *v14 != (struct MIRACAST_CHUNK *)v13 )
                __fastfail(3u);
              *(_QWORD *)v12 = v13;
              *((_QWORD *)v12 + 1) = v14;
              *v14 = v12;
              *(_QWORD *)(v13 + 8) = v12;
              ++*(_DWORD *)(v13 + 16);
            }
            else
            {
              WdLogSingleEntry1(3LL, v6);
              WdLogGlobalForLineNumber = 8119;
              v5 = -1073741801;
              *(_BYTE *)(v6 + 3384) = 1;
            }
          }
          else
          {
            v5 = -1073741811;
            WdLogSingleEntry2(2LL, v6, -1073741811LL);
            WdLogGlobalForLineNumber = 8100;
            *(_BYTE *)(v6 + 3385) = 1;
          }
        }
        else
        {
          v5 = -1073741811;
          WdLogSingleEntry2(2LL, v6, -1073741811LL);
          WdLogGlobalForLineNumber = 8087;
          *(_BYTE *)(v6 + 3385) = 1;
        }
      }
    }
    else
    {
      v5 = -1073741811;
      WdLogSingleEntry2(2LL, *(_QWORD *)(a1 + 64), -1073741811LL);
      WdLogGlobalForLineNumber = 8047;
    }
    a2->MiracastEncodeChunkCompleted.Status = v5;
  }
  else if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 4056), 0, 0) & 2) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 && *(_DWORD *)(v7 + 16) == 1953656900 && *(_DWORD *)(v7 + 20) == 2 )
      {
        v8 = *(struct DXGADAPTER **)(v7 + 4032);
        if ( v8 )
        {
          v9 = *((_QWORD *)v8 + 391);
          if ( v9 )
          {
            (*(void (__fastcall **)(__int64, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *))(*(_QWORD *)(*(_QWORD *)(v9 + 736) + 8LL)
                                                                                       + 8LL))(
              a1,
              a2);
          }
          else
          {
            v10 = *(DXGDODPRESENT **)(*((_QWORD *)v8 + 390) + 464LL);
            if ( v10 )
              DXGDODPRESENT::NotifyInterrupt(v10, v8, a2);
          }
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, a1);
        WdLogGlobalForLineNumber = 2066;
      }
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2059;
    }
  }
}

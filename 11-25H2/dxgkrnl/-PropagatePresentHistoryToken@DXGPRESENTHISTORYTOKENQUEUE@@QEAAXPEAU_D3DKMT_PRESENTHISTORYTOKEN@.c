/*
 * XREFs of ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x14007ABE8
 * Callers:
 *     ?VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x14007AEC0 (-VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION_.c)
 * Callees:
 *     McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x14001597C (McTemplateK0ppqqxdqp_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
        PKSPIN_LOCK SpinLock,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        __int64 a3,
        __int64 a4,
        bool a5,
        bool a6,
        bool a7,
        bool a8)
{
  int v10; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-28h] BYREF

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    McTemplateK0ppqqxdqp_EtwWriteTransfer(
      (__int64)SpinLock,
      &EventPropagatePresentHistory,
      a3,
      SpinLock,
      a2,
      0,
      0,
      0LL,
      0,
      0,
      0LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  if ( *((_DWORD *)SpinLock + 2) >= 0x800u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3634;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_PresentHistoryHead < D3DKMT_GETPRESENTHISTORY_MAXTOKENS",
      3634LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  SpinLock[*((unsigned int *)SpinLock + 2) + 10] = (KSPIN_LOCK)a2;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~1u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~2u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~4u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~8u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~0x10u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = (32 * a8) | *((_BYTE *)SpinLock
                                                                               + *((unsigned int *)SpinLock + 2)
                                                                               + 16464) & 0xDF;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) |= 0x40u;
  v10 = ((unsigned __int16)*((_DWORD *)SpinLock + 2) + 1) & 0x7FF;
  *((_DWORD *)SpinLock + 2) = v10;
  if ( v10 == *((_DWORD *)SpinLock + 3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3652;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_PresentHistoryHead != m_PresentHistoryTail",
      3652LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeSetEvent((PRKEVENT)SpinLock[9], 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

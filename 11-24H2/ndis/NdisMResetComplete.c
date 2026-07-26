/*
 * XREFs of NdisMResetComplete @ 0x14009FE80
 * Callers:
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x140080060 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x14009DE70 (-ndisMReset@@YAHPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x140021940 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007EA60 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x14009E1FC (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 */

void __stdcall NdisMResetComplete(NDIS_HANDLE MiniportAdapterHandle, NDIS_STATUS Status, BOOLEAN AddressingReset)
{
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v5; // rdi
  void *v6; // r8
  int v7; // r9d
  int v8; // eax
  char v9; // dl
  int v10; // edx
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  BugCheckParameter4 = AddressingReset;
  v5 = Status;
  NewIrql = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Status) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Status,
      17,
      75,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)MiniportAdapterHandle);
  }
  if ( *((_QWORD *)MiniportAdapterHandle + 556) )
    ndisClearBusy((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 1, 36);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &NewIrql);
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x200000) == 0 )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *((_QWORD *)MiniportAdapterHandle + 482),
      "Completing reset when one is not pending");
    KeBugCheckEx(0x7Cu, 0xFuLL, (ULONG_PTR)MiniportAdapterHandle, v5, BugCheckParameter4);
  }
  LOBYTE(v6) = BugCheckParameter4;
  v8 = ndisMResetCompleteStage1(
         (struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle,
         (struct _NDIS_OPEN_BLOCK *)(unsigned int)v5,
         v6,
         v7);
  v9 = 0;
  if ( !v8 )
    v9 = BugCheckParameter4;
  if ( !v9 || (_DWORD)v5 )
    ndisMResetCompleteStage2((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, NewIrql);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      17,
      76,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)MiniportAdapterHandle);
  }
}

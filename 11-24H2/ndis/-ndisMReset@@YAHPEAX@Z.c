/*
 * XREFs of ?ndisMReset@@YAHPEAX@Z @ 0x14009DE70
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006BB0 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     NdisMIndicateStatusEx @ 0x14004E030 (NdisMIndicateStatusEx.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140051CB0 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140052500 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x14007E940 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009D670 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMResetComplete @ 0x14009FE80 (NdisMResetComplete.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall ndisMReset(_SINGLE_LIST_ENTRY *a1)
{
  _SINGLE_LIST_ENTRY *Next; // rbx
  int v3; // edx
  unsigned int v4; // edi
  KIRQL v5; // dl
  KIRQL v6; // dl
  int v7; // edx
  __int64 v8; // rcx
  KIRQL v9; // r14
  int v10; // edx
  KIRQL v11; // dl
  struct _GUID *v13; // [rsp+28h] [rbp-79h]
  __int64 v14; // [rsp+38h] [rbp-69h]
  KIRQL NewIrql; // [rsp+48h] [rbp-59h] BYREF
  BOOLEAN AddressingReset[15]; // [rsp+49h] [rbp-58h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+58h] [rbp-49h] BYREF

  Next = a1[2].Next;
  NewIrql = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      17,
      72,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      (char)Next);
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)Next, &NewIrql);
  if ( (HIDWORD(Next[15].Next) & 0x80000) != 0 )
  {
    v4 = -2147418111;
LABEL_28:
    v11 = NewIrql;
    Next[65].Next = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&Next[12], v11);
    goto LABEL_29;
  }
  v4 = -1073676275;
  if ( ((__int64)Next[15].Next & 0x40000) != 0 )
  {
    if ( ((__int64)Next[15].Next & 0x200000) != 0 )
      goto LABEL_28;
  }
  else if ( (unsigned int)ndisMQueueWorkItem((struct _NDIS_MINIPORT_BLOCK *)Next, 3, a1) )
  {
    goto LABEL_28;
  }
  v4 = -2147418111;
  if ( LOBYTE(Next[4].Next) >= 6u || !Next[470].Next[24].Next )
    goto LABEL_28;
  ndisMReferenceOpen((__int64)a1, 8u);
  Next[49].Next = a1;
  if ( ((__int64)Next[15].Next & 0x40000) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)&Next[15], 0x100000u);
    if ( !BYTE1(Next[11].Next) )
    {
      BYTE1(Next[11].Next) = 1;
      Next[233].Next = (_SINGLE_LIST_ENTRY *)KeGetCurrentThread();
      ndisMProcessDeferred((struct _NDIS_MINIPORT_BLOCK *)Next);
      BYTE1(Next[11].Next) = 0;
      Next[233].Next = 0LL;
    }
    v4 = 259;
    goto LABEL_28;
  }
  AddressingReset[0] = 0;
  _InterlockedOr((volatile signed __int32 *)&Next[15], 0x280000u);
  ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)Next, 1u);
  while ( LODWORD(Next[228].Next) )
  {
    v5 = NewIrql;
    Next[65].Next = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&Next[12], v5);
    KeStallExecutionProcessor(1u);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)Next, &NewIrql);
  }
  if ( HIDWORD(Next[483].Next) != 1 )
  {
    BYTE2(Next[116].Next) &= ~1u;
    v4 = -1073741637;
    HIDWORD(Next[67].Next) = -1073741637;
    Next[49].Next = 0LL;
    _InterlockedAnd((volatile signed __int32 *)&Next[15], 0xFFD7FFFF);
    ndisMDereferenceOpenLocked((struct _NDIS_OPEN_BLOCK *)a1, 8u);
    goto LABEL_28;
  }
  v6 = NewIrql;
  Next[65].Next = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&Next[12], v6);
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.SourceHandle = Next;
  StatusIndication.StatusCode = 1073807364;
  StatusIndication.StatusBuffer = 0LL;
  StatusIndication.StatusBufferSize = 0;
  NdisMIndicateStatusEx(Next, &StatusIndication);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      12,
      73,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)Next);
  }
  if ( (byte_14011B101 & 4) != 0 )
  {
    LODWORD(v14) = 65538;
    LODWORD(v13) = Next[507].Next;
    McTemplateK0jqxd_EtwWriteTransfer(
      v8,
      (__int64)&CallMiniportReset,
      (__int64)&Next[501],
      (__int64)&Next[501],
      (__int64)v13,
      (__int64)Next[503].Next,
      v14);
  }
  v9 = KfRaiseIrql(2u);
  v4 = ((__int64 (__fastcall *)(BOOLEAN *, _SINGLE_LIST_ENTRY *))Next[470].Next[24].Next)(AddressingReset, Next[3].Next);
  if ( v9 != 2 )
    KeLowerIrql(v9);
  if ( v4 != 259 )
  {
    NdisMResetComplete(Next, v4, AddressingReset[0]);
    v4 = 259;
  }
LABEL_29:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      17,
      74,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      (char)Next);
  }
  return v4;
}

/*
 * XREFs of ?ndisMReset@@YAHPEAX@Z @ 0x1400A6920
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400554F0 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A740 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005AF00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x140069730 (NdisMIndicateStatusEx.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x14006C2D0 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140096DC0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMResetComplete @ 0x1400A83A0 (NdisMResetComplete.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 __fastcall ndisMReset(_SINGLE_LIST_ENTRY *a1)
{
  _SINGLE_LIST_ENTRY *Next; // rbx
  unsigned int v3; // edi
  int v4; // eax
  bool v5; // zf
  int v6; // eax
  KIRQL v7; // dl
  KIRQL v8; // dl
  int v9; // edx
  __int64 v10; // rcx
  KIRQL v11; // r14
  KIRQL v12; // dl
  struct _GUID *v14; // [rsp+28h] [rbp-79h]
  __int64 v15; // [rsp+38h] [rbp-69h]
  KIRQL NewIrql; // [rsp+48h] [rbp-59h] BYREF
  BOOLEAN AddressingReset[15]; // [rsp+49h] [rbp-58h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+58h] [rbp-49h] BYREF

  Next = a1[2].Next;
  NewIrql = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0x48u,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1,
      Next);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)Next, &NewIrql);
  if ( (HIDWORD(Next[15].Next) & 0x80000) != 0 )
  {
    v3 = -2147418111;
LABEL_28:
    v12 = NewIrql;
    Next[65].Next = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&Next[12], v12);
    goto LABEL_29;
  }
  v4 = (int)Next[15].Next;
  v3 = -1073676275;
  if ( (v4 & 0x40000) != 0 )
    v5 = (v4 & 0x200000) == 0;
  else
    v5 = (unsigned int)ndisMQueueWorkItem((struct _NDIS_MINIPORT_BLOCK *)Next, 3, a1) == 0;
  if ( !v5 )
    goto LABEL_28;
  v3 = -2147418111;
  if ( LOBYTE(Next[4].Next) >= 6u || !Next[470].Next[24].Next )
    goto LABEL_28;
  ndisMReferenceOpen((__int64)a1, 8u);
  v6 = (int)Next[15].Next;
  Next[49].Next = a1;
  if ( (v6 & 0x40000) == 0 )
  {
    LODWORD(Next[15].Next) = v6 | 0x100000;
    if ( !BYTE1(Next[11].Next) )
    {
      BYTE1(Next[11].Next) = 1;
      Next[233].Next = (_SINGLE_LIST_ENTRY *)KeGetCurrentThread();
      ndisMProcessDeferred((struct _NDIS_MINIPORT_BLOCK *)Next);
      BYTE1(Next[11].Next) = 0;
      Next[233].Next = 0LL;
    }
    v3 = 259;
    goto LABEL_28;
  }
  AddressingReset[0] = 0;
  LODWORD(Next[15].Next) = v6 | 0x280000;
  ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)Next, 1u);
  while ( LODWORD(Next[228].Next) )
  {
    v7 = NewIrql;
    Next[65].Next = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&Next[12], v7);
    KeStallExecutionProcessor(1u);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)Next, &NewIrql);
  }
  if ( HIDWORD(Next[483].Next) != 1 )
  {
    BYTE2(Next[116].Next) &= ~1u;
    v3 = -1073741637;
    LODWORD(Next[15].Next) &= 0xFFD7FFFF;
    HIDWORD(Next[67].Next) = -1073741637;
    Next[49].Next = 0LL;
    ndisMDereferenceOpenLocked((struct _NDIS_OPEN_BLOCK *)a1, 8u);
    goto LABEL_28;
  }
  v8 = NewIrql;
  Next[65].Next = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&Next[12], v8);
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.SourceHandle = Next;
  StatusIndication.StatusCode = 1073807364;
  StatusIndication.StatusBuffer = 0LL;
  StatusIndication.StatusBufferSize = 0;
  NdisMIndicateStatusEx(Next, &StatusIndication);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      12,
      73,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)Next);
  }
  if ( (byte_140125101 & 4) != 0 )
  {
    LODWORD(v15) = 65538;
    LODWORD(v14) = Next[507].Next;
    McTemplateK0jqxd_EtwWriteTransfer(
      v10,
      &CallMiniportReset,
      (const GUID *)&Next[501],
      (__int64)&Next[501],
      (__int64)v14,
      (__int64)Next[503].Next,
      v15);
  }
  v11 = KfRaiseIrql(2u);
  v3 = ((__int64 (__fastcall *)(BOOLEAN *, _SINGLE_LIST_ENTRY *))Next[470].Next[24].Next)(AddressingReset, Next[3].Next);
  if ( v11 != 2 )
    KeLowerIrql(v11);
  if ( v3 != 259 )
  {
    NdisMResetComplete(Next, v3, AddressingReset[0]);
    v3 = 259;
  }
LABEL_29:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0x4Au,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1,
      Next);
  return v3;
}

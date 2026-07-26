/*
 * XREFs of ndisMEmitTraceRundown @ 0x1400C50DC
 * Callers:
 *     ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1400C4F04 (-ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_Ld @ 0x140058010 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_qqZ @ 0x140065A10 (WPP_RECORDER_SF_qqZ.c)
 *     ndisAoAcTraceRundown @ 0x1400C4D4C (ndisAoAcTraceRundown.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1400C558C (WPP_RECORDER_SF_DDDDD_ea_1400C558C.c)
 */

void __fastcall ndisMEmitTraceRundown(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // r9d
  int v3; // edx
  _NDIS_FILTER_BLOCK *i; // rdi
  _NDIS_OPEN_BLOCK *j; // rdi
  int v6; // [rsp+20h] [rbp-48h]
  char v7[8]; // [rsp+30h] [rbp-38h]
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  NewIrql = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      1u,
      2u,
      0xEu,
      (struct _GUID *)&WPP_2b999a71c1833f297665e6fbb09ed696_Traceguids,
      (char)a1,
      (char)a1->DriverHandle,
      &a1->pAdapterInstanceName->Length);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a1->DriverHandle->MajorNdisVersion,
        (a1->NetLuid.Value >> 24) & 0xFFFFFF,
        v2,
        v6,
        a1->DriverHandle->MajorNdisVersion,
        a1->DriverHandle->MinorNdisVersion,
        a1->IfIndex,
        *((_WORD *)&a1->NetLuid.Info + 3),
        BYTE3(a1->NetLuid.Value));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v7 = a1->PnPDeviceState;
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x10u,
          (struct _GUID *)&WPP_2b999a71c1833f297665e6fbb09ed696_Traceguids,
          a1->State,
          *(_QWORD *)v7);
      }
    }
  }
  if ( a1->AoAc )
    ndisAoAcTraceRundown(a1);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  if ( a1->LowestFilter )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 1;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        2,
        18,
        (struct _GUID *)&WPP_2b999a71c1833f297665e6fbb09ed696_Traceguids);
    }
    for ( i = a1->LowestFilter; i; i = i->HigherFilter )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x13u,
          (struct _GUID *)&WPP_2b999a71c1833f297665e6fbb09ed696_Traceguids,
          (char)i,
          (char)i->FilterDriver,
          &i->FilterFriendlyName->Length);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 1;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      2,
      17,
      (struct _GUID *)&WPP_2b999a71c1833f297665e6fbb09ed696_Traceguids);
  }
  if ( a1->OpenQueue )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 1;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        2,
        21,
        (struct _GUID *)&WPP_2b999a71c1833f297665e6fbb09ed696_Traceguids);
    }
    for ( j = a1->OpenQueue; j; j = j->MiniportNextOpen )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x16u,
          (struct _GUID *)&WPP_2b999a71c1833f297665e6fbb09ed696_Traceguids,
          (char)j,
          (char)j->ProtocolHandle,
          &j->ProtocolHandle->Name.Length);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 1;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      2,
      20,
      (struct _GUID *)&WPP_2b999a71c1833f297665e6fbb09ed696_Traceguids);
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
}

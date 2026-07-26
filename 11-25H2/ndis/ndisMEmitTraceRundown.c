/*
 * XREFs of ndisMEmitTraceRundown @ 0x1400CC20C
 * Callers:
 *     ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1400CC034 (-ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_Ld @ 0x140072CB0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_qqZ @ 0x140081560 (WPP_RECORDER_SF_qqZ.c)
 *     ndisAoAcTraceRundown @ 0x1400CBE7C (ndisAoAcTraceRundown.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1400CC6BC (WPP_RECORDER_SF_DDDDD_ea_1400CC6BC.c)
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
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      1u,
      2u,
      0xEu,
      (struct _GUID *)&WPP_7d6c249afa1232b027f6d4106b65a321_Traceguids,
      (char)a1,
      (char)a1->DriverHandle,
      &a1->pAdapterInstanceName->Length);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v7 = a1->PnPDeviceState;
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x10u,
          (struct _GUID *)&WPP_7d6c249afa1232b027f6d4106b65a321_Traceguids,
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
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 1;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        2,
        18,
        (struct _GUID *)&WPP_7d6c249afa1232b027f6d4106b65a321_Traceguids);
    }
    for ( i = a1->LowestFilter; i; i = i->HigherFilter )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x13u,
          (struct _GUID *)&WPP_7d6c249afa1232b027f6d4106b65a321_Traceguids,
          (char)i,
          (char)i->FilterDriver,
          &i->FilterFriendlyName->Length);
    }
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 1;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      2,
      17,
      (struct _GUID *)&WPP_7d6c249afa1232b027f6d4106b65a321_Traceguids);
  }
  if ( a1->OpenQueue )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 1;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        2,
        21,
        (struct _GUID *)&WPP_7d6c249afa1232b027f6d4106b65a321_Traceguids);
    }
    for ( j = a1->OpenQueue; j; j = j->MiniportNextOpen )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x16u,
          (struct _GUID *)&WPP_7d6c249afa1232b027f6d4106b65a321_Traceguids,
          (char)j,
          (char)j->ProtocolHandle,
          &j->ProtocolHandle->Name.Length);
    }
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 1;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      2,
      20,
      (struct _GUID *)&WPP_7d6c249afa1232b027f6d4106b65a321_Traceguids);
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
}

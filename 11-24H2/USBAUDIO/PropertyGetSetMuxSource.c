/*
 * XREFs of PropertyGetSetMuxSource @ 0x140040270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 *     QueuePropertyRequest @ 0x14003E450 (QueuePropertyRequest.c)
 *     DeviceRequestPowerUp @ 0x14004007C (DeviceRequestPowerUp.c)
 */

__int64 __fastcall PropertyGetSetMuxSource(PIRP Irp, __int64 a2, struct _LIST_ENTRY *a3)
{
  unsigned int v6; // r14d
  unsigned int v7; // edi
  PKSFILTER FilterFromIrp; // rdx
  __int64 v9; // rsi
  _DWORD *v10; // rax
  unsigned int v11; // ecx
  PKSDEVICE Device; // rcx

  v6 = ((*(_DWORD *)(a2 + 20) & 1) << 7) + 1;
  v7 = -1073741811;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  if ( !FilterFromIrp )
    return v7;
  v9 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24)];
  if ( !v9 )
    return 3221225860LL;
  v10 = *(_DWORD **)(v9 + 128);
  if ( !v10 )
    return 3221225860LL;
  if ( v6 == 129 )
  {
    LODWORD(a3->Flink) = *v10;
LABEL_8:
    Irp->IoStatus.Information = 4LL;
    return 0;
  }
  v11 = v10[1];
  if ( v11 == 1 && LODWORD(a3->Flink) == 1 )
    goto LABEL_8;
  if ( v11 < LODWORD(a3->Flink) || !LODWORD(a3->Flink) )
    return v7;
  Device = KsGetDevice(FilterFromIrp);
  if ( *((_DWORD *)Device->Context + 134) == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(PKSDEVICE, __int64, _QWORD, struct _LIST_ENTRY *))(v9 + 136))(Device, v9, v6, a3);
    if ( (v7 & 0x80000000) == 0 )
    {
      **(_DWORD **)(v9 + 128) = a3->Flink;
      Irp->IoStatus.Information = 4LL;
    }
    return v7;
  }
  if ( DeviceRequestPowerUp((__int64)Device) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp, (struct _LIST_ENTRY *)a2, a3, (struct _LIST_ENTRY *)PropertyGetSetMuxSource);
}

/*
 * XREFs of ?ndisPowerIrpWorker@@YAXPEAX@Z @ 0x1400A89F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140049290 (-ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qs @ 0x1400A918C (WPP_RECORDER_SF_qs_ea_1400A918C.c)
 *     WPP_RECORDER_SF_qsD @ 0x1400A92B4 (WPP_RECORDER_SF_qsD_ea_1400A92B4.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401744D0 (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisPowerIrpWorker(PIRP Irp, __int64 a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  struct _NDIS_MINIPORT_BLOCK *DeviceExtension; // rdi
  unsigned __int8 *p_MinorFunction; // rbx
  int Power; // eax
  int v8; // r9d
  const char *v9; // rdx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = (struct _NDIS_MINIPORT_BLOCK *)CurrentStackLocation->DeviceObject->DeviceExtension;
  p_MinorFunction = &CurrentStackLocation->MinorFunction;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qs(*((_QWORD *)WPP_GLOBAL_Control + 8), (unsigned int)"QUERY", a3, 144);
  if ( *p_MinorFunction == 3 )
    Power = ndisQueryPower(Irp, CurrentStackLocation, DeviceExtension);
  else
    Power = ndisSetPower(Irp, CurrentStackLocation, DeviceExtension);
  if ( (Power & 0xC0000000) == 0xC0000000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = "Set";
    if ( *p_MinorFunction != 2 )
      v9 = "Query";
    WPP_RECORDER_SF_qsD(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)v9, (unsigned int)"Query", v8);
  }
  ndisDereferenceMiniport(DeviceExtension, 0xDu);
}

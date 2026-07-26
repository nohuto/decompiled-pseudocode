/*
 * XREFs of ?ndisMUnloadEx@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140085520
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisMInvokeDriverUnload@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_DRIVER_OBJECT@@@Z @ 0x1401430AC (-ndisMInvokeDriverUnload@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_DRIVER_OBJECT@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisMUnloadEx(struct _DRIVER_OBJECT *a1)
{
  struct _NDIS_M_DRIVER_BLOCK *DriverObjectExtension; // rbp
  struct _NDIS_M_DRIVER_BLOCK *v3; // rbx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      107,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)a1);
  DriverObjectExtension = (struct _NDIS_M_DRIVER_BLOCK *)IoGetDriverObjectExtension(a1, (PVOID)0x4E4D4944);
  v3 = (struct _NDIS_M_DRIVER_BLOCK *)IoGetDriverObjectExtension(a1, (PVOID)0x4E494944);
  if ( DriverObjectExtension )
    ndisMInvokeDriverUnload(DriverObjectExtension, a1);
  if ( v3 )
    ndisMInvokeDriverUnload(v3, a1);
  if ( DriverObjectExtension )
  {
    ndisWaitForKernelObject(&DriverObjectExtension->MiniportsRemovedEvent);
    KeClearEvent(&DriverObjectExtension->MiniportsRemovedEvent);
  }
  if ( v3 )
  {
    ndisWaitForKernelObject(&v3->MiniportsRemovedEvent);
    KeClearEvent(&v3->MiniportsRemovedEvent);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x6Cu,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)a1,
      (char)DriverObjectExtension,
      v3);
}

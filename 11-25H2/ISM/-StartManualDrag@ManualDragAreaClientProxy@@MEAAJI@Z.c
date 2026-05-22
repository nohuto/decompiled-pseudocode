/*
 * XREFs of ?StartManualDrag@ManualDragAreaClientProxy@@MEAAJI@Z @ 0x180146920
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x18014BFE8 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ManualDragAreaClientProxy::StartManualDrag(ManualDragAreaClientProxy *this, unsigned int a2)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v6; // rax

  if ( *((_BYTE *)this + 72) )
    return 2276591628LL;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  *((_BYTE *)this + 72) = 1;
  DragNDropProcessor::StartManualDrag(*(DragNDropProcessor **)(v6 + 64), a2, this);
  return 0LL;
}

/*
 * XREFs of ?StartManualResize@ManualResizeAreaClientProxy@@MEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@@Z @ 0x18014CC70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBamoManualResizeAreaClientProxy@@@Z @ 0x180150278 (-StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBam.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ManualResizeAreaClientProxy::StartManualResize(__int64 a1, unsigned int a2, unsigned int a3)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v8; // rax

  if ( *(_BYTE *)(a1 + 64) )
    return 2276591628LL;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 200LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  *(_BYTE *)(a1 + 64) = 1;
  ResizeProcessor::StartManualResize(*(_QWORD *)(v8 + 56), a2, a3, a1);
  return 0LL;
}

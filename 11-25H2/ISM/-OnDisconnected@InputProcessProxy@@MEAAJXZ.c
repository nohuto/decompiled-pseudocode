/*
 * XREFs of ?OnDisconnected@InputProcessProxy@@MEAAJXZ @ 0x1801930F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x18000BBF0 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?Disconnected@InputProcessProxy@InputTraceLogging@@SAXXZ @ 0x18019303C (-Disconnected@InputProcessProxy@InputTraceLogging@@SAXXZ.c)
 *     ?UnregisterInputProcess@InputProcessManager@@QEAAXPEAVBamoInputProcessProxy@@@Z @ 0x180194A80 (-UnregisterInputProcess@InputProcessManager@@QEAAXPEAVBamoInputProcessProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InputProcessProxy::OnDisconnected(InputProcessProxy *this)
{
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  InputProcessManager *v3; // rax

  InputTraceLogging::InputProcessProxy::Disconnected();
  InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
  v3 = (InputProcessManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection
                                                                               + 31)
                                                                             + 8LL)
                                                                 + 24LL))(*((_QWORD *)InputSystemInternalServerConnection
                                                                          + 31) + 8LL);
  InputProcessManager::UnregisterInputProcess(v3, this);
  return 0LL;
}

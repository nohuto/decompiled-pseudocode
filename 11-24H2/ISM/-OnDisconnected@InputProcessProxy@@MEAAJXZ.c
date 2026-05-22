/*
 * XREFs of ?OnDisconnected@InputProcessProxy@@MEAAJXZ @ 0x18019B040
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x18000C34C (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?Disconnected@InputProcessProxy@InputTraceLogging@@SAXXZ @ 0x18019AF90 (-Disconnected@InputProcessProxy@InputTraceLogging@@SAXXZ.c)
 *     ?UnregisterInputProcess@InputProcessManager@@QEAAXPEAVBamoInputProcessProxy@@@Z @ 0x18019C2C0 (-UnregisterInputProcess@InputProcessManager@@QEAAXPEAVBamoInputProcessProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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

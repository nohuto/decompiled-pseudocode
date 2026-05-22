/*
 * XREFs of ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEAX@Z44PEAPEAU4@@Z @ 0x180060B68
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x180060240 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x180062838 (-AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXPEAPEAVSipcPort@@@Z @ 0x180078A8C (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXPEAPEAVSipcPort@@@Z.c)
 *     ?Initialize@AggregateWaitHandle@@QEAAJXZ @ 0x180081C44 (-Initialize@AggregateWaitHandle@@QEAAJXZ.c)
 *     ??0SipcServer@@AEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEAX@Z4@Z @ 0x180096810 (--0SipcServer@@AEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_INF.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$SipcObjectBase@UISIPCServer@@@@UEAAKXZ @ 0x1801102C0 (-Release@-$SipcObjectBase@UISIPCServer@@@@UEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SipcServer::Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  void *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  int ServerPort; // edi
  void *v13; // rax

  *a6 = 0LL;
  v6 = operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 )
    return 2147942414LL;
  v7 = SipcServer::SipcServer(v6);
  v11 = v7;
  if ( !v7 )
    return 2147942414LL;
  ServerPort = AlpcPort::CreateServerPort(v9, v8, v10, v7 + 56);
  if ( ServerPort < 0
    || (ServerPort = AggregateWaitHandle::Initialize((AggregateWaitHandle *)(v11 + 64)), ServerPort < 0)
    || (v13 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 56) + 40LL))(*(_QWORD *)(v11 + 56)),
        ServerPort = AggregateWaitHandle::AddHandle((AggregateWaitHandle *)(v11 + 64), v13),
        ServerPort < 0) )
  {
    SipcObjectBase<ISIPCServer>::Release(v11);
    return (unsigned int)ServerPort;
  }
  else
  {
    *a6 = v11;
    return 0LL;
  }
}

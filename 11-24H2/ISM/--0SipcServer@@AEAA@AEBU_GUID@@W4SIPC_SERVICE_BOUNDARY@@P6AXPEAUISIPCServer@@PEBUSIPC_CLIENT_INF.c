/*
 * XREFs of ??0SipcServer@@AEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEAX@Z4@Z @ 0x180096810
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEAX@Z44PEAPEAU4@@Z @ 0x180060B68 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SipcServer::SipcServer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &SipcObjectBase<ISIPCServer>::`vftable';
  *(_QWORD *)(a1 + 8) = 2LL;
  *(_QWORD *)(a1 + 16) = &SipcEndpointOwner::`vftable';
  *(_DWORD *)(a1 + 40) = 1;
  *(_WORD *)(a1 + 44) = 2;
  *(_OWORD *)(a1 + 24) = xmmword_1801FE718;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)a1 = &SipcServer::`vftable'{for `SipcObjectBase<ISIPCServer>'};
  *(_QWORD *)(a1 + 16) = &SipcServer::`vftable'{for `SipcEndpointOwner'};
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 96) = a1 + 88;
  *(_QWORD *)(a1 + 88) = a1 + 88;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 120) = a1 + 112;
  *(_QWORD *)(a1 + 112) = a1 + 112;
  *(_QWORD *)(a1 + 144) = LampArrayRawInputProvider::OnSipcClientConnection;
  *(_QWORD *)(a1 + 152) = a5;
  result = a1;
  *(_QWORD *)(a1 + 136) = 0LL;
  return result;
}

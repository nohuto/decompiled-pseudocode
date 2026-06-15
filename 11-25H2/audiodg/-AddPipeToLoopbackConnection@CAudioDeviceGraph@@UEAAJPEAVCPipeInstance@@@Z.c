/*
 * XREFs of ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140064520
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x14002F7C8 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@_N@Z @ 0x140058064 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipeToLoopbackConnection(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  CPipeInstance *v5; // rcx
  char v6; // dl
  const struct CConnectionInstance *LoopbackConnection; // rax
  int v8; // ebx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v5 = (CPipeInstance *)*((_QWORD *)this + 18);
  v6 = *((_DWORD *)a2 + 33) == 3;
  v10 = v2;
  LoopbackConnection = CPipeInstance::GetLoopbackConnection(v5, v6);
  v8 = CPipeInstance::ResolvePendingConnections((__int64)a2, -1LL, *((_QWORD *)LoopbackConnection + 1));
  if ( v8 >= 0 )
    v8 = (*(__int64 (__fastcall **)(CAudioDeviceGraph *, struct CPipeInstance *))(*(_QWORD *)this + 40LL))(this, a2);
  CSAutoLock<1>::~CSAutoLock<1>(&v10);
  return (unsigned int)v8;
}

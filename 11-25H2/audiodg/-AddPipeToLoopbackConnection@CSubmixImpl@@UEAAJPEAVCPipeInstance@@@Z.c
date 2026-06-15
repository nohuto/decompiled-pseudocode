/*
 * XREFs of ?AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14006E7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x14002F7C8 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@_N@Z @ 0x140058064 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@_N@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x1400582F8 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSubmixImpl::AddPipeToLoopbackConnection(CSubmixImpl *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  CPipeInstance *v5; // rcx
  const struct CConnectionInstance *LoopbackConnection; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  const struct CPipeInstance *v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = (CPipeInstance *)*((_QWORD *)this + 3);
  v13 = v2;
  if ( v5 )
  {
    LoopbackConnection = CPipeInstance::GetLoopbackConnection(v5, 0);
    v7 = CPipeInstance::ResolvePendingConnections((__int64)a2, -1LL, *((_QWORD *)LoopbackConnection + 1));
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 863LL;
      goto LABEL_7;
    }
  }
  else
  {
    v10 = (const struct CPipeInstance *)*((_QWORD *)this + 34);
    if ( v10 )
    {
      v7 = CPipeInstance::ConnectToRightPipe(a2, v10);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 867LL;
        goto LABEL_7;
      }
    }
  }
  v7 = (*(__int64 (__fastcall **)(CSubmixImpl *, struct CPipeInstance *))(*(_QWORD *)this + 40LL))(this, a2);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v8 = 0;
    goto LABEL_11;
  }
  v9 = 870LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v7);
LABEL_11:
  CSAutoLock<1>::~CSAutoLock<1>(&v13);
  return v8;
}

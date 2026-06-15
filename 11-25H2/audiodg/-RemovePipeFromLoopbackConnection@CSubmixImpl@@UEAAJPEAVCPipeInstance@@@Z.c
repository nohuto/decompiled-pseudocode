/*
 * XREFs of ?RemovePipeFromLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14006EB30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14002F78C (-GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@.c)
 *     ?UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z @ 0x14002F8C0 (-UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z.c)
 *     ?RemovePipeFromRightSubmixLoopbackConnection@CSubmixImpl@@IEAAJPEAVCPipeInstance@@@Z @ 0x14004CF64 (-RemovePipeFromRightSubmixLoopbackConnection@CSubmixImpl@@IEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@_N@Z @ 0x140058064 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@_N@Z.c)
 */

__int64 __fastcall CSubmixImpl::RemovePipeFromLoopbackConnection(CSubmixImpl *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  CPipeInstance *v8; // rcx
  const struct CConnectionInstance *LoopbackConnection; // rax
  __int64 v10; // rcx
  __int64 MixSplitConnection_Internal; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v14 = v2;
  v5 = CSubmixImpl::RemovePipeFromRightSubmixLoopbackConnection(this, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (CPipeInstance *)*((_QWORD *)this + 3);
    if ( v8 )
    {
      LoopbackConnection = CPipeInstance::GetLoopbackConnection(v8, 0);
      v5 = CPipeInstance::UnresolvePendingConnections(a2, *((_QWORD *)LoopbackConnection + 1));
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 941LL;
        goto LABEL_6;
      }
    }
    else
    {
      v10 = *((_QWORD *)this + 34);
      if ( v10 )
      {
        MixSplitConnection_Internal = CPipeInstance::GetMixSplitConnection_Internal(v10, 0);
        v5 = CPipeInstance::UnresolvePendingConnections(a2, *(_QWORD *)(MixSplitConnection_Internal + 8));
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 947LL;
          goto LABEL_6;
        }
      }
    }
    v6 = 0;
    goto LABEL_11;
  }
  v7 = 933LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v5);
LABEL_11:
  CSAutoLock<1>::~CSAutoLock<1>(&v14);
  return v6;
}

/*
 * XREFs of ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002DCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000474C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14002DCA8 (-GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x14002F4C8 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x1400581B8 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSubmixImpl::AddPipeToMixSplitConnection(CSubmixImpl *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  _QWORD **Head; // rax
  __int64 v7; // rax
  int v8; // esi
  const struct CConnectionInstance *SecondaryLoopbackConnection; // rax
  int v10; // eax
  const struct CPipeInstance *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = *((_QWORD *)this + 3);
  v16 = v2;
  if ( v5 )
  {
    Head = (_QWORD **)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((_QWORD *)(v5 + 64));
    v7 = ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead(*Head);
    v8 = CPipeInstance::ResolvePendingConnections(a2, -1LL, *(_QWORD *)(*(_QWORD *)v7 + 8LL));
    if ( v8 < 0 )
    {
      v14 = 833LL;
    }
    else
    {
      SecondaryLoopbackConnection = CPipeInstance::GetSecondaryLoopbackConnection(*((CPipeInstance **)this + 3));
      if ( !SecondaryLoopbackConnection )
        goto LABEL_5;
      v8 = CPipeInstance::ResolvePendingConnections(a2, -2LL, *((_QWORD *)SecondaryLoopbackConnection + 1));
      if ( v8 >= 0 )
        goto LABEL_5;
      v14 = 839LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v8);
    if ( v2 )
      LeaveCriticalSection(v2);
    return (unsigned int)v8;
  }
  v12 = (const struct CPipeInstance *)*((_QWORD *)this + 34);
  if ( v12 )
  {
    v10 = CPipeInstance::ConnectToRightPipe(a2, v12);
    v8 = v10;
    if ( v10 < 0 )
    {
      v13 = 844LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v10);
      CSAutoLock<1>::~CSAutoLock<1>(&v16);
      return (unsigned int)v8;
    }
  }
LABEL_5:
  v10 = (*(__int64 (__fastcall **)(CSubmixImpl *, struct CPipeInstance *))(*(_QWORD *)this + 40LL))(this, a2);
  v8 = v10;
  if ( v10 < 0 )
  {
    v13 = 847LL;
    goto LABEL_18;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}

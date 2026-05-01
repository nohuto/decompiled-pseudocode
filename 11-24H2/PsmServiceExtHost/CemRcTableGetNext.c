/*
 * XREFs of CemRcTableGetNext @ 0x180016F20
 * Callers:
 *     ?ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@W4_AR_STATE_CHANGE_EVENT@@@Z @ 0x18000410C (-ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@W4_AR_STATE_CHANGE_EVENT@@@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180016950 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@K@Z @ 0x180016A10 (-HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_.c)
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800412CC (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180043160 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18006B350 (-HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180078220 (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180084D94 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall CemRcTableGetNext(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 j; // rbx
  _QWORD *v4; // rax
  __int64 i; // rbx
  _QWORD *v6; // rcx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  _QWORD **v10; // rax
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rsi
  signed __int64 v14; // rax
  bool v15; // cc
  signed __int64 v16; // rax

  v2 = a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
  RtlAcquireSRWLockShared(v2 + 16);
  j = a1[1];
  v4 = a1;
  if ( j )
  {
    v6 = *(_QWORD **)j;
    if ( *(_QWORD *)j )
    {
      do
      {
        j = (unsigned __int64)v6;
        v6 = (_QWORD *)*v6;
      }
      while ( v6 );
    }
  }
  else
  {
    for ( i = a1[2]; ; i = *(_QWORD *)(j + 16) )
    {
      j = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !j || *(_QWORD **)j == v4 )
        break;
      v4 = (_QWORD *)j;
    }
  }
  while ( j )
  {
    if ( *(_QWORD *)(j + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(j + 24)) <= 1 )
        __fastfail(0xEu);
      break;
    }
    v10 = *(_QWORD ***)(j + 8);
    v11 = j;
    if ( v10 )
    {
      v12 = *v10;
      for ( j = *(_QWORD *)(j + 8); v12; v12 = (_QWORD *)*v12 )
        j = (unsigned __int64)v12;
    }
    else
    {
      while ( 1 )
      {
        j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !j || *(_QWORD *)j == v11 )
          break;
        v11 = j;
      }
    }
  }
  RtlReleaseSRWLockShared(v2 + 16);
  _m_prefetchw(a1 + 3);
  v7 = a1[3];
  while ( v7 - 1 > 0 )
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange64(a1 + 3, v7 - 1, v7);
    if ( v8 == v7 )
      return j;
  }
  if ( v7 != 1 )
    __fastfail(0xEu);
  v13 = a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( a1[2] == -1LL )
  {
    if ( _InterlockedDecrement64(a1 + 3) <= -1 )
      __fastfail(0xEu);
  }
  else
  {
    RtlAcquireSRWLockExclusive(v13 + 16);
    v14 = _InterlockedExchangeAdd64(a1 + 3, 0xFFFFFFFFFFFFFFFFuLL);
    v15 = v14 <= 1;
    v16 = v14 - 1;
    if ( !v15 )
    {
      RtlReleaseSRWLockExclusive(v13 + 16);
      return j;
    }
    if ( v16 )
      __fastfail(0xEu);
    RtlReleaseSRWLockExclusive(v13 + 16);
  }
  (*(void (__fastcall **)(_QWORD *))(v13 + 24))(a1);
  return j;
}

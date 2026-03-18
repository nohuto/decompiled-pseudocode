/*
 * XREFs of ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x14008EC50
 * Callers:
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x14008E06C (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x14008F1D0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     FreeMessageList @ 0x14008FFF0 (FreeMessageList.c)
 *     DestroyThreadsMessages @ 0x1401A1840 (DestroyThreadsMessages.c)
 *     SuspendThreadQueue @ 0x1401A4D60 (SuspendThreadQueue.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x14021D768 (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400688A4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     DestroyNotify @ 0x140085190 (DestroyNotify.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x14008531C (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     FreePointerMessageParams @ 0x14016581C (FreePointerMessageParams.c)
 *     ?FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402BFF58 (-FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall CleanEventMessage(struct tagQMSG *a1)
{
  CMonitorTopology **v2; // rcx
  CMonitorTopology **v3; // rbx
  __int64 v4; // rdx
  tagDomLock *v5; // [rsp+20h] [rbp-48h] BYREF
  char v6; // [rsp+28h] [rbp-40h]
  char v7; // [rsp+48h] [rbp-20h]

  switch ( *((_DWORD *)a1 + 24) )
  {
    case 3:
    case 4:
      goto LABEL_10;
    case 9:
      if ( (unsigned int)(*((_DWORD *)a1 + 6) - 26) <= 1 )
        UserDeleteAtom(*((unsigned __int16 *)a1 + 20));
      break;
    case 0xC:
      DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::ObjectLockRecursive<>((__int64)&v5);
      DestroyNotify(*((_QWORD **)a1 + 5), v4);
      if ( v7 && v5 )
      {
        if ( v6 )
          tagDomLock::UnLockExclusive(v5);
        else
          tagDomLock::UnLockShared(v5);
      }
      break;
    case 0x14:
      FreePointerMessageParams(a1);
      return;
    case 0x1B:
      ShellWindowPos::FreePositionEvent(a1, (struct tagQMSG *)(unsigned int)(*((_DWORD *)a1 + 24) - 27));
      return;
    case 0x1C:
      v3 = (CMonitorTopology **)*((_QWORD *)a1 + 5);
      CMonitorTopology::Release(v3[21]);
      v2 = v3;
      goto LABEL_11;
    case 0x1F:
      CMonitorTopology::Release(*((CMonitorTopology **)a1 + 4));
      v2 = (CMonitorTopology **)*((_QWORD *)a1 + 5);
      goto LABEL_11;
    case 0x20:
LABEL_10:
      v2 = (CMonitorTopology **)*((_QWORD *)a1 + 4);
LABEL_11:
      Win32FreePool(v2);
      return;
    default:
      return;
  }
}

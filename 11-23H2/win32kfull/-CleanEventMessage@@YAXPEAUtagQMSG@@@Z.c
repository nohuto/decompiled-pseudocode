/*
 * XREFs of ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00794C0
 * Callers:
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00399E8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     FreeMessageList @ 0x1C00793C0 (FreeMessageList.c)
 *     DestroyThreadsMessages @ 0x1C0079420 (DestroyThreadsMessages.c)
 *     SuspendThreadQueue @ 0x1C0085B00 (SuspendThreadQueue.c)
 *     xxxProcessEventMessage @ 0x1C0125980 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0150288 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C01B587C (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 * Callees:
 *     ?RemoveNotify@@YAXPEAUtagNOTIFY@@@Z @ 0x1C0010150 (-RemoveNotify@@YAXPEAUtagNOTIFY@@@Z.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003FD28 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     FreePointerMessageParams @ 0x1C01529B6 (FreePointerMessageParams.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C01B25B8 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     ?FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C021C828 (-FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 */

void __fastcall CleanEventMessage(void **a1)
{
  struct tagNOTIFY ***v2; // rbx
  tagDomLock *v3; // [rsp+20h] [rbp-48h] BYREF
  char v4; // [rsp+28h] [rbp-40h]
  char v5; // [rsp+48h] [rbp-20h]

  switch ( *((_DWORD *)a1 + 24) )
  {
    case 3:
    case 4:
      Win32FreePool(a1[4]);
      break;
    case 9:
      if ( (unsigned int)(*((_DWORD *)a1 + 6) - 26) <= 1 )
        UserDeleteAtom(*((unsigned __int16 *)a1 + 20));
      break;
    case 0xC:
      DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v3);
      v2 = (struct tagNOTIFY ***)a1[5];
      if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
        __int2c();
      RemoveNotify(v2);
      if ( v5 && v3 )
      {
        if ( v4 )
          tagDomLock::UnLockExclusive(v3);
        else
          tagDomLock::UnLockShared(v3);
      }
      break;
    case 0x14:
      FreePointerMessageParams(a1);
      break;
    case 0x1B:
      ShellWindowPos::FreePositionEvent(
        (ShellWindowPos *)a1,
        (struct tagQMSG *)(unsigned int)(*((_DWORD *)a1 + 24) - 20));
      break;
  }
}

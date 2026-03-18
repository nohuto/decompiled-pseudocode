/*
 * XREFs of ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDFF0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00742F0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0178FA8 (RIMIDERemoveInjectionDevice.c)
 *     RIMShouldVirtualDeviceBeClosed @ 0x1C0199FC4 (RIMShouldVirtualDeviceBeClosed.c)
 *     RIMVirtQueueRootPnpEndSyncAsyncWorkItem @ 0x1C01A3090 (RIMVirtQueueRootPnpEndSyncAsyncWorkItem.c)
 *     IsRimObjectUnregistered @ 0x1C01EED78 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandlePnpSyncPacket(__int64 a1, _DWORD *a2, __int64 a3)
{
  CInpPushLock *v4; // rbx
  CInpPushLock *v5; // rcx
  __int64 j; // rax
  CInpPushLock *v8; // rcx
  CInpPushLock *v9; // rsi
  __int64 i; // rbx
  UNICODE_STRING v11; // [rsp+20h] [rbp-18h] BYREF

  if ( *a2 != 1 )
  {
    if ( *a2 != 2 || *(_BYTE *)(a3 + 81) )
      return 1LL;
    v9 = (CInpPushLock *)(a3 + 104);
    RIMLockExclusive(a3 + 104);
    if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
    {
      v5 = v9;
      goto LABEL_5;
    }
    for ( i = *(_QWORD *)(a3 + 424); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (unsigned int)RIMShouldVirtualDeviceBeClosed(i) )
      {
        if ( (*(_DWORD *)(i + 184) & 0x2000) != 0 )
        {
          RIMIDERemoveInjectionDevice(*(_QWORD *)(i + 32));
        }
        else
        {
          v11 = *(UNICODE_STRING *)(i + 208);
          RIMVirtQueueRootPnpEndSyncAsyncWorkItem((_QWORD *)a3, &v11);
        }
      }
    }
    v8 = v9;
    goto LABEL_22;
  }
  if ( !*(_BYTE *)(a3 + 81) )
  {
    v4 = (CInpPushLock *)(a3 + 104);
    RIMLockExclusive(a3 + 104);
    if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
    {
      v5 = v4;
LABEL_5:
      CInpPushLock::UnLockExclusive(v5);
      return 2LL;
    }
    for ( j = *(_QWORD *)(a3 + 424); j; j = *(_QWORD *)(j + 40) )
      *(_DWORD *)(j + 188) &= ~1u;
    v8 = v4;
LABEL_22:
    CInpPushLock::UnLockExclusive(v8);
  }
  return 1LL;
}

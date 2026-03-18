/*
 * XREFs of ObpSetCurrentProcessDeviceMap @ 0x140985458
 * Callers:
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140984EA0 (ObpReferenceCurrentDeviceMap.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     SeGetTokenDeviceMap @ 0x14098519C (SeGetTokenDeviceMap.c)
 *     ObDereferenceDeviceMap @ 0x1409855D4 (ObDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMapFastRef @ 0x1409856A0 (ObpReferenceDeviceMapFastRef.c)
 */

__int64 ObpSetCurrentProcessDeviceMap()
{
  __int64 v0; // rsi
  _KPROCESS *Process; // r15
  ULONG_PTR v2; // rax
  void *v3; // r14
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v6; // rbp
  int v7; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Blink; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h]

  v0 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v2 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
  v3 = (void *)v2;
  if ( v2 )
  {
    v14 = *(_QWORD *)(v2 + 24);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v6 = CurrentServerSiloGlobals;
    if ( v7 != 999 || HIDWORD(v14) )
    {
      v13 = 0LL;
      if ( SeGetTokenDeviceMap((__int64)v3, &v13) < 0 )
      {
LABEL_16:
        ObfDereferenceObject(v3);
        return v0;
      }
      v0 = v13;
    }
    else
    {
      v0 = ObpReferenceDeviceMapFastRef(CurrentServerSiloGlobals);
    }
    if ( v0 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v0 + 240), 0x10uLL) <= 0 )
        __fastfail(0xEu);
      CurrentThread = KeGetCurrentThread();
      p_Blink = (unsigned __int64 *)&v6[7].Blink;
      --CurrentThread->SpecialApcDisable;
      v10 = KeAbPreAcquire((__int64)p_Blink, 0LL);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)p_Blink, 0LL) )
        ExfAcquirePushLockExclusiveEx(p_Blink, (__int64)v10, (__int64)p_Blink);
      if ( v11 )
        *((_BYTE *)v11 + 10) = 1;
      v12 = _InterlockedExchange64((volatile __int64 *)&Process[1].FreezeCount, v0 | 0xF);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)p_Blink);
      KeAbPostRelease((ULONG_PTR)p_Blink);
      KeLeaveGuardedRegion();
      if ( v12 )
        ObDereferenceDeviceMap((PVOID)(v12 & 0xFFFFFFFFFFFFFFF0uLL));
    }
    goto LABEL_16;
  }
  return v0;
}

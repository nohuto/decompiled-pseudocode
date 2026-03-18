/*
 * XREFs of ObpDeleteSymbolicLinkName @ 0x14084281C
 * Callers:
 *     ObShutdownSystem @ 0x1407432D0 (ObShutdownSystem.c)
 *     ObpDecrementHandleCount @ 0x1408410A0 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x14084BFA0 (ObCloseHandleTableEntry.c)
 *     ObpDeleteNameCheck @ 0x14089B690 (ObpDeleteNameCheck.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1409E4C18 (ObpMarkDirectoryObjectsTemporary.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403C5CE0 (ObDereferenceObjectDeferDelete.c)
 */

void __fastcall ObpDeleteSymbolicLinkName(__int64 a1)
{
  int v1; // eax
  __int64 v3; // r12
  __int64 v4; // r15
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *v7; // rsi
  unsigned __int64 *p_Blink; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rbp
  int v11; // edx
  __int64 v12; // rax
  volatile signed __int64 *v13; // rbp
  int v14; // eax

  v1 = *(_DWORD *)(a1 + 24);
  if ( v1 )
  {
    v3 = (unsigned int)(v1 - 1);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 3]) + 304LL);
    if ( v4 )
    {
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
      CurrentThread = KeGetCurrentThread();
      v7 = CurrentServerSiloGlobals;
      p_Blink = (unsigned __int64 *)&CurrentServerSiloGlobals[7].Blink;
      --CurrentThread->SpecialApcDisable;
      v9 = KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[7].Blink, 0LL);
      v10 = v9;
      if ( _interlockedbittestandset64((volatile signed __int32 *)p_Blink, 0LL) )
        ExfAcquirePushLockExclusiveEx(p_Blink, (__int64)v9, (__int64)p_Blink);
      if ( v10 )
        *((_BYTE *)v10 + 10) = 1;
      v11 = ~(1 << v3);
      *(_DWORD *)(v4 + 256) &= v11;
      *(_BYTE *)(v3 + v4 + 260) = 0;
      v12 = _InterlockedExchange64((volatile __int64 *)(v4 + 8 * v3 + 32), 0LL);
      v13 = (volatile signed __int64 *)(v12 & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (v12 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        v14 = v12 & 0xF;
        if ( v14 )
          _InterlockedAdd64(v13 - 6, -v14);
      }
      if ( v4 == ((unsigned __int64)v7->Flink & 0xFFFFFFFFFFFFFFF0uLL) )
        LODWORD(v7->Blink) &= v11;
      else
        --*((_DWORD *)&v7->Blink + v3 + 1);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)p_Blink);
      KeAbPostRelease((ULONG_PTR)p_Blink);
      KeLeaveGuardedRegion();
      if ( v13 )
        ObDereferenceObjectDeferDelete((PVOID)v13);
    }
    *(_DWORD *)(a1 + 24) = 0;
  }
}

/*
 * XREFs of ObpCloseHandle @ 0x14084E9C0
 * Callers:
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 *     ExQueryHandleExceptionsPermanency @ 0x1403D772C (ExQueryHandleExceptionsPermanency.c)
 *     ExHandleLogBadReference @ 0x14043BEE0 (ExHandleLogBadReference.c)
 *     KeRaiseUserException @ 0x1404CDCA0 (KeRaiseUserException.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExpLookupHandleTableEntry @ 0x140850180 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x1408501F0 (ObCloseHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140851898 (ExpBlockOnLockedHandleEntry.c)
 *     ObReferenceProcessHandleTable @ 0x1408ADC40 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall ObpCloseHandle(__int64 BugCheckParameter1, char a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v3; // r13
  __int64 v5; // rdi
  _KPROCESS *Process; // r14
  struct _EX_RUNDOWN_REF *v7; // r15
  __int64 KernelTime; // rsi
  signed __int64 *v9; // rbx
  signed __int64 v10; // r8
  unsigned int v11; // ebx
  unsigned __int64 v12; // rtt
  __int64 v14; // rdx
  char v15; // [rsp+78h] [rbp+10h] BYREF
  char v16; // [rsp+80h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v15 = 0;
  v5 = BugCheckParameter1;
  Process = CurrentThread->ApcState.Process;
  if ( !a2
    && (BugCheckParameter1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL
    && BugCheckParameter1 != -2
    && BugCheckParameter1 != -1 )
  {
    KernelTime = ObpKernelHandleTable;
    v5 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
    v7 = (struct _EX_RUNDOWN_REF *)PsInitialSystemProcess;
    goto LABEL_4;
  }
  v7 = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    KernelTime = ObReferenceProcessHandleTable(CurrentThread->ApcState.Process);
    if ( KernelTime )
    {
      v3 = 1;
      goto LABEL_4;
    }
    return (unsigned int)-1073741816;
  }
  KernelTime = Process[1].KernelTime;
  if ( KernelTime == ObpKernelHandleTable )
    return (unsigned int)-1073741816;
LABEL_4:
  --CurrentThread->KernelApcDisable;
  if ( (v5 & 0x3FC) != 0 )
  {
    v9 = (signed __int64 *)ExpLookupHandleTableEntry(KernelTime, v5);
    if ( v9 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v9);
          v10 = *v9;
          if ( (*v9 & 1) != 0 )
            break;
          if ( !v10 )
            goto LABEL_19;
          ExpBlockOnLockedHandleEntry(KernelTime, v9);
        }
      }
      while ( v10 != _InterlockedCompareExchange64(v9, v10 - 1, v10) );
      v11 = ObCloseHandleTableEntry(KernelTime, v9, v7, v5, a2, 0);
      goto LABEL_9;
    }
  }
LABEL_19:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v5 <= 0 && v5 >= -6 )
    goto LABEL_21;
  ExQueryHandleExceptionsPermanency(KernelTime, &v16, &v15);
  if ( (*(_BYTE *)(KernelTime + 44) & 0x10) != 0 && v15 )
    ExHandleLogBadReference(KernelTime, v5, a2);
  if ( !a2 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0
      && Process[1].ProcessListEntry.Blink
      && (_BYTE)KdDebuggerEnabled )
    {
      KeBugCheckEx(0x93u, v5, 1uLL, 0LL, 0LL);
    }
    goto LABEL_21;
  }
  if ( (NtGlobalFlag & 0x400000) == 0 && !Process[1].UserTime && !*(_QWORD *)(KernelTime + 96) )
  {
LABEL_21:
    v11 = -1073741816;
    if ( (unsigned __int64)v5 >= 0xFFFFFFFFFFFFFFFAuLL )
      v11 = 0;
    goto LABEL_9;
  }
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    v11 = -1073741816;
  else
    v11 = KeRaiseUserException(0xC0000008, v14);
LABEL_9:
  if ( v3 )
  {
    _m_prefetchw(&v7[61]);
    v12 = v7[61].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)&v7[61], v12 - 2, v12) )
      ExfReleaseRundownProtection(v7 + 61);
  }
  return v11;
}

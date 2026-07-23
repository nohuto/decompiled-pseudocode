/*
 * XREFs of VmUnpinMemoryRange @ 0x14079F070
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PfLockSharedAcquire @ 0x14047A884 (PfLockSharedAcquire.c)
 *     PfLockSharedRelease @ 0x14047DE88 (PfLockSharedRelease.c)
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 *     VmpUnpinMemoryRange @ 0x14079F8AC (VmpUnpinMemoryRange.c)
 *     VmpLogPin @ 0x1407A01E0 (VmpLogPin.c)
 */

__int64 __fastcall VmUnpinMemoryRange(int a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  struct _LIST_ENTRY *Blink; // rdi
  unsigned int v10; // ebx
  int v11; // ecx
  volatile signed __int64 *p_Blink; // rcx
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  LODWORD(v14) = 0;
  Blink = KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
  if ( a4 == -1 || (a2 & 0xFFF) != 0 || (a1 & 0xFFF) != 0 || !a3 )
  {
    v10 = -1073741811;
  }
  else if ( Blink )
  {
    v4 = 1;
    PfLockSharedAcquire((volatile signed __int64 *)&Blink[7].Blink);
    v10 = VmpUnpinMemoryRange((PEX_SPIN_LOCK)Blink, a4, 0, (__int64)&v14);
  }
  else
  {
    v10 = -1073741688;
  }
  if ( *(_QWORD *)&VmpTraceLoggingProvider
    && **(_DWORD **)&VmpTraceLoggingProvider
    && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 32LL) )
  {
    VmpLogPin(v11, 0, a1, a2, a3, 0, a4, v10);
  }
  if ( v4 )
  {
    p_Blink = (volatile signed __int64 *)&Blink[7].Blink;
    if ( (_DWORD)v14 )
      VmpReleasePushLockExclusive(p_Blink);
    else
      PfLockSharedRelease((signed __int64 *)p_Blink);
  }
  return v10;
}

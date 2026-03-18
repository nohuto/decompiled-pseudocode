/*
 * XREFs of ObSetHandleAttributes @ 0x1409FE7C0
 * Callers:
 *     NtSetInformationObject @ 0x1409FE700 (NtSetInformationObject.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     ExLockHandleTableEntry @ 0x1404018A0 (ExLockHandleTableEntry.c)
 *     ExGetHandlePointer @ 0x140431FD0 (ExGetHandlePointer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExpLookupHandleTableEntry @ 0x140850180 (ExpLookupHandleTableEntry.c)
 *     ObReferenceProcessHandleTable @ 0x1408ADC40 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall ObSetHandleAttributes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  char v5; // r14
  _BYTE *v6; // r12
  unsigned __int64 v7; // rbx
  struct _EX_RUNDOWN_REF *Process; // rbp
  unsigned __int64 KernelTime; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v11; // rax
  __int64 *v12; // rbx
  unsigned __int64 HandlePointer; // rax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  signed __int32 v17[8]; // [rsp+0h] [rbp-88h] BYREF
  _OWORD v18[3]; // [rsp+20h] [rbp-68h] BYREF

  v4 = 0;
  memset(v18, 0, sizeof(v18));
  v5 = 0;
  v6 = (_BYTE *)a2;
  v7 = a1;
  Process = (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process;
  if ( (_BYTE)a3 || (a1 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || a1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    {
      KernelTime = ObReferenceProcessHandleTable(Process);
      if ( !KernelTime )
        return 3221225480LL;
      v5 = 1;
    }
    else
    {
      KernelTime = KeGetCurrentThread()->ApcState.Process[1].KernelTime;
    }
  }
  else
  {
    KernelTime = ObpKernelHandleTable;
    v7 = a1 ^ 0xFFFFFFFF80000000uLL;
    if ( Process != (struct _EX_RUNDOWN_REF *)PsInitialSystemProcess )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v18);
      v4 = 1;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (v7 & 0x3FC) != 0
    && (v11 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)KernelTime, v7), (v12 = v11) != 0LL)
    && ExLockHandleTableEntry(KernelTime, v11) )
  {
    HandlePointer = ExGetHandlePointer(v12);
    LOBYTE(a3) = *v6;
    if ( !*v6
      || (a2 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer),
          (*(_DWORD *)(ObTypeIndexTable[a2] + 72) & 2) == 0) )
    {
      LOBYTE(a3) = -(char)a3;
      v14 = ((_BYTE)a3 != 0 ? 2 : 0) | 1;
      if ( !v6[1] )
        v14 = (_BYTE)a3 != 0 ? 2 : 0;
      a2 = *v12 & 0xFFFFFFFFFFF9FFFFuLL | ((unsigned __int64)v14 << 17);
      *v12 = a2;
    }
    _InterlockedIncrement64(v12);
    _InterlockedOr(v17, 0);
    if ( *(_QWORD *)(KernelTime + 48) )
      ExfUnblockPushLock(KernelTime + 48, 0LL);
    v15 = 0;
  }
  else
  {
    v15 = -1073741790;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, a2, a3, a4);
  if ( v4 )
    KiUnstackDetachProcess((__int64)v18, 0LL);
  if ( v5 )
    ExReleaseRundownProtection_0(Process + 61);
  return v15;
}

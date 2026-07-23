/*
 * XREFs of ObSetHandleAttributes @ 0x1409F4780
 * Callers:
 *     NtSetInformationObject @ 0x1409F46C0 (NtSetInformationObject.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ExLockHandleTableEntry @ 0x140401530 (ExLockHandleTableEntry.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     ObReferenceProcessHandleTable @ 0x140894BB0 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall ObSetHandleAttributes(unsigned __int64 a1, _BYTE *a2, char a3)
{
  char v3; // r15
  char v4; // r14
  unsigned __int64 v6; // rbx
  struct _EX_RUNDOWN_REF *Process; // rbp
  unsigned __int64 KernelTime; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v10; // rax
  __int64 *v11; // rbx
  unsigned __int64 HandlePointer; // rax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  signed __int32 v18[8]; // [rsp+0h] [rbp-88h] BYREF
  _OWORD v19[3]; // [rsp+20h] [rbp-68h] BYREF

  v3 = 0;
  memset(v19, 0, sizeof(v19));
  v4 = 0;
  v6 = a1;
  Process = (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process;
  if ( a3 || (a1 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || a1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    {
      KernelTime = ObReferenceProcessHandleTable(Process);
      if ( !KernelTime )
        return 3221225480LL;
      v4 = 1;
    }
    else
    {
      KernelTime = KeGetCurrentThread()->ApcState.Process[1].KernelTime;
    }
  }
  else
  {
    KernelTime = ObpKernelHandleTable;
    v6 = a1 ^ 0xFFFFFFFF80000000uLL;
    if ( Process != (struct _EX_RUNDOWN_REF *)PsInitialSystemProcess )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v19);
      v3 = 1;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (v6 & 0x3FC) != 0
    && (v10 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)KernelTime, v6), (v11 = v10) != 0LL)
    && ExLockHandleTableEntry(KernelTime, v10) )
  {
    HandlePointer = ExGetHandlePointer(v11);
    if ( !*a2
      || (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)]
                    + 72) & 2) == 0 )
    {
      v13 = (*a2 != 0 ? 2 : 0) | 1;
      if ( !a2[1] )
        v13 = *a2 != 0 ? 2 : 0;
      *v11 = *v11 & 0xFFFFFFFFFFF9FFFFuLL | ((unsigned __int64)v13 << 17);
    }
    _InterlockedIncrement64(v11);
    _InterlockedOr(v18, 0);
    if ( *(_QWORD *)(KernelTime + 48) )
      ExfUnblockPushLock(KernelTime + 48, 0LL);
    v14 = 0;
  }
  else
  {
    v14 = -1073741790;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  if ( v3 )
    KiUnstackDetachProcess((__int64)v19, 0, v15, v16);
  if ( v4 )
    ExReleaseRundownProtection_0(Process + 61);
  return v14;
}

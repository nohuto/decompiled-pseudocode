/*
 * XREFs of MmUnlockPhysicalPagesByVa @ 0x1407DABEC
 * Callers:
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     MiProbeAndLockPages @ 0x1404011D0 (MiProbeAndLockPages.c)
 *     MiProbeAndLockComplete @ 0x14046B730 (MiProbeAndLockComplete.c)
 *     VmpPinMemoryRange @ 0x14063ED00 (VmpPinMemoryRange.c)
 *     VmpUnpinMemoryRangeHelper @ 0x14063F3A0 (VmpUnpinMemoryRangeHelper.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

volatile signed __int64 *__fastcall MmUnlockPhysicalPagesByVa(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // r14
  _KPROCESS *Process; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  __int64 ActiveProcessors; // rax
  volatile signed __int64 *result; // rax
  int v11[2]; // [rsp+20h] [rbp-A9h] BYREF
  char v12; // [rsp+29h] [rbp-A0h]
  struct _LIST_ENTRY **p_Blink; // [rsp+40h] [rbp-89h]
  unsigned __int64 v14; // [rsp+48h] [rbp-81h]
  unsigned __int64 v15; // [rsp+50h] [rbp-79h]
  __int64 (__fastcall *v16)(_QWORD *, unsigned __int64, int); // [rsp+C8h] [rbp-1h]
  int *v17; // [rsp+D8h] [rbp+Fh]
  int v18; // [rsp+E0h] [rbp+17h] BYREF
  __int64 v19; // [rsp+E4h] [rbp+1Bh]
  int v20; // [rsp+ECh] [rbp+23h]
  unsigned __int64 v21; // [rsp+F0h] [rbp+27h]

  LODWORD(v19) = 0;
  v4 = (a2 + (unsigned __int64)(a1 & 0xFFF) + 4095) >> 12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v19 = 0LL;
  v20 = 0;
  v18 = a4;
  v21 = v4;
  memset_0(v11, 0, 0xC0uLL);
  v11[0] = 39;
  v17 = &v18;
  v14 = v6;
  v16 = MiUnlockPhysicalPageByVa;
  p_Blink = &Process[2].ReadyListHead.Blink;
  v15 = v6 + (v4 << 12) - 1;
  v12 = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink);
  LOBYTE(v6) = v12;
  MiWalkPageTables(v11);
  MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v6);
  v8 = -(__int64)v4;
  if ( MmNumLockedPagesFixEnabled )
  {
    if ( MmNumLockedPagesFanOutEnabled )
    {
      LODWORD(v7) = KeGetPcr()->Prcb.Number;
      ActiveProcessors = (__int64)Process[2].ActiveProcessors + 64 * ((v7 >> 1) & 3);
    }
    else
    {
      ActiveProcessors = (__int64)Process[2].ActiveProcessors;
    }
    result = (volatile signed __int64 *)(ActiveProcessors + 512);
  }
  else
  {
    result = (volatile signed __int64 *)&Process[1].Padding[1];
  }
  _InterlockedAdd64(result, v8);
  return result;
}

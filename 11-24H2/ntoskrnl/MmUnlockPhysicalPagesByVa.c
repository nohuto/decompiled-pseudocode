/*
 * XREFs of MmUnlockPhysicalPagesByVa @ 0x1407EB07C
 * Callers:
 *     MiProbeAndLockComplete @ 0x1402377D8 (MiProbeAndLockComplete.c)
 *     VmpPinMemoryRange @ 0x140649280 (VmpPinMemoryRange.c)
 *     VmpUnpinMemoryRangeHelper @ 0x140649920 (VmpUnpinMemoryRangeHelper.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

volatile signed __int64 *__fastcall MmUnlockPhysicalPagesByVa(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rsi
  _KPROCESS *Process; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  volatile signed __int64 *result; // rax
  int v12[2]; // [rsp+20h] [rbp-A9h] BYREF
  char v13; // [rsp+29h] [rbp-A0h]
  struct _LIST_ENTRY **p_Blink; // [rsp+40h] [rbp-89h]
  unsigned __int64 v15; // [rsp+48h] [rbp-81h]
  unsigned __int64 v16; // [rsp+50h] [rbp-79h]
  __int64 (__fastcall *v17)(_QWORD *, unsigned __int64, int); // [rsp+C8h] [rbp-1h]
  int *v18; // [rsp+D8h] [rbp+Fh]
  int v19; // [rsp+E0h] [rbp+17h] BYREF
  __int64 v20; // [rsp+E4h] [rbp+1Bh]
  int v21; // [rsp+ECh] [rbp+23h]
  unsigned __int64 v22; // [rsp+F0h] [rbp+27h]

  LODWORD(v20) = 0;
  v4 = (a2 + (unsigned __int64)(a1 & 0xFFF) + 4095) >> 12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v20 = 0LL;
  v21 = 0;
  v19 = a4;
  v22 = v4;
  memset_0(v12, 0, 0xC0uLL);
  v12[0] = 39;
  v18 = &v19;
  v15 = v6;
  v17 = MiUnlockPhysicalPageByVa;
  p_Blink = &Process[2].ReadyListHead.Blink;
  v16 = v6 + (v4 << 12) - 1;
  v13 = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v7, v8, v9);
  LOBYTE(v6) = v13;
  MiWalkPageTables(v12);
  MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v6);
  LODWORD(v10) = KeGetPcr()->Prcb.Number;
  result = (volatile signed __int64 *)&Process[2].ActiveProcessors[1].StaticBitmap[8 * ((v10 >> 1) & 3) + 30];
  _InterlockedAdd64(result, -(__int64)v4);
  return result;
}

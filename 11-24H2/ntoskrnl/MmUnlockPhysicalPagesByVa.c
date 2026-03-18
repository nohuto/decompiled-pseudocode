/*
 * XREFs of MmUnlockPhysicalPagesByVa @ 0x1407EAAAC
 * Callers:
 *     MiProbeAndLockComplete @ 0x140282248 (MiProbeAndLockComplete.c)
 *     VmpPinMemoryRange @ 0x14064ACC0 (VmpPinMemoryRange.c)
 *     VmpUnpinMemoryRangeHelper @ 0x14064B360 (VmpUnpinMemoryRangeHelper.c)
 * Callees:
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

volatile signed __int64 *__fastcall MmUnlockPhysicalPagesByVa(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rsi
  _KPROCESS *Process; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  volatile signed __int64 *result; // rax
  _DWORD v9[2]; // [rsp+20h] [rbp-A9h] BYREF
  char v10; // [rsp+29h] [rbp-A0h]
  struct _LIST_ENTRY **p_Blink; // [rsp+40h] [rbp-89h]
  unsigned __int64 v12; // [rsp+48h] [rbp-81h]
  unsigned __int64 v13; // [rsp+50h] [rbp-79h]
  __int64 (__fastcall *v14)(_QWORD *, unsigned __int64, int); // [rsp+C8h] [rbp-1h]
  int *v15; // [rsp+D8h] [rbp+Fh]
  int v16; // [rsp+E0h] [rbp+17h] BYREF
  __int64 v17; // [rsp+E4h] [rbp+1Bh]
  int v18; // [rsp+ECh] [rbp+23h]
  unsigned __int64 v19; // [rsp+F0h] [rbp+27h]

  LODWORD(v17) = 0;
  v4 = (a2 + (unsigned __int64)(a1 & 0xFFF) + 4095) >> 12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v17 = 0LL;
  v18 = 0;
  v16 = a4;
  v19 = v4;
  memset_0(v9, 0, 0xC0uLL);
  v9[0] = 39;
  v15 = &v16;
  v12 = v6;
  v14 = MiUnlockPhysicalPageByVa;
  p_Blink = &Process[2].ReadyListHead.Blink;
  v13 = v6 + (v4 << 12) - 1;
  v10 = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink);
  LOBYTE(v6) = v10;
  MiWalkPageTables((__int64)v9);
  MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v6);
  LODWORD(v7) = KeGetPcr()->Prcb.Number;
  result = (volatile signed __int64 *)&Process[2].ActiveProcessors[1].StaticBitmap[8 * ((v7 >> 1) & 3) + 30];
  _InterlockedAdd64(result, -(__int64)v4);
  return result;
}

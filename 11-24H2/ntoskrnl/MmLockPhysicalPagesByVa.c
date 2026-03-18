/*
 * XREFs of MmLockPhysicalPagesByVa @ 0x1407EA9A0
 * Callers:
 *     VmpPinMemoryRange @ 0x14064ACC0 (VmpPinMemoryRange.c)
 * Callees:
 *     MiProbeAndLockComplete @ 0x140282248 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPrepare @ 0x140282460 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockPacket @ 0x140282730 (MiProbeAndLockPacket.c)
 *     MiCheckLockUnlockByVa @ 0x14066EA6C (MiCheckLockUnlockByVa.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MmLockPhysicalPagesByVa(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // eax
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+50h] [rbp-B8h]
  __int128 v16; // [rsp+54h] [rbp-B4h]
  int v17; // [rsp+64h] [rbp-A4h]
  unsigned __int64 v18; // [rsp+68h] [rbp-A0h]
  __int64 v19; // [rsp+70h] [rbp-98h]
  unsigned __int64 v20[22]; // [rsp+78h] [rbp-90h] BYREF

  memset_0(v20, 0, sizeof(v20));
  v17 = 0;
  v8 = (a1 & 0xFFF) + a2 + 4095;
  v16 = 0LL;
  v9 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( !MiCheckLockUnlockByVa(v11, v10, a3) )
    return 3221225659LL;
  v14 = 0LL;
  v15 = 56;
  v18 = v9;
  v19 = 1LL;
  result = MiProbeAndLockPrepare((__int64)v20, (__int64)&v14, v9, v8 & 0xFFFFFFFFFFFFF000uLL, 1, a4, 3);
  if ( (int)result >= 0 )
  {
    v20[16] = a3;
    v13 = MiProbeAndLockPacket((__int64)v20);
    return MiProbeAndLockComplete(v20, v13);
  }
  return result;
}

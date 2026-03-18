/*
 * XREFs of MmLockPhysicalPagesByVa @ 0x1407DAAE0
 * Callers:
 *     VmpPinMemoryRange @ 0x14063ED00 (VmpPinMemoryRange.c)
 * Callees:
 *     MiProbeAndLockPacket @ 0x1402AC750 (MiProbeAndLockPacket.c)
 *     MiProbeAndLockPrepare @ 0x1402CB3C0 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockComplete @ 0x14046B730 (MiProbeAndLockComplete.c)
 *     MiCheckLockUnlockByVa @ 0x140662F2C (MiCheckLockUnlockByVa.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MmLockPhysicalPagesByVa(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+50h] [rbp-B8h]
  __int128 v19; // [rsp+54h] [rbp-B4h]
  int v20; // [rsp+64h] [rbp-A4h]
  unsigned __int64 v21; // [rsp+68h] [rbp-A0h]
  __int64 v22; // [rsp+70h] [rbp-98h]
  _BYTE v23[128]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v24; // [rsp+F8h] [rbp-10h]

  memset_0(v23, 0, 0xB0uLL);
  v20 = 0;
  v8 = (a1 & 0xFFF) + a2 + 4095;
  v19 = 0LL;
  v9 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( !MiCheckLockUnlockByVa(v11, v10, a3) )
    return 3221225659LL;
  v17 = 0LL;
  v18 = 56;
  v21 = v9;
  v22 = 1LL;
  result = MiProbeAndLockPrepare((__int64)v23, (__int64)&v17, v9, v8 & 0xFFFFFFFFFFFFF000uLL, 1, a4, 3);
  if ( (int)result >= 0 )
  {
    v24 = a3;
    v16 = MiProbeAndLockPacket((__int64)v23, v13, v14, v15);
    return MiProbeAndLockComplete((__int64)v23, v16);
  }
  return result;
}

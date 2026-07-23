/*
 * XREFs of MmLockPhysicalPagesByVa @ 0x1407EAF70
 * Callers:
 *     VmpPinMemoryRange @ 0x140649280 (VmpPinMemoryRange.c)
 * Callees:
 *     MiProbeAndLockComplete @ 0x1402377D8 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPrepare @ 0x1402379F0 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockPacket @ 0x140237CC0 (MiProbeAndLockPacket.c)
 *     MiCheckLockUnlockByVa @ 0x14066FC3C (MiCheckLockUnlockByVa.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  _BYTE v20[128]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v21; // [rsp+F8h] [rbp-10h]

  memset_0(v20, 0, 0xB0uLL);
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
    v21 = a3;
    v13 = MiProbeAndLockPacket((__int64)v20);
    return MiProbeAndLockComplete((__int64)v20, v13);
  }
  return result;
}

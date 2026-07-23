/*
 * XREFs of MmAllocateMappingAddressEx @ 0x140A531F0
 * Callers:
 *     DifMmAllocateMappingAddressExWrapper @ 0x140630810 (DifMmAllocateMappingAddressExWrapper.c)
 *     PnprInitializeMappingReserve @ 0x14072DA04 (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x1407B02B0 (EtwpSavePersistedLogger.c)
 *     MmAllocateMappingAddress @ 0x140A531D0 (MmAllocateMappingAddress.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     VfPtIsAptEnabledOnKernel @ 0x140394D00 (VfPtIsAptEnabledOnKernel.c)
 *     VfPtMiscPoolNotification @ 0x1403FA750 (VfPtMiscPoolNotification.c)
 *     MiInsertMappingNode @ 0x14049A260 (MiInsertMappingNode.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiInsertPteTracker @ 0x1406924A4 (MiInsertPteTracker.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmAllocateMappingAddressEx(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbp
  unsigned __int64 v6; // rbx
  __int64 Pool; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rdi
  _QWORD v13[5]; // [rsp+38h] [rbp-70h] BYREF
  int v14; // [rsp+60h] [rbp-48h]
  int v15; // [rsp+64h] [rbp-44h]
  __int64 v16; // [rsp+68h] [rbp-40h]
  ULONG_PTR BugCheckParameter4; // [rsp+A8h] [rbp+0h]

  v3 = a2;
  if ( (a3 & 0xFFFFFFFE) != 0 )
    return 0LL;
  v6 = (unsigned __int64)(a1 + 4095) >> 12;
  if ( !v6 )
    KeBugCheckEx(0xDAu, 0x100uLL, 0LL, a2, BugCheckParameter4);
  if ( !a2 )
    return 0LL;
  if ( v6 >= 0x100000000LL )
    return 0LL;
  Pool = MiAllocatePool(0x40uLL, 0x30uLL, 1836214605);
  if ( !Pool )
    return 0LL;
  v8 = MiReservePtes((__int64)&qword_140E376A8, v6);
  v9 = (_QWORD *)v8;
  if ( !v8 )
  {
    ExFreePoolWithTag((PVOID)Pool, 0);
    return 0LL;
  }
  v10 = 0;
  *(_QWORD *)(Pool + 32) = v6;
  v11 = v8 << 25 >> 16;
  *(_QWORD *)(Pool + 24) = v11;
  *(_DWORD *)(Pool + 40) = v3;
  *(_DWORD *)(Pool + 44) = a3;
  do
  {
    ++v10;
    *v9++ = CLFS_LSN_NULL_EXT;
  }
  while ( v10 < v6 );
  if ( (dword_140FC51FC & 1) != 0 )
  {
    v13[0] = 0LL;
    v13[1] = 0LL;
    v14 = 0;
    v15 = 0;
    v16 = 0LL;
    v13[3] = v8 << 25 >> 16;
    v13[4] = v3;
    v13[2] = v6 << 12;
    MiInsertPteTracker((__int64)v13, 2, 0, 1);
  }
  MiInsertMappingNode((_QWORD *)Pool);
  if ( VfPtIsAptEnabledOnKernel() )
    VfPtMiscPoolNotification(v11, a1, v3, 0);
  return v11;
}

/*
 * XREFs of MmFreeSystemCacheReserveView @ 0x1407EDC18
 * Callers:
 *     CcUninitializePartitionVacbs @ 0x14057A950 (CcUninitializePartitionVacbs.c)
 * Callees:
 *     MiReleaseSystemCacheView @ 0x140355608 (MiReleaseSystemCacheView.c)
 *     MiGetSystemCacheReverseMap @ 0x1403559C0 (MiGetSystemCacheReverseMap.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     PfpPartitionFromParent @ 0x140492A30 (PfpPartitionFromParent.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall MmFreeSystemCacheReserveView(unsigned __int64 a1)
{
  unsigned __int64 v1; // r9
  __int64 SystemCacheReverseMap; // rax
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v4; // rcx
  _QWORD *v5; // r8
  ULONG_PTR v6; // r9
  unsigned __int64 v7; // r10

  MiGetPteAddress(a1);
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(v1);
  BugCheckParameter4 = PfpPartitionFromParent(SystemCacheReverseMap);
  if ( (unsigned __int8)(BugCheckParameter4 >> 62) < 2u )
    KeBugCheckEx(0x1Au, 0x784uLL, v4, v6, BugCheckParameter4);
  do
  {
    if ( (*v5 & 1) != 0 || (*v5 & 0x400LL) != 0 )
      KeBugCheckEx(0x1Au, 0x785uLL, v4, v6, 0LL);
    ++v5;
  }
  while ( (unsigned __int64)v5 < v7 );
  MiReleaseSystemCacheView(0LL, v6);
}

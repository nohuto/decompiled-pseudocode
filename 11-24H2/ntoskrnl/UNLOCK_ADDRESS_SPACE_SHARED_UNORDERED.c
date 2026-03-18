/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x14068EC3C
 * Callers:
 *     MiLockVadRange @ 0x1408E8B10 (MiLockVadRange.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED(__int64 a1, __int64 a2)
{
  int v2; // esi
  ULONG_PTR v3; // rdi
  _QWORD *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a1 + 1448);
  v3 = a2 + 600;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 600), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 600));
  result = (_QWORD *)KeAbPostRelease(v3);
  *(_DWORD *)(a1 + 1448) = v2 & 0xFFFFFFFD;
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v7, v6);
  }
  return result;
}

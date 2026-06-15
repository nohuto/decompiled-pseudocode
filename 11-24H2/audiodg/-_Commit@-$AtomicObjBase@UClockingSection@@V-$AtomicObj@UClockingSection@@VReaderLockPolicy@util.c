/*
 * XREFs of ?_Commit@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@IEAAXXZ @ 0x140007FA4
 * Callers:
 *     ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXI@Z @ 0x140007D00 (-SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXI@Z.c)
 *     ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z @ 0x140007E30 (-SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

__int64 __fastcall util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::_Commit(
        __int64 a1)
{
  volatile signed __int32 *v1; // r8
  __int64 result; // rax
  int v3; // ett
  int v4; // [rsp+0h] [rbp-18h]
  __int16 v5; // [rsp+4h] [rbp-14h]

  v1 = *(volatile signed __int32 **)(a1 + 56);
  LODWORD(result) = _InterlockedCompareExchange(v1, 0, 0);
  v4 = 33751041;
  v5 = 1029;
  do
  {
    v3 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             v1,
                             *((unsigned __int8 *)&v4 + ((unsigned int)result & 0xFFFFFFF7)) | 8,
                             result);
  }
  while ( v3 != (_DWORD)result );
  return result;
}

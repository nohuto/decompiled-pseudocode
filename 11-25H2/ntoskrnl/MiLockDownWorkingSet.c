/*
 * XREFs of MiLockDownWorkingSet @ 0x1404CA1BC
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140AB962C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLockDownWorkingSet(_KPROCESS *a1, int a2)
{
  __int64 p_Blink; // rbp
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  unsigned __int8 v7; // r14
  __int64 v8; // rbx
  int v9; // edi
  _OWORD v11[3]; // [rsp+20h] [rbp-58h] BYREF

  p_Blink = (__int64)&a1[2].ReadyListHead.Blink;
  memset(v11, 0, sizeof(v11));
  KiStackAttachProcess(a1, 0, (__int64)v11);
  v7 = MiLockWorkingSetExclusive(p_Blink);
  v8 = 48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  if ( a2 )
    MiAddLockedPageCharge(v8, 1, v5, v6);
  else
    MiRemoveLockedPageChargeAndDecRef(v8, v4, v5, v6);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockWorkingSetExclusive(p_Blink, v7);
  return KiUnstackDetachProcess((__int64)v11, 0LL);
}

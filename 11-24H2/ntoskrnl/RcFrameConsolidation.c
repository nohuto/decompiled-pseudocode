/*
 * XREFs of RcFrameConsolidation @ 0x1404FA7B0
 * Callers:
 *     <none>
 * Callees:
 *     KeKernelShadowStackRestoreContext @ 0x1403A9E70 (KeKernelShadowStackRestoreContext.c)
 *     KeCheckStackAndTargetAddress @ 0x14042A370 (KeCheckStackAndTargetAddress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall RcFrameConsolidation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        unsigned __int64 a19)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF
  void *v33; // [rsp+F8h] [rbp+F8h]

  v33 = (void *)guard_dispatch_icall_no_overrides(a1, a2);
  if ( (a6 & 0xFFFFFF3F) == 0x10000F )
  {
    _mm_setcsr(HIDWORD(a6));
    KeCheckStackAndTargetAddress((signed __int64)v33, a19);
    if ( (KiKernelCetEnabled & 1) != 0 )
    {
      __asm { rdsspq  rdx }
      KeKernelShadowStackRestoreContext((__int64)&retaddr, _RDX, 0LL);
    }
    retaddr = v33;
    _disable();
    __asm { iretq }
  }
  JUMPOUT(0x1404FA5B5LL);
}

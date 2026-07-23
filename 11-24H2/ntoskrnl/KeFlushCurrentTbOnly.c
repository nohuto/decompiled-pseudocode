/*
 * XREFs of KeFlushCurrentTbOnly @ 0x14039F4A0
 * Callers:
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiIssueFlushTbEntire @ 0x14039E5D8 (MiIssueFlushTbEntire.c)
 * Callees:
 *     HvlpFastFlushAddressSpaceTb @ 0x14039F2D4 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x14039FD28 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1403A4524 (HvlpFastFlushAddressSpaceTbEx.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1403FC724 (KiPrepareFlushCurrentAffinity.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14042D8D0 (HvlpSlowFlushAddressSpaceTb.c)
 *     KiFlushCurrentTbOnly @ 0x140437D00 (KiFlushCurrentTbOnly.c)
 *     KiIsFlushEntire @ 0x140486514 (KiIsFlushEntire.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1406A2028 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KeFlushCurrentTbOnly(unsigned int a1)
{
  unsigned __int64 v2; // rdi
  char v3; // bl
  __int64 v4; // r8
  _BYTE v6[272]; // [rsp+20h] [rbp-128h] BYREF

  memset_0(v6, 0, 0x108uLL);
  if ( (HvlEnlightenments & 0x800000) == 0 || (HvlEnlightenments & 2) == 0 && !(unsigned __int8)KiIsFlushEntire(a1) )
    return KiFlushCurrentTbOnly(a1);
  if ( KiKvaShadow )
  {
    v2 = 0LL;
    if ( a1 )
      goto LABEL_11;
LABEL_9:
    v3 = 0;
    goto LABEL_12;
  }
  if ( a1 == 1 )
  {
    v2 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
    goto LABEL_9;
  }
  v2 = 0LL;
LABEL_11:
  v3 = 1;
LABEL_12:
  KiPrepareFlushCurrentAffinity(v6);
  if ( (unsigned __int8)HvlpUseExtendedProcessorSetHypercalls() )
  {
    if ( ((HvlpFlags >> 8) & 0xF) + 5 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
      return HvlpSlowFlushAddressSpaceTbEx(v2);
    else
      return HvlpFastFlushAddressSpaceTbEx(v2);
  }
  else
  {
    LOBYTE(v4) = v3;
    if ( (HvlEnlightenments & 0x80u) == 0 )
      return HvlpSlowFlushAddressSpaceTb(v2, v6, v4);
    else
      return HvlpFastFlushAddressSpaceTb(v2, (__int64)v6, v3);
  }
}

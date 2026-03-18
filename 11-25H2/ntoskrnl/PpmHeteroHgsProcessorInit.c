/*
 * XREFs of PpmHeteroHgsProcessorInit @ 0x1405D2868
 * Callers:
 *     PpmCheckProcessorInit @ 0x1405D2230 (PpmCheckProcessorInit.c)
 *     PoInitializePrcb @ 0x140B4FD6C (PoInitializePrcb.c)
 * Callees:
 *     PpmHeteroHgsProcessorThreadFeedbackInit @ 0x1404F88D4 (PpmHeteroHgsProcessorThreadFeedbackInit.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     PpmHeteroInitializeFeedbackClass @ 0x1405D2B98 (PpmHeteroInitializeFeedbackClass.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PpmHeteroAmdProcessorInit @ 0x140B4FFD8 (PpmHeteroAmdProcessorInit.c)
 *     PpmHeteroIntelProcessorInit @ 0x140B50064 (PpmHeteroIntelProcessorInit.c)
 */

void __fastcall PpmHeteroHgsProcessorInit(__int64 a1, char a2)
{
  char v4; // al
  unsigned int v10; // edx
  bool v11; // zf
  __int16 v12; // dx
  int v13; // eax

  if ( PpmHeteroHgsEnabled || a2 )
  {
    v4 = *(_BYTE *)(a1 + 141);
    if ( v4 == 2 )
    {
      PpmHeteroIntelProcessorInit();
    }
    else
    {
      if ( v4 != 1 )
        return;
      PpmHeteroAmdProcessorInit();
    }
    if ( !a2 )
    {
      PpmHeteroHgsProcessorThreadFeedbackInit();
      if ( PpmHeteroHgsVendor == 2 )
      {
        _RAX = 6LL;
        __asm { cpuid }
        v10 = WORD1(_RDX);
        v11 = PpmHeteroHgsThreadEnabled == 0;
        *(_WORD *)(a1 + 35406) = v10;
        if ( v11 )
          v12 = 8 * (v10 + 2);
        else
          v12 = ((PpmHeteroHgsCapabilityBits * *(_WORD *)(PpmHeteroCapability + 4) + 15) & 0xFFF8)
              + v10 * ((PpmHeteroHgsCapabilityBits * *(_WORD *)(PpmHeteroCapability + 4) + 7) & 0xFFF8);
        *(_WORD *)(a1 + 35402) = v12;
      }
      v13 = PpmHeteroInitializeFeedbackClass(a1);
      if ( v13 < 0 )
        KeBugCheckEx(0xA0u, 0x201uLL, v13, 0LL, 0LL);
    }
  }
}

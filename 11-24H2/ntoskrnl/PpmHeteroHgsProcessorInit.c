/*
 * XREFs of PpmHeteroHgsProcessorInit @ 0x1405D48A0
 * Callers:
 *     PpmCheckProcessorInit @ 0x1405D41B0 (PpmCheckProcessorInit.c)
 *     PoInitializePrcb @ 0x140B61F64 (PoInitializePrcb.c)
 * Callees:
 *     PpmHeteroHgsProcessorThreadFeedbackInit @ 0x1404F85E8 (PpmHeteroHgsProcessorThreadFeedbackInit.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PpmHeteroInitializeFeedbackClass @ 0x1405D4BFC (PpmHeteroInitializeFeedbackClass.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PpmHeteroAmdProcessorInit @ 0x140B621D4 (PpmHeteroAmdProcessorInit.c)
 *     PpmHeteroIntelProcessorInit @ 0x140B62260 (PpmHeteroIntelProcessorInit.c)
 */

void __fastcall PpmHeteroHgsProcessorInit(__int64 a1, char a2)
{
  char v4; // al
  unsigned int v10; // edx
  bool v11; // zf
  __int64 v12; // rax
  __int16 v13; // dx
  int v14; // eax

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
        {
          v13 = 8 * (v10 + 2);
        }
        else
        {
          v12 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
          v13 = ((PpmHeteroHgsCapabilityBits * *(_WORD *)(v12 + 4) + 15) & 0xFFF8)
              + v10 * ((PpmHeteroHgsCapabilityBits * *(_WORD *)(v12 + 4) + 7) & 0xFFF8);
        }
        *(_WORD *)(a1 + 35402) = v13;
      }
      v14 = PpmHeteroInitializeFeedbackClass(a1);
      if ( v14 < 0 )
        KeBugCheckEx(0xA0u, 0x201uLL, v14, 0LL, 0LL);
    }
  }
}

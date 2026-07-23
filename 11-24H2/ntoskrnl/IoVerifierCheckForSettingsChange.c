/*
 * XREFs of IoVerifierCheckForSettingsChange @ 0x140B8425C
 * Callers:
 *     IoVerifierInit @ 0x140B84318 (IoVerifierInit.c)
 *     ViSettingsIoCheckForChanges @ 0x140B9D3CC (ViSettingsIoCheckForChanges.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 */

void __fastcall IoVerifierCheckForSettingsChange(char a1)
{
  unsigned int i; // eax
  size_t v2; // rbx
  void *Pool3; // rax
  __int64 v4; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+38h] [rbp-10h]
  int v6; // [rsp+3Ch] [rbp-Ch]

  v6 = 0;
  v4 = 1LL;
  v5 = 32;
  if ( (a1 & 0x10) != 0 )
  {
    _InterlockedExchange(&IovpEnabledInThePast, 1);
    _InterlockedExchange(&IovpDisabledWithoutReboot, 0);
    if ( !IovIrpTraces && IovIrpTracesLength && (VfRuleClasses & 0x400000) == 0 )
    {
      for ( i = 2; i < 0x100000; i *= 2 )
      {
        if ( i >= IovIrpTracesLength )
          break;
      }
      v2 = (unsigned __int64)i << 7;
      IovIrpTracesLength = i;
      Pool3 = (void *)ExAllocatePool3(0x40uLL, v2, 0x54496656u, (__int64)&v4, 1u);
      IovIrpTraces = (__int64)Pool3;
      if ( Pool3 )
        memset_0(Pool3, 0, v2);
    }
  }
  else
  {
    _InterlockedExchange(&IovpDisabledWithoutReboot, 1);
  }
}

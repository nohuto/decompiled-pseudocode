/*
 * XREFs of HalpMcaResumeProcessorConfig @ 0x140B58FF0
 * Callers:
 *     HalpDpPostReplaceInitialization @ 0x140B3F9EC (HalpDpPostReplaceInitialization.c)
 *     HalpPostSleepMP @ 0x140B58A3C (HalpPostSleepMP.c)
 * Callees:
 *     HalpCmciInitProcessor @ 0x14047C2E4 (HalpCmciInitProcessor.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HalpIsCmciImplemented @ 0x140B3C2F4 (HalpIsCmciImplemented.c)
 *     HalpMcaSetProcessorConfig @ 0x140B590EC (HalpMcaSetProcessorConfig.c)
 */

char __fastcall HalpMcaResumeProcessorConfig(int a1)
{
  KPCR *Pcr; // rax
  __int64 i; // rdi
  __int64 v4; // rbx
  _BYTE v6[976]; // [rsp+20h] [rbp-3E8h] BYREF

  memset_0(v6, 0, 0x3CCuLL);
  LOBYTE(Pcr) = HalpFeatureBits;
  if ( (HalpFeatureBits & 0xC) != 0 )
  {
    Pcr = KeGetPcr();
    for ( i = *(_QWORD *)&Pcr->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
    {
      v4 = *(_QWORD *)(i + 172);
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          HalpMcaSetProcessorConfig(HalpMceErrorSource, *(_QWORD *)(i + 172));
          LOBYTE(Pcr) = HalpIsCmciImplemented();
          if ( (_BYTE)Pcr )
            LOBYTE(Pcr) = HalpCmciInitProcessor((__int64)HalpCmcErrorSource, v4);
        }
      }
      else
      {
        memset_0(v6, 0, 0x3CCuLL);
        PshedGetErrorSourceInfo(0LL, v6);
        LOBYTE(Pcr) = HalpMcaSetProcessorConfig(v6, v4);
      }
    }
  }
  return (char)Pcr;
}

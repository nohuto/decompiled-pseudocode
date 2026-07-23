/*
 * XREFs of HalpMcaResumeProcessorConfig @ 0x140B6D4AC
 * Callers:
 *     HalpDpPostReplaceInitialization @ 0x140B51A3C (HalpDpPostReplaceInitialization.c)
 *     HalpPostSleepMP @ 0x140B70824 (HalpPostSleepMP.c)
 * Callees:
 *     HalpCmciInitProcessor @ 0x140478374 (HalpCmciInitProcessor.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HalpIsCmciImplemented @ 0x140B4E334 (HalpIsCmciImplemented.c)
 *     HalpMcaSetProcessorConfig @ 0x140B6D5A8 (HalpMcaSetProcessorConfig.c)
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

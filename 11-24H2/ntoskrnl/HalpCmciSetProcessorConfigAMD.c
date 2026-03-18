/*
 * XREFs of HalpCmciSetProcessorConfigAMD @ 0x14047D7E0
 * Callers:
 *     HalpCmciSetProcessorConfig @ 0x14047D604 (HalpCmciSetProcessorConfig.c)
 *     HalpCmciPollProcessor @ 0x14047D688 (HalpCmciPollProcessor.c)
 *     HalpCmciHandler @ 0x1405434A8 (HalpCmciHandler.c)
 * Callees:
 *     HalpWheaReadMsrMisc @ 0x14047CEEC (HalpWheaReadMsrMisc.c)
 *     HalpCmciSetProcessorMiscConfigAMD @ 0x1404FB3C4 (HalpCmciSetProcessorMiscConfigAMD.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpCmciSetProcessorConfigAMD(int a1, char a2, __int64 a3, __int64 a4)
{
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 MsrMisc; // rax
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  unsigned int v13; // esi
  int v14; // r12d
  __int64 v15; // r9
  int v16; // edi
  unsigned int v17; // ebp
  __int64 v18; // r13
  int v19; // eax
  int v20; // r9d
  int v21; // edx
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // r9
  int v26; // eax
  int v27; // r9d
  __int64 v28; // r9
  int v29; // eax
  int v30; // r9d
  int v32; // [rsp+30h] [rbp-48h]
  unsigned int v33; // [rsp+30h] [rbp-48h]
  unsigned int v35; // [rsp+98h] [rbp+20h]

  v6 = a1;
  if ( HalpMcaScalableRasSupported )
  {
    v7 = guard_dispatch_icall_no_overrides(a3, 3221226512LL, 0LL, a4);
    guard_dispatch_icall_no_overrides(
      a3,
      3221226512LL,
      (a2 != 0 ? 0x1000uLL : 0) | v7 & 0xFFFFFFFFFFFF0F0FuLL | (a2 != 0 ? 0x20 : 0),
      v8);
  }
  if ( !HalpMcaNumberOfBanks )
  {
    v9 = __readmsr(0x179u);
    HalpMcaNumberOfBanks = v9;
  }
  LOBYTE(MsrMisc) = HalpMcaNumberOfBanks;
  v11 = 0;
  v12 = (unsigned __int8)HalpMcaNumberOfBanks;
  v35 = (unsigned __int8)HalpMcaNumberOfBanks;
  if ( HalpMcaNumberOfBanks )
  {
    v13 = -1073733622;
    v14 = 1027;
    do
    {
      MsrMisc = HalpWheaReadMsrMisc(a3, v11);
      v32 = MsrMisc;
      v16 = MsrMisc;
      if ( MsrMisc < 0 )
      {
        if ( BYTE3(MsrMisc) )
        {
          if ( HalpMcaScalableRasSupported )
            v17 = v13;
          else
            v17 = 8 * BYTE3(MsrMisc) - 1073740800;
          v18 = 4LL;
          do
          {
            v19 = guard_dispatch_icall_no_overrides(a3, v17, 0LL, v15);
            LOBYTE(v20) = a2;
            HalpCmciSetProcessorMiscConfigAMD(a1, v17++, v19, v20, a3);
            --v18;
          }
          while ( v18 );
          v16 = v32;
          v12 = v35;
          v6 = a1;
        }
        v21 = v13 - 7;
        if ( !HalpMcaScalableRasSupported )
          v21 = v14;
        v33 = v13 - 6;
        LOBYTE(v15) = a2;
        LOBYTE(MsrMisc) = HalpCmciSetProcessorMiscConfigAMD(v6, v21, v16, v15, a3);
        if ( HalpMcaScalableRasSupported )
        {
          v23 = guard_dispatch_icall_no_overrides(a3, v33, 0LL, v22);
          guard_dispatch_icall_no_overrides(
            a3,
            v33,
            v23 & 0xFFFFFF9FFFFFFFFFuLL | -(__int64)(a2 != 0) & 0x2000000000LL,
            v24);
          v26 = guard_dispatch_icall_no_overrides(a3, v13, 0LL, v25);
          LOBYTE(v27) = a2;
          HalpCmciSetProcessorMiscConfigAMD(v6, v13, v26, v27, a3);
          v29 = guard_dispatch_icall_no_overrides(a3, v13 + 1, 0LL, v28);
          LOBYTE(v30) = a2;
          LOBYTE(MsrMisc) = HalpCmciSetProcessorMiscConfigAMD(v6, v13 + 1, v29, v30, a3);
        }
      }
      ++v11;
      v14 += 4;
      v13 += 16;
    }
    while ( v11 < v12 );
  }
  return MsrMisc;
}

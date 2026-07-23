/*
 * XREFs of HalpCmciSetProcessorConfigAMD @ 0x140478970
 * Callers:
 *     HalpCmciSetProcessorConfig @ 0x140478794 (HalpCmciSetProcessorConfig.c)
 *     HalpCmciPollProcessor @ 0x140478818 (HalpCmciPollProcessor.c)
 *     HalpCmciHandler @ 0x140540DF8 (HalpCmciHandler.c)
 * Callees:
 *     HalpWheaReadMsrMisc @ 0x14047807C (HalpWheaReadMsrMisc.c)
 *     HalpCmciSetProcessorMiscConfigAMD @ 0x1404F8CA4 (HalpCmciSetProcessorMiscConfigAMD.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpCmciSetProcessorConfigAMD(int a1, char a2, __int64 a3)
{
  int v5; // ebp
  unsigned __int64 v6; // rax
  __int64 MsrMisc; // rax
  unsigned int v8; // r14d
  unsigned int v9; // r13d
  unsigned int v10; // esi
  int v11; // r12d
  int v12; // r9d
  int v13; // edi
  unsigned int v14; // ebp
  __int64 v15; // r13
  int v16; // eax
  int v17; // r9d
  int v18; // edx
  int v19; // eax
  int v20; // r9d
  int v21; // eax
  int v22; // r9d
  int v24; // [rsp+30h] [rbp-48h]
  unsigned int v25; // [rsp+30h] [rbp-48h]
  unsigned int v27; // [rsp+98h] [rbp+20h]

  v5 = a1;
  if ( HalpMcaScalableRasSupported )
  {
    guard_dispatch_icall_no_overrides(a3, 3221226512LL);
    guard_dispatch_icall_no_overrides(a3, 3221226512LL);
  }
  if ( !HalpMcaNumberOfBanks )
  {
    v6 = __readmsr(0x179u);
    HalpMcaNumberOfBanks = v6;
  }
  LOBYTE(MsrMisc) = HalpMcaNumberOfBanks;
  v8 = 0;
  v9 = (unsigned __int8)HalpMcaNumberOfBanks;
  v27 = (unsigned __int8)HalpMcaNumberOfBanks;
  if ( HalpMcaNumberOfBanks )
  {
    v10 = -1073733622;
    v11 = 1027;
    do
    {
      MsrMisc = HalpWheaReadMsrMisc(a3, v8);
      v24 = MsrMisc;
      v13 = MsrMisc;
      if ( MsrMisc < 0 )
      {
        if ( BYTE3(MsrMisc) )
        {
          if ( HalpMcaScalableRasSupported )
            v14 = v10;
          else
            v14 = 8 * BYTE3(MsrMisc) - 1073740800;
          v15 = 4LL;
          do
          {
            v16 = guard_dispatch_icall_no_overrides(a3, v14);
            LOBYTE(v17) = a2;
            HalpCmciSetProcessorMiscConfigAMD(a1, v14++, v16, v17, a3);
            --v15;
          }
          while ( v15 );
          v13 = v24;
          v9 = v27;
          v5 = a1;
        }
        v18 = v10 - 7;
        if ( !HalpMcaScalableRasSupported )
          v18 = v11;
        v25 = v10 - 6;
        LOBYTE(v12) = a2;
        LOBYTE(MsrMisc) = HalpCmciSetProcessorMiscConfigAMD(v5, v18, v13, v12, a3);
        if ( HalpMcaScalableRasSupported )
        {
          guard_dispatch_icall_no_overrides(a3, v25);
          guard_dispatch_icall_no_overrides(a3, v25);
          v19 = guard_dispatch_icall_no_overrides(a3, v10);
          LOBYTE(v20) = a2;
          HalpCmciSetProcessorMiscConfigAMD(v5, v10, v19, v20, a3);
          v21 = guard_dispatch_icall_no_overrides(a3, v10 + 1);
          LOBYTE(v22) = a2;
          LOBYTE(MsrMisc) = HalpCmciSetProcessorMiscConfigAMD(v5, v10 + 1, v21, v22, a3);
        }
      }
      ++v8;
      v11 += 4;
      v10 += 16;
    }
    while ( v8 < v9 );
  }
  return MsrMisc;
}

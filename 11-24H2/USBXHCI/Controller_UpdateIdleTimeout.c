/*
 * XREFs of Controller_UpdateIdleTimeout @ 0x140081F88
 * Callers:
 *     Controller_IdleTimeoutUpdateWorker @ 0x1400369B0 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_ConfigureS0IdleSettings @ 0x140074818 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1400828FC (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall Controller_UpdateIdleTimeout(__int64 a1, int a2)
{
  __int64 v4; // rdx
  int v5; // eax
  int v6; // edx
  _DWORD v7[10]; // [rsp+40h] [rbp-30h] BYREF

  if ( !*(_DWORD *)(a1 + 864) )
  {
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x10 )
        v7[0] = -1;
      else
        v7[0] = *(_DWORD *)(WdfStructures + 128);
    }
    else
    {
      v7[0] = 36;
    }
    v4 = *(_QWORD *)a1;
    v7[5] = 2;
    v7[6] = 2;
    v7[8] = 2;
    v7[1] = 2;
    v7[2] = 5;
    v7[4] = 2;
    v7[3] = a2;
    v7[7] = 2;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01033 + 368))(
           WdfDriverGlobals,
           v4,
           v7);
    if ( v5 >= 0 )
    {
      *(_DWORD *)(a1 + 976) = a2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 72),
          v6,
          4,
          32,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          a2);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 72),
          v6,
          4,
          31,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          v5);
      }
      Controller_HwVerifierBreakIfEnabled(a1, 0, 0, 0x4000000LL, "Wake from Dx in S0 is missing (WDF)", 0LL, 0LL);
      *(_DWORD *)(a1 + 864) = 2;
    }
  }
}

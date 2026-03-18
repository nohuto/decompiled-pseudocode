/*
 * XREFs of Controller_UpdateIdleTimeout @ 0x1400822B0
 * Callers:
 *     Controller_IdleTimeoutUpdateWorker @ 0x1400381E0 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1400748E4 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x140082BD8 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
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
          33,
          (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
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
          32,
          (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
          v5);
      }
      Controller_HwVerifierBreakIfEnabled(a1, 0, 0, 0x4000000LL, "Wake from Dx in S0 is missing (WDF)", 0LL, 0LL);
      *(_DWORD *)(a1 + 864) = 2;
    }
  }
}

/*
 * XREFs of ExpInitializeCrossVmIntegration @ 0x140C45F3C
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C42BB4 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExRegisterHost @ 0x1407C0B6C (ExRegisterHost.c)
 */

void __fastcall ExpInitializeCrossVmIntegration(__int64 a1, __int64 a2)
{
  int v2; // [rsp+20h] [rbp-40h] BYREF
  __int64 v3; // [rsp+28h] [rbp-38h]
  _QWORD v4[4]; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v5; // [rsp+50h] [rbp-10h]

  if ( HvlHypervisorConnected )
  {
    v2 = 1;
    v3 = 0LL;
    v4[1] = &v2;
    v4[3] = ExpCrossVmIntHostCallback;
    v4[2] = 512LL;
    if ( (HvlpFlags & 2) != 0 )
    {
      v4[0] = 65551LL;
      v5 = &ExpCrossVmIntExtensionHostRoot;
      if ( (int)ExRegisterHost(&ExpCrossVmIntExtensionHostRoot, a2, (unsigned __int16 *)v4) < 0 )
        ExpCrossVmIntExtensionHostRoot = 0LL;
    }
    else
    {
      v4[0] = 65552LL;
      v5 = &ExpCrossVmIntExtensionHostGuest;
      if ( (int)ExRegisterHost(&ExpCrossVmIntExtensionHostGuest, a2, (unsigned __int16 *)v4) < 0 )
        ExpCrossVmIntExtensionHostGuest = 0LL;
    }
  }
}

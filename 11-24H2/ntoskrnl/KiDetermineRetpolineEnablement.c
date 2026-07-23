/*
 * XREFs of KiDetermineRetpolineEnablement @ 0x1405BB3E0
 * Callers:
 *     KiInitializeBootStructures @ 0x140B5A140 (KiInitializeBootStructures.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x1405BAE44 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsPgiKernel @ 0x1405BB568 (KiIsPgiKernel.c)
 *     KiIsSafeBoot @ 0x1405BB624 (KiIsSafeBoot.c)
 *     KiIsWinPEBoot @ 0x1405BB76C (KiIsWinPEBoot.c)
 */

char __fastcall KiDetermineRetpolineEnablement(__int64 a1)
{
  __int64 v2; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  LOBYTE(v2) = KiIsSafeBoot();
  if ( !(_BYTE)v2 )
  {
    LOBYTE(v2) = KiIsWinPEBoot(a1);
    if ( !(_BYTE)v2 )
    {
      LOBYTE(v2) = KiIsPgiKernel();
      if ( !(_BYTE)v2 )
      {
        LOBYTE(v2) = (unsigned __int8)KiDetectHardwareSpecControlFeatures(
                                        (__int64)KeGetCurrentPrcb(),
                                        0LL,
                                        (__int64)&v4,
                                        0LL);
        if ( (KiFeatureSettings & 5) == 0 )
        {
          v2 = *(_QWORD *)(a1 + 240);
          if ( *(_DWORD *)(v2 + 3500) )
          {
            LOBYTE(v2) = v4;
            if ( (v4 & 1) == 0 && !(_BYTE)KiKernelCetEnabled )
            {
              if ( (KiFeatureSettings & 0x200) != 0
                || (LOBYTE(v2) = (KiFeatureSettings & 0x100) == 0, (((v4 & 0x204) == 4) & (unsigned __int8)v2) != 0) )
              {
                LOBYTE(v2) = 0;
                _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x20000000000uLL);
              }
            }
          }
        }
      }
    }
  }
  return v2;
}

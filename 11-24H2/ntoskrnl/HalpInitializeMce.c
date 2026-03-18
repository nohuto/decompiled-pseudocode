/*
 * XREFs of HalpInitializeMce @ 0x140B4BBE4
 * Callers:
 *     HalpInitializeErrSrc @ 0x140B4BB90 (HalpInitializeErrSrc.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     HalpMcaExtendedLogInitialize @ 0x14053FA0C (HalpMcaExtendedLogInitialize.c)
 *     HalpMceInitializeRecovery @ 0x1405548D4 (HalpMceInitializeRecovery.c)
 *     HalpInitializeGhesRecovery @ 0x1405553CC (HalpInitializeGhesRecovery.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     HalpHandlePreviousMcaErrors @ 0x140B4B8C4 (HalpHandlePreviousMcaErrors.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140B4BA0C (HalpHandlePreviousMcaErrorsOnProcessor.c)
 *     HalpMcaSetFeatureFlags @ 0x140B4C414 (HalpMcaSetFeatureFlags.c)
 *     HalpMceInit @ 0x140B68694 (HalpMceInit.c)
 *     HalpMceInitProcessor @ 0x140B687E8 (HalpMceInitProcessor.c)
 */

__int64 __fastcall HalpInitializeMce(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG v9; // edi
  ULONG ActiveProcessorCount; // ebp
  __int64 v11; // rsi
  unsigned int v12; // edx
  struct _GROUP_AFFINITY *v13; // rdx
  __int64 i; // rbx
  signed __int32 v16[8]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+20h] [rbp-38h]
  struct _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-30h] BYREF
  __int128 v19; // [rsp+38h] [rbp-20h] BYREF

  v17 = 0LL;
  Affinity = 0LL;
  v19 = 0LL;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 1 )
    {
      HalpMceErrorSourceId = a2[7];
      HalpMceErrorSource = a2;
      HalpMceInit(a2);
      if ( HalpMcaExtendedLoggingSupported )
        HalpMcaExtendedLogInitialize();
      if ( !PshedIsSystemWheaEnabled() )
        HalpHandlePreviousMcaErrors(HalpMcaBanksValidOnBoot != 0);
      _InterlockedOr(v16, 0);
      if ( (unsigned __int8)PshedInitAvailable(v6, v5, v7, v8, v17) )
      {
        PshedInitGlobal();
        v9 = 0;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
        if ( ActiveProcessorCount )
        {
          v11 = 0LL;
          do
          {
            *(_DWORD *)Affinity.Reserved = 0;
            Affinity.Reserved[2] = 0;
            v12 = *(_DWORD *)((char *)KiGlobalState + v11);
            *(_DWORD *)&Affinity.Group = (unsigned __int16)(v12 >> 6);
            Affinity.Mask = 1LL << (v12 & 0x3F);
            if ( v9 )
              v13 = 0LL;
            else
              v13 = (struct _GROUP_AFFINITY *)&v19;
            KeSetSystemGroupAffinityThread(&Affinity, v13);
            for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
              PshedInitProc(*(unsigned int *)(i + 172));
            ++v9;
            v11 += 4LL;
          }
          while ( v9 < ActiveProcessorCount );
        }
      }
      HalpMcaWheaReady = 1;
    }
    else
    {
      LODWORD(v17) = KeGetPcr()->Prcb.Number;
      HalpMceInitProcessor(a2, v17);
      HalpHandlePreviousMcaErrorsOnProcessor(0LL, 0LL, v17);
    }
  }
  else
  {
    HalpMceErrorSourceId = a2[7];
    HalpMceErrorSource = a2;
    HalpMcaSetFeatureFlags(a1, a2, a3, a4, v17);
    HalpInitializeGhesRecovery();
    HalpMceInitializeRecovery();
    HalpMceInit(a2);
  }
  return 0LL;
}

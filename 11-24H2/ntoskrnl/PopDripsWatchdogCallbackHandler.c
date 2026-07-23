/*
 * XREFs of PopDripsWatchdogCallbackHandler @ 0x14075EAE0
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x14075EC80 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     PopFxBuildDripsBlockingDeviceList @ 0x14048AB44 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDeviceConstraintsEnforced @ 0x1404BEB74 (PopDeviceConstraintsEnforced.c)
 *     PopDripsWatchdogGetDeviceActiveTime @ 0x1404C2414 (PopDripsWatchdogGetDeviceActiveTime.c)
 *     PopFxIsDirectedPowerTransitionSupported @ 0x1405CED58 (PopFxIsDirectedPowerTransitionSupported.c)
 *     PopDirectedDripsMarkCandidateDevice @ 0x1406F9E54 (PopDirectedDripsMarkCandidateDevice.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14074BEEC (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDirectedDripsNotify @ 0x140A627B0 (PopDirectedDripsNotify.c)
 *     PopDripsWatchdogInvokeDeviceCallbacks @ 0x140A8785C (PopDripsWatchdogInvokeDeviceCallbacks.c)
 */

char __fastcall PopDripsWatchdogCallbackHandler(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6)
{
  int v7; // ebp
  int v8; // eax
  bool v9; // bl
  __int64 v11; // rcx
  _OWORD *i; // rdi
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  _OWORD v17[2]; // [rsp+20h] [rbp-28h] BYREF

  v17[0] = 0LL;
  v7 = a1 & 0x100;
  LOBYTE(v8) = PopDirectedDripsTimeout;
  v9 = 0;
  if ( PopDirectedDripsTimeout && a4 / 0x989680 >= (unsigned int)PopDirectedDripsTimeout || a6 )
    v9 = (word_140E27E18 & 1) == 0 || (a1 & 1) != 0;
  if ( (a1 & 0x80) != 0 || (a1 & 0x100) != 0 || v9 )
  {
    LOBYTE(v8) = PopDeviceConstraintsEnforced(a1);
    if ( (_BYTE)v8 )
    {
      v8 = PopFxBuildDripsBlockingDeviceList(a3, (__int64 **)v17);
      if ( v8 >= 0 )
      {
        if ( v9 )
        {
          v11 = 4LL;
        }
        else
        {
          if ( !v7 )
          {
LABEL_17:
            for ( i = *(_OWORD **)&v17[0]; i != v17; i = *(_OWORD **)i )
            {
              if ( v9
                || v7
                && ((PopDripsWatchdogGetDeviceActiveTime((__int64)(i - 57)),
                     !PopFxIsDirectedPowerTransitionSupported((__int64)(i - 57), 0LL))
                  ? (v14 = (unsigned int)PopFxDirectedFxDefaultTimeout)
                  : (v14 = *((unsigned int *)i + 11)),
                    v13 >= v14) )
              {
                PopDirectedDripsMarkCandidateDevice((__int64)(i - 57));
              }
              else
              {
                PopDripsWatchdogInvokeDeviceCallbacks(i - 57, a2);
              }
            }
            if ( v9 )
            {
              v15 = 5LL;
            }
            else
            {
              if ( !v7 )
              {
LABEL_33:
                LOBYTE(v8) = PopFxDestroyDripsBlockingDeviceList(v17);
                return v8;
              }
              v15 = 3LL;
            }
            PopDirectedDripsNotify(v15, &a5);
            goto LABEL_33;
          }
          v11 = 2LL;
        }
        PopDirectedDripsNotify(v11, &a5);
        goto LABEL_17;
      }
    }
  }
  return v8;
}

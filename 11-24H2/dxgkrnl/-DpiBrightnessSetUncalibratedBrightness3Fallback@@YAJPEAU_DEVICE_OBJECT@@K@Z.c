/*
 * XREFs of ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x14024D744
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x140429C30 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DpiQueryMiniportInterface @ 0x14018AFAC (DpiQueryMiniportInterface.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14024D9D0 (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessSetUncalibratedBrightness3Fallback(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  char *DeviceExtension; // rbx
  int MiniportInterface; // edi
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  void (__fastcall *v9)(_QWORD); // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-28h]
  int v12; // [rsp+50h] [rbp+8h] BYREF

  DeviceExtension = (char *)a1->DeviceExtension;
  v12 = 0;
  if ( *((_WORD *)DeviceExtension + 2296) )
  {
    v5 = (*((__int64 (__fastcall **)(struct _DEVICE_OBJECT *, __int64, int *))DeviceExtension + 580))(a1, a2, &v12);
    MiniportInterface = v5;
    if ( v5 >= 0 )
    {
      if ( (v12 & 4) != 0 )
      {
        MiniportInterface = -1073741637;
        WdLogSingleEntry1(3LL, -1073741637LL);
        WdLogGlobalForLineNumber = 2216;
      }
      else
      {
        KeWaitForSingleObject(DeviceExtension + 4536, Executive, 0, 0, 0LL);
        LOBYTE(v6) = 1;
        v7 = DpiAcquireCoreSyncAccessSafe(a1, v6);
        MiniportInterface = v7;
        if ( v7 >= 0 )
        {
          if ( (**(_DWORD **)(*((_QWORD *)DeviceExtension + 504) + 3008LL) & 0x2000) != 0 )
          {
            MiniportInterface = 0;
            WdLogSingleEntry1(3LL, 0LL);
            WdLogGlobalForLineNumber = 2245;
          }
          else if ( *((_WORD *)DeviceExtension + 2405) == 3 )
          {
            v9 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 604);
            if ( v9 )
            {
              v9(*((_QWORD *)DeviceExtension + 602));
              memset(DeviceExtension + 4808, 0, 0x48uLL);
            }
            *((_WORD *)DeviceExtension + 2296) = 0;
            MiniportInterface = DpiBrightnessSetupInterfaceV2(a1);
            if ( MiniportInterface < 0 )
            {
              MiniportInterface = DpiQueryMiniportInterface(
                                    (__int64)a1,
                                    (__int64)&GUID_DEVINTERFACE_BRIGHTNESS,
                                    56,
                                    1,
                                    (__int64)Timeout,
                                    (__int64)(DeviceExtension + 4808));
              if ( MiniportInterface >= 0 )
              {
                *((_QWORD *)DeviceExtension + 595) = a1;
                *((_QWORD *)DeviceExtension + 596) = DpiDoInterfaceReference;
                *((_QWORD *)DeviceExtension + 597) = DXGGLOBAL::DereferenceObjectWork;
                *((_QWORD *)DeviceExtension + 598) = DpiBrightnessIfGetPossible;
                *((_QWORD *)DeviceExtension + 599) = DpiBrightnessIfSet;
                *((_QWORD *)DeviceExtension + 600) = DpiBrightnessIfGet;
                *((_DWORD *)DeviceExtension + 1188) = 65592;
              }
            }
          }
          else
          {
            MiniportInterface = -1073741637;
            WdLogSingleEntry1(3LL, -1073741637LL);
            WdLogGlobalForLineNumber = 2257;
          }
          LOBYTE(v8) = 1;
          DpiReleaseCoreSyncAccessSafe(a1, v8);
        }
        else
        {
          WdLogSingleEntry1(2LL, v7);
          WdLogGlobalForLineNumber = 2231;
        }
        KeReleaseMutex((PRKMUTEX)DeviceExtension + 81, 0);
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, v5);
      WdLogGlobalForLineNumber = 2207;
    }
  }
  else
  {
    MiniportInterface = -1073741637;
    WdLogSingleEntry1(3LL, -1073741637LL);
    WdLogGlobalForLineNumber = 2197;
  }
  return (unsigned int)MiniportInterface;
}

/*
 * XREFs of XilRegister_WriteUlong64 @ 0x14001AC40
 * Callers:
 *     XilCoreCommand_Initialize @ 0x140019FF0 (XilCoreCommand_Initialize.c)
 *     XilCoreDeviceSlot_Initialize @ 0x14001A080 (XilCoreDeviceSlot_Initialize.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x14001A8FC (Interrupter_InterrupterRegisterIntialize.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003D690 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_FreeResources @ 0x14003E954 (XilCommand_FreeResources.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x140048710 (Interrupter_DeInitializeAfterOffload.c)
 *     Interrupter_InitializeForOffload @ 0x140048A54 (Interrupter_InitializeForOffload.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x140056764 (XilCoreDeviceSlot_FreeResources.c)
 *     Interrupter_ReleaseInterrupter @ 0x14007CAFC (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

__int64 __fastcall XilRegister_WriteUlong64(__int64 a1, _DWORD *a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  signed __int32 v9[10]; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int64 v10; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v11[6]; // [rsp+40h] [rbp-58h] BYREF
  int v12; // [rsp+70h] [rbp-28h]
  _DWORD v13[3]; // [rsp+74h] [rbp-24h]

  v3 = *(_QWORD *)(a1 + 8);
  v10 = a3;
  if ( *(_BYTE *)(v3 + 1001) )
  {
    v9[8] = 4;
    LODWORD(v10) = 0;
    v6 = *(_QWORD *)(v3 + 112);
    v7 = *(_QWORD *)(a1 + 128);
    v13[0] = 0;
    *(_QWORD *)&v13[1] = a3;
    memset(v11, 0, 24);
    v11[5] = a2;
    v11[4] = 11LL;
    v11[3] = v7;
    v12 = 3;
    result = SecureChannel_SendRequestSynchronously(v6, v11, 64LL, &v10, 4);
    if ( (int)result >= 0 )
    {
      result = (unsigned int)v10;
      if ( (v10 & 0x80000000) != 0LL && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        return WPP_RECORDER_SF_d(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                 v8,
                 6,
                 77,
                 (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
                 v10);
      }
    }
  }
  else
  {
    result = *(_QWORD *)(v3 + 736);
    if ( (result & 1) != 0 )
    {
      *a2 = a3;
      _InterlockedOr(v9, 0);
      result = HIDWORD(v10);
      a2[1] = HIDWORD(v10);
    }
    else
    {
      *(_QWORD *)a2 = a3;
    }
    _InterlockedOr(v9, 0);
  }
  return result;
}

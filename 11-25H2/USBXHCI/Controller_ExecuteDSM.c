/*
 * XREFs of Controller_ExecuteDSM @ 0x140081BA8
 * Callers:
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1400313C0 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x140042054 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Controller_QuerySupportedDSMs @ 0x140042160 (Controller_QuerySupportedDSMs.c)
 *     UsbDevice_RunUpdateTunnelStateDsm @ 0x14004E6F0 (UsbDevice_RunUpdateTunnelStateDsm.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1400748E4 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x140076A08 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_PopulateDeviceFlagsFromACPI @ 0x1400771E8 (Controller_PopulateDeviceFlagsFromACPI.c)
 *     Controller_WdfEvtDeviceAdd @ 0x140079910 (Controller_WdfEvtDeviceAdd.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x140081AFC (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 * Callees:
 *     memcpy_s @ 0x14003CD40 (memcpy_s.c)
 *     WPP_RECORDER_SF__guid_d @ 0x140044D54 (WPP_RECORDER_SF__guid_d.c)
 *     WPP_RECORDER_SF_q_guid_L @ 0x1400452C0 (WPP_RECORDER_SF_q_guid_L.c)
 *     WPP_RECORDER_SF_q_guid_LLiLL @ 0x1400453C4 (WPP_RECORDER_SF_q_guid_LLiLL.c)
 *     WPP_RECORDER_SF_q_guid_Ld @ 0x140045540 (WPP_RECORDER_SF_q_guid_Ld.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall Controller_ExecuteDSM(
        __int64 *a1,
        const void *a2,
        int a3,
        int a4,
        void *a5,
        unsigned __int16 a6)
{
  __int64 v8; // r12
  unsigned __int64 v10; // rdi
  int v11; // eax
  unsigned __int16 *Pool2; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int16 *v16; // rbx
  __int64 v17; // rax
  void *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v24; // [rsp+20h] [rbp-99h]
  int v25; // [rsp+20h] [rbp-99h]
  int v26; // [rsp+60h] [rbp-59h]
  _QWORD v28[3]; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v29[2]; // [rsp+80h] [rbp-39h] BYREF
  int v30; // [rsp+90h] [rbp-29h]
  int v31; // [rsp+94h] [rbp-25h]
  void *Src; // [rsp+98h] [rbp-21h]
  __int64 v33; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v34; // [rsp+A8h] [rbp-11h] BYREF
  __int128 v35; // [rsp+B8h] [rbp-1h]

  Src = a5;
  v8 = *a1;
  HIDWORD(v29[0]) = 0;
  v10 = 0LL;
  HIDWORD(v28[0]) = 0;
  DWORD1(v35) = 0;
  v11 = 4;
  v33 = 0LL;
  if ( a6 >= 4u )
    v11 = a6;
  v26 = v11 + 56;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, (unsigned int)(v11 + 56), 1229146200LL);
  v16 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 1130980673;
    *((_DWORD *)Pool2 + 1) = 1297302623;
    *((_DWORD *)Pool2 + 2) = v26;
    *((_DWORD *)Pool2 + 3) = 4;
    *((_DWORD *)Pool2 + 4) = 1048578;
    memcpy_s(Pool2 + 10, 0x10uLL, a2, 0x10uLL);
    v17 = v16[9];
    if ( (unsigned __int16)v17 < 4u )
      v17 = 4LL;
    v18 = Src;
    *(_DWORD *)((char *)v16 + v17 + 24) = a3;
    *(_DWORD *)((char *)v16 + v17 + 20) = 0x40000;
    *(_DWORD *)((char *)v16 + v17 + 28) = 0x40000;
    *(_DWORD *)((char *)v16 + v17 + 32) = a4;
    *(unsigned __int16 *)((char *)v16 + v17 + 36) = 2;
    *(unsigned __int16 *)((char *)v16 + v17 + 38) = a6;
    memcpy_s((char *)v16 + v17 + 40, a6, v18, a6);
    v30 = v26;
    v34 = 0LL;
    v29[0] = 1LL;
    v28[1] = &v34;
    v31 = 0;
    v29[1] = v16;
    v35 = 0LL;
    LODWORD(v34) = 1114596673;
    v28[0] = 1LL;
    v28[2] = 32LL;
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 336))(WdfDriverGlobals, v8);
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD *, _QWORD, __int64 *))(WdfFunctions_01033 + 1488))(
           WdfDriverGlobals,
           v19,
           0LL,
           3325956LL,
           v29,
           v28,
           0LL,
           &v33) >= 0 )
    {
      if ( (_DWORD)v34 == 1114596673 )
      {
        if ( DWORD2(v34) && HIWORD(v34) )
        {
          LODWORD(v20) = 8;
          if ( HIWORD(v34) <= 8u )
            LODWORD(v20) = HIWORD(v34);
          do
          {
            v20 = (unsigned int)(v20 - 1);
            v10 = *((unsigned __int8 *)&v35 + v20) | (v10 << 8);
          }
          while ( (_DWORD)v20 );
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q_guid_LLiLL(a1[9], v20, HIWORD(v34), DWORD2(v34), v25);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_q_guid_L(a1[9], v20, v21, v22, v25);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q_guid_Ld(a1[9], v20, v21, v22, v25);
    }
    ExFreePoolWithTag(v16, 0x49434858u);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF__guid_d(a1[9], v13, v14, v15, v24, (__int64)a2);
  }
  return v10;
}

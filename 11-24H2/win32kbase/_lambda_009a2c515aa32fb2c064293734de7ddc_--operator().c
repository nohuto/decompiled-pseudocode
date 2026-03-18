/*
 * XREFs of _lambda_009a2c515aa32fb2c064293734de7ddc_::operator() @ 0x1401D4164
 * Callers:
 *     _lambda_009a2c515aa32fb2c064293734de7ddc_::_lambda_invoker_cdecl_ @ 0x1401D3FE0 (_lambda_009a2c515aa32fb2c064293734de7ddc_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1400CA9E8 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 */

void __fastcall lambda_009a2c515aa32fb2c064293734de7ddc_::operator()(__int64 a1, __int64 a2)
{
  unsigned int i; // edi
  bool v4; // si
  bool v5; // r14
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  if ( !*(_DWORD *)(a2 + 1056) )
  {
    RIMLockExclusive(a2 + 104);
    if ( !*(_BYTE *)(a2 + 81) && !*(_BYTE *)(a2 + 80) )
    {
      for ( i = 0; i <= 2; ++i )
      {
        if ( (int)RIMUnRegisterForInputDeviceTypeClassNotifications(a2, i) < 0 )
        {
          v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v7) = v5;
            LOBYTE(v8) = v4;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v8,
              v7,
              *(_QWORD *)(UserSessionState + 19392),
              4,
              1,
              123,
              (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
              a2);
          }
        }
      }
    }
    RIMUnlockExclusive(a2 + 104);
  }
}

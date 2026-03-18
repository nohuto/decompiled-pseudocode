/*
 * XREFs of _lambda_e01a74845eb5856ba032dc9cd6fa71ed_::operator() @ 0x1C00D3AF8
 * Callers:
 *     _lambda_e01a74845eb5856ba032dc9cd6fa71ed_::_lambda_invoker_cdecl_ @ 0x1C00D3AE0 (_lambda_e01a74845eb5856ba032dc9cd6fa71ed_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00742F0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0074EA4 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 */

void __fastcall lambda_e01a74845eb5856ba032dc9cd6fa71ed_::operator()(__int64 a1, __int64 a2)
{
  unsigned int i; // edi
  int v4; // edx
  int v5; // r8d

  if ( !*(_DWORD *)(a2 + 1056) )
  {
    RIMLockExclusive(a2 + 104);
    if ( !*(_BYTE *)(a2 + 81) && !*(_BYTE *)(a2 + 80) )
    {
      for ( i = 0; i <= 2; ++i )
      {
        if ( (int)RIMUnRegisterForInputDeviceTypeClassNotifications(a2, i) < 0 )
        {
          LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v4,
              v5,
              (_DWORD)gRimLog,
              4,
              1,
              127,
              (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
              a2);
          }
        }
      }
    }
    CInpPushLock::UnLockExclusive((CInpPushLock *)(a2 + 104));
  }
}

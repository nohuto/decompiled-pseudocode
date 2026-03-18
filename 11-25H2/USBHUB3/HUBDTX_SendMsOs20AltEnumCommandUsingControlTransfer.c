/*
 * XREFs of HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x14002BCEC
 * Callers:
 *     HUBDSM_SendingMsOs20AltEnumCmdOnReenum @ 0x140024010 (HUBDSM_SendingMsOs20AltEnumCmdOnReenum.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x14002EC7C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+28h] [rbp-30h]

  *(_BYTE *)(a1 + 400) = 64;
  *(_BYTE *)(a1 + 401) = *(_BYTE *)(a1 + 2052);
  *(_BYTE *)(a1 + 403) = *(_BYTE *)(a1 + 2487);
  *(_BYTE *)(a1 + 402) = 0;
  *(_DWORD *)(a1 + 404) = 8;
  result = HUBMISC_ControlTransfer(
             *(_QWORD *)a1,
             *(_QWORD *)(a1 + 24),
             a1,
             (int)a1 + 248,
             (__int64)HUBDTX_ControlTransferComplete,
             0LL,
             0,
             1,
             *(_BYTE *)(a1 + 1512));
  if ( (int)result >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2468), 1u);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v3) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x32u,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v3);
    }
    return HUBSM_AddEvent(a1 + 504, 4004);
  }
  return result;
}

/*
 * XREFs of HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x14002BF40
 * Callers:
 *     HUBDSM_SettingDeviceInterfaceInSettingInterfaceOnFailureForCompat @ 0x1400246C0 (HUBDSM_SettingDeviceInterfaceInSettingInterfaceOnFailureForCompat.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x14002EDA8 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDTX_SetDeviceInterfaceUsingControlTransfer(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+28h] [rbp-30h]
  char v9; // [rsp+40h] [rbp-18h]

  v2 = a1[8];
  if ( v2 )
  {
    *((_BYTE *)a1 + 408) = a1[51] & 0x1C | 1;
    v4 = *(_QWORD *)(v2 + 32);
    *((_BYTE *)a1 + 409) = 11;
    *((_WORD *)a1 + 205) = *(unsigned __int8 *)(v4 + 3);
    *((_WORD *)a1 + 206) = *(unsigned __int8 *)(v4 + 2);
    *((_WORD *)a1 + 207) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1[8] + 28), 0xFFFFFFFD);
    v5 = a1[3];
    v6 = *a1;
    v9 = *((_BYTE *)a1 + 1520);
    a1[8] = 0LL;
    result = HUBMISC_ControlTransfer(
               v6,
               v5,
               (_DWORD)a1,
               (int)a1 + 256,
               (__int64)HUBDTX_ControlTransferComplete,
               0LL,
               0,
               0,
               v9);
    if ( (int)result >= 0 )
      return result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x44u,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v8);
    }
    v3 = 4004;
  }
  else
  {
    v3 = 4012;
  }
  return HUBSM_AddEvent((__int64)(a1 + 64), v3);
}

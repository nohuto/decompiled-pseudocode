/*
 * XREFs of PopCheckCachedPowerSourceStateUpdates @ 0x14075B0D4
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140A3AD08 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PopCheckCachedPowerSourceStateUpdates()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+48h] [rbp-40h] BYREF
  NTSTATUS *v3; // [rsp+68h] [rbp-20h]
  int v4; // [rsp+70h] [rbp-18h]
  int v5; // [rsp+74h] [rbp-14h]

  if ( word_140F0B0A5 != (_WORD)xmmword_140F0B060
    || qword_140F0B0A8 != *((_QWORD *)&xmmword_140F0B060 + 1)
    || dword_140F0B0B0 != (_DWORD)xmmword_140F0B080
    || qword_140F0B0B4 != __PAIR64__(xmmword_140F0B090, DWORD2(xmmword_140F0B080))
    || unk_140F0B0BC != DWORD1(xmmword_140F0B090)
    || (result = DWORD2(xmmword_140F0B090), dword_140F0B0C0 != DWORD2(xmmword_140F0B090)) )
  {
    qword_140F0B0A8 = *((_QWORD *)&xmmword_140F0B060 + 1);
    dword_140F0B0B0 = xmmword_140F0B080;
    LODWORD(qword_140F0B0B4) = DWORD2(xmmword_140F0B080);
    *(__int64 *)((char *)&qword_140F0B0B4 + 4) = xmmword_140F0B090;
    word_140F0B0A5 = xmmword_140F0B060;
    dword_140F0B0C0 = DWORD2(xmmword_140F0B090);
    byte_140F0B0A4 = 0;
    result = ZwUpdateWnfStateData((__int64)&WNF_PO_POWER_SOURCE_STATE_CHANGE, (__int64)&byte_140F0B0A4);
    if ( (unsigned int)dword_140E076F0 > 5 )
    {
      v5 = 0;
      v1 = result;
      v4 = 4;
      v3 = &v1;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E076F0,
               (unsigned __int8 *)&word_14004BA86,
               0LL,
               0LL,
               3u,
               &v2);
    }
  }
  return result;
}

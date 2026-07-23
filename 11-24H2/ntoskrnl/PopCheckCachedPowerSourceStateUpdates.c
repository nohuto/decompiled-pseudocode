/*
 * XREFs of PopCheckCachedPowerSourceStateUpdates @ 0x140759BB0
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140A304E8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PopCheckCachedPowerSourceStateUpdates()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+48h] [rbp-40h] BYREF
  NTSTATUS *v3; // [rsp+68h] [rbp-20h]
  int v4; // [rsp+70h] [rbp-18h]
  int v5; // [rsp+74h] [rbp-14h]

  if ( word_140F0BEE5 != (_WORD)xmmword_140F0BEA0
    || qword_140F0BEE8 != *((_QWORD *)&xmmword_140F0BEA0 + 1)
    || dword_140F0BEF0 != (_DWORD)xmmword_140F0BEC0
    || qword_140F0BEF4 != __PAIR64__(xmmword_140F0BED0, DWORD2(xmmword_140F0BEC0))
    || unk_140F0BEFC != DWORD1(xmmword_140F0BED0)
    || (result = DWORD2(xmmword_140F0BED0), dword_140F0BF00 != DWORD2(xmmword_140F0BED0)) )
  {
    qword_140F0BEE8 = *((_QWORD *)&xmmword_140F0BEA0 + 1);
    dword_140F0BEF0 = xmmword_140F0BEC0;
    LODWORD(qword_140F0BEF4) = DWORD2(xmmword_140F0BEC0);
    *(__int64 *)((char *)&qword_140F0BEF4 + 4) = xmmword_140F0BED0;
    word_140F0BEE5 = xmmword_140F0BEA0;
    dword_140F0BF00 = DWORD2(xmmword_140F0BED0);
    byte_140F0BEE4 = 0;
    result = ZwUpdateWnfStateData(&WNF_PO_POWER_SOURCE_STATE_CHANGE, &byte_140F0BEE4, 0x20u, 0LL, 0LL, 0, 0);
    if ( (unsigned int)dword_140E07680 > 5 )
    {
      v5 = 0;
      v1 = result;
      v4 = 4;
      v3 = &v1;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07680,
               (unsigned __int8 *)&byte_14004CD3F,
               0LL,
               0LL,
               3u,
               &v2);
    }
  }
  return result;
}

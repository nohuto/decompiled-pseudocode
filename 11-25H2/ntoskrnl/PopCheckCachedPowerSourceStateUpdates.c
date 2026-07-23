/*
 * XREFs of PopCheckCachedPowerSourceStateUpdates @ 0x14074E874
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PopCheckCachedPowerSourceStateUpdates()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+48h] [rbp-40h] BYREF
  NTSTATUS *v3; // [rsp+68h] [rbp-20h]
  int v4; // [rsp+70h] [rbp-18h]
  int v5; // [rsp+74h] [rbp-14h]

  if ( word_140F0AD05 != (_WORD)xmmword_140F0ACC0
    || qword_140F0AD08 != *((_QWORD *)&xmmword_140F0ACC0 + 1)
    || dword_140F0AD10 != (_DWORD)xmmword_140F0ACE0
    || qword_140F0AD14 != __PAIR64__(xmmword_140F0ACF0, DWORD2(xmmword_140F0ACE0))
    || unk_140F0AD1C != DWORD1(xmmword_140F0ACF0)
    || (result = DWORD2(xmmword_140F0ACF0), dword_140F0AD20 != DWORD2(xmmword_140F0ACF0)) )
  {
    qword_140F0AD08 = *((_QWORD *)&xmmword_140F0ACC0 + 1);
    dword_140F0AD10 = xmmword_140F0ACE0;
    LODWORD(qword_140F0AD14) = DWORD2(xmmword_140F0ACE0);
    *(__int64 *)((char *)&qword_140F0AD14 + 4) = xmmword_140F0ACF0;
    word_140F0AD05 = xmmword_140F0ACC0;
    dword_140F0AD20 = DWORD2(xmmword_140F0ACF0);
    byte_140F0AD04 = 0;
    result = ZwUpdateWnfStateData(&WNF_PO_POWER_SOURCE_STATE_CHANGE, &byte_140F0AD04, 0x20u, 0LL, 0LL, 0, 0);
    if ( (unsigned int)dword_140E07680 > 5 )
    {
      v5 = 0;
      v1 = result;
      v4 = 4;
      v3 = &v1;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07680,
               (unsigned __int8 *)byte_14004B6E3,
               0LL,
               0LL,
               3u,
               &v2);
    }
  }
  return result;
}

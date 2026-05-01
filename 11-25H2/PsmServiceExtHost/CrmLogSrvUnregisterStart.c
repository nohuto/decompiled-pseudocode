/*
 * XREFs of CrmLogSrvUnregisterStart @ 0x180064974
 * Callers:
 *     CrmSrvUnregister @ 0x1800646C4 (CrmSrvUnregister.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800557F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

int CrmLogSrvUnregisterStart()
{
  __int64 v0; // rax
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-48h] BYREF
  UUID *v3; // [rsp+50h] [rbp-28h]
  int v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+5Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1800E72E8 > 5 && (qword_1800E72F8 & 1) != 0 )
  {
    v0 = qword_1800E7300 & 1;
    if ( v0 == qword_1800E7300 )
    {
      v5 = 0;
      v3 = &Uuid;
      v4 = 16;
      LODWORD(v0) = tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800E72E8, byte_1800D11F1, 0LL, 0LL, 3u, &v2);
    }
  }
  return v0;
}

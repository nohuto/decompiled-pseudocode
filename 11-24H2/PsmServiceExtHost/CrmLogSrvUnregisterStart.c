/*
 * XREFs of CrmLogSrvUnregisterStart @ 0x1800648F4
 * Callers:
 *     CrmSrvUnregister @ 0x180064644 (CrmSrvUnregister.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

int CrmLogSrvUnregisterStart()
{
  __int64 v0; // rax
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-48h] BYREF
  UUID *v3; // [rsp+50h] [rbp-28h]
  int v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+5Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1800E82E8 > 5 && (qword_1800E82F8 & 1) != 0 )
  {
    v0 = qword_1800E8300 & 1;
    if ( v0 == qword_1800E8300 )
    {
      v5 = 0;
      v3 = &Uuid;
      v4 = 16;
      LODWORD(v0) = tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800E82E8, byte_1800D21F1, 0LL, 0LL, 3u, &v2);
    }
  }
  return v0;
}

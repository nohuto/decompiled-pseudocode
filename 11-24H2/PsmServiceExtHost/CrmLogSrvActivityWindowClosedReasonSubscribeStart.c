/*
 * XREFs of CrmLogSrvActivityWindowClosedReasonSubscribeStart @ 0x180030D28
 * Callers:
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x180030B30 (CrmSrvActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 CrmLogSrvActivityWindowClosedReasonSubscribeStart()
{
  __int64 result; // rax
  _BYTE v1[32]; // [rsp+30h] [rbp-48h] BYREF
  UUID *v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1800E82E8 > 5 && (qword_1800E82F8 & 1) != 0 )
  {
    result = qword_1800E8300 & 1;
    if ( result == qword_1800E8300 )
    {
      v4 = 0;
      v2 = &Uuid;
      v3 = 16;
      return tlgWriteTransfer_EventWriteTransfer(&dword_1800E82E8, &unk_1800D267C, 0LL, 0LL, 3, v1);
    }
  }
  return result;
}

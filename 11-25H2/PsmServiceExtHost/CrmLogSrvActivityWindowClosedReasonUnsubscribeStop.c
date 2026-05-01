/*
 * XREFs of CrmLogSrvActivityWindowClosedReasonUnsubscribeStop @ 0x18006B0A0
 * Callers:
 *     CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x180069748 (CrmSrvActivityWindowClosedReasonUnsubscribe.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800557F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

int __fastcall CrmLogSrvActivityWindowClosedReasonUnsubscribeStop(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  int v5; // eax
  int v7; // [rsp+30h] [rbp-59h] BYREF
  int v8; // [rsp+34h] [rbp-55h] BYREF
  int v9; // [rsp+38h] [rbp-51h] BYREF
  __int64 v10; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-39h] BYREF
  UUID *v12; // [rsp+70h] [rbp-19h]
  __int64 v13; // [rsp+78h] [rbp-11h]
  int *v14; // [rsp+80h] [rbp-9h]
  __int64 v15; // [rsp+88h] [rbp-1h]
  __int64 v16; // [rsp+90h] [rbp+7h]
  int v17; // [rsp+98h] [rbp+Fh]
  int v18; // [rsp+9Ch] [rbp+13h]
  int *v19; // [rsp+A0h] [rbp+17h]
  __int64 v20; // [rsp+A8h] [rbp+1Fh]
  __int64 *v21; // [rsp+B0h] [rbp+27h]
  __int64 v22; // [rsp+B8h] [rbp+2Fh]
  int *v23; // [rsp+C0h] [rbp+37h]
  __int64 v24; // [rsp+C8h] [rbp+3Fh]

  if ( (unsigned int)dword_1800E72E8 > 5 && (qword_1800E72F8 & 1) != 0 )
  {
    v4 = qword_1800E7300 & 1;
    if ( v4 == qword_1800E7300 )
    {
      v8 = a2;
      v12 = &Uuid;
      v7 = *(_DWORD *)(a1 + 24);
      v14 = &v7;
      v16 = a1 + 72;
      v5 = *(unsigned __int8 *)(a1 + 73);
      v10 = a3;
      v22 = 8LL;
      v9 = a4;
      v13 = 16LL;
      v17 = 4 * v5 + 8;
      v19 = &v8;
      v21 = &v10;
      v23 = &v9;
      v15 = 4LL;
      v18 = 0;
      v20 = 4LL;
      v24 = 4LL;
      LODWORD(v4) = tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800E72E8, byte_1800D16BD, 0LL, 0LL, 8u, &v11);
    }
  }
  return v4;
}

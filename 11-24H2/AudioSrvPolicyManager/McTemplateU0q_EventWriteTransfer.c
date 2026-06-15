/*
 * XREFs of McTemplateU0q_EventWriteTransfer @ 0x18004122C
 * Callers:
 *     _lambda_b2025209d5eaef5f99f9deda65cc799e_::operator() @ 0x18003DB6C (_lambda_b2025209d5eaef5f99f9deda65cc799e_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800358DC (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0q_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  int *v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  int v8; // [rsp+80h] [rbp+18h] BYREF

  v8 = a3;
  v5 = &v8;
  v7 = 0;
  v6 = 4;
  return McGenEventWrite_EventWriteTransfer(a1, &EVT_GlobalUser_Presence, a3, 2u, &v4);
}

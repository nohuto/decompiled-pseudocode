/*
 * XREFs of EtwpEventWriteGroupJoin @ 0x140899878
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x140899D60 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteGroupJoin(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v5.Ptr = *(_QWORD *)(a3 + 32) + 40LL;
  v3 = *(_QWORD *)(a3 + 40);
  v5.Reserved = 0;
  v5.Size = 16;
  v6 = v3 + 40;
  v8 = 0;
  v7 = 16;
  return EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_JOIN, 0LL, 2u, &v5);
}

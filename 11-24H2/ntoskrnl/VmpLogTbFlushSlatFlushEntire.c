/*
 * XREFs of VmpLogTbFlushSlatFlushEntire @ 0x14064A314
 * Callers:
 *     VmpFlushTb @ 0x1402A1F80 (VmpFlushTb.c)
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void VmpLogTbFlushSlatFlushEntire()
{
  __int64 v0; // r8
  __int64 v1; // r9
  int Flink; // eax
  int v3; // [rsp+20h] [rbp-88h]
  int v4; // [rsp+28h] [rbp-80h]
  int v5; // [rsp+40h] [rbp-68h] BYREF
  __int64 v6; // [rsp+48h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+50h] [rbp-58h] BYREF
  int *v8; // [rsp+70h] [rbp-38h]
  int v9; // [rsp+78h] [rbp-30h]
  int v10; // [rsp+7Ch] [rbp-2Ch]
  __int64 *v11; // [rsp+80h] [rbp-28h]
  int v12; // [rsp+88h] [rbp-20h]
  int v13; // [rsp+8Ch] [rbp-1Ch]

  if ( **(_DWORD **)&VmpTraceLoggingProvider > 5u && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 256LL) )
  {
    Flink = (int)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    v10 = 0;
    v13 = 0;
    v5 = Flink;
    v8 = &v5;
    v11 = &v6;
    v9 = 4;
    v6 = v1;
    v12 = 8;
    tlgWriteEx_EtwWriteEx(v0, (unsigned __int8 *)&byte_14005263F, v0, 0, v3, v4, 4u, &v7);
  }
}

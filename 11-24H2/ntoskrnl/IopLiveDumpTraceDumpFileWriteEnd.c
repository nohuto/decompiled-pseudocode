/*
 * XREFs of IopLiveDumpTraceDumpFileWriteEnd @ 0x14059A9C0
 * Callers:
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140594B84 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall IopLiveDumpTraceDumpFileWriteEnd(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char result; // al
  __int64 v5; // rcx
  int v6; // r8d
  _QWORD *v7; // rdx
  __int64 *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-39h] BYREF
  __int64 v12; // [rsp+28h] [rbp-31h] BYREF
  __int64 v13; // [rsp+30h] [rbp-29h] BYREF
  __int64 v14; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v15[12]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v16; // [rsp+C8h] [rbp+6Fh] BYREF
  int v17; // [rsp+D8h] [rbp+7Fh] BYREF

  v17 = a4;
  v16 = a2;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v7 = *(_QWORD **)(v5 + 560);
    v8 = LIVEDUMP_EVENT_WRITE_DUMPDATA_TO_FILE_END;
    if ( v6 )
      v8 = (__int64 *)&LIVEDUMP_EVENT_WRITE_DEFERRED_DUMPDATA_TO_FILE_END;
    if ( v17 < 0 )
    {
      v11 = 0LL;
      v10 = 0LL;
      v12 = 0LL;
      v9 = 0LL;
    }
    else
    {
      v11 = v7[500];
      v12 = v7[1028];
      v9 = v7[1029] << 12;
      v10 = v11 - v9 - v12;
    }
    v13 = v9;
    v15[0] = &v17;
    v14 = v10;
    v15[2] = &v11;
    v15[1] = 4LL;
    v15[4] = &v12;
    v15[3] = 8LL;
    v15[6] = &v13;
    v15[8] = &v14;
    v15[10] = &v16;
    v15[5] = 8LL;
    v15[7] = 8LL;
    v15[9] = 8LL;
    v15[11] = 8LL;
    return IopLiveDumpTrace(v8, 6LL, v15);
  }
  return result;
}

/*
 * XREFs of IopLiveDumpTraceInterfaceEnd @ 0x14059AAE4
 * Callers:
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 *     IoDiscardDeferredLiveDumpData @ 0x14059497C (IoDiscardDeferredLiveDumpData.c)
 *     IoWriteDeferredLiveDumpData @ 0x140594B84 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char IopLiveDumpTraceInterfaceEnd(__int64 a1, __int64 a2, int a3, ...)
{
  char result; // al
  int v4; // edx
  int *v5; // rcx
  __int64 v6; // r8
  __int64 *v7; // r9
  __int64 v8; // rax
  unsigned int v9; // ecx
  int v10; // [rsp+20h] [rbp-E0h] BYREF
  int v11; // [rsp+24h] [rbp-DCh] BYREF
  int v12; // [rsp+28h] [rbp-D8h] BYREF
  int v13; // [rsp+2Ch] [rbp-D4h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v18[26]; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+150h] [rbp+50h] BYREF
  va_list va; // [rsp+158h] [rbp+58h] BYREF

  va_start(va, a3);
  v19 = a3;
  v11 = 0;
  v10 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v12 = 0;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    if ( v4 )
    {
      v7 = LIVEDUMP_EVENT_WRITE_DEFERRED_DATA_API_END;
      if ( v4 != 1 )
        v7 = LIVEDUMP_EVENT_DISCARD_DEFERRED_DATA_API_END;
    }
    else
    {
      v7 = LIVEDUMP_EVENT_CAPTURE_API_END;
    }
    if ( v6 )
    {
      v10 = *v5;
      v14 = *((_QWORD *)v5 + 1);
      v15 = *((_QWORD *)v5 + 2);
      v16 = *((_QWORD *)v5 + 3);
      v8 = *((_QWORD *)v5 + 4);
      v9 = v5[10];
      v17 = v8;
      v11 = (v9 >> 4) & 1;
      v12 = (v9 >> 5) & 1;
    }
    v13 = (unsigned __int8)IOSpaceEnabled;
    v18[1] = 4LL;
    v18[0] = &v19;
    v18[2] = &v10;
    v18[4] = &v14;
    v18[6] = &v15;
    v18[8] = &v16;
    v18[10] = &v17;
    v18[12] = &v11;
    va_copy((va_list)&v18[14], va);
    v18[16] = &v12;
    v18[18] = v6 + 1176;
    v18[20] = v6 + 1184;
    v18[22] = v6 + 1192;
    v18[3] = 4LL;
    v18[24] = &v13;
    v18[5] = 8LL;
    v18[7] = 8LL;
    v18[9] = 8LL;
    v18[11] = 8LL;
    v18[13] = 4LL;
    v18[15] = 8LL;
    v18[17] = 4LL;
    v18[19] = 8LL;
    v18[21] = 8LL;
    v18[23] = 8LL;
    v18[25] = 4LL;
    return IopLiveDumpTrace(v7, 13LL, v18);
  }
  return result;
}

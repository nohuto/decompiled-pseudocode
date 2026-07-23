/*
 * XREFs of IopLiveDumpTraceUncorralProcessorsDuration @ 0x14059B1E4
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x14059B3A0 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char IopLiveDumpTraceUncorralProcessorsDuration(__int64 a1, ...)
{
  int v2; // eax
  _DWORD *v3; // rcx
  bool v4; // zf
  __int64 *v5; // rcx
  __int64 v7; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v12[3]; // [rsp+68h] [rbp-A0h] BYREF
  int v13; // [rsp+80h] [rbp-88h]
  int v14; // [rsp+84h] [rbp-84h]
  va_list v15; // [rsp+88h] [rbp-80h]
  int v16; // [rsp+90h] [rbp-78h]
  int v17; // [rsp+94h] [rbp-74h]
  va_list v18; // [rsp+98h] [rbp-70h]
  int v19; // [rsp+A0h] [rbp-68h]
  int v20; // [rsp+A4h] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v22; // [rsp+C8h] [rbp-40h]
  int v23; // [rsp+D0h] [rbp-38h]
  int v24; // [rsp+D4h] [rbp-34h]
  __int64 *v25; // [rsp+D8h] [rbp-30h]
  int v26; // [rsp+E0h] [rbp-28h]
  int v27; // [rsp+E4h] [rbp-24h]
  __int64 *v28; // [rsp+E8h] [rbp-20h]
  int v29; // [rsp+F0h] [rbp-18h]
  int v30; // [rsp+F4h] [rbp-14h]
  __int64 *v31; // [rsp+F8h] [rbp-10h]
  int v32; // [rsp+100h] [rbp-8h]
  int v33; // [rsp+104h] [rbp-4h]
  __int64 *v34; // [rsp+108h] [rbp+0h]
  int v35; // [rsp+110h] [rbp+8h]
  int v36; // [rsp+114h] [rbp+Ch]
  __int64 v37; // [rsp+150h] [rbp+48h] BYREF
  va_list va; // [rsp+150h] [rbp+48h]
  __int64 v39; // [rsp+158h] [rbp+50h] BYREF
  va_list va1; // [rsp+158h] [rbp+50h]
  __int64 v41; // [rsp+160h] [rbp+58h] BYREF
  va_list va2; // [rsp+160h] [rbp+58h]
  __int64 v43; // [rsp+168h] [rbp+60h] BYREF
  va_list va3; // [rsp+168h] [rbp+60h]
  va_list va4; // [rsp+170h] [rbp+68h] BYREF

  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v37 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v39 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v41 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v43 = va_arg(va4, _QWORD);
  LOBYTE(v2) = IopLiveDumpIsTracingEnabled();
  if ( (_BYTE)v2 )
  {
    if ( !v3[106] )
    {
      v2 = v3[80];
      if ( (v2 & 1) != 0 )
      {
        v14 = 0;
        v17 = 0;
        v20 = 0;
        va_copy((va_list)v12, va);
        va_copy((va_list)&v12[2], va1);
        va_copy(v15, va2);
        v12[1] = 8LL;
        va_copy(v18, va3);
        v4 = (v3[20] & 1) == 0;
        v13 = 8;
        v5 = LIVEDUMP_EVENT_SIZING_WORKFLOW_SYSTEM_QUIESCED_UNCORRAL_PROCESSORS;
        v16 = 8;
        if ( v4 )
          v5 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUIESCED_UNCORRAL_PROCESSORS;
        v19 = 8;
        LOBYTE(v2) = IopLiveDumpTrace(v5, 4LL, v12);
        if ( (unsigned int)dword_140E06E80 > 5 )
        {
          LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL);
          if ( (_BYTE)v2 )
          {
            v24 = 0;
            v27 = 0;
            v30 = 0;
            v33 = 0;
            v36 = 0;
            v22 = &v7;
            v8 = v37;
            v25 = &v8;
            v9 = v39;
            v28 = &v9;
            v10 = v41;
            v31 = &v10;
            v11 = v43;
            v34 = &v11;
            v7 = 0x1000000LL;
            v23 = 8;
            v26 = 8;
            v29 = 8;
            v32 = 8;
            v35 = 8;
            LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140E06E80,
                           (unsigned __int8 *)byte_1400463B1,
                           (const GUID *)(a1 + 968),
                           (const GUID *)(a1 + 952),
                           7u,
                           &v21);
          }
        }
      }
    }
  }
  return v2;
}

/*
 * XREFs of IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x14059AE40
 * Callers:
 *     IopLiveDumpMarkRequiredDumpData @ 0x140598F30 (IopLiveDumpMarkRequiredDumpData.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall IopLiveDumpTraceMarkRequiredDumpDataDuration(__int64 a1, __int64 a2)
{
  int v3; // eax
  _DWORD *v4; // rcx
  bool v5; // zf
  __int64 *v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-19h] BYREF
  __int64 v9; // [rsp+38h] [rbp-11h] BYREF
  __int64 *v10; // [rsp+40h] [rbp-9h] BYREF
  int v11; // [rsp+48h] [rbp-1h]
  int v12; // [rsp+4Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp+7h] BYREF
  __int64 *v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  __int64 *v17; // [rsp+80h] [rbp+37h]
  int v18; // [rsp+88h] [rbp+3Fh]
  int v19; // [rsp+8Ch] [rbp+43h]
  __int64 v20; // [rsp+B8h] [rbp+6Fh] BYREF

  v20 = a2;
  LOBYTE(v3) = IopLiveDumpIsTracingEnabled();
  if ( (_BYTE)v3 )
  {
    if ( !v4[106] )
    {
      v3 = v4[80];
      if ( (v3 & 1) != 0 )
      {
        v12 = 0;
        v10 = &v20;
        v5 = (v4[20] & 1) == 0;
        v11 = 8;
        v6 = LIVEDUMP_EVENT_SIZING_WORKFLOW_SYSTEM_QUIESCED_MARK_REQUIRED_DUMP_DATA;
        if ( v5 )
          v6 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUIESCED_MARK_REQUIRED_DUMP_DATA;
        LOBYTE(v3) = IopLiveDumpTrace(v6, 1LL, &v10);
        if ( (unsigned int)dword_140E06E80 > 5 )
        {
          LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL);
          if ( (_BYTE)v3 )
          {
            v16 = 0;
            v19 = 0;
            v14 = &v8;
            v9 = v20;
            v8 = 0x1000000LL;
            v17 = &v9;
            v15 = 8;
            v18 = 8;
            LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140E06E80,
                           (unsigned __int8 *)&word_140045C76,
                           (const GUID *)(a1 + 968),
                           (const GUID *)(a1 + 952),
                           4u,
                           &v13);
          }
        }
      }
    }
  }
  return v3;
}

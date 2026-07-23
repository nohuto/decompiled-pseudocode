/*
 * XREFs of IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14059B018
 * Callers:
 *     IopLiveDumpPopulateBitmapForDump @ 0x140599870 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall IopLiveDumpTracePopulateBitmapForDumpDuration(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  _DWORD *v5; // rcx
  bool v6; // zf
  __int64 *v7; // rcx
  __int64 v9; // [rsp+30h] [rbp-59h] BYREF
  __int64 v10; // [rsp+38h] [rbp-51h] BYREF
  __int64 v11; // [rsp+40h] [rbp-49h] BYREF
  __int64 *v12; // [rsp+48h] [rbp-41h] BYREF
  int v13; // [rsp+50h] [rbp-39h]
  int v14; // [rsp+54h] [rbp-35h]
  __int64 *v15; // [rsp+58h] [rbp-31h]
  int v16; // [rsp+60h] [rbp-29h]
  int v17; // [rsp+64h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+70h] [rbp-19h] BYREF
  __int64 *v19; // [rsp+90h] [rbp+7h]
  int v20; // [rsp+98h] [rbp+Fh]
  int v21; // [rsp+9Ch] [rbp+13h]
  __int64 *v22; // [rsp+A0h] [rbp+17h]
  int v23; // [rsp+A8h] [rbp+1Fh]
  int v24; // [rsp+ACh] [rbp+23h]
  __int64 *v25; // [rsp+B0h] [rbp+27h]
  int v26; // [rsp+B8h] [rbp+2Fh]
  int v27; // [rsp+BCh] [rbp+33h]
  __int64 v28; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v29; // [rsp+100h] [rbp+77h] BYREF

  v29 = a3;
  v28 = a2;
  LOBYTE(v4) = IopLiveDumpIsTracingEnabled();
  if ( (_BYTE)v4 )
  {
    if ( !v5[106] )
    {
      v4 = v5[80];
      if ( (v4 & 1) != 0 )
      {
        v14 = 0;
        v17 = 0;
        v12 = &v28;
        v13 = 8;
        v15 = &v29;
        v6 = (v5[20] & 1) == 0;
        v16 = 8;
        v7 = LIVEDUMP_EVENT_SIZING_WORKFLOW_SYSTEM_QUIESCED_POPULATE_BITMAP_FOR_DUMP;
        if ( v6 )
          v7 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUIESCED_POPULATE_BITMAP_FOR_DUMP;
        LOBYTE(v4) = IopLiveDumpTrace(v7, 2LL, &v12);
        if ( (unsigned int)dword_140E06E80 > 5 )
        {
          LOBYTE(v4) = tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL);
          if ( (_BYTE)v4 )
          {
            v21 = 0;
            v24 = 0;
            v27 = 0;
            v19 = &v9;
            v10 = v28;
            v22 = &v10;
            v11 = v29;
            v25 = &v11;
            v9 = 0x1000000LL;
            v20 = 8;
            v23 = 8;
            v26 = 8;
            LOBYTE(v4) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140E06E80,
                           (unsigned __int8 *)&word_140046456,
                           (const GUID *)(a1 + 968),
                           (const GUID *)(a1 + 952),
                           5u,
                           &v18);
          }
        }
      }
    }
  }
  return v4;
}

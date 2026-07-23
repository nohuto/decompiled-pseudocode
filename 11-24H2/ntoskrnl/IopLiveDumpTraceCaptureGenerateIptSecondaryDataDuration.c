/*
 * XREFs of IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x14059A3CC
 * Callers:
 *     IopLiveDumpGenerateIptSecondaryData @ 0x140597F34 (IopLiveDumpGenerateIptSecondaryData.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp-19h] BYREF
  __int64 v7; // [rsp+38h] [rbp-11h] BYREF
  __int64 *v8; // [rsp+40h] [rbp-9h] BYREF
  int v9; // [rsp+48h] [rbp-1h]
  int v10; // [rsp+4Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp+7h] BYREF
  __int64 *v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+78h] [rbp+2Fh]
  int v14; // [rsp+7Ch] [rbp+33h]
  __int64 *v15; // [rsp+80h] [rbp+37h]
  int v16; // [rsp+88h] [rbp+3Fh]
  int v17; // [rsp+8Ch] [rbp+43h]
  __int64 v18; // [rsp+B8h] [rbp+6Fh] BYREF

  v18 = a2;
  LOBYTE(v3) = IopLiveDumpIsTracingEnabled();
  if ( (_BYTE)v3 )
  {
    if ( !*(_DWORD *)(v4 + 424) )
    {
      v3 = *(_DWORD *)(v4 + 320);
      if ( (v3 & 1) != 0 )
      {
        v10 = 0;
        v8 = &v18;
        v9 = 8;
        LOBYTE(v3) = IopLiveDumpTrace(
                       LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUIESCED_GENERATE_IPT_SECONDARY_DATA,
                       1LL,
                       &v8);
        if ( (unsigned int)dword_140E06E80 > 5 )
        {
          LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL);
          if ( (_BYTE)v3 )
          {
            v14 = 0;
            v17 = 0;
            v12 = &v6;
            v7 = v18;
            v6 = 0x1000000LL;
            v15 = &v7;
            v13 = 8;
            v16 = 8;
            LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140E06E80,
                           (unsigned __int8 *)&dword_140045D24,
                           (const GUID *)(a1 + 968),
                           (const GUID *)(a1 + 952),
                           4u,
                           &v11);
          }
        }
      }
    }
  }
  return v3;
}

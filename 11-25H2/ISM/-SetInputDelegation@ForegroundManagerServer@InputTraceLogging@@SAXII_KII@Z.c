/*
 * XREFs of ?SetInputDelegation@ForegroundManagerServer@InputTraceLogging@@SAXII_KII@Z @ 0x1800B0970
 * Callers:
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800AFD6C (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AA20 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::ForegroundManagerServer::SetInputDelegation(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r10
  unsigned int v12; // [rsp+38h] [rbp-51h] BYREF
  int v13; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v14; // [rsp+40h] [rbp-49h] BYREF
  int v15; // [rsp+44h] [rbp-45h] BYREF
  __int64 v16; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+58h] [rbp-31h] BYREF
  int *v18; // [rsp+78h] [rbp-11h]
  __int64 v19; // [rsp+80h] [rbp-9h]
  int *v20; // [rsp+88h] [rbp-1h]
  __int64 v21; // [rsp+90h] [rbp+7h]
  __int64 *v22; // [rsp+98h] [rbp+Fh]
  __int64 v23; // [rsp+A0h] [rbp+17h]
  int *v24; // [rsp+A8h] [rbp+1Fh]
  __int64 v25; // [rsp+B0h] [rbp+27h]
  unsigned int *v26; // [rsp+B8h] [rbp+2Fh]
  __int64 v27; // [rsp+C0h] [rbp+37h]

  v9 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v9 > 4u && tlgKeywordOn((__int64)v9, 512LL) )
  {
    v26 = &v12;
    v12 = a5;
    v24 = &v13;
    v27 = v10;
    v22 = &v16;
    v25 = v10;
    v20 = &v14;
    v18 = &v15;
    v21 = v10;
    v19 = v10;
    v13 = a4;
    v16 = a3;
    v14 = a2;
    v15 = a1;
    v23 = 8LL;
    tlgWriteTransfer_EventWriteTransfer(v11, byte_180206042, 0LL, 0LL, 7u, &v17);
  }
}

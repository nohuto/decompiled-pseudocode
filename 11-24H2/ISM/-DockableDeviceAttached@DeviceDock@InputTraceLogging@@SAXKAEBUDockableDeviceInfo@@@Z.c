/*
 * XREFs of ?DockableDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockableDeviceInfo@@@Z @ 0x1800DE550
 * Callers:
 *     ?OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DE7F0 (-OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180011720 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AFF0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::DeviceDock::DockableDeviceAttached(int a1, const struct DockableDeviceInfo *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r10
  __int16 v6; // cx
  __int16 v7; // [rsp+30h] [rbp-49h] BYREF
  __int16 v8; // [rsp+32h] [rbp-47h] BYREF
  __int16 v9; // [rsp+34h] [rbp-45h] BYREF
  int v10; // [rsp+38h] [rbp-41h] BYREF
  __int64 v11; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-29h] BYREF
  int *v13; // [rsp+70h] [rbp-9h]
  __int64 v14; // [rsp+78h] [rbp-1h]
  __int64 *v15; // [rsp+80h] [rbp+7h]
  __int64 v16; // [rsp+88h] [rbp+Fh]
  __int16 *v17; // [rsp+90h] [rbp+17h]
  __int64 v18; // [rsp+98h] [rbp+1Fh]
  __int16 *v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  __int16 *v21; // [rsp+B0h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+3Fh]

  v4 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v4 > 4u && tlgKeywordOn((__int64)v4, 512LL) )
  {
    v6 = *((_WORD *)a2 + 787);
    v8 = *((_WORD *)a2 + 786);
    v9 = *((_WORD *)a2 + 780);
    v11 = *((_QWORD *)a2 + 194);
    v21 = &v7;
    v19 = &v8;
    v17 = &v9;
    v15 = &v11;
    v13 = &v10;
    v7 = v6;
    v10 = a1;
    v22 = 2LL;
    v20 = 2LL;
    v18 = 2LL;
    v16 = 8LL;
    v14 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(v5, byte_18021312C, 0LL, 0LL, 7u, &v12);
  }
}

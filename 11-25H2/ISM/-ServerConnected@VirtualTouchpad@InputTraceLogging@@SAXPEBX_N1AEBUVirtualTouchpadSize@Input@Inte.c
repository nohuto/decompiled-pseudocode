/*
 * XREFs of ?ServerConnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N1AEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@@Z @ 0x180134554
 * Callers:
 *     ?OnConnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180133880 (-OnConnected@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AA20 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::VirtualTouchpad::ServerConnected(
        const void *a1,
        char a2,
        char a3,
        const struct Windows::UI::Internal::Input::VirtualTouchpadSize *a4)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r10
  __int64 v10; // rcx
  char v11; // [rsp+38h] [rbp-69h] BYREF
  char v12; // [rsp+39h] [rbp-68h] BYREF
  __int64 v13; // [rsp+40h] [rbp-61h] BYREF
  __int64 v14; // [rsp+48h] [rbp-59h] BYREF
  __int64 v15; // [rsp+50h] [rbp-51h] BYREF
  const void *v16; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+68h] [rbp-39h] BYREF
  const void **v18; // [rsp+88h] [rbp-19h]
  __int64 v19; // [rsp+90h] [rbp-11h]
  char *v20; // [rsp+98h] [rbp-9h]
  __int64 v21; // [rsp+A0h] [rbp-1h]
  char *v22; // [rsp+A8h] [rbp+7h]
  __int64 v23; // [rsp+B0h] [rbp+Fh]
  __int64 *v24; // [rsp+B8h] [rbp+17h]
  __int64 v25; // [rsp+C0h] [rbp+1Fh]
  __int64 *v26; // [rsp+C8h] [rbp+27h]
  __int64 v27; // [rsp+D0h] [rbp+2Fh]
  __int64 *v28; // [rsp+D8h] [rbp+37h]
  __int64 v29; // [rsp+E0h] [rbp+3Fh]

  v8 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v8 > 4u && tlgKeywordOn((__int64)v8, 512LL) )
  {
    v10 = *((_QWORD *)a4 + 2);
    v14 = *((_QWORD *)a4 + 1);
    v15 = *(_QWORD *)a4;
    v28 = &v13;
    v26 = &v14;
    v24 = &v15;
    v22 = &v11;
    v20 = &v12;
    v18 = &v16;
    v13 = v10;
    v29 = 8LL;
    v27 = 8LL;
    v25 = 8LL;
    v19 = 8LL;
    v11 = a3;
    v12 = a2;
    v16 = a1;
    v23 = 1LL;
    v21 = 1LL;
    tlgWriteTransfer_EventWriteTransfer(v9, byte_180214370, 0LL, 0LL, 8u, &v17);
  }
}

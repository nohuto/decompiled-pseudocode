/*
 * XREFs of DllMain @ 0x18000649C
 * Callers:
 *     __DllMainCRTStartup @ 0x1800020D4 (__DllMainCRTStartup.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180001008 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000114C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18000F280 (__security_check_cookie.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  REGHANDLE v4; // rcx
  int v6; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7[2]; // [rsp+38h] [rbp-38h] BYREF
  int *v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+64h] [rbp-Ch]

  if ( fdwReason == 1 )
  {
    TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_180016038);
    if ( (unsigned int)dword_180016038 > 4 )
    {
      v10 = 0;
      v8 = &v6;
      v6 = 1;
      v9 = 4;
      tlgWriteTransfer_EventWriteTransfer((__int64)&dword_180016038, byte_1800127E9, 0LL, 0LL, 3u, v7);
    }
    DisableThreadLibraryCalls(hinstDLL);
  }
  else if ( !fdwReason )
  {
    if ( (unsigned int)dword_180016038 > 4 )
    {
      v6 = 0;
      v10 = 0;
      v8 = &v6;
      v9 = 4;
      tlgWriteTransfer_EventWriteTransfer((__int64)&dword_180016038, byte_1800127E9, 0LL, 0LL, 3u, v7);
    }
    v4 = RegHandle;
    RegHandle = 0LL;
    dword_180016038 = 0;
    EventUnregister(v4);
  }
  return 1;
}

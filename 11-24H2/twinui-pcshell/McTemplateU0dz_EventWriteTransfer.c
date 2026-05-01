/*
 * XREFs of McTemplateU0dz_EventWriteTransfer @ 0x180089EA4
 * Callers:
 *     ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x180085ED0 (-UpdateTitle@CTaskWindow@@UEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18008A004 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0dz_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)(a4 + 2 * v4) );
  }
  return McGenEventWrite_EventWriteTransfer(
           &MICROSOFT_TWINUI_PUBLISHER_Context,
           &ImmersiveShell_AppManager_WindowTitleChange,
           a3,
           3LL);
}

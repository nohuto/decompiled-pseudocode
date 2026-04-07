/*
 * XREFs of ?_HasOngoingCapture@CProjectionBorderManager@@AEAA_NPEAUHWND__@@@Z @ 0x180099064
 * Callers:
 *     ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x18008EEC0 (-UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CProjectionBorderManager::_HasOngoingCapture(CProjectionBorderManager *this, HWND a2)
{
  char v2; // bl
  struct _RTL_GENERIC_TABLE *v3; // rsi
  HWND *v5; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 432);
  RestartKey = 0LL;
  while ( 1 )
  {
    v5 = (HWND *)RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
    if ( !v5 )
      break;
    if ( v5[2] == a2 )
      return 1;
  }
  return v2;
}

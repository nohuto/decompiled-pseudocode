/*
 * XREFs of Endpoint_SM_ResetEndpoint @ 0x14002D6F4
 * Callers:
 *     ESM_ResettingEndpoint @ 0x14002D6D0 (ESM_ResettingEndpoint.c)
 * Callees:
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall Endpoint_SM_ResetEndpoint(__int64 a1)
{
  __int16 v2; // ax
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rsi
  int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // r9d
  _OWORD v10[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-28h]

  memset(v10, 0, sizeof(v10));
  v11 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v10[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v2 = -1;
  }
  else
  {
    v2 = 40;
  }
  LOWORD(v10[0]) = v2;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 280),
    v10);
  v3 = *((_QWORD *)&v10[0] + 1);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 280),
         off_14006AE88);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  memset((void *)(v4 + 16), 0, 0x60uLL);
  v6 = *(_DWORD *)(v4 + 52);
  *(_QWORD *)(v4 + 56) = Endpoint_OnResetEndpointResetCompletion;
  *(_QWORD *)(v4 + 64) = v4;
  v7 = v6 & 0xFFFF03FF | 0x3800;
  *(_DWORD *)(v4 + 52) = v7;
  *(_DWORD *)(v4 + 52) = v7 ^ (v7 ^ (*(_DWORD *)(a1 + 144) << 16)) & 0x1F0000;
  LOBYTE(v7) = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL);
  *(_QWORD *)(v4 + 88) = 0LL;
  *(_DWORD *)(v4 + 96) = 0;
  *(_DWORD *)(v4 + 100) = 0;
  *(_QWORD *)(v4 + 104) = 0LL;
  *(_BYTE *)(v4 + 55) = v7;
  v8 = *(_DWORD *)(v4 + 52) | 0x200;
  if ( (*(_BYTE *)(v3 + 32) & 1) == 0 )
    v8 = *(_DWORD *)(v4 + 52) & 0xFFFFFDFF;
  *(_DWORD *)(v4 + 52) = v8;
  return Command_SendCommand(v5, v4 + 16);
}

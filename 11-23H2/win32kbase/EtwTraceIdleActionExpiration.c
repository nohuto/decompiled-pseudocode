/*
 * XREFs of EtwTraceIdleActionExpiration @ 0x1C013A9B0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C00113C0 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     McTemplateK0qqqqh_EtwWriteTransfer @ 0x1C013D8CC (McTemplateK0qqqqh_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceIdleActionExpiration(char a1, char a2)
{
  char v4; // di
  char LastInputTime; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d

  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_1C0283068 - 1) > 2u
    && (qword_1C0283050 & 0x2000000000008000LL) != 0
    && (qword_1C0283058 & 0x2000000000008000LL) == qword_1C0283058 )
  {
    v4 = gProtocolType == 0;
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      LastInputTime = CInputGlobals::GetLastInputTime(*((CInputGlobals **)&WPP_MAIN_CB.Reserved + 1));
      v10 = (_DWORD *)SGDGetUserSessionState(v7, v6, v8, v9);
      McTemplateK0qqqqh_EtwWriteTransfer(v12, v11, v13, *v10, a1, a2, LastInputTime, v4);
    }
  }
}

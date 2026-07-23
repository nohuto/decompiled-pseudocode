/*
 * XREFs of PopDiagTraceCoolingExtensionActiveUpdate @ 0x14075415C
 * Callers:
 *     PopPropogateCoolingChange @ 0x14041BAFC (PopPropogateCoolingChange.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceCoolingExtensionActiveUpdate(__int64 a1)
{
  bool v2; // zf
  BOOL v3; // [rsp+30h] [rbp-48h] BYREF
  __int64 v4; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COOLING_EXTENSION_ACTIVE_UPDATE) )
    {
      v4 = a1;
      v2 = *(_BYTE *)(a1 + 65) == 0;
      UserData.Size = 4;
      v7 = 8;
      UserData.Reserved = 0;
      v8 = 0;
      v3 = !v2;
      UserData.Ptr = (ULONGLONG)&v3;
      v6 = &v4;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_COOLING_EXTENSION_ACTIVE_UPDATE, 0LL, 2u, &UserData);
    }
  }
}

/*
 * XREFs of PopDiagTraceCoolingExtensionPassiveUpdate @ 0x140A92C6C
 * Callers:
 *     PopPropogateCoolingChange @ 0x14041BAFC (PopPropogateCoolingChange.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceCoolingExtensionPassiveUpdate(__int64 a1)
{
  char v2; // al
  char v3; // [rsp+30h] [rbp-48h] BYREF
  __int64 v4; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COOLING_EXTENSION_PASSIVE_UPDATE) )
    {
      v2 = *(_BYTE *)(a1 + 66);
      UserData.Reserved = 0;
      v8 = 0;
      v3 = v2;
      UserData.Ptr = (ULONGLONG)&v3;
      v6 = &v4;
      v4 = a1;
      UserData.Size = 1;
      v7 = 8;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_COOLING_EXTENSION_PASSIVE_UPDATE, 0LL, 2u, &UserData);
    }
  }
}

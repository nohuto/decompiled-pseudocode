/*
 * XREFs of KsepDsEventDriverUnload @ 0x1405C8E34
 * Callers:
 *     KseDsCallbackHookDriverUnload @ 0x1405C81F0 (KseDsCallbackHookDriverUnload.c)
 *     KseDsHookDriverUntargeted @ 0x1405C85A0 (KseDsHookDriverUntargeted.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall KsepDsEventDriverUnload(__int64 a1, __int64 a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v3; // [rsp+50h] [rbp-28h]
  int v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+5Ch] [rbp-1Ch]
  __int64 v6; // [rsp+80h] [rbp+8h] BYREF
  __int64 v7; // [rsp+88h] [rbp+10h] BYREF

  v7 = a2;
  v6 = a1;
  if ( KseEtwHandle )
  {
    if ( EtwEventEnabled(KseEtwHandle, &KseDsEventDriverUnload) )
    {
      UserData.Reserved = 0;
      v5 = 0;
      UserData.Ptr = (ULONGLONG)&v6;
      UserData.Size = 8;
      v3 = &v7;
      v4 = 8;
      EtwWriteEx(KseEtwHandle, &KseDsEventDriverUnload, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}

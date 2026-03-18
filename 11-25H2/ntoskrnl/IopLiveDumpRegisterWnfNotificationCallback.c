/*
 * XREFs of IopLiveDumpRegisterWnfNotificationCallback @ 0x140599638
 * Callers:
 *     IopInitializeDumpPolicySettings @ 0x140705024 (IopInitializeDumpPolicySettings.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F84C4 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x14059F900 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExSubscribeWnfStateChange @ 0x140A139C0 (ExSubscribeWnfStateChange.c)
 */

char IopLiveDumpRegisterWnfNotificationCallback()
{
  int v0; // eax
  __int64 v2; // [rsp+30h] [rbp-50h] BYREF
  const char *v3; // [rsp+38h] [rbp-48h] BYREF
  int v4; // [rsp+40h] [rbp-40h]
  int v5; // [rsp+44h] [rbp-3Ch]
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+68h] [rbp-18h]
  int v8; // [rsp+70h] [rbp-10h]
  int v9; // [rsp+74h] [rbp-Ch]

  HIDWORD(v3) = 0;
  v0 = ExSubscribeWnfStateChange(
         (unsigned int)&v2,
         (unsigned int)&WNF_DUMP_ALLOW_LIVEDUMP_POLICY_VALUE_CHANGED,
         1,
         0,
         (__int64)IopLiveDumpPolicyChangeWnfCallback,
         0LL);
  if ( v0 < 0 )
  {
    LOBYTE(v0) = IopLiveDumpIsTracingEnabled();
    if ( (_BYTE)v0 )
    {
      v5 = 0;
      v3 = "Failed to subscribe for policy value change notification";
      v4 = 56;
      LOBYTE(v0) = IopLiveDumpTrace(LIVEDUMP_EVENT_LIVEDUMP_POLICY_OPERATION_FAILURE, 1LL, &v3);
    }
    if ( (unsigned int)dword_140E06E80 > 5 )
    {
      LOBYTE(v0) = tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL);
      if ( (_BYTE)v0 )
      {
        v9 = 0;
        v7 = &v2;
        v2 = 0x1000000LL;
        v8 = 8;
        LOBYTE(v0) = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_140E06E80,
                       (unsigned __int8 *)&dword_140045104,
                       0LL,
                       0LL,
                       3u,
                       &v6);
      }
    }
  }
  return v0;
}

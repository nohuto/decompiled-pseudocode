/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1401C5E94
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x14010090C (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ?GetRawInputBuffer@RawInput@InputTraceLogging@@SAXIH@Z @ 0x1401C5E28 (-GetRawInputBuffer@RawInput@InputTraceLogging@@SAXIH@Z.c)
 *     GreNamedEscape @ 0x14025E294 (GreNamedEscape.c)
 *     ?xxxSetAutoRotationConvertible@CRotationMgr@@QEAAXH@Z @ 0x1402709B8 (-xxxSetAutoRotationConvertible@CRotationMgr@@QEAAXH@Z.c)
 *     ?xxxSetAutoRotationDocked@CRotationMgr@@QEAAXH@Z @ 0x140270A34 (-xxxSetAutoRotationDocked@CRotationMgr@@QEAAXH@Z.c)
 *     ?xxxSetAutoRotationStateInternal@CRotationMgr@@UEAAJH@Z @ 0x140270BBC (-xxxSetAutoRotationStateInternal@CRotationMgr@@UEAAJH@Z.c)
 *     ?xxxUserReinitializeAutoRotation@CRotationMgr@@UEAAXXZ @ 0x140270D60 (-xxxUserReinitializeAutoRotation@CRotationMgr@@UEAAXXZ.c)
 *     ?ChangeSize@Cursor@InputTraceLogging@@SAXII@Z @ 0x14027109C (-ChangeSize@Cursor@InputTraceLogging@@SAXII@Z.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4FontSource@@PEBG_N@Z @ 0x14033C71C (-LogFontLoadAttempt@@YAXPEAXW4FontSource@@PEBG_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140119524 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v11 = a6;
  v12 = 4;
  v13 = 0;
  v8 = a5;
  v9 = 4;
  v10 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 4u, &v7);
}

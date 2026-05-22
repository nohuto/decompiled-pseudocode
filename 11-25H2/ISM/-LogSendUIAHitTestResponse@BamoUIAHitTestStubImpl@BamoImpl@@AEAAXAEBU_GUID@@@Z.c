/*
 * XREFs of ?LogSendUIAHitTestResponse@BamoUIAHitTestStubImpl@BamoImpl@@AEAAXAEBU_GUID@@@Z @ 0x1801AFB94
 * Callers:
 *     ?UIAHitTestResponse@BamoUIAHitTestStubImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z @ 0x1801B0050 (-UIAHitTestResponse@BamoUIAHitTestStubImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAIXZ @ 0x1800AC044 (-GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@.c)
 */

void __fastcall BamoImpl::BamoUIAHitTestStubImpl::LogSendUIAHitTestResponse(
        BamoImpl::BamoUIAHitTestStubImpl *this,
        const struct _GUID *a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  int ItemId; // eax
  int v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+34h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-9h] BYREF
  int *v9; // [rsp+60h] [rbp+17h]
  int v10; // [rsp+68h] [rbp+1Fh]
  int v11; // [rsp+6Ch] [rbp+23h]
  int *v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+78h] [rbp+2Fh]
  int v14; // [rsp+7Ch] [rbp+33h]
  const struct _GUID *v15; // [rsp+80h] [rbp+37h]
  int v16; // [rsp+88h] [rbp+3Fh]
  int v17; // [rsp+8Ch] [rbp+43h]

  v2 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(v4 + 32) + 36LL);
    ItemId = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::GetItemId((struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(v4 + 24) - 16LL));
    v17 = 0;
    v14 = 0;
    v11 = 0;
    v7 = ItemId;
    v13 = 4;
    v12 = &v6;
    v9 = &v7;
    v10 = 4;
    v15 = a2;
    v16 = 16;
    tlgWriteTransfer_EventWriteTransfer(v2, byte_18021D0A2, 0LL, 0LL, 5u, &v8);
  }
}

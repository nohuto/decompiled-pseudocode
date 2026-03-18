/*
 * XREFs of ?DxgkHandleDiagnosticProgressions@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z @ 0x140070CA0
 * Callers:
 *     DxgkCbReportDiagnostic @ 0x140070F20 (DxgkCbReportDiagnostic.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x140003464 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 */

__int64 __fastcall DxgkHandleDiagnosticProgressions(struct _DXGK_DIAGNOSTIC_HEADER *a1)
{
  struct _DXGK_DIAGTYPE_NOTIFICATIONS::$EE9FAAAC0299860A305CE449C3A398B9::$A67C43EDC5653656E5CF08E8C2BCA5A3 Value; // eax
  __int64 v3; // rax
  const wchar_t *v4; // r9
  struct _DXGK_DIAGNOSTIC_HEADER::$09C6252679EB7C7BF0B7CC5E744C86DA::$FF47BB92492B9E237D26C816A8818E09 v6; // ecx
  __int64 v7; // rdx
  char v8; // r10
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-30h]
  char v14; // [rsp+70h] [rbp+20h] BYREF
  D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId; // [rsp+78h] [rbp+28h] BYREF
  UINT SequenceNumber; // [rsp+80h] [rbp+30h] BYREF
  int v17; // [rsp+88h] [rbp+38h] BYREF

  Value = (struct _DXGK_DIAGTYPE_NOTIFICATIONS::$EE9FAAAC0299860A305CE449C3A398B9::$A67C43EDC5653656E5CF08E8C2BCA5A3)a1->Type.Notifications.Value;
  if ( *(unsigned int *)&Value >= 2 )
  {
    WdLogSingleEntry1(2LL, *(unsigned int *)&Value);
    v3 = a1->Type.Notifications.Value;
    v4 = L"Progressions category diagnostic reported with undefined diagnostic type 0x%I64x. (%d)";
    WdLogGlobalForLineNumber = 652;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v4, v3, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( (*(_BYTE *)&Value & 1) == 0 )
    return 3221225485LL;
  v6 = (struct _DXGK_DIAGNOSTIC_HEADER::$09C6252679EB7C7BF0B7CC5E744C86DA::$FF47BB92492B9E237D26C816A8818E09)a1->Value;
  if ( *(_WORD *)&v6 < 0x18u )
  {
    WdLogSingleEntry2(2LL, *(_WORD *)&v6, 24LL);
    v13 = (unsigned __int16)*(_DWORD *)&a1->0;
    WdLogGlobalForLineNumber = 661;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"SyncLock Resync diagnostic reported with incorrect size 0x%I64x, should be at least 0x%I64x. (%d)",
      v13,
      24LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (((unsigned __int8)*(_DWORD *)&a1[1].Category.0 ^ (unsigned __int8)(a1[1].Category.Value >> 1)) & 2) == 0 )
  {
    WdLogSingleEntry0(2LL);
    v3 = 668LL;
    v4 = L"Driver should set either EnableSyncStart or EnableSyncEnd in SyncLock Resync diagnostic reported. (%d)";
    WdLogGlobalForLineNumber = 668;
    goto LABEL_3;
  }
  if ( (unsigned int)dword_14015B548 > 4 && tlgKeywordOn((__int64)&dword_14015B548, 1LL) )
  {
    if ( (v8 & 1) != 0 )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_14015B548 <= 4 || !tlgKeywordOn((__int64)&dword_14015B548, 1LL) )
        return 0LL;
      v12 = &unk_14013A13B;
      v14 = *(_BYTE *)&a1[1].Category.0 & 1;
      goto LABEL_18;
    }
    if ( tlgKeywordOn((__int64)&dword_14015B548, v7) )
    {
      LOBYTE(v11) = v11 & 1;
      v12 = &unk_14013A187;
      v14 = v11;
LABEL_18:
      TargetId = a1->TargetId;
      SequenceNumber = a1->SequenceNumber;
      v17 = 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v9,
        (__int64)v12,
        v10,
        v11,
        (__int64)&v17,
        (__int64)&SequenceNumber,
        (__int64)&TargetId,
        (__int64)&v14);
    }
  }
  return 0LL;
}

/*
 * XREFs of CmpLogUnsupportedOperation @ 0x14097AB10
 * Callers:
 *     CmRestoreKey @ 0x1407CCF24 (CmRestoreKey.c)
 *     CmSaveKey @ 0x1407CDBFC (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407CE060 (CmSaveMergedKeys.c)
 *     NtCompactKeys @ 0x1407CF750 (NtCompactKeys.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpCreateChild @ 0x14091788C (CmpCreateChild.c)
 *     CmpPerformUnloadKey @ 0x14097B52C (CmpPerformUnloadKey.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x1407E149C (CmpSendUnsupportedOperationTelemetryEvent.c)
 */

void __fastcall CmpLogUnsupportedOperation(int a1)
{
  int v2; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( _InterlockedIncrement(&CmpUnsupportedOperationHits[a1]) == 0x7FFFFFFF
    && _InterlockedExchange(&CmpUnsupportedOperationHits[a1], 0) )
  {
    CmpSendUnsupportedOperationTelemetryEvent();
  }
  if ( (unsigned int)dword_140E09EE8 > 5 )
  {
    v6 = 0;
    v4 = &v2;
    v2 = a1;
    v5 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)&word_140055946, 0LL, 0LL, 3u, &v3);
  }
}

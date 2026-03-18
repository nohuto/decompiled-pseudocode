/*
 * XREFs of CmpLogUnsupportedOperation @ 0x140863D74
 * Callers:
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmSaveKey @ 0x1407BE3E4 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407BE848 (CmSaveMergedKeys.c)
 *     NtCompactKeys @ 0x1407C0060 (NtCompactKeys.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x1407D1BBC (CmpSendUnsupportedOperationTelemetryEvent.c)
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
  if ( (unsigned int)dword_140E09E08 > 5 )
  {
    v6 = 0;
    v4 = &v2;
    v2 = a1;
    v5 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09E08, (unsigned __int8 *)word_1400544CA, 0LL, 0LL, 3u, &v3);
  }
}

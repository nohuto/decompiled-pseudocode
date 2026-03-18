/*
 * XREFs of Bulk_ValidateED0TrbPointerOnMismatch @ 0x14004D17C
 * Callers:
 *     Bulk_ProcessTransferEventWithED0 @ 0x1400038CC (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     Endpoint_StoppedCompletionCode @ 0x140003FA0 (Endpoint_StoppedCompletionCode.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDDi @ 0x140035EC8 (WPP_RECORDER_SF_DDDi.c)
 *     Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x14004D07C (Bulk_IsTransferEventLikelyDuplicate_Internal.c)
 */

_UNKNOWN **__fastcall Bulk_ValidateED0TrbPointerOnMismatch(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  _UNKNOWN **result; // rax
  unsigned __int16 v7; // r9
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // [rsp+20h] [rbp-38h]
  char v11; // [rsp+68h] [rbp+10h] BYREF

  v11 = 0;
  if ( Bulk_IsTransferEventLikelyDuplicate_Internal(a1, *(_QWORD *)a2, &v11) )
  {
    v5 = *(_QWORD *)(a1[5] + 736LL);
    if ( (v5 & 0x4000000000LL) != 0 )
    {
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return result;
      v7 = 45;
      v8 = *(_QWORD *)(a1[7] + 80LL);
      return (_UNKNOWN **)WPP_RECORDER_SF_DDDi(v8, 3u, v4, v7, v10);
    }
    if ( v11 )
    {
      if ( (v5 & 0x2000000000000LL) != 0 && *(_DWORD *)(a1[6] + 20LL) == 3 )
      {
        v4 = a1[7];
        if ( *(_DWORD *)(v4 + 128) == 6 && Endpoint_StoppedCompletionCode(*(unsigned __int8 *)(a2 + 11)) )
        {
          result = &WPP_RECORDER_INITIALIZED;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return result;
          v7 = 46;
          v8 = *(_QWORD *)(v4 + 80);
          return (_UNKNOWN **)WPP_RECORDER_SF_DDDi(v8, 3u, v4, v7, v10);
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDi(*(_QWORD *)(a1[7] + 80LL), 2u, v4, 0x2Fu, v10);
    v9 = 4128;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDi(*(_QWORD *)(a1[7] + 80LL), 2u, v4, 0x30u, v10);
    v9 = 4127;
  }
  return (_UNKNOWN **)Controller_ReportFatalError(a1[5], 2, v9, 0, a1[6], a1[7], (__int64)a1);
}

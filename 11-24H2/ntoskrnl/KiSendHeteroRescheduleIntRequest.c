/*
 * XREFs of KiSendHeteroRescheduleIntRequest @ 0x1402A5E60
 * Callers:
 *     KiIdleSchedule @ 0x1402A5920 (KiIdleSchedule.c)
 *     KiSwapThread @ 0x1402D60C0 (KiSwapThread.c)
 *     KiUnparkCurrentProcessor @ 0x1403D7B98 (KiUnparkCurrentProcessor.c)
 * Callees:
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402A5F4C (KiSendHeteroRescheduleIntRequestHelper.c)
 */

__int64 __fastcall KiSendHeteroRescheduleIntRequest(_QWORD *a1)
{
  __int64 v1; // r9
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1[24];
  result = *(_QWORD *)(v1 + 24);
  if ( (result & a1[4556]) != 0 )
  {
    v4 = a1[25];
    v5 = *(unsigned __int8 *)(v1 + 185);
    v11 = 0LL;
    v6 = *(_QWORD *)(*(_QWORD *)(v1 + 192) + 24 * v5 + 8) & *(_QWORD *)(*(_QWORD *)(v1 + 192) + 24 * v5 + 16);
    result = *(_QWORD *)(v1 + 8);
    if ( (v4 & result) != 0 && (v6 & v4) != 0 )
    {
      v7 = ~*(_QWORD *)(v1 + 16);
      v8 = (*(_QWORD *)(v1 + 128) ^ v6) & (*(_QWORD *)(v1 + 80) | *(_QWORD *)(v1 + 96));
      v10 = 0LL;
      result = KiSendHeteroRescheduleIntRequestHelper(v7 & v8, &v11, &v10, a1);
      if ( (_BYTE)result )
      {
        v9 = v10;
        result = KiSendHeteroRescheduleIntRequestHelper(*(_QWORD *)(v10 + 200), 0LL, 0LL, a1);
        if ( !(_BYTE)result )
          return KiSendHeteroRescheduleIntRequestHelper(*(_QWORD *)(v9 + 200) ^ v11, 0LL, 0LL, a1);
      }
    }
  }
  return result;
}

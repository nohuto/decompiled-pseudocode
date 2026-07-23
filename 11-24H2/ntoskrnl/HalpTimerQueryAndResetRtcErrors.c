/*
 * XREFs of HalpTimerQueryAndResetRtcErrors @ 0x1404C93E0
 * Callers:
 *     HalpTimerInitSystem @ 0x1405387E0 (HalpTimerInitSystem.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HalpTimerQueryAndResetRtcErrors(char a1, char a2)
{
  __int32 v2; // ebx
  __int64 v3; // r8
  unsigned __int8 *v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  int v8; // [rsp+20h] [rbp-60h]
  int v9; // [rsp+28h] [rbp-58h]
  __int32 v10; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11[2]; // [rsp+48h] [rbp-38h] BYREF
  __int32 *v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+70h] [rbp-10h]

  v2 = _InterlockedExchange(&HalpTimerRtcErrorCode, 0);
  if ( a2 )
  {
    if ( (unsigned int)dword_140E03B08 <= 5 || !tlgKeywordOn((__int64)&dword_140E03B08, 0x200000000000LL) )
      goto LABEL_14;
    v4 = (unsigned __int8 *)byte_1400431C5;
LABEL_13:
    v12 = &v10;
    v10 = v2;
    v13 = 4LL;
    tlgWriteEx_EtwWriteEx((__int64)&dword_140E03B08, v4, v3, 1u, v8, v9, 3u, v11);
LABEL_14:
    v6 = 31;
    return v2 & (unsigned int)v6;
  }
  if ( !a1 )
  {
    if ( (unsigned int)dword_140E03B08 <= 5 || !tlgKeywordOn((__int64)&dword_140E03B08, 0x400000000000LL) )
      goto LABEL_14;
    v4 = (unsigned __int8 *)&word_14004318A;
    goto LABEL_13;
  }
  if ( (unsigned int)dword_140E03B08 > 5 && tlgKeywordOn((__int64)&dword_140E03B08, 0x400000000000LL) )
  {
    v10 = v2;
    v12 = &v10;
    v13 = 4LL;
    tlgWriteEx_EtwWriteEx((__int64)&dword_140E03B08, (unsigned __int8 *)&byte_140043150, v5, 1u, v8, v9, 3u, v11);
  }
  v6 = 9;
  return v2 & (unsigned int)v6;
}

/*
 * XREFs of HalpCheckSratMemoryRanges @ 0x1405551D0
 * Callers:
 *     HalpNumaAddRangeProximity @ 0x1405553C0 (HalpNumaAddRangeProximity.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall HalpCheckSratMemoryRanges(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned int i; // edx
  char result; // al
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  unsigned __int8 *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG v10; // [rsp+20h] [rbp-49h]
  __int64 v11; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+38h] [rbp-31h] BYREF
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  __int64 v14; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  __int64 *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]
  __int64 *v20; // [rsp+90h] [rbp+27h]
  __int64 v21; // [rsp+98h] [rbp+2Fh]
  __int64 *v22; // [rsp+A0h] [rbp+37h]
  __int64 v23; // [rsp+A8h] [rbp+3Fh]

  v1 = 0LL;
  for ( i = 0; ; ++i )
  {
    result = HalpNumaSratMemoryRangeCount;
    if ( i >= (unsigned int)HalpNumaSratMemoryRangeCount )
      break;
    result = (char)HalpNumaSratMemoryRanges;
    if ( a1 > v1 && a1 < *((_QWORD *)HalpNumaSratMemoryRanges + 3 * i + 1) )
    {
      if ( (unsigned int)dword_140E03B08 > 5 )
      {
        result = tlgKeywordOn((__int64)&dword_140E03B08, 0x400000000000LL);
        if ( result )
        {
          v14 = v4;
          v18 = &v11;
          v16 = &v14;
          v20 = &v12;
          v22 = &v13;
          v7 = (unsigned __int8 *)&dword_1400433AC;
          v11 = v5;
          v12 = v6;
          v13 = 0x1000000LL;
          v23 = 8LL;
          v10 = 6;
LABEL_14:
          v17 = 8LL;
          v19 = 8LL;
          v21 = 8LL;
          return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E03B08, v7, 0LL, 0LL, v10, &v15);
        }
      }
      return result;
    }
    v1 = *((_QWORD *)HalpNumaSratMemoryRanges + 3 * i + 2);
  }
  if ( (_DWORD)HalpNumaSratMemoryRangeCount )
  {
    if ( a1 > v1 && (unsigned int)dword_140E03B08 > 5 )
    {
      result = tlgKeywordOn((__int64)&dword_140E03B08, 0x400000000000LL);
      if ( result )
      {
        v13 = v9;
        v16 = &v13;
        v18 = &v12;
        v10 = 5;
        v7 = (unsigned __int8 *)byte_14004334D;
        v12 = v8;
        v11 = 0x1000000LL;
        v20 = &v11;
        goto LABEL_14;
      }
    }
  }
  return result;
}

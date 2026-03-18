/*
 * XREFs of PopDiagTraceSleepReliabilityDiagConfigUpdate @ 0x1406ED708
 * Callers:
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void PopDiagTraceSleepReliabilityDiagConfigUpdate()
{
  char v0; // r8
  char v1; // [rsp+30h] [rbp-68h] BYREF
  __int64 v2; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+40h] [rbp-58h] BYREF
  char *v4; // [rsp+60h] [rbp-38h]
  int v5; // [rsp+68h] [rbp-30h]
  int v6; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
  {
    v6 = 0;
    v9 = 0;
    v4 = &v1;
    v1 = v0;
    v7 = &v2;
    v5 = 1;
    v2 = 0x1000000LL;
    v8 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_14004AC83, 0LL, 0LL, 4u, &v3);
  }
}

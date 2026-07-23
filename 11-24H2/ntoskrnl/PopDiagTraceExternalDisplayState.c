/*
 * XREFs of PopDiagTraceExternalDisplayState @ 0x1407546A0
 * Callers:
 *     PopWnfUsb4DisplayPresenceCallback @ 0x1407585D0 (PopWnfUsb4DisplayPresenceCallback.c)
 *     PopUpdateExternalDisplayStateV1 @ 0x14075EA00 (PopUpdateExternalDisplayStateV1.c)
 *     PopUpdateExternalDisplayState @ 0x140AC8ECC (PopUpdateExternalDisplayState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x1405CA3E4 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceExternalDisplayState(char a1, char a2)
{
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int8 *v5; // rdx
  ULONG v7; // [rsp+20h] [rbp-29h]
  char v8; // [rsp+30h] [rbp-19h] BYREF
  char v9; // [rsp+31h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-9h] BYREF
  char *v12; // [rsp+60h] [rbp+17h]
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  char *v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  __int64 *v16; // [rsp+80h] [rbp+37h]
  __int64 v17; // [rsp+88h] [rbp+3Fh]

  IsEnabledDeviceUsageNoInline = Feature_NU4MP__private_IsEnabledDeviceUsageNoInline();
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( (unsigned int)dword_140E07680 > 5 )
    {
      LOBYTE(IsEnabledDeviceUsageNoInline) = tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL);
      if ( (_BYTE)IsEnabledDeviceUsageNoInline )
      {
        v9 = a1;
        v12 = &v9;
        v5 = (unsigned __int8 *)byte_140049DA9;
        v8 = a2;
        v14 = &v8;
        v16 = &v10;
        v7 = 5;
        v15 = 1LL;
        v10 = 0x1000000LL;
        v17 = 8LL;
LABEL_7:
        v13 = 1LL;
        LOBYTE(IsEnabledDeviceUsageNoInline) = tlgWriteTransfer_EtwWriteTransfer(
                                                 (__int64)&dword_140E07680,
                                                 v5,
                                                 0LL,
                                                 0LL,
                                                 v7,
                                                 &v11);
      }
    }
  }
  else if ( (unsigned int)dword_140E07680 > 5 )
  {
    v8 = a1;
    v12 = &v8;
    v5 = (unsigned __int8 *)word_140049E12;
    v7 = 3;
    goto LABEL_7;
  }
  return IsEnabledDeviceUsageNoInline;
}

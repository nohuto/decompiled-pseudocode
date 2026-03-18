/*
 * XREFs of TR_ValidateSecureTransferType @ 0x140023D80
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x14001ADD0 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDi @ 0x1400370AC (WPP_RECORDER_SF_DDi.c)
 *     Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage @ 0x14004B73C (Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage.c)
 */

__int64 __fastcall TR_ValidateSecureTransferType(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  char v3; // di
  int v5; // edx
  int v7; // r8d
  int v8; // edx
  char v9; // [rsp+38h] [rbp-10h]

  v2 = 0;
  v3 = a2;
  if ( *(_WORD *)(a2 + 2) != 56 )
  {
    switch ( *(_WORD *)(a2 + 2) )
    {
      case '9':
      case ':':
        if ( !*(_BYTE *)(a1 + 288) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v9 = a2;
            v5 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v5) = 2;
            WPP_RECORDER_SF_DDi(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v5,
              0,
              30,
              (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              v9);
          }
          return 3221225485LL;
        }
        if ( !*(_BYTE *)(*(_QWORD *)(a1 + 48) + 672LL) )
        {
          Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage(0x140000000uLL, a2, 0LL);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v8 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v8) = 2;
            WPP_RECORDER_SF_DDi(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v8,
              v7,
              31,
              (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              v3);
          }
          v2 = -1073741790;
        }
        break;
      default:
        return v2;
    }
  }
  return v2;
}

/*
 * XREFs of ValidateAcpi2PStates @ 0x14002EFCC
 * Callers:
 *     InitAcpiPerfStates @ 0x1400372A4 (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_Sd @ 0x1400072FC (WPP_RECORDER_SF_Sd.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     ValidatePssCore @ 0x1400314A0 (ValidatePssCore.c)
 *     Validate_PCT_PTC @ 0x14003187C (Validate_PCT_PTC.c)
 */

__int64 __fastcall ValidateAcpi2PStates(__int64 a1, __int64 a2, const wchar_t *a3, _DWORD *a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // r8
  unsigned __int16 v11; // r9
  int v13; // [rsp+30h] [rbp-18h]

  v9 = ValidatePssCore(a2, "_PSS");
  if ( v9 >= 0 )
  {
    v9 = Validate_PCT_PTC(a1);
    if ( v9 < 0 )
    {
      *a4 |= 0x20u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v9;
      v11 = 13;
      goto LABEL_4;
    }
    if ( !qword_140014780 )
      return 0;
    v9 = qword_140014780(a1, a2, a4);
    if ( v9 >= 0 )
      return 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 14;
      goto LABEL_4;
    }
  }
  else
  {
    *a4 |= 0x40u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 12;
LABEL_4:
      v13 = v9;
      WPP_RECORDER_SF_Sd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v8,
        v10,
        v11,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
        a3,
        v13);
    }
  }
  return (unsigned int)v9;
}

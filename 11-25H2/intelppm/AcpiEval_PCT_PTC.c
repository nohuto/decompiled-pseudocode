/*
 * XREFs of AcpiEval_PCT_PTC @ 0x1400279B4
 * Callers:
 *     InitAcpiPerfStates @ 0x140027628 (InitAcpiPerfStates.c)
 *     InitAcpi3ThrottleStates @ 0x140039098 (InitAcpi3ThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x140003B94 (WPP_RECORDER_SF_s.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     AcpiTranslateAccessSize @ 0x140033D48 (AcpiTranslateAccessSize.c)
 *     AcpiParseCore @ 0x14003F8A0 (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x140044948 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PCT_PTC(__int64 a1, int a2, __int64 a3)
{
  unsigned int v4; // eax
  int v6; // eax
  PVOID v7; // rsi
  int v8; // ebx
  char v10[8]; // [rsp+40h] [rbp-39h] BYREF
  int v11; // [rsp+48h] [rbp-31h] BYREF
  PVOID P; // [rsp+50h] [rbp-29h] BYREF
  char v13; // [rsp+58h] [rbp-21h] BYREF
  int v14; // [rsp+5Ah] [rbp-1Fh]
  const char *v15; // [rsp+60h] [rbp-19h]
  __int64 (__fastcall *v16)(); // [rsp+68h] [rbp-11h]
  char v17; // [rsp+70h] [rbp-9h]
  int v18; // [rsp+72h] [rbp-7h]
  const char *v19; // [rsp+78h] [rbp-1h]
  __int64 (__fastcall *v20)(); // [rsp+80h] [rbp+7h]
  int v21; // [rsp+88h] [rbp+Fh] BYREF
  char v22; // [rsp+8Ch] [rbp+13h]

  *(_DWORD *)v10 = a2;
  v11 = 0;
  v15 = "Control";
  v13 = 0;
  v16 = AcpiParseRegister;
  v19 = "Status";
  v20 = AcpiParseRegister;
  v4 = 32;
  v14 = 2;
  v17 = 1;
  if ( a2 != 1413697631 )
    v4 = 1024;
  v18 = 786434;
  v21 = a2;
  v22 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), v4);
  v6 = AcpiEvaluateMethod(a1, *(_DWORD *)v10, 0, (unsigned int)&P, (__int64)&v11);
  v7 = P;
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( v11 )
    {
      v8 = AcpiParseCore((unsigned int)&v13, 2, (int)P + 12, *((_DWORD *)P + 1) - 12, a3, 24, (__int64)&v21, 0);
      if ( v8 >= 0 )
      {
        AcpiTranslateAccessSize(a3);
        AcpiTranslateAccessSize(a3 + 12);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x13u,
          (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
          (const char *)&v21);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x12u,
          (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
          v10);
      v8 = -1073741275;
    }
  }
  if ( v7 )
    ExFreePoolWithTag(v7, (ULONG)0);
  if ( v8 < 0 )
  {
    if ( *(_DWORD *)v10 == 1413697631 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x20u);
    else
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x400u);
  }
  return (unsigned int)v8;
}

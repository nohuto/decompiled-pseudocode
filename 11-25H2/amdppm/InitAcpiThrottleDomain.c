/*
 * XREFs of InitAcpiThrottleDomain @ 0x140036CB4
 * Callers:
 *     InitAcpiProcessorDomains @ 0x140036B8C (InitAcpiProcessorDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     AcpiEval_PSD_TSD @ 0x140028B84 (AcpiEval_PSD_TSD.c)
 *     Display_xSD @ 0x14002CDEC (Display_xSD.c)
 *     ValidateAcpi_PSD_TSD @ 0x14002F97C (ValidateAcpi_PSD_TSD.c)
 */

__int64 __fastcall InitAcpiThrottleDomain(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // ebx
  unsigned int *v5; // rdi
  int v6; // edx
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+28h] [rbp-10h]
  unsigned int *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = AcpiEval_PSD_TSD(a1, 1146311775, &v10);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = v10;
    v4 = ValidateAcpi_PSD_TSD(v10, 0, *(const wchar_t **)(a1 + 64));
    if ( v4 >= 0 )
    {
      v4 = 0;
      Display_xSD(v5, "_TSD");
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x2000u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = v4;
        LOBYTE(v6) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v6,
          3,
          18,
          (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids,
          v9);
      }
      v5 = v10;
    }
  }
  else
  {
    v5 = 0LL;
    if ( v2 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v3,
          2,
          16,
          (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = v2;
      LOBYTE(v3) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        3,
        17,
        (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids,
        v8);
    }
  }
  *(_QWORD *)(a1 + 520) = v5;
  return (unsigned int)v4;
}

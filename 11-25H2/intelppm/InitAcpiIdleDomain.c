/*
 * XREFs of InitAcpiIdleDomain @ 0x14003ED7C
 * Callers:
 *     InitAcpiProcessorDomains @ 0x140029CA8 (InitAcpiProcessorDomains.c)
 *     AcpiCStateNotifyWorker @ 0x14003E9A0 (AcpiCStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     ValidateAcpiIdleDomain @ 0x140027CB4 (ValidateAcpiIdleDomain.c)
 *     Display_CSD @ 0x140028A34 (Display_CSD.c)
 *     AcpiEval_CSD @ 0x14003EEEC (AcpiEval_CSD.c)
 */

__int64 __fastcall InitAcpiIdleDomain(__int64 a1, unsigned int **a2, __int64 a3)
{
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  __int64 v10; // rdx
  unsigned int *v11; // rsi
  int v12; // eax
  unsigned int *v13; // rcx
  unsigned int *v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  v6 = AcpiEval_CSD(a1, &v14);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v10 = a3;
    v11 = v14;
    v12 = ValidateAcpiIdleDomain(v14, v10, *(const wchar_t **)(a1 + 64));
    v8 = v12;
    if ( v12 < 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x10u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0xCu,
          (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids,
          v12);
      v13 = v14;
    }
    else
    {
      v8 = 0;
      Display_CSD(v11);
      v13 = 0LL;
      *a2 = v11;
    }
    if ( v13 )
      ExFreePoolWithTag(v13, (ULONG)0);
  }
  else if ( v6 == -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        2,
        10,
        (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids,
      v6);
  }
  return v8;
}

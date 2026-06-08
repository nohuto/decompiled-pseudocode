/*
 * XREFs of InitAcpiIdleDomain @ 0x1400368CC
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1400272B0 (AcpiCStateNotifyWorker.c)
 *     InitAcpiProcessorDomains @ 0x140036B8C (InitAcpiProcessorDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     AcpiEval_CSD @ 0x140027CB0 (AcpiEval_CSD.c)
 *     Display_CSD @ 0x14002BCE4 (Display_CSD.c)
 *     ValidateAcpiIdleDomain @ 0x14002F650 (ValidateAcpiIdleDomain.c)
 */

__int64 __fastcall InitAcpiIdleDomain(__int64 a1, unsigned int **a2, __int64 a3)
{
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int *v10; // rsi
  int v11; // eax
  int v12; // edx
  unsigned int *v13; // rcx
  unsigned int *v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = 0LL;
  v6 = AcpiEval_CSD(a1, &v15);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = a3;
    v10 = v15;
    v11 = ValidateAcpiIdleDomain(v15, v9, *(const wchar_t **)(a1 + 64));
    v8 = v11;
    if ( v11 >= 0 )
    {
      v8 = 0;
      Display_CSD(v10);
      v13 = 0LL;
      *a2 = v10;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x10u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          3,
          12,
          (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids,
          v11);
      }
      v13 = v15;
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
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      3,
      11,
      (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids,
      v6);
  }
  return v8;
}

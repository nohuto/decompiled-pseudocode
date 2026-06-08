/*
 * XREFs of AcpiEval_TPC @ 0x1400444F4
 * Callers:
 *     ProcLibOnD0StateChangeWorker @ 0x140004DE0 (ProcLibOnD0StateChangeWorker.c)
 *     AcpiTStateNotifyWorker @ 0x140033BF0 (AcpiTStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1400408BC (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     AcpiEvaluateMethod @ 0x140044948 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_TPC(__int64 a1, unsigned int *a2)
{
  int v4; // edx
  int v5; // ebx
  PVOID v6; // rdi
  int v7; // r9d
  unsigned int v8; // edx
  unsigned int v9; // eax
  int v11; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x1000u);
  v5 = AcpiEvaluateMethod(a1, 1129337951, 0, (unsigned int)&P, (__int64)&v11);
  if ( v5 < 0 )
  {
LABEL_19:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x1000u);
    return (unsigned int)v5;
  }
  v6 = P;
  if ( !v11 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_6:
      v5 = -1073741275;
      goto LABEL_16;
    }
    v7 = 39;
LABEL_5:
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      1,
      v7,
      (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
    goto LABEL_6;
  }
  if ( *((_DWORD *)P + 2) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x28u,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
        *((_DWORD *)P + 2));
    goto LABEL_6;
  }
  if ( *((_WORD *)P + 6) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_6;
    v7 = 41;
    goto LABEL_5;
  }
  v5 = 0;
  v8 = **(_DWORD **)(a1 + 504);
  v9 = v8 - 1;
  if ( *((_DWORD *)P + 4) < v8 )
    v9 = *((_DWORD *)P + 4);
  *a2 = v9;
LABEL_16:
  if ( v6 )
    ExFreePoolWithTag(v6, (ULONG)0);
  if ( v5 < 0 )
    goto LABEL_19;
  return (unsigned int)v5;
}

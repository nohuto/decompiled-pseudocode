/*
 * XREFs of AcpiEval_PPC @ 0x1400447C8
 * Callers:
 *     ProcLibOnD0StateChangeWorker @ 0x140004DE0 (ProcLibOnD0StateChangeWorker.c)
 *     ProcLibDeviceStart @ 0x1400408BC (ProcLibDeviceStart.c)
 *     AcpiPStateNotifyWorker @ 0x140044660 (AcpiPStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     AcpiEvaluateMethod @ 0x140044948 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PPC(__int64 a1, unsigned int *a2)
{
  int v4; // eax
  int v5; // edx
  PVOID v6; // rsi
  int v7; // ebx
  unsigned int *v8; // rdx
  unsigned int v9; // edx
  unsigned int v10; // eax
  int v12; // r9d
  int v13; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x100u);
  v4 = AcpiEvaluateMethod(a1, 1129336927, 0, (unsigned int)&P, (__int64)&v13);
  v6 = P;
  v7 = v4;
  if ( v4 < 0 )
    goto LABEL_10;
  if ( !v13 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_18;
    v12 = 33;
    goto LABEL_21;
  }
  if ( *((_DWORD *)P + 2) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x22u,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
        *((_DWORD *)P + 2));
    goto LABEL_18;
  }
  if ( *((_WORD *)P + 6) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_18:
      v7 = -1073741275;
      goto LABEL_10;
    }
    v12 = 35;
LABEL_21:
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1,
      v12,
      (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x40000000) != 0 )
    v8 = *(unsigned int **)(a1 + 456);
  else
    v8 = *(unsigned int **)(a1 + 448);
  v9 = *v8;
  v7 = 0;
  v10 = v9 - 1;
  if ( *((_DWORD *)P + 4) < v9 )
    v10 = *((_DWORD *)P + 4);
  *a2 = v10;
LABEL_10:
  if ( v6 )
    ExFreePoolWithTag(v6, (ULONG)0);
  if ( v7 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x100u);
  return (unsigned int)v7;
}

/*
 * XREFs of AcpiEval_PPC @ 0x14003FE44
 * Callers:
 *     ProcLibOnD0StateChangeWorker @ 0x1400037C0 (ProcLibOnD0StateChangeWorker.c)
 *     ProcLibDeviceStart @ 0x14002DBF4 (ProcLibDeviceStart.c)
 *     AcpiPStateNotifyWorker @ 0x14003FBF0 (AcpiPStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     AcpiEvaluateMethod @ 0x14003FFB8 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PPC(__int64 a1, unsigned int *a2)
{
  int v4; // eax
  int v5; // edx
  PVOID v6; // rsi
  int v7; // ebx
  int v8; // r9d
  unsigned int *v9; // rdx
  unsigned int v10; // edx
  unsigned int v11; // eax
  int v13; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x100u);
  v4 = AcpiEvaluateMethod(a1, 1129336927, 0, (unsigned int)&P, (__int64)&v13);
  v6 = P;
  v7 = v4;
  if ( v4 >= 0 )
  {
    if ( !v13 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_6:
        v7 = -1073741275;
        goto LABEL_19;
      }
      v8 = 33;
LABEL_5:
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        1,
        v8,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
      goto LABEL_6;
    }
    if ( *((_DWORD *)P + 2) != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          1,
          34,
          (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
          *((_DWORD *)P + 2));
      }
      goto LABEL_6;
    }
    if ( *((_WORD *)P + 6) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v8 = 35;
      goto LABEL_5;
    }
    if ( (*(_DWORD *)(a1 + 280) & 0x40000000) != 0 )
      v9 = *(unsigned int **)(a1 + 456);
    else
      v9 = *(unsigned int **)(a1 + 448);
    v10 = *v9;
    v7 = 0;
    v11 = v10 - 1;
    if ( *((_DWORD *)P + 4) < v10 )
      v11 = *((_DWORD *)P + 4);
    *a2 = v11;
  }
LABEL_19:
  if ( v6 )
    ExFreePoolWithTag(v6, (ULONG)0);
  if ( v7 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x100u);
  return (unsigned int)v7;
}

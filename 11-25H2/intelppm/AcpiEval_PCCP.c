/*
 * XREFs of AcpiEval_PCCP @ 0x140027424
 * Callers:
 *     InitAcpiLegacyPcc @ 0x140027008 (InitAcpiLegacyPcc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     AcpiParseCore @ 0x14003F8A0 (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x140044948 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PCCP(__int64 a1, _QWORD *a2)
{
  void *Pool2; // rsi
  int v5; // edx
  int v6; // ebx
  PVOID v7; // rdi
  int v9; // edx
  char v10; // [rsp+40h] [rbp-30h] BYREF
  int v11; // [rsp+42h] [rbp-2Eh]
  const char *v12; // [rsp+48h] [rbp-28h]
  __int64 (__fastcall *v13)(); // [rsp+50h] [rbp-20h]
  char v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ah] [rbp-16h]
  const char *v16; // [rsp+60h] [rbp-10h]
  __int64 (__fastcall *v17)(); // [rsp+68h] [rbp-8h]
  int v18; // [rsp+A0h] [rbp+30h] BYREF
  PVOID P; // [rsp+B0h] [rbp+40h] BYREF

  v14 = 1;
  v18 = 0;
  v12 = "InputBufferOffset";
  v10 = 0;
  v11 = 0;
  v16 = "OutputBufferOffset";
  v13 = AcpiParseULong;
  Pool2 = 0LL;
  v15 = 0x40000;
  v17 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x8000u);
  v6 = AcpiEvaluateMethod(a1, 1346585424, 0, (unsigned int)&P, (__int64)&v18);
  if ( v6 >= 0 )
  {
    *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x80000000;
    if ( v18 )
    {
      Pool2 = (void *)ExAllocatePool2(64LL, 8LL, 1919119952LL);
      if ( Pool2 )
      {
        v7 = P;
        v6 = AcpiParseCore(
               (unsigned int)&v10,
               2,
               (int)P + 12,
               *((_DWORD *)P + 1) - 12,
               (__int64)Pool2,
               8,
               (__int64)"PCCP",
               0);
        if ( v6 >= 0 )
        {
          *a2 = Pool2;
          goto LABEL_9;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v9,
            1,
            46,
            (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
        }
      }
      else
      {
        v6 = -1073741670;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          1,
          45,
          (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
      }
      v6 = -1073741275;
    }
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x8000u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)0);
  v7 = P;
LABEL_9:
  if ( v7 )
    ExFreePoolWithTag(v7, (ULONG)0);
  return (unsigned int)v6;
}

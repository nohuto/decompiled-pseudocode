/*
 * XREFs of KiSetupTimeIncrement @ 0x1405AD864
 * Callers:
 *     KeInitializeClock @ 0x140C4ECE8 (KeInitializeClock.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     RtlGenerateQpcToIncrementConstants @ 0x1404B1870 (RtlGenerateQpcToIncrementConstants.c)
 *     RtlpComputeFraction @ 0x1404F79F4 (RtlpComputeFraction.c)
 */

__int64 __fastcall KiSetupTimeIncrement(unsigned __int64 a1, unsigned int a2)
{
  unsigned int v3; // r9d
  int v4; // eax
  unsigned int v5; // ecx
  unsigned __int64 v6; // rax
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rbx
  LARGE_INTEGER v9; // rdi
  unsigned __int64 v10; // rax
  char v11; // dl
  __int64 result; // rax
  char v13; // [rsp+30h] [rbp+8h] BYREF
  char v14; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+18h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v13 = 0;
  v3 = 156250;
  v4 = a2;
  if ( a2 <= 0x1388 )
    v4 = 5000;
  v5 = KiMinDynamicTickDuration;
  KeMinimumIncrement = v4;
  if ( a1 < 0x2625A )
    v3 = a1;
  KeMaximumIncrement = v3;
  if ( a2 > KiMinDynamicTickDuration )
  {
    v5 = a2;
    KiMinDynamicTickDuration = a2;
  }
  v6 = KiMaxDynamicTickDuration;
  if ( a1 < KiMaxDynamicTickDuration )
  {
    v6 = a1;
    KiMaxDynamicTickDuration = a1;
  }
  if ( v6 < v5 )
    KiMaxDynamicTickDuration = v5;
  KiTickOffset = v3;
  v14 = 0;
  KiMaximumIncrementReciprocal = RtlpComputeFraction(1LL, v3, &v14);
  KiMaximumIncrementShiftCount = -v14;
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v8 = PerformanceFrequency;
  KeTimeAdjustmentFrequency = PerformanceFrequency.QuadPart;
  v9 = v7;
  v10 = RtlGenerateQpcToIncrementConstants(PerformanceFrequency.LowPart, &v13);
  v11 = v13;
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 768) = v8;
  *(_QWORD *)(MmWriteableSharedUserData + 864) = v10;
  *(_BYTE *)(MmWriteableSharedUserData + 873) = v11;
  *(_QWORD *)(MmWriteableSharedUserData + 856) = MEMORY[0xFFFFF78000000360];
  *(_BYTE *)(MmWriteableSharedUserData + 872) = MEMORY[0xFFFFF78000000369];
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 840) = v9;
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 848) = v9;
  result = 0x989680 / KeMaximumIncrement;
  KiBalanceSetManagerPeriod = 0x989680 / KeMaximumIncrement;
  KiBalanceSetManagerCount = 0x989680 / KeMaximumIncrement;
  return result;
}

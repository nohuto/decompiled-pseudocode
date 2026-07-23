/*
 * XREFs of ExpAeThresholdInitialization @ 0x140C45FE4
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C42BB4 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExpAeMeasureContention @ 0x14065988C (ExpAeMeasureContention.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char ExpAeThresholdInitialization()
{
  unsigned __int64 v0; // rbp
  int v1; // edx
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // r9
  unsigned __int64 v5; // rbx
  int v6; // edx
  unsigned __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  char v10; // cl
  char result; // al
  _BYTE v12[64]; // [rsp+60h] [rbp+0h] BYREF

  v0 = (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL;
  memset_0((void *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0xC0uLL);
  v2 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v1) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v1);
  }
  do
    v2 += ExpAeMeasureContention((signed __int64 *)(v0 + 64));
  while ( v4 != 1 );
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  v5 = v2 >> 10;
  KeGenericCallDpcEx((__int64)ExpAeThresholdInitWorker, v0 + 64);
  if ( *(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0)
     / 1024LL
     / (unsigned __int64)*(int *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) >= 4 * v5 )
  {
    if ( HIDWORD(v5) )
    {
      _BitScanReverse(&v9, HIDWORD(v5));
      v8 = v9 + 32;
    }
    else
    {
      _BitScanReverse(&v8, v5);
    }
    if ( v8 < 2 )
      v10 = 0;
    else
      v10 = v8 - 2;
    ExpAeCycleCountScaler = v10;
    v7 = (v5 + (v5 >> 2)) << 7 >> v10;
    if ( v7 > 0xFFFFFFFF )
      LODWORD(v7) = -1;
    v6 = 15728640;
  }
  else
  {
    v6 = -1;
    ExpAeCycleCountScaler = -1;
    LODWORD(v7) = -1;
  }
  ExpAeCycleCountThreshold = v7;
  result = 1;
  ExpAeSamplingPeriodMask = v6;
  return result;
}

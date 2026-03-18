/*
 * XREFs of ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x140025BF0
 * Callers:
 *     ACPIDevicePowerDpc @ 0x140026120 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIDevicePowerEnumerateAssociatedPowerNodes @ 0x14001CA1C (ACPIDevicePowerEnumerateAssociatedPowerNodes.c)
 *     WPP_RECORDER_SF_sqL @ 0x140025DD8 (WPP_RECORDER_SF_sqL.c)
 */

bool ACPIIsPhase3ListEmptyOfUnblockedItems()
{
  char v0; // bp
  char v1; // di
  int v2; // edx
  __int64 *v3; // rsi
  __int64 *v4; // rbx
  int v5; // eax
  __int64 v7; // rax
  const char *v8; // rcx
  __int64 *v9; // rbx
  __int64 v10; // rcx
  __int64 *v11; // rbx
  __int64 v12; // rcx

  v0 = 0;
  v1 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  if ( AcpiPowerCurrentPagingPathTransitions > 0 )
  {
    v9 = (__int64 *)AcpiPowerPhase3List;
    while ( v9 != &AcpiPowerPhase3List )
    {
      v10 = (__int64)v9;
      v9 = (__int64 *)*v9;
      if ( !*(_DWORD *)(v10 + 48) && (*(_DWORD *)(v10 + 56) & 0x2000000) != 0 )
        ACPIDevicePowerEnumerateAssociatedPowerNodes(
          v10,
          (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ACPIMarkPagingPathPowerNodeEnum,
          v10);
    }
  }
  v3 = (__int64 *)AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
  {
    do
    {
      v4 = v3;
      v3 = (__int64 *)*v3;
      v5 = *((_DWORD *)v4 + 16);
      if ( v5 == 1 )
      {
        v7 = v4[2];
        if ( (v7 & 0x1000) == 0
          || (AcpiPowerCurrentPagingPathTransitions <= 0 || (v7 & 0x40000) != 0) && (__int64 *)v4[13] == v4 + 13 )
        {
          _InterlockedAnd64(v4 + 2, 0xFFFFFFFFFFFFFFF7uLL);
          v1 = 1;
        }
        else
        {
          _InterlockedOr64(v4 + 2, 8uLL);
          v0 = 1;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v8 = "IS";
          if ( (v4[2] & 8) == 0 )
            v8 = "NOT";
          LOBYTE(v2) = 4;
          WPP_RECORDER_SF_sqL(
            WPP_GLOBAL_Control->DeviceExtension,
            v2,
            10,
            47,
            (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
            (__int64)v8,
            (char)v4,
            *((_DWORD *)v4 + 4));
        }
      }
      else if ( (unsigned int)(v5 - 3) <= 1 )
      {
        v0 = 1;
      }
      _InterlockedAnd64(v4 + 2, 0xFFFFFFFFFFFBFFFFuLL);
    }
    while ( v3 != &AcpiPowerNodeList );
    if ( !v1 && v0 )
    {
      v11 = (__int64 *)AcpiPowerPhase3List;
      while ( v11 != &AcpiPowerPhase3List )
      {
        v12 = (__int64)v11;
        v11 = (__int64 *)*v11;
        if ( !*(_DWORD *)(v12 + 48) )
          ACPIDevicePowerEnumerateAssociatedPowerNodes(
            v12,
            (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum,
            v12);
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return v1 == 0;
}

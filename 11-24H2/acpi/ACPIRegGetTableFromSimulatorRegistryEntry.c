/*
 * XREFs of ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1400A35AC
 * Callers:
 *     ACPIMapNamedTable @ 0x140040810 (ACPIMapNamedTable.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_s @ 0x140042384 (WPP_RECORDER_SF_s.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1400A3A38 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenLargestSubkey @ 0x1400A3DAC (OSOpenLargestSubkey.c)
 *     OSOpenHandle @ 0x1400B7118 (OSOpenHandle.c)
 *     ACPIRegLocalCopyString @ 0x1400B7288 (ACPIRegLocalCopyString.c)
 */

bool __fastcall ACPIRegGetTableFromSimulatorRegistryEntry(__int64 *a1)
{
  __int64 v1; // rbp
  bool v2; // di
  char *Pool2; // rax
  char *v5; // rsi
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  int v8; // edx
  int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+28h] [rbp-30h]

  v1 = *a1;
  v2 = 0;
  if ( (AcpiOverrideAttributes & 0x10000) == 0 )
    return 0;
  Pool2 = (char *)ExAllocatePool2(256LL, 106LL, 1114661697LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 0;
  qmemcpy(Pool2, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters\\Simulator\\Tables\\", 85);
  v6 = (_BYTE *)ACPIRegLocalCopyString(Pool2 + 85, v1, 4LL);
  *v6 = 92;
  v7 = (_BYTE *)ACPIRegLocalCopyString(v6 + 1, v1 + 10, 6LL);
  *v7 = 92;
  *(_BYTE *)ACPIRegLocalCopyString(v7 + 1, v1 + 16, 8LL) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_s(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      11,
      37,
      (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
      (__int64)v5);
  }
  v9 = OSOpenHandle(v5);
  if ( v9 >= 0 )
  {
    v10 = OSOpenLargestSubkey(0LL);
    if ( v10 >= 0 )
    {
      v2 = (int)ACPIRegReadEntireSimulatorAcpiTable(0LL, a1) >= 0;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v12) = v10;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xBu,
        0x27u,
        (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
        v12);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = v9;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xBu,
      0x26u,
      (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
      v12);
  }
  ExFreePoolWithTag(v5, 0);
  return v2;
}

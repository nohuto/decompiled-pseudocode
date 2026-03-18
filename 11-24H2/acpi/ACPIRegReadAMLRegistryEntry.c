/*
 * XREFs of ACPIRegReadAMLRegistryEntry @ 0x1400B6E24
 * Callers:
 *     ACPIMapNamedTable @ 0x140040810 (ACPIMapNamedTable.c)
 *     ACPILoadProcessDSDT @ 0x1400C74D8 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessRSDT @ 0x1400C9308 (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_s @ 0x140042384 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_Ld @ 0x140067254 (WPP_RECORDER_SF_Ld.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1400A37D8 (ACPIRegReadEntireAcpiTable.c)
 *     OSOpenLargestSubkey @ 0x1400A3DAC (OSOpenLargestSubkey.c)
 *     OSReadRegValue @ 0x1400B6898 (OSReadRegValue.c)
 *     OSOpenHandle @ 0x1400B7118 (OSOpenHandle.c)
 *     ACPIRegLocalCopyString @ 0x1400B7288 (ACPIRegLocalCopyString.c)
 */

bool __fastcall ACPIRegReadAMLRegistryEntry(const void **a1, char a2)
{
  _DWORD *v2; // r15
  void *v3; // rbx
  bool v4; // di
  char *Pool2; // rax
  char *v7; // rsi
  _BYTE *v9; // rax
  _BYTE *v10; // rax
  int v11; // edx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // [rsp+20h] [rbp-20h]
  __int64 v18; // [rsp+28h] [rbp-18h]
  int v19; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v20; // [rsp+88h] [rbp+48h] BYREF
  void *v21; // [rsp+90h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+58h]

  LOBYTE(v20) = a2;
  v2 = *a1;
  v3 = 0LL;
  Handle = 0LL;
  v4 = 0;
  v19 = 0;
  v21 = 0LL;
  if ( (AcpiOverrideAttributes & 0x10000) == 0 )
    return 0;
  Pool2 = (char *)ExAllocatePool2(256LL, 89LL, 1399874369LL);
  v7 = Pool2;
  if ( !Pool2 )
    return 0;
  qmemcpy(Pool2, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters\\", 68);
  v9 = (_BYTE *)ACPIRegLocalCopyString(Pool2 + 68, v2, 4LL);
  *v9 = 92;
  v10 = (_BYTE *)ACPIRegLocalCopyString(v9 + 1, (char *)v2 + 10, 6LL);
  *v10 = 92;
  *(_BYTE *)ACPIRegLocalCopyString(v10 + 1, v2 + 4, 8LL) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_s(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      11,
      30,
      (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
      (__int64)v7);
  }
  v12 = OSOpenHandle(v7);
  if ( v12 >= 0 )
  {
    v13 = OSOpenLargestSubkey(Handle, &v21, v2[6]);
    if ( v13 >= 0 )
    {
      v3 = v21;
      v20 = 4;
      if ( (int)OSReadRegValue("Action", v21, &v19, &v20) >= 0 && v20 == 4 )
      {
        if ( v19 )
        {
          if ( (unsigned int)(v19 - 1) >= 2 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v18) = v19;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xBu,
              0x22u,
              (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
              v18);
          }
        }
        else
        {
          v4 = (int)ACPIRegReadEntireAcpiTable((__int64)v3, a1) >= 0;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Ld((__int64)WPP_GLOBAL_Control->DeviceExtension, v14, v15, v16, v17);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = v13;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xBu,
          0x20u,
          (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
          v18);
      }
      v3 = v21;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v18) = v12;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xBu,
      0x1Fu,
      (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
      v18);
  }
  ExFreePoolWithTag(v7, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v3 )
    ZwClose(v3);
  return v4;
}

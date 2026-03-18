/*
 * XREFs of ACPISystemPowerDetermineSupportedDeviceStates @ 0x14003BDF0
 * Callers:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x14003BDF0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerProcessRootMapping @ 0x1400A7470 (ACPISystemPowerProcessRootMapping.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x1400172C4 (ACPIExtListEnumNext.c)
 *     ACPIExtListTestElement @ 0x140017BF0 (ACPIExtListTestElement.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x14003BDF0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIExtListStartEnum @ 0x14003D65C (ACPIExtListStartEnum.c)
 *     ACPISystemPowerDetermineSupportedSystemState @ 0x140044BB0 (ACPISystemPowerDetermineSupportedSystemState.c)
 *     WPP_RECORDER_SF_DDqss @ 0x140047364 (WPP_RECORDER_SF_DDqss.c)
 *     WPP_RECORDER_SF_DDDDqss @ 0x140067C34 (WPP_RECORDER_SF_DDDDqss.c)
 *     ACPISystemPowerGetSxD @ 0x1400BA420 (ACPISystemPowerGetSxD.c)
 */

__int64 __fastcall ACPISystemPowerDetermineSupportedDeviceStates(__int64 a1, unsigned int a2, _DWORD *a3)
{
  int SxD; // edi
  char *i; // rax
  char *v7; // rbx
  char v8; // cl
  const char *v9; // r10
  const char *v10; // rdx
  char v11; // r8
  __int64 v12; // rax
  char v13; // dl
  const char *v14; // r8
  const char *v15; // rcx
  __int64 v16; // rax
  int v17; // esi
  __int64 v18; // rdx
  int v19; // eax
  char v20; // r10
  char v21; // r11
  char v22; // cl
  const char *v23; // r8
  const char *v24; // r10
  int v25; // r9d
  __int64 v26; // rax
  int v28; // [rsp+20h] [rbp-49h]
  __int64 v29; // [rsp+48h] [rbp-21h]
  _QWORD v30[3]; // [rsp+68h] [rbp-1h] BYREF
  __int128 v31; // [rsp+80h] [rbp+17h]
  __int64 v32; // [rsp+90h] [rbp+27h]
  int v33; // [rsp+98h] [rbp+2Fh]
  int v34; // [rsp+9Ch] [rbp+33h]
  KIRQL NewIrql; // [rsp+D0h] [rbp+67h]
  int v36; // [rsp+E8h] [rbp+7Fh] BYREF

  v36 = 0;
  v34 = 0;
  v30[0] = a1 + 800;
  SxD = 0;
  v30[1] = 0LL;
  v30[2] = &AcpiDeviceTreeLock;
  v32 = 816LL;
  v33 = 1;
  v31 = 0LL;
  for ( i = (char *)ACPIExtListStartEnum(v30); ; i = ACPIExtListEnumNext((__int64)v30) )
  {
    v7 = i;
    if ( !ACPIExtListTestElement((__int64)v30, SxD >= 0) )
      break;
    SxD = ACPISystemPowerDetermineSupportedDeviceStates(v7, a2, a3);
    if ( SxD >= 0 )
    {
      SxD = ACPISystemPowerGetSxD(v7, a2, &v36);
      if ( SxD < 0 )
      {
        if ( SxD == -1073741772 )
        {
          v17 = 1;
          NewIrql = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v18 = 1LL;
          do
          {
            v19 = ACPISystemPowerDetermineSupportedSystemState(v7, v18);
            v21 = v19;
            if ( v19 >= (int)a2 )
            {
              v22 = v20;
              v23 = byte_1400753E8;
              v24 = byte_1400753E8;
              v25 = 0;
              *a3 |= 1 << v22;
              if ( v7 )
              {
                v26 = *((_QWORD *)v7 + 1);
                v25 = (int)v7;
                if ( (v26 & 0x200000000000LL) != 0 )
                {
                  v24 = (const char *)*((_QWORD *)v7 + 76);
                  if ( (v26 & 0x400000000000LL) != 0 )
                    v23 = (const char *)*((_QWORD *)v7 + 77);
                }
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_DDDDqss(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v17 - 1,
                  (_DWORD)v23,
                  v25,
                  v28,
                  v17 - 1,
                  v21 - 1,
                  a2 - 1,
                  v17 - 1,
                  v25,
                  (__int64)v24,
                  (__int64)v23);
            }
            v36 = ++v17;
            v18 = (unsigned int)v17;
          }
          while ( v17 <= 3 );
          KeReleaseSpinLock(&AcpiPowerLock, NewIrql);
          SxD = 0;
        }
        else
        {
          v13 = 0;
          v14 = byte_1400753E8;
          v15 = byte_1400753E8;
          if ( v7 )
          {
            v16 = *((_QWORD *)v7 + 1);
            v13 = (char)v7;
            if ( (v16 & 0x200000000000LL) != 0 )
            {
              v14 = (const char *)*((_QWORD *)v7 + 76);
              if ( (v16 & 0x400000000000LL) != 0 )
                v15 = (const char *)*((_QWORD *)v7 + 77);
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xFu,
              0xBu,
              (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
              SxD,
              v13,
              v14,
              v15);
        }
      }
      else
      {
        v8 = v36;
        v9 = byte_1400753E8;
        v10 = byte_1400753E8;
        v11 = 0;
        *a3 |= 1 << v36;
        if ( v7 )
        {
          v12 = *((_QWORD *)v7 + 1);
          v11 = (char)v7;
          if ( (v12 & 0x200000000000LL) != 0 )
          {
            v9 = (const char *)*((_QWORD *)v7 + 76);
            if ( (v12 & 0x400000000000LL) != 0 )
              v10 = (const char *)*((_QWORD *)v7 + 77);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v29 = (__int64)v10;
          LOBYTE(v10) = 4;
          WPP_RECORDER_SF_DDqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v10,
            15,
            10,
            (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
            a2 - 1,
            v8 - 1,
            v11,
            (__int64)v9,
            v29);
        }
      }
    }
  }
  return 0LL;
}

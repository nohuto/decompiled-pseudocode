/*
 * XREFs of UsbDualRoleFeaturesQueryLocalMachine @ 0x140044DC0
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x14002C490 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     CheckUSBFnConfiguration @ 0x140044514 (CheckUSBFnConfiguration.c)
 *     CheckUSBFnIncludeDefaultCfg @ 0x1400447B4 (CheckUSBFnIncludeDefaultCfg.c)
 *     GetPersistedKeyPath @ 0x140044988 (GetPersistedKeyPath.c)
 *     ReadManifestAssignedValue @ 0x140044B34 (ReadManifestAssignedValue.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x140044C30 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     WPP_RECORDER_SF_Sd @ 0x1400452C8 (WPP_RECORDER_SF_Sd.c)
 *     MyRegOpenKeyForRead @ 0x14004542C (MyRegOpenKeyForRead.c)
 *     MyRegQueryUlong @ 0x140045678 (MyRegQueryUlong.c)
 */

void __fastcall UsbDualRoleFeaturesQueryLocalMachine(int *a1)
{
  int PersistedKeyPath; // eax
  __int64 v3; // rcx
  PVOID v4; // r14
  int v5; // esi
  unsigned __int16 v6; // r9
  unsigned __int8 v7; // dl
  __int64 v8; // rcx
  int Ulong; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  PVOID v12; // rsi
  unsigned __int16 v13; // r9
  unsigned __int8 v14; // dl
  int v15; // r8d
  int v16; // r8d
  int v17; // r14d
  int v18; // r9d
  int v19; // r9d
  __int64 v20; // [rsp+28h] [rbp-18h]
  int v21; // [rsp+28h] [rbp-18h]
  int v22; // [rsp+28h] [rbp-18h]
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h] BYREF
  PVOID v25; // [rsp+90h] [rbp+50h] BYREF

  Handle = 0LL;
  P = 0LL;
  PersistedKeyPath = GetPersistedKeyPath(&P);
  v4 = P;
  v5 = PersistedKeyPath;
  if ( PersistedKeyPath < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v6 = 13;
    goto LABEL_4;
  }
  PersistedKeyPath = MyRegOpenKeyForRead(v3, P, &Handle);
  v5 = PersistedKeyPath;
  if ( PersistedKeyPath >= 0 )
  {
    PersistedKeyPath = MyRegQueryUlong(Handle);
    v5 = PersistedKeyPath;
    if ( PersistedKeyPath >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = *a1;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          1u,
          0x10u,
          (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
          v22);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 15;
      v7 = 4;
      goto LABEL_5;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 14;
LABEL_4:
    v7 = 2;
LABEL_5:
    v21 = PersistedKeyPath;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      1u,
      v6,
      (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
      v21);
  }
LABEL_14:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v5 < 0 )
  {
    ReadManifestAssignedValue(a1);
    *a1 &= 0xFFFFFFF1;
    if ( CheckUSBFnIncludeDefaultCfg(v8) )
      CheckUSBFnConfiguration(a1, L"Default");
    if ( (int)ReadUSBFnFeaturesFromCurrentConfiguration(a1, 0) < 0 )
      ReadUSBFnFeaturesFromCurrentConfiguration(a1, 1);
  }
  P = 0LL;
  v25 = 0LL;
  LODWORD(Handle) = 0;
  Ulong = GetPersistedKeyPath(&v25);
  v12 = v25;
  if ( Ulong < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_36;
    v13 = 33;
    v14 = 2;
    goto LABEL_26;
  }
  if ( (int)MyRegOpenKeyForRead(v11, v25, &P) >= 0 )
  {
    Ulong = MyRegQueryUlong(P);
    if ( Ulong >= 0 )
    {
      v17 = (int)Handle;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        HIDWORD(v20) = HIDWORD(v12);
        WPP_RECORDER_SF_Sd(WPP_GLOBAL_Control->DeviceExtension, v10, v16, 36);
      }
      v10 = v17 != 0 ? 0x80000000 : 0;
      *a1 = v10 | *a1 & 0x7FFFFFFF;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 35;
      v14 = 3;
LABEL_26:
      LODWORD(v20) = Ulong;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v14,
        1u,
        v13,
        (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
        v20);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    HIDWORD(v20) = HIDWORD(v12);
    WPP_RECORDER_SF_Sd(WPP_GLOBAL_Control->DeviceExtension, v10, v15, 34);
  }
LABEL_36:
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( P )
    ZwClose(P);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v20) = *a1;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0x25u,
      (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
      v20);
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_48;
    v18 = 38;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_48;
    v18 = 39;
  }
  LOBYTE(v10) = 4;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v10,
    1,
    v18,
    (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids);
LABEL_48:
  if ( (*(_BYTE *)a1 & 2) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    v19 = 40;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    v19 = 41;
  }
  LOBYTE(v10) = 4;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v10,
    1,
    v19,
    (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids);
}

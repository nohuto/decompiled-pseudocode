/*
 * XREFs of ACPIInitDosDeviceName @ 0x14004DA9C
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1400AC540 (ACPIBusIrpQueryResources.c)
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x14002AD3C (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_dqss @ 0x140033790 (WPP_RECORDER_SF_dqss.c)
 */

__int64 __fastcall ACPIInitDosDeviceName(__int64 a1)
{
  NTSTATUS v2; // r11d
  __int64 v3; // r8
  const char *v4; // rcx
  const char *v5; // r10
  __int64 *v6; // rax
  __int64 v7; // rdi
  int v8; // esi
  __int64 v9; // r8
  const char *v10; // rcx
  const char *v11; // r10
  __int64 v12; // r8
  const char *v13; // rcx
  const char *v14; // r10
  NTSTATUS v15; // edi
  __int64 v16; // r8
  const char *v17; // rcx
  const char *v18; // r10
  NTSTATUS v20; // eax
  int v21; // edi
  __int64 v22; // r8
  const char *v23; // rcx
  const char *v24; // r10
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-9h] BYREF
  struct _STRING v27; // [rsp+70h] [rbp+7h] BYREF
  _OWORD v28[2]; // [rsp+80h] [rbp+17h] BYREF
  PCSZ SourceString; // [rsp+A0h] [rbp+37h]
  int Data; // [rsp+D0h] [rbp+67h] BYREF
  void *DeviceRegKey; // [rsp+D8h] [rbp+6Fh] BYREF

  DeviceRegKey = 0LL;
  SourceString = 0LL;
  v27 = 0LL;
  Data = 1;
  memset(v28, 0, sizeof(v28));
  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"FirmwareIdentified");
  v2 = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(a1 + 784), 1u, 0x20000u, &DeviceRegKey);
  if ( v2 >= 0 )
  {
    ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &Data, 4u);
    RtlInitUnicodeString(&DestinationString, L"DosDeviceName");
    v6 = AMLIGetNamedChild(*(__int64 **)(a1 + 760), 1313096799);
    v7 = (__int64)v6;
    if ( v6 )
    {
      v8 = AMLIEvalNameSpaceObject(v6, (__int64)v28, 0, 0LL);
      AMLIDereferenceHandleEx(v7);
      if ( v8 >= 0 )
      {
        if ( WORD1(v28[0]) == 2 )
        {
          RtlInitAnsiString(&v27, SourceString);
          v15 = RtlAnsiStringToUnicodeString(&UnicodeString, &v27, 1u);
          if ( v15 >= 0 )
          {
            v20 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 1u, UnicodeString.Buffer, UnicodeString.Length);
            dword_140089138 = 0;
            pszDest = 0;
            v21 = v20;
            FreeDataBuffs((__int64)v28, 1u);
            ZwClose(DeviceRegKey);
            RtlFreeUnicodeString(&UnicodeString);
            if ( v21 < 0 )
            {
              v22 = *(_QWORD *)(a1 + 8);
              v23 = byte_140075488;
              v24 = byte_140075488;
              if ( (v22 & 0x200000000000LL) != 0 )
              {
                v23 = *(const char **)(a1 + 608);
                if ( (v22 & 0x400000000000LL) != 0 )
                  v24 = *(const char **)(a1 + 616);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Lqss(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  1u,
                  0xFu,
                  (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
                  v21,
                  a1,
                  v23,
                  v24);
            }
            return 0LL;
          }
          v16 = *(_QWORD *)(a1 + 8);
          v17 = byte_140075488;
          v18 = byte_140075488;
          if ( (v16 & 0x200000000000LL) != 0 )
          {
            v17 = *(const char **)(a1 + 608);
            if ( (v16 & 0x400000000000LL) != 0 )
              v18 = *(const char **)(a1 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0xEu,
              (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
              v15,
              a1,
              v17,
              v18);
        }
        else
        {
          v12 = *(_QWORD *)(a1 + 8);
          v13 = byte_140075488;
          v14 = byte_140075488;
          if ( (v12 & 0x200000000000LL) != 0 )
          {
            v13 = *(const char **)(a1 + 608);
            if ( (v12 & 0x400000000000LL) != 0 )
              v14 = *(const char **)(a1 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              1u,
              0xDu,
              (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
              SBYTE2(v28[0]),
              a1,
              v13,
              v14);
          v15 = 0;
        }
        dword_140089138 = 0;
        pszDest = 0;
        FreeDataBuffs((__int64)v28, 1u);
        ZwClose(DeviceRegKey);
        return (unsigned int)v15;
      }
      v9 = *(_QWORD *)(a1 + 8);
      v10 = byte_140075488;
      v11 = byte_140075488;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a1 + 608);
        if ( (v9 & 0x400000000000LL) != 0 )
          v11 = *(const char **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          1u,
          0xCu,
          (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
          v8,
          a1,
          v10,
          v11);
    }
    ZwClose(DeviceRegKey);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = byte_140075488;
    v5 = byte_140075488;
    if ( (v3 & 0x200000000000LL) != 0 )
    {
      v4 = *(const char **)(a1 + 608);
      if ( (v3 & 0x400000000000LL) != 0 )
        v5 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0xBu,
        (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
        v2,
        a1,
        v4,
        v5);
  }
  return 0LL;
}

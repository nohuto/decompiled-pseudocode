/*
 * XREFs of RaidUnitGetDeviceParameters @ 0x1401BCAD4
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1401BC368 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     WPP_SF_q @ 0x140055B6C (WPP_SF_q.c)
 *     WPP_SF_qddd @ 0x140068D54 (WPP_SF_qddd.c)
 *     StorpInitRegistryWatch @ 0x1400703B0 (StorpInitRegistryWatch.c)
 *     StorpWatchForRegistryChanges @ 0x140070D70 (StorpWatchForRegistryChanges.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

int __fastcall RaidUnitGetDeviceParameters(__int64 a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // rsi
  int v4; // eax
  _DWORD *v5; // r14
  _DWORD *v6; // r15
  int v7; // eax
  struct _DEVICE_OBJECT *v8; // rcx
  __int64 Pool; // rax
  __int64 v10; // rdi
  __int64 v12; // [rsp+20h] [rbp-E0h]
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  void *DeviceRegKey; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v17[8]; // [rsp+90h] [rbp-70h] BYREF
  int v18; // [rsp+98h] [rbp-68h]
  const wchar_t *v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  int v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  int v23; // [rsp+C0h] [rbp-40h]
  int v24; // [rsp+D0h] [rbp-30h]
  const wchar_t *v25; // [rsp+D8h] [rbp-28h]
  __int64 v26; // [rsp+E0h] [rbp-20h]
  int v27; // [rsp+E8h] [rbp-18h]
  __int64 v28; // [rsp+F0h] [rbp-10h]
  int v29; // [rsp+F8h] [rbp-8h]
  int v30; // [rsp+108h] [rbp+8h]
  const wchar_t *v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  int v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  int v35; // [rsp+130h] [rbp+30h]
  int v36; // [rsp+140h] [rbp+40h]
  const wchar_t *v37; // [rsp+148h] [rbp+48h]
  __int64 v38; // [rsp+150h] [rbp+50h]
  int v39; // [rsp+158h] [rbp+58h]
  __int64 v40; // [rsp+160h] [rbp+60h]
  int v41; // [rsp+168h] [rbp+68h]
  int v42; // [rsp+178h] [rbp+78h]
  const wchar_t *v43; // [rsp+180h] [rbp+80h]
  __int64 v44; // [rsp+188h] [rbp+88h]
  int v45; // [rsp+190h] [rbp+90h]
  __int64 v46; // [rsp+198h] [rbp+98h]
  int v47; // [rsp+1A0h] [rbp+A0h]
  int v48; // [rsp+1B0h] [rbp+B0h]
  const wchar_t *v49; // [rsp+1B8h] [rbp+B8h]
  __int64 v50; // [rsp+1C0h] [rbp+C0h]
  int v51; // [rsp+1C8h] [rbp+C8h]
  __int64 v52; // [rsp+1D0h] [rbp+D0h]
  int v53; // [rsp+1D8h] [rbp+D8h]

  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x45u,
      (__int64)&WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
      a1);
  }
  v2 = *(_QWORD *)(a1 + 24);
  v3 = (_DWORD *)(a1 + 1928);
  *(_DWORD *)(a1 + 1928) = 20;
  v4 = *(_DWORD *)(v2 + 5668);
  if ( v4 )
    *v3 = v4;
  v5 = (_DWORD *)(a1 + 1932);
  v6 = (_DWORD *)(a1 + 1936);
  *(_DWORD *)(a1 + 1932) = 25;
  *(_DWORD *)(a1 + 1936) = 250;
  v7 = *(_DWORD *)(v2 + 5672);
  if ( v7 )
    *v6 = v7;
  v8 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  *(_DWORD *)(a1 + 1940) = 0;
  *(_DWORD *)(a1 + 1948) = -1;
  LODWORD(Pool) = IoOpenDeviceRegistryKey(v8, 1u, 0x20019u, &DeviceRegKey);
  if ( (int)Pool >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Storport");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(Pool) = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( (int)Pool >= 0 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x46u,
          (__int64)&WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
          a1);
      }
      memset_0(v17, 0, 0x188uLL);
      v19 = L"QueueFullWaitIoPercentage";
      v21 = 67108868;
      v18 = 288;
      v23 = 4;
      v25 = L"BusyPauseTime";
      v24 = 288;
      v31 = L"BusyRetryCount";
      v37 = L"EnableLogoETW";
      v43 = L"DisableIdlePowerManagement";
      v44 = a1 + 1944;
      v46 = a1 + 1944;
      v27 = 67108868;
      v29 = 4;
      v30 = 288;
      v33 = 67108868;
      v35 = 4;
      v36 = 288;
      v39 = 67108868;
      v41 = 4;
      v42 = 288;
      v45 = 67108868;
      v47 = 4;
      v48 = 288;
      v51 = 67108868;
      v53 = 4;
      v49 = L"MinimumIdleTimeoutInMS";
      v20 = a1 + 1932;
      v22 = a1 + 1932;
      v26 = a1 + 1936;
      v28 = a1 + 1936;
      v32 = a1 + 1928;
      v34 = a1 + 1928;
      v38 = a1 + 1940;
      v40 = a1 + 1940;
      v50 = a1 + 1948;
      v52 = a1 + 1948;
      RtlQueryRegistryValuesEx(0x40000000LL, KeyHandle, v17, 0LL, 0LL);
      if ( *v5 > 0x64u )
        *v5 = 25;
      if ( EnableRegistryWatch && !*(_QWORD *)(a1 + 3568) )
      {
        Pool = RaidAllocatePool(64LL, 192LL, 1465016658LL, 0LL);
        v10 = Pool;
        if ( !Pool )
          goto LABEL_25;
        *(_QWORD *)Pool = a1;
        *(_QWORD *)(Pool + 8) = RaidUnitUpdateDynamicRegistrySettings;
        StorpInitRegistryWatch((__int64)KeyHandle, Pool);
        StorpWatchForRegistryChanges(v10);
        KeyHandle = 0LL;
        *(_QWORD *)(a1 + 3568) = v10;
      }
      Pool = (__int64)&WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        LODWORD(Pool) = HIDWORD(WPP_GLOBAL_Control->Timer);
        if ( (Pool & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          LODWORD(v12) = *v3;
          LODWORD(Pool) = WPP_SF_qddd(
                            (__int64)WPP_GLOBAL_Control->AttachedDevice,
                            0x47u,
                            (__int64)&WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
                            a1,
                            v12,
                            *v6,
                            *v5);
        }
      }
    }
  }
LABEL_25:
  if ( DeviceRegKey )
    LODWORD(Pool) = ZwClose(DeviceRegKey);
  if ( KeyHandle )
    LODWORD(Pool) = ZwClose(KeyHandle);
  return Pool;
}

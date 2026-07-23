/*
 * XREFs of PiDevCfgCheckDeviceNeedsUpdate @ 0x14072650C
 * Callers:
 *     PiDevCfgInitDeviceCallback @ 0x140727E10 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140728690 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14072A490 (PpDevCfgCheckDeviceNeedsUpdate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     swscanf_s @ 0x140501FA0 (swscanf_s.c)
 *     Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline @ 0x1405A3B10 (Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiDevCfgParseVersionString @ 0x1407285BC (PiDevCfgParseVersionString.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14072A218 (PiDevCfgSplitDriverConfigurationId.c)
 *     _CmIsRootEnumeratedDevice @ 0x1408B63E8 (_CmIsRootEnumeratedDevice.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1409C7EF4 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgFindDeviceDriver @ 0x1409C86B4 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgGetDriverPackageId @ 0x1409C9F54 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409CA030 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDriverNode @ 0x140ABF4A0 (PiDevCfgFreeDriverNode.c)
 */

__int64 __fastcall PiDevCfgCheckDeviceNeedsUpdate(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  int DeviceDriver; // edi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // ecx
  wchar_t *Buffer; // rsi
  __int64 v14; // rax
  _QWORD *v15; // rcx
  wchar_t *v16; // r8
  BOOLEAN v17; // al
  wchar_t *v18; // r14
  _QWORD *v19; // rax
  int v20; // eax
  __int64 *v21; // r15
  _QWORD *v22; // rsi
  BOOLEAN v23; // al
  __int64 v24; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  int DriverPackageId; // eax
  _QWORD *v33; // rsi
  _QWORD *v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  int v38; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v39; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  int v41; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER Time; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v44; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v45; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v47; // [rsp+C0h] [rbp-40h] BYREF
  const DEVPROPKEY *v48; // [rsp+E0h] [rbp-20h] BYREF
  int v49; // [rsp+E8h] [rbp-18h]
  UNICODE_STRING *p_DestinationString; // [rsp+F0h] [rbp-10h]
  int v51; // [rsp+FCh] [rbp-4h]
  int v52; // [rsp+100h] [rbp+0h]
  const DEVPROPKEY *v53; // [rsp+108h] [rbp+8h]
  int v54; // [rsp+110h] [rbp+10h]
  LARGE_INTEGER *p_Time; // [rsp+118h] [rbp+18h]
  int v56; // [rsp+120h] [rbp+20h]
  int v57; // [rsp+128h] [rbp+28h]
  const DEVPROPKEY *v58; // [rsp+130h] [rbp+30h]
  int v59; // [rsp+138h] [rbp+38h]
  UNICODE_STRING *p_UnicodeString; // [rsp+140h] [rbp+40h]
  int v61; // [rsp+14Ch] [rbp+4Ch]
  int v62; // [rsp+150h] [rbp+50h]
  const DEVPROPKEY *v63; // [rsp+158h] [rbp+58h]
  int v64; // [rsp+160h] [rbp+60h]
  UNICODE_STRING *v65; // [rsp+168h] [rbp+68h]
  int v66; // [rsp+174h] [rbp+74h]
  int v67; // [rsp+178h] [rbp+78h]

  v41 = 1;
  *a2 = 0;
  v38 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  Time.QuadPart = 0LL;
  v4 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v36 = 0LL;
  *(_QWORD *)&v44.Length = 0LL;
  v44.Buffer = 0LL;
  v39 = 0LL;
  *(_QWORD *)&v45.Length = 0LL;
  v45.Buffer = 0LL;
  Handle = 0LL;
  v35 = 0LL;
  v37 = 0;
  *(_QWORD *)&v47.Length = 0LL;
  v47.Buffer = 0LL;
  DeviceDriver = PiDevCfgFindDeviceDriver(a1, 0LL, &v35);
  if ( (int)(DeviceDriver + 0x80000000) < 0 || DeviceDriver == -1073740656 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(a1 + 8);
    v37 = 4;
    if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v7, v6, 11, (__int64)&v41, (__int64)&v38, (__int64)&v37, 0) < 0
      || v41 != 4
      || v37 != 4 )
    {
      v38 = 0;
    }
    memset_0(&v48, 0, 0xA0uLL);
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(_QWORD *)(a1 + 8);
    v48 = &DEVPKEY_Device_DriverInfPath;
    p_DestinationString = &DestinationString;
    v53 = &DEVPKEY_Device_DriverDate;
    p_Time = &Time;
    v58 = &DEVPKEY_Device_DriverVersion;
    v49 = 18;
    p_UnicodeString = &UnicodeString;
    v63 = &DEVPKEY_Device_ExtendedConfigurationIds;
    v65 = &v44;
    v51 = 6;
    v54 = 16;
    v56 = 8;
    v59 = 18;
    v61 = 6;
    v64 = 8210;
    v66 = 6;
    DeviceDriver = PiDevCfgQueryObjectProperties(18, v9, 1, v8, (__int64)&v48, 4);
    if ( DeviceDriver >= 0 )
    {
      if ( v52 < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( v57 < 0 )
        Time.QuadPart = 0LL;
      if ( v62 < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( v67 < 0 )
        RtlInitUnicodeString(&v44, 0LL);
      if ( (unsigned int)Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( UnicodeString.Buffer && (unsigned __int8)PiDevCfgParseVersionString(UnicodeString.Buffer, 4LL, &v36) )
          goto LABEL_23;
      }
      else if ( UnicodeString.Buffer
             && swscanf_s(
                  UnicodeString.Buffer,
                  L"%hu.%hu.%hu.%hu",
                  (char *)&v36 + 6,
                  (char *)&v36 + 4,
                  (char *)&v36 + 2,
                  &v36) == 4 )
      {
        goto LABEL_23;
      }
      v36 = 0LL;
LABEL_23:
      if ( !(unsigned __int8)CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 8)) )
        goto LABEL_37;
      memset_0(&v48, 0, 0xA0uLL);
      v10 = *(_QWORD *)(a1 + 16);
      v11 = *(_QWORD *)(a1 + 8);
      v48 = (const DEVPROPKEY *)DEVPKEY_Device_Owners;
      p_DestinationString = &v45;
      v49 = 8210;
      v51 = 6;
      DeviceDriver = PiDevCfgQueryObjectProperties(v12, v11, 1, v10, (__int64)&v48, 1);
      if ( DeviceDriver < 0 )
        goto LABEL_94;
      if ( v52 < 0 )
        goto LABEL_37;
      Buffer = v45.Buffer;
      if ( !v45.Buffer || v45.Length <= 2u )
        goto LABEL_37;
      if ( !*v45.Buffer )
        goto LABEL_35;
      while ( 1 )
      {
        DeviceDriver = PnpOpenObjectRegKey(PiPnpRtlCtx, (_DWORD)Buffer, 9, 131097, 0, (__int64)&Handle);
        if ( DeviceDriver >= 0 )
          break;
        DeviceDriver = 0;
        v14 = -1LL;
        do
          ++v14;
        while ( Buffer[v14] );
        Buffer += v14 + 1;
        if ( !*Buffer )
          goto LABEL_35;
      }
      ZwClose(Handle);
      if ( *Buffer )
      {
LABEL_37:
        v15 = v35;
      }
      else
      {
LABEL_35:
        v15 = v35;
        if ( !v35 )
          v4 = PnpBootMode != 0 ? 0x40000 : 2;
      }
      if ( (v38 & 0x40) == 0 )
      {
        v16 = DestinationString.Buffer;
        if ( DestinationString.Buffer )
        {
          if ( v15 )
          {
            v17 = RtlEqualUnicodeString((PCUNICODE_STRING)(v15 + 5), &DestinationString, 1u);
            v15 = v35;
            if ( v17 )
            {
              if ( v35[14] != Time.QuadPart || v35[15] != v36 )
                goto LABEL_82;
              v18 = v44.Buffer;
              v19 = v35 + 26;
              if ( v44.Buffer )
              {
                if ( (_QWORD *)*v19 == v19 )
                  goto LABEL_82;
                *((_QWORD *)&v39 + 1) = &v39;
                *(_QWORD *)&v39 = &v39;
                if ( !*v44.Buffer )
                  goto LABEL_67;
                do
                {
                  if ( (_QWORD *)v15[26] == v15 + 26 )
                    break;
                  RtlFreeAnsiString(&DestinationString);
                  v20 = PiDevCfgSplitDriverConfigurationId(v18, &Time, (__int64)&v36);
                  v15 = v35;
                  if ( v20 < 0 )
                    break;
                  v21 = (__int64 *)v35[26];
                  if ( v21 == v35 + 26 )
                    break;
                  do
                  {
                    v22 = v21;
                    v23 = RtlEqualUnicodeString((PCUNICODE_STRING)(v21 + 5), &DestinationString, 1u);
                    v15 = v35;
                    if ( v23 )
                      break;
                    v21 = (__int64 *)*v21;
                    v22 = 0LL;
                  }
                  while ( v21 != v35 + 26 );
                  if ( !v22 || v22[14] != Time.QuadPart || v22[15] != v36 )
                    break;
                  v24 = *v22;
                  if ( *(_QWORD **)(*v22 + 8LL) == v22 )
                  {
                    v25 = (_QWORD *)v22[1];
                    if ( (_QWORD *)*v25 == v22 )
                    {
                      *v25 = v24;
                      *(_QWORD *)(v24 + 8) = v25;
                      v26 = (_QWORD *)*((_QWORD *)&v39 + 1);
                      if ( **((__int128 ***)&v39 + 1) == &v39 )
                        continue;
                    }
                  }
LABEL_74:
                  __fastfail(3u);
                  v22[1] = *((_QWORD *)&v39 + 1);
                  *v22 = &v39;
                  *v26 = v22;
                  v27 = -1LL;
                  *((_QWORD *)&v39 + 1) = v22;
                  do
                    ++v27;
                  while ( v18[v27] );
                  v15 = v35;
                  v18 += v27 + 1;
                }
                while ( *v18 );
                if ( !*v18 )
                {
LABEL_67:
                  if ( (_QWORD *)v15[26] == v15 + 26 )
                    goto LABEL_69;
                }
                v4 |= 0x20u;
LABEL_69:
                while ( 1 )
                {
                  v28 = (_QWORD *)v39;
                  if ( (__int128 *)v39 == &v39 )
                    break;
                  if ( *(__int128 **)(v39 + 8) != &v39 )
                    goto LABEL_74;
                  v29 = *(_QWORD *)v39;
                  if ( *(_QWORD *)(*(_QWORD *)v39 + 8LL) != (_QWORD)v39 )
                    goto LABEL_74;
                  *(_QWORD *)&v39 = *(_QWORD *)v39;
                  *(_QWORD *)(v29 + 8) = &v39;
                  v30 = v35 + 26;
                  v31 = (_QWORD *)v35[27];
                  if ( (_QWORD *)*v31 != v35 + 26 )
                    goto LABEL_74;
                  *v28 = v30;
                  v28[1] = v31;
                  *v31 = v28;
                  v30[1] = v28;
                  v15 = v35;
                }
LABEL_83:
                if ( PnpBootMode && v15 && (v4 & 0x20) != 0 )
                {
                  DeviceDriver = ((__int64 (*)(void))PiDevCfgQueryDriverConfiguration)();
                  if ( DeviceDriver < 0 )
                    goto LABEL_90;
                  v33 = (_QWORD *)v35[26];
                  if ( v33 != v35 + 26 )
                  {
                    do
                    {
                      DeviceDriver = PiDevCfgQueryDriverConfiguration(v33);
                      if ( DeviceDriver < 0 )
                        break;
                      v33 = (_QWORD *)*v33;
                    }
                    while ( v33 != v35 + 26 );
LABEL_90:
                    if ( DeviceDriver == -1073740653 )
                    {
                      DeviceDriver = 0;
                      v4 = v4 & 0xFFFBFFDF | 0x40000;
                    }
                    else if ( DeviceDriver < 0 )
                    {
                      goto LABEL_94;
                    }
                  }
                }
LABEL_93:
                *a2 = v4;
                goto LABEL_94;
              }
              if ( (_QWORD *)*v19 == v19 )
              {
                if ( !PnpBootMode )
                  goto LABEL_93;
                v4 |= 0x40000u;
                goto LABEL_83;
              }
LABEL_82:
              v4 |= 0x20u;
              goto LABEL_83;
            }
            v16 = DestinationString.Buffer;
          }
          if ( !PnpBootMode )
            goto LABEL_82;
          if ( (PiDevCfgFlags & 2) == 0 )
            goto LABEL_82;
          v4 |= 0x40000u;
          if ( v15 )
          {
            DriverPackageId = PiDevCfgGetDriverPackageId(v16, &v47);
            v15 = v35;
            if ( DriverPackageId < 0 )
              goto LABEL_82;
          }
          goto LABEL_83;
        }
      }
      if ( !v15 )
        goto LABEL_83;
      goto LABEL_82;
    }
  }
LABEL_94:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v44);
  RtlFreeAnsiString(&v47);
  RtlFreeAnsiString(&v45);
  if ( v35 )
    PiDevCfgFreeDriverNode();
  return (unsigned int)DeviceDriver;
}

/*
 * XREFs of PiDevCfgCheckDeviceNeedsUpdate @ 0x14071C9FC
 * Callers:
 *     PiDevCfgInitDeviceCallback @ 0x14071E240 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14071E9F0 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x140720500 (PpDevCfgCheckDeviceNeedsUpdate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     swscanf_s @ 0x140501F60 (swscanf_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1407202A8 (PiDevCfgSplitDriverConfigurationId.c)
 *     PiDevCfgFindDeviceDriver @ 0x1408914DC (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgFreeDriverNode @ 0x140891C44 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x140892A04 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x140892AE0 (PiDevCfgQueryObjectProperties.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAD38 (_PnpOpenObjectRegKey.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     _CmIsRootEnumeratedDevice @ 0x140954D08 (_CmIsRootEnumeratedDevice.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140A7AA64 (PiDevCfgQueryDriverConfiguration.c)
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
  wchar_t *Buffer; // rsi
  __int64 v13; // rax
  _QWORD *v14; // rcx
  wchar_t *v15; // r8
  BOOLEAN v16; // al
  wchar_t *v17; // r14
  _QWORD *v18; // rax
  int v19; // eax
  __int64 *v20; // r15
  _QWORD *v21; // rsi
  BOOLEAN v22; // al
  __int64 v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  int DriverPackageId; // eax
  _QWORD *v32; // rsi
  _QWORD *v34; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+50h] [rbp-B0h] BYREF
  int v37; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v38; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  int v40; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER Time; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v43; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v44; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v46; // [rsp+C0h] [rbp-40h] BYREF
  const DEVPROPKEY *v47; // [rsp+E0h] [rbp-20h] BYREF
  int v48; // [rsp+E8h] [rbp-18h]
  UNICODE_STRING *p_DestinationString; // [rsp+F0h] [rbp-10h]
  int v50; // [rsp+FCh] [rbp-4h]
  int v51; // [rsp+100h] [rbp+0h]
  const DEVPROPKEY *v52; // [rsp+108h] [rbp+8h]
  int v53; // [rsp+110h] [rbp+10h]
  LARGE_INTEGER *p_Time; // [rsp+118h] [rbp+18h]
  int v55; // [rsp+120h] [rbp+20h]
  int v56; // [rsp+128h] [rbp+28h]
  const DEVPROPKEY *v57; // [rsp+130h] [rbp+30h]
  int v58; // [rsp+138h] [rbp+38h]
  UNICODE_STRING *p_UnicodeString; // [rsp+140h] [rbp+40h]
  int v60; // [rsp+14Ch] [rbp+4Ch]
  int v61; // [rsp+150h] [rbp+50h]
  const DEVPROPKEY *v62; // [rsp+158h] [rbp+58h]
  int v63; // [rsp+160h] [rbp+60h]
  UNICODE_STRING *v64; // [rsp+168h] [rbp+68h]
  int v65; // [rsp+174h] [rbp+74h]
  int v66; // [rsp+178h] [rbp+78h]

  v40 = 1;
  *a2 = 0;
  v37 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  Time.QuadPart = 0LL;
  v4 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v35 = 0LL;
  *(_QWORD *)&v43.Length = 0LL;
  v43.Buffer = 0LL;
  v38 = 0LL;
  *(_QWORD *)&v44.Length = 0LL;
  v44.Buffer = 0LL;
  Handle = 0LL;
  v34 = 0LL;
  v36 = 0;
  *(_QWORD *)&v46.Length = 0LL;
  v46.Buffer = 0LL;
  DeviceDriver = PiDevCfgFindDeviceDriver(a1, 0LL, &v34);
  if ( (int)(DeviceDriver + 0x80000000) < 0 || DeviceDriver == -1073740656 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(a1 + 8);
    v36 = 4;
    if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v7, v6, 11, (__int64)&v40, (__int64)&v37, (__int64)&v36, 0) < 0
      || v40 != 4
      || v36 != 4 )
    {
      v37 = 0;
    }
    memset_0(&v47, 0, 0xA0uLL);
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(_QWORD *)(a1 + 8);
    v47 = &DEVPKEY_Device_DriverInfPath;
    p_DestinationString = &DestinationString;
    v52 = &DEVPKEY_Device_DriverDate;
    p_Time = &Time;
    v57 = &DEVPKEY_Device_DriverVersion;
    v48 = 18;
    p_UnicodeString = &UnicodeString;
    v62 = &DEVPKEY_Device_ExtendedConfigurationIds;
    v64 = &v43;
    v50 = 6;
    v53 = 16;
    v55 = 8;
    v58 = 18;
    v60 = 6;
    v63 = 8210;
    v65 = 6;
    DeviceDriver = PiDevCfgQueryObjectProperties(18, v9, 1, v8, (__int64)&v47, 4);
    if ( DeviceDriver >= 0 )
    {
      if ( v51 < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( v56 < 0 )
        Time.QuadPart = 0LL;
      if ( v61 < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( v66 < 0 )
        RtlInitUnicodeString(&v43, 0LL);
      if ( !UnicodeString.Buffer
        || swscanf_s(
             UnicodeString.Buffer,
             L"%hu.%hu.%hu.%hu",
             (char *)&v35 + 6,
             (char *)&v35 + 4,
             (char *)&v35 + 2,
             &v35) != 4 )
      {
        v35 = 0LL;
      }
      if ( !(unsigned __int8)CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 8)) )
        goto LABEL_32;
      memset_0(&v47, 0, 0xA0uLL);
      v10 = *(_QWORD *)(a1 + 16);
      v11 = *(_QWORD *)(a1 + 8);
      v47 = (const DEVPROPKEY *)DEVPKEY_Device_Owners;
      p_DestinationString = &v44;
      v48 = 8210;
      v50 = 6;
      DeviceDriver = PiDevCfgQueryObjectProperties(1, v11, 1, v10, (__int64)&v47, 1);
      if ( DeviceDriver < 0 )
        goto LABEL_90;
      if ( v51 >= 0 && (Buffer = v44.Buffer) != 0LL && v44.Length > 2u )
      {
        while ( *Buffer )
        {
          DeviceDriver = PnpOpenObjectRegKey(PiPnpRtlCtx, (_DWORD)Buffer, 9, 131097, 0, (__int64)&Handle);
          if ( DeviceDriver >= 0 )
          {
            ZwClose(Handle);
            if ( *Buffer )
              goto LABEL_32;
            break;
          }
          DeviceDriver = 0;
          v13 = -1LL;
          do
            ++v13;
          while ( Buffer[v13] );
          Buffer += v13 + 1;
        }
        v14 = v34;
        if ( !v34 )
          v4 = PnpBootMode != 0 ? 0x40000 : 2;
      }
      else
      {
LABEL_32:
        v14 = v34;
      }
      if ( (v37 & 0x40) != 0 || (v15 = DestinationString.Buffer) == 0LL )
      {
        if ( v14 )
          goto LABEL_78;
        goto LABEL_79;
      }
      if ( v14 )
      {
        v16 = RtlEqualUnicodeString((PCUNICODE_STRING)(v14 + 5), &DestinationString, 1u);
        v14 = v34;
        if ( v16 )
        {
          if ( v34[14] != Time.QuadPart || v34[15] != v35 )
            goto LABEL_78;
          v17 = v43.Buffer;
          v18 = v34 + 26;
          if ( v43.Buffer )
          {
            if ( (_QWORD *)*v18 == v18 )
              goto LABEL_78;
            *((_QWORD *)&v38 + 1) = &v38;
            *(_QWORD *)&v38 = &v38;
            while ( *v17 )
            {
              if ( (_QWORD *)v14[26] == v14 + 26 )
                goto LABEL_95;
              RtlFreeAnsiString(&DestinationString);
              v19 = PiDevCfgSplitDriverConfigurationId(v17, &Time, (__int64)&v35);
              v14 = v34;
              if ( v19 < 0 )
                goto LABEL_95;
              v20 = (__int64 *)v34[26];
              if ( v20 == v34 + 26 )
                goto LABEL_95;
              do
              {
                v21 = v20;
                v22 = RtlEqualUnicodeString((PCUNICODE_STRING)(v20 + 5), &DestinationString, 1u);
                v14 = v34;
                if ( v22 )
                  break;
                v20 = (__int64 *)*v20;
                v21 = 0LL;
              }
              while ( v20 != v34 + 26 );
              if ( !v21 || v21[14] != Time.QuadPart || v21[15] != v35 )
              {
LABEL_95:
                if ( *v17 )
                  goto LABEL_64;
                break;
              }
              v23 = *v21;
              if ( *(_QWORD **)(*v21 + 8LL) != v21
                || (v24 = (_QWORD *)v21[1], (_QWORD *)*v24 != v21)
                || (*v24 = v23,
                    *(_QWORD *)(v23 + 8) = v24,
                    v25 = (_QWORD *)*((_QWORD *)&v38 + 1),
                    **((__int128 ***)&v38 + 1) != &v38) )
              {
LABEL_70:
                __fastfail(3u);
              }
              v21[1] = *((_QWORD *)&v38 + 1);
              *v21 = &v38;
              *v25 = v21;
              v26 = -1LL;
              *((_QWORD *)&v38 + 1) = v21;
              do
                ++v26;
              while ( v17[v26] );
              v14 = v34;
              v17 += v26 + 1;
            }
            if ( (_QWORD *)v14[26] == v14 + 26 )
              goto LABEL_65;
LABEL_64:
            v4 |= 0x20u;
LABEL_65:
            while ( 1 )
            {
              v27 = (_QWORD *)v38;
              if ( (__int128 *)v38 == &v38 )
                break;
              if ( *(__int128 **)(v38 + 8) != &v38 )
                goto LABEL_70;
              v28 = *(_QWORD *)v38;
              if ( *(_QWORD *)(*(_QWORD *)v38 + 8LL) != (_QWORD)v38 )
                goto LABEL_70;
              *(_QWORD *)&v38 = *(_QWORD *)v38;
              *(_QWORD *)(v28 + 8) = &v38;
              v29 = v34 + 26;
              v30 = (_QWORD *)v34[27];
              if ( (_QWORD *)*v30 != v34 + 26 )
                goto LABEL_70;
              *v27 = v29;
              v27[1] = v30;
              *v30 = v27;
              v29[1] = v27;
              v14 = v34;
            }
          }
          else
          {
            if ( (_QWORD *)*v18 != v18 )
            {
LABEL_78:
              v4 |= 0x20u;
              goto LABEL_79;
            }
            if ( !PnpBootMode )
              goto LABEL_89;
            v4 |= 0x40000u;
          }
LABEL_79:
          if ( PnpBootMode && v14 && (v4 & 0x20) != 0 )
          {
            DeviceDriver = ((__int64 (*)(void))PiDevCfgQueryDriverConfiguration)();
            if ( DeviceDriver < 0 )
              goto LABEL_86;
            v32 = (_QWORD *)v34[26];
            if ( v32 != v34 + 26 )
            {
              do
              {
                DeviceDriver = PiDevCfgQueryDriverConfiguration(v32);
                if ( DeviceDriver < 0 )
                  break;
                v32 = (_QWORD *)*v32;
              }
              while ( v32 != v34 + 26 );
LABEL_86:
              if ( DeviceDriver == -1073740653 )
              {
                DeviceDriver = 0;
                v4 = v4 & 0xFFFBFFDF | 0x40000;
              }
              else if ( DeviceDriver < 0 )
              {
                goto LABEL_90;
              }
            }
          }
LABEL_89:
          *a2 = v4;
          goto LABEL_90;
        }
        v15 = DestinationString.Buffer;
      }
      if ( !PnpBootMode )
        goto LABEL_78;
      if ( (PiDevCfgFlags & 2) == 0 )
        goto LABEL_78;
      v4 |= 0x40000u;
      if ( v14 )
      {
        DriverPackageId = PiDevCfgGetDriverPackageId(v15, &v46);
        v14 = v34;
        if ( DriverPackageId < 0 )
          goto LABEL_78;
      }
      goto LABEL_79;
    }
  }
LABEL_90:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v43);
  RtlFreeAnsiString(&v46);
  RtlFreeAnsiString(&v44);
  if ( v34 )
    PiDevCfgFreeDriverNode();
  return (unsigned int)DeviceDriver;
}

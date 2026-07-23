/*
 * XREFs of PiDevCfgLogDeviceStarted @ 0x140AA1894
 * Callers:
 *     PpDevCfgTraceDeviceStart @ 0x1408B8880 (PpDevCfgTraceDeviceStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     McTemplateK0zzjzzzdd_EtwWriteTransfer @ 0x1404A4E24 (McTemplateK0zzjzzzdd_EtwWriteTransfer.c)
 *     PnpGetLogString @ 0x1404B2344 (PnpGetLogString.c)
 *     PipIsDevNodeDNStarted @ 0x1404DD25C (PipIsDevNodeDNStarted.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409CA030 (PiDevCfgQueryObjectProperties.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

void __fastcall PiDevCfgLogDeviceStarted(__int64 a1)
{
  WCHAR *v2; // rdx
  char v3; // r9
  unsigned __int16 Length; // cx
  unsigned int v5; // r8d
  __int64 v6; // rdx
  unsigned __int16 v7; // cx
  unsigned int v8; // r8d
  __int64 v9; // rdx
  int v10; // r8d
  int *v11; // rax
  const wchar_t *v12; // rdx
  const wchar_t *v13; // r8
  const wchar_t *v14; // r9
  char v15; // r10
  int *LogString; // rax
  const wchar_t *v17; // rdx
  __int64 v18; // rcx
  const wchar_t *v19; // r8
  const wchar_t *v20; // r9
  char v21; // r10
  int *v22; // rax
  const wchar_t *v23; // rdx
  const wchar_t *v24; // r8
  const wchar_t *v25; // r9
  char v26; // r10
  UNICODE_STRING v27; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v28; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v30; // [rsp+90h] [rbp-70h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-60h] BYREF
  const DEVPROPKEY *v32; // [rsp+B0h] [rbp-50h] BYREF
  int v33; // [rsp+B8h] [rbp-48h]
  __int128 *v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+D0h] [rbp-30h]
  const DEVPROPKEY *v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING *p_DestinationString; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+F4h] [rbp-Ch]
  int v41; // [rsp+F8h] [rbp-8h]
  const DEVPROPKEY *v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+108h] [rbp+8h]
  UNICODE_STRING *v44; // [rsp+110h] [rbp+10h]
  int v45; // [rsp+11Ch] [rbp+1Ch]
  int v46; // [rsp+120h] [rbp+20h]
  const DEVPROPKEY *v47; // [rsp+128h] [rbp+28h]
  int v48; // [rsp+130h] [rbp+30h]
  UNICODE_STRING *v49; // [rsp+138h] [rbp+38h]
  int v50; // [rsp+144h] [rbp+44h]
  int v51; // [rsp+148h] [rbp+48h]
  const DEVPROPKEY *v52; // [rsp+150h] [rbp+50h]
  int v53; // [rsp+158h] [rbp+58h]
  UNICODE_STRING *v54; // [rsp+160h] [rbp+60h]
  int v55; // [rsp+16Ch] [rbp+6Ch]
  int v56; // [rsp+170h] [rbp+70h]

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v30.Length = 0LL;
  v30.Buffer = 0LL;
  *(_QWORD *)&v27.Length = 0LL;
  v27.Buffer = 0LL;
  *(_QWORD *)&v28.Length = 0LL;
  v28.Buffer = 0LL;
  v31 = 0LL;
  if ( (byte_140EEFF62 & 0x30) == 0x30 )
  {
    memset_0(&v32, 0, 0xC8uLL);
    v40 = 6;
    v38 = 18;
    v32 = &DEVPKEY_Device_ClassGuid;
    v43 = 18;
    v34 = &v31;
    v45 = 6;
    v37 = &DEVPKEY_Device_DriverInfPath;
    v50 = 6;
    p_DestinationString = &DestinationString;
    v42 = &DEVPKEY_Device_Service;
    v44 = &v30;
    v47 = &DEVPKEY_Device_LowerFilters;
    v49 = &v27;
    v52 = &DEVPKEY_Device_UpperFilters;
    v54 = &v28;
    v55 = 6;
    v2 = *(WCHAR **)(a1 + 48);
    v33 = 13;
    v35 = 16;
    v48 = 8210;
    v53 = 8210;
    if ( (int)PiDevCfgQueryObjectProperties(8210LL, v2, 1u, 0LL, (__int64)&v32, 5u) >= 0 )
    {
      if ( v36 < 0 )
        v31 = 0LL;
      if ( v41 < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( v46 < 0 )
        RtlInitUnicodeString(&v30, 0LL);
      if ( v51 < 0 )
        RtlInitUnicodeString(&v27, 0LL);
      if ( v56 < 0 )
        RtlInitUnicodeString(&v28, 0LL);
      v3 = 32;
      if ( v27.Buffer )
      {
        Length = v27.Length;
        if ( v27.Length > 4u )
        {
          v5 = 0;
          if ( (unsigned __int64)v27.Length >> 1 != 2 )
          {
            v6 = 0LL;
            do
            {
              if ( !v27.Buffer[v6] )
              {
                v27.Buffer[v6] = 32;
                Length = v27.Length;
              }
              v6 = ++v5;
            }
            while ( v5 < ((unsigned __int64)Length >> 1) - 2 );
          }
          v27.Length = Length - 2;
        }
      }
      if ( v28.Buffer )
      {
        v7 = v28.Length;
        if ( v28.Length > 4u )
        {
          v8 = 0;
          if ( (unsigned __int64)v28.Length >> 1 != 2 )
          {
            v9 = 0LL;
            do
            {
              if ( !v28.Buffer[v9] )
              {
                v28.Buffer[v9] = 32;
                v7 = v28.Length;
              }
              v9 = ++v8;
            }
            while ( v8 < ((unsigned __int64)v7 >> 1) - 2 );
          }
          v28.Length = v7 - 2;
        }
      }
      v10 = 24576;
      if ( (*(_DWORD *)(a1 + 396) & 0x6000) == 0 )
        PipIsDevNodeDNStarted(a1);
      if ( (v10 & *(_DWORD *)(a1 + 396)) != 0 || !(unsigned int)PipIsDevNodeDNStarted(a1) )
      {
        if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 )
        {
          if ( (byte_140EEFF62 & 0x40) != 0 )
          {
            PnpGetLogString((__int64)&v28);
            PnpGetLogString((__int64)&v27);
            LogString = PnpGetLogString((__int64)&v30);
            McTemplateK0zzjzzzdd_EtwWriteTransfer(
              v18,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceStart_RebootRequired,
              (__int64)v19,
              *(const wchar_t **)(a1 + 48),
              v20,
              (__int64)&v31,
              (const wchar_t *)LogString,
              v17,
              v19,
              14,
              v21);
          }
        }
        else if ( ((unsigned __int8)v3 & (unsigned __int8)byte_140EEFF62) != 0 )
        {
          PnpGetLogString((__int64)&v28);
          PnpGetLogString((__int64)&v27);
          v22 = PnpGetLogString((__int64)&v30);
          McTemplateK0zzjzzzdd_EtwWriteTransfer(
            *(unsigned int *)(a1 + 404),
            (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceStart_Failure,
            (__int64)v24,
            *(const wchar_t **)(a1 + 48),
            v25,
            (__int64)&v31,
            (const wchar_t *)v22,
            v23,
            v24,
            *(_DWORD *)(a1 + 404),
            v26);
        }
      }
      else if ( (byte_140EEFF62 & 0x10) != 0 )
      {
        PnpGetLogString((__int64)&v28);
        PnpGetLogString((__int64)&v27);
        v11 = PnpGetLogString((__int64)&v30);
        McTemplateK0zzjzzzdd_EtwWriteTransfer(
          *(unsigned int *)(a1 + 404),
          (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceStart_Success,
          (__int64)v13,
          *(const wchar_t **)(a1 + 48),
          v14,
          (__int64)&v31,
          (const wchar_t *)v11,
          v12,
          v13,
          *(_DWORD *)(a1 + 404),
          v15);
      }
    }
    if ( DestinationString.Buffer )
    {
      ExFreePool(DestinationString.Buffer);
      DestinationString = 0LL;
    }
    if ( v30.Buffer )
    {
      ExFreePool(v30.Buffer);
      v30 = 0LL;
    }
    if ( v27.Buffer )
    {
      ExFreePool(v27.Buffer);
      v27 = 0LL;
    }
    if ( v28.Buffer )
      ExFreePool(v28.Buffer);
  }
}

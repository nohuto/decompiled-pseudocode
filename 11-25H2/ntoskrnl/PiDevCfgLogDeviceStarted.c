/*
 * XREFs of PiDevCfgLogDeviceStarted @ 0x140AA03F8
 * Callers:
 *     PpDevCfgTraceDeviceStart @ 0x140835E98 (PpDevCfgTraceDeviceStart.c)
 * Callees:
 *     McTemplateK0zzjzzzdd_EtwWriteTransfer @ 0x140423684 (McTemplateK0zzjzzzdd_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PnpGetLogString @ 0x1404B8194 (PnpGetLogString.c)
 *     PipIsDevNodeDNStarted @ 0x1404E6CD4 (PipIsDevNodeDNStarted.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PiDevCfgQueryObjectProperties @ 0x140892AE0 (PiDevCfgQueryObjectProperties.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

void __fastcall PiDevCfgLogDeviceStarted(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int16 Length; // cx
  unsigned int v4; // r8d
  __int64 v5; // rdx
  unsigned __int16 v6; // cx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  int v9; // edi
  int *v10; // rax
  const wchar_t *v11; // rdx
  const wchar_t *v12; // r8
  const wchar_t *v13; // r9
  int *LogString; // rax
  const wchar_t *v15; // rdx
  __int64 v16; // rcx
  const wchar_t *v17; // r8
  const wchar_t *v18; // r9
  int *v19; // rax
  const wchar_t *v20; // rdx
  const wchar_t *v21; // r8
  const wchar_t *v22; // r9
  UNICODE_STRING v23; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v24; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v26; // [rsp+90h] [rbp-70h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-60h] BYREF
  const DEVPROPKEY *v28; // [rsp+B0h] [rbp-50h] BYREF
  int v29; // [rsp+B8h] [rbp-48h]
  __int128 *v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+D0h] [rbp-30h]
  const DEVPROPKEY *v33; // [rsp+D8h] [rbp-28h]
  int v34; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING *p_DestinationString; // [rsp+E8h] [rbp-18h]
  int v36; // [rsp+F4h] [rbp-Ch]
  int v37; // [rsp+F8h] [rbp-8h]
  const DEVPROPKEY *v38; // [rsp+100h] [rbp+0h]
  int v39; // [rsp+108h] [rbp+8h]
  UNICODE_STRING *v40; // [rsp+110h] [rbp+10h]
  int v41; // [rsp+11Ch] [rbp+1Ch]
  int v42; // [rsp+120h] [rbp+20h]
  const DEVPROPKEY *v43; // [rsp+128h] [rbp+28h]
  int v44; // [rsp+130h] [rbp+30h]
  UNICODE_STRING *v45; // [rsp+138h] [rbp+38h]
  int v46; // [rsp+144h] [rbp+44h]
  int v47; // [rsp+148h] [rbp+48h]
  const DEVPROPKEY *v48; // [rsp+150h] [rbp+50h]
  int v49; // [rsp+158h] [rbp+58h]
  UNICODE_STRING *v50; // [rsp+160h] [rbp+60h]
  int v51; // [rsp+16Ch] [rbp+6Ch]
  int v52; // [rsp+170h] [rbp+70h]

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v26.Length = 0LL;
  v26.Buffer = 0LL;
  *(_QWORD *)&v23.Length = 0LL;
  v23.Buffer = 0LL;
  *(_QWORD *)&v24.Length = 0LL;
  v24.Buffer = 0LL;
  v27 = 0LL;
  if ( (byte_140EEFA6A & 0x30) == 0x30 )
  {
    memset_0(&v28, 0, 0xC8uLL);
    v36 = 6;
    v34 = 18;
    v28 = &DEVPKEY_Device_ClassGuid;
    v39 = 18;
    v30 = &v27;
    v41 = 6;
    v33 = &DEVPKEY_Device_DriverInfPath;
    v46 = 6;
    p_DestinationString = &DestinationString;
    v38 = &DEVPKEY_Device_Service;
    v40 = &v26;
    v43 = &DEVPKEY_Device_LowerFilters;
    v45 = &v23;
    v48 = &DEVPKEY_Device_UpperFilters;
    v50 = &v24;
    v51 = 6;
    v2 = *(_QWORD *)(a1 + 48);
    v29 = 13;
    v31 = 16;
    v44 = 8210;
    v49 = 8210;
    if ( (int)PiDevCfgQueryObjectProperties(8210LL, v2, 1, 0LL, (__int64)&v28, 5u) >= 0 )
    {
      if ( v32 < 0 )
        v27 = 0LL;
      if ( v37 < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( v42 < 0 )
        RtlInitUnicodeString(&v26, 0LL);
      if ( v47 < 0 )
        RtlInitUnicodeString(&v23, 0LL);
      if ( v52 < 0 )
        RtlInitUnicodeString(&v24, 0LL);
      if ( v23.Buffer )
      {
        Length = v23.Length;
        if ( v23.Length > 4u )
        {
          v4 = 0;
          if ( (unsigned __int64)v23.Length >> 1 != 2 )
          {
            v5 = 0LL;
            do
            {
              if ( !v23.Buffer[v5] )
              {
                v23.Buffer[v5] = 32;
                Length = v23.Length;
              }
              v5 = ++v4;
            }
            while ( v4 < ((unsigned __int64)Length >> 1) - 2 );
          }
          v23.Length = Length - 2;
        }
      }
      if ( v24.Buffer )
      {
        v6 = v24.Length;
        if ( v24.Length > 4u )
        {
          v7 = 0;
          if ( (unsigned __int64)v24.Length >> 1 != 2 )
          {
            v8 = 0LL;
            do
            {
              if ( !v24.Buffer[v8] )
              {
                v24.Buffer[v8] = 32;
                v6 = v24.Length;
              }
              v8 = ++v7;
            }
            while ( v7 < ((unsigned __int64)v6 >> 1) - 2 );
          }
          v24.Length = v6 - 2;
        }
      }
      if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
      {
        v9 = *(_DWORD *)(a1 + 408);
      }
      else
      {
        LOBYTE(v9) = 0;
        if ( !(unsigned int)PipIsDevNodeDNStarted(a1) )
          LOBYTE(v9) = -27;
      }
      if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 || !(unsigned int)PipIsDevNodeDNStarted(a1) )
      {
        if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 )
        {
          if ( (byte_140EEFA6A & 0x40) != 0 )
          {
            PnpGetLogString((__int64)&v24);
            PnpGetLogString((__int64)&v23);
            LogString = PnpGetLogString((__int64)&v26);
            McTemplateK0zzjzzzdd_EtwWriteTransfer(
              v16,
              (__int64)KMPnPEvt_DeviceStart_RebootRequired,
              (__int64)v17,
              *(const wchar_t **)(a1 + 48),
              v18,
              (__int64)&v27,
              (const wchar_t *)LogString,
              v15,
              v17,
              14,
              v9);
          }
        }
        else if ( (byte_140EEFA6A & 0x20) != 0 )
        {
          PnpGetLogString((__int64)&v24);
          PnpGetLogString((__int64)&v23);
          v19 = PnpGetLogString((__int64)&v26);
          McTemplateK0zzjzzzdd_EtwWriteTransfer(
            *(unsigned int *)(a1 + 404),
            (__int64)KMPnPEvt_DeviceStart_Failure,
            (__int64)v21,
            *(const wchar_t **)(a1 + 48),
            v22,
            (__int64)&v27,
            (const wchar_t *)v19,
            v20,
            v21,
            *(_DWORD *)(a1 + 404),
            v9);
        }
      }
      else if ( (byte_140EEFA6A & 0x10) != 0 )
      {
        PnpGetLogString((__int64)&v24);
        PnpGetLogString((__int64)&v23);
        v10 = PnpGetLogString((__int64)&v26);
        McTemplateK0zzjzzzdd_EtwWriteTransfer(
          *(unsigned int *)(a1 + 404),
          (__int64)KMPnPEvt_DeviceStart_Success,
          (__int64)v12,
          *(const wchar_t **)(a1 + 48),
          v13,
          (__int64)&v27,
          (const wchar_t *)v10,
          v11,
          v12,
          *(_DWORD *)(a1 + 404),
          v9);
      }
    }
    if ( DestinationString.Buffer )
    {
      ExFreePool(DestinationString.Buffer);
      DestinationString = 0LL;
    }
    if ( v26.Buffer )
    {
      ExFreePool(v26.Buffer);
      v26 = 0LL;
    }
    if ( v23.Buffer )
    {
      ExFreePool(v23.Buffer);
      v23 = 0LL;
    }
    if ( v24.Buffer )
      ExFreePool(v24.Buffer);
  }
}

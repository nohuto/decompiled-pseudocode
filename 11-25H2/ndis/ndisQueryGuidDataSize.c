/*
 * XREFs of ndisQueryGuidDataSize @ 0x14002A950
 * Callers:
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x14002B200 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x14002C670 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qZ @ 0x1400291D0 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_qLLDDDDDDDDDD @ 0x140029320 (WPP_RECORDER_SF_qLLDDDDDDDDDD.c)
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x14002D480 (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     WPP_RECORDER_SF_qLDDDDDDDDDD @ 0x1400B88C0 (WPP_RECORDER_SF_qLDDDDDDDDDD.c)
 *     WPP_RECORDER_SF_qLDDDDDDDDDDD @ 0x1400B8AE4 (WPP_RECORDER_SF_qLDDDDDDDDDDD.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 __fastcall ndisQueryGuidDataSize(
        int *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_GUID *a3,
        struct _NDIS_CO_VC_PTR_BLOCK *a4,
        GUID *Guid,
        struct _NDIS_MINIPORT_BLOCK *a6)
{
  struct _NDIS_GUID *v6; // r14
  struct _NDIS_MINIPORT_BLOCK *v7; // rbx
  bool v10; // r13
  unsigned int v11; // r15d
  unsigned int Flags; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  int Size; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int SetMiniport; // eax
  unsigned int v28; // r13d
  int v29; // eax
  bool v30; // zf
  unsigned int v31; // ecx
  int v32; // [rsp+20h] [rbp-F0h]
  bool v33; // [rsp+90h] [rbp-80h]
  char v34; // [rsp+98h] [rbp-78h]
  _UNICODE_STRING GuidString; // [rsp+A0h] [rbp-70h] BYREF
  struct _NDIS_GUID *v36; // [rsp+B0h] [rbp-60h] BYREF
  struct _NDIS_CO_VC_PTR_BLOCK *v37; // [rsp+B8h] [rbp-58h]
  _BYTE v38[248]; // [rsp+C0h] [rbp-50h] BYREF

  v6 = a3;
  v7 = a6;
  v34 = (char)a2;
  v36 = a3;
  v37 = a4;
  memset(v38, 0, sizeof(v38));
  v10 = 0;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v33 = 0;
  if ( (unsigned __int8)byte_140126C59 >= 4u )
  {
    v10 = RtlStringFromGUID(Guid, &GuidString) >= 0;
    v33 = v10;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      0x12u,
      0x1Au,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a2,
      &GuidString.Length);
  if ( v6 )
  {
    v11 = 0;
  }
  else
  {
    v19 = ndisWmiGetGuid(&v36, a2, Guid, 0);
    v6 = v36;
    v11 = v19;
    if ( !v36 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLDDDDDDDDDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          Guid->Data4[5],
          Guid->Data4[4],
          Guid->Data4[3],
          v32,
          v34,
          Guid->Data1,
          Guid->Data2,
          Guid->Data3,
          Guid->Data4[0],
          Guid->Data4[1],
          Guid->Data4[2],
          Guid->Data4[3],
          Guid->Data4[4],
          Guid->Data4[5],
          Guid->Data4[6],
          Guid->Data4[7]);
      goto LABEL_34;
    }
  }
  Flags = v6->Flags;
  if ( (Flags & 0x20000000) != 0 )
  {
    v11 = 0;
    v13 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1;
    if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1 )
      v13 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTER.Data4;
    if ( v13 )
    {
      v14 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
      if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
        v14 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
      if ( !v14 )
      {
        *a1 = 1;
        goto LABEL_24;
      }
      v15 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
      if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
        v15 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
      if ( !v15 )
      {
        *a1 = 1;
        goto LABEL_24;
      }
      v16 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
      if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
        v16 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
      if ( !v16 )
      {
        *a1 = 1;
        goto LABEL_24;
      }
      v17 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1;
      if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1 )
        v17 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_NDIS_RSS_ENABLED.Data4;
      if ( !v17 )
      {
        *a1 = 1;
        goto LABEL_24;
      }
      v20 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
      if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
        v20 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
      if ( !v20 )
      {
        *a1 = 1;
        goto LABEL_24;
      }
      v21 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1;
      if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1 )
        v21 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_NDIS_NDK_CAPABILITIES.Data4;
      if ( !v21 )
      {
        *a1 = 144;
        goto LABEL_24;
      }
      v23 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
      if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
        v23 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
      if ( !v23 )
      {
        *a1 = 28;
        goto LABEL_24;
      }
      v24 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1;
      if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1 )
        v24 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data4;
      if ( !v24 )
      {
        *a1 = 28;
        goto LABEL_24;
      }
      if ( v37 )
      {
        v25 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1;
        if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1 )
          v25 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_VC.Data4;
        if ( !v25 )
        {
          *a1 = 0;
          goto LABEL_24;
        }
      }
      v26 = *(_QWORD *)&v6->Guid.Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1;
      if ( *(_QWORD *)&v6->Guid.Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1 )
        v26 = *(_QWORD *)v6->Guid.Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data4;
      if ( !v26 )
      {
        *a1 = a2->MiniportName.Length + 18;
        goto LABEL_24;
      }
LABEL_34:
      v11 = -1073741811;
      goto LABEL_24;
    }
    Size = a2->MiniportName.Length + 2;
    goto LABEL_97;
  }
  if ( (Flags & 0x80u) != 0 )
  {
    *a1 = 0;
    goto LABEL_24;
  }
  if ( (Flags & 1) == 0 )
  {
    v11 = -1073741808;
    goto LABEL_24;
  }
  if ( (Flags & 0x1C) == 0 )
  {
    Size = v6->Size;
    if ( Size != -1 )
    {
LABEL_96:
      v11 = 0;
LABEL_97:
      *a1 = Size;
      goto LABEL_24;
    }
  }
  memset(&v38[112], 0, 136);
  *(_QWORD *)&v38[104] = &ndisIntReqWmi;
  memset(v38, 0, 104);
  *(_DWORD *)&v38[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
  EtwActivityIdControl(3u, (LPGUID)&v38[168]);
  *(_DWORD *)v38 = 15466902;
  *(_DWORD *)&v38[32] = v6->Oid;
  *(_QWORD *)&v38[4] = 2LL;
  *(_QWORD *)&v38[40] = 0LL;
  *(_DWORD *)&v38[48] = 0;
  if ( v37 || !a6 )
    v7 = a2;
  SetMiniport = ndisQuerySetMiniport(v7, v37, (struct _NDIS_OID_REQUEST *)v38, 0, 0LL);
  v28 = SetMiniport;
  if ( SetMiniport == -1073676268 || SetMiniport == -1073676266 || !SetMiniport )
  {
    v31 = v6->Flags;
    Size = *(_DWORD *)&v38[56];
    if ( (v31 & 4) != 0 )
    {
      Size = 2 * *(_DWORD *)&v38[56] + 4;
    }
    else if ( (v31 & 8) != 0 )
    {
      Size = *(_DWORD *)&v38[56] + 2;
    }
    else if ( (v31 & 0x10) != 0 )
    {
      Size = *(_DWORD *)&v38[56] + 4;
    }
    v10 = v33;
    goto LABEL_96;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLDDDDDDDDDDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Guid->Data4[5],
      Guid->Data4[4],
      Guid->Data4[3],
      v32,
      v34,
      Guid->Data1,
      Guid->Data2,
      Guid->Data3,
      Guid->Data4[0],
      Guid->Data4[1],
      Guid->Data4[2],
      Guid->Data4[3],
      Guid->Data4[4],
      Guid->Data4[5],
      Guid->Data4[6],
      Guid->Data4[7],
      SetMiniport);
  if ( (v6->Flags & 0x200) != 0 )
  {
    if ( (v28 & 0xC0010000) == 0xC0010000 )
      v28 = (unsigned __int16)v28 | 0xC0230000;
    goto LABEL_80;
  }
  if ( v28 == 259
    || v28 == -2147483643
    || (v29 = -1073741823, v28 == -1073741823)
    || v28 == -1073741670
    || v28 == -1073741637 )
  {
LABEL_80:
    v11 = v28;
    v10 = v33;
    goto LABEL_24;
  }
  v30 = v28 == -1073676267;
  v10 = v33;
  if ( v30 )
    v29 = -1073741811;
  v11 = v29;
LABEL_24:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLDDDDDDDDDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Guid->Data4[5],
      Guid->Data4[4],
      Guid->Data4[3],
      v32);
  if ( v10 )
    RtlFreeUnicodeString(&GuidString);
  return v11;
}
